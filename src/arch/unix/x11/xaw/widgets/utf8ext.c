/* $XFree86: xc/programs/xterm/xutf8.c,v 1.3 2002/10/09 16:38:20 tsi Exp $ */
/*
Copyright (c) 2001 by Juliusz Chroboczek

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#include <stdlib.h>

#include <X11/Xlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>
#include <X11/Xmu/Xmu.h>

#ifndef X_HAVE_UTF8_STRING

#undef XA_UTF8_STRING
#define XA_UTF8_STRING(dpy) _xa_utf8_string(dpy)

Atom _xa_utf8_string(Display * dpy)
{
    static AtomPtr p = NULL;

    if (p == NULL) {
        p = XmuMakeAtom("UTF8_STRING");
    }

    return XmuInternAtom(dpy, p);
}

static void utf8insert(char *dest, int c, int *len_return)
{
    if (c < 0) {
        return;
    }

    if (c <= 0x7F) {
        dest[0] = c;
        *len_return = 1;
    } else if (c <= 0x7FF) {
        dest[0] = 0xC0 | ((c >> 6) & 0x1F);
        dest[1] = 0x80 | (c & 0x3F);
        *len_return = 2;
    } else if (c <= 0xFFFF) {
        dest[0] = 0xE0 | ((c >> 12) & 0x0F);
        dest[1] = 0x80 | ((c >> 6) & 0x3F);
        dest[2] = 0x80 | (c & 0x3F);
        *len_return = 3;
    } else {
        dest[0] = 0xF0 | ((c >> 18) & 0x07);
        dest[1] = 0x80 | ((c >> 12) & 0x3f);
        dest[2] = 0x80 | ((c >> 6) & 0x3f);
        dest[3] = 0x80 | (c & 0x3f);
        *len_return = 4;
    }
}

static int l1countUtf8Bytes(char *s, int len)
{
    int l = 0;

    while (len > 0) {
        if ((*s & 0x80) == 0) {
            l++;
        } else {
            l += 2;
        }
        s++;
        len--;
    }
    return l;
}

static void l1utf8copy(char *d, char *s, int len)
{
    int l;

    while (len > 0) {
        utf8insert(d, (*s) & 0xFF, &l);
        d += l;
        s++;
        len--;
    }
}

static void utf8l1strcpy(char *d, char *s)
{
    while (*s) {
        if ((*s & 0x80) == 0) {
            *d++ = *s++;
        } else if ((*s & 0x7C) == 0x40) {
            if ((s[1] & 0x80) == 0) {
                s++;		/* incorrect UTF-8 */
                continue;
            } else if ((*s & 0x7C) == 0x40) {
                *d++ = ((*s & 0x03) << 6) | (s[1] & 0x3F);
                s += 2;
            } else {
                *d++ = '?';
                do {
                    s++;
                } while (((*s & 0x80) != 0) && (*s & 0xC0) != 0xC0);
            }
        } else {
            *d++ = '?';
            do {
                s++;
            } while (((*s & 0x80) != 0) && (*s & 0xC0) != 0xC0);
        }
    }
    *d = 0;
}

/* Keep this in sync with utf8l1strcpy! */
static int utf8l1strlen(char *s)
{
    int len = 0;

    while (*s) {
        if ((*s & 0x80) == 0) {
            s++;
            len++;
        } else if ((*s & 0x7C) == 0x40) {
            if ((s[1] & 0x80) == 0) {
                s++;
                continue;
            } else if ((*s & 0x7C) == 0x40) {
                len++;
                s += 2;
            } else {
                len++;
                do {
                    s++;
                } while (((*s & 0x80) != 0) && (*s & 0xC0) != 0xC0);
            }
        } else {
            len++;
            do {
                s++;
            } while (((*s & 0x80) != 0) && (*s & 0xC0) != 0xC0);
        }
    }
    return len;
}

int Xutf8TextPropertyToTextList(Display *dpy, const XTextProperty *tp, char ***list_return, int *count_return)
{
    int utf8;
    char **list;
    int nelements;
    register char *cp;
    char *start;
    int i, j;
    int datalen = (int)tp->nitems;
    int len;

    if (tp->format != 8) {
        return XConverterNotFound;
    }

    if (tp->encoding == XA_STRING) {
        utf8 = 0;
    } else if (tp->encoding == XA_UTF8_STRING(dpy)) {
        utf8 = 1;
    } else {
        return XConverterNotFound;
    }

    if (datalen == 0) {
        *list_return = NULL;
        *count_return = 0;
        return 0;
    }

    nelements = 1;
    for (cp = (char *)tp->value, i = datalen; i > 0; cp++, i--) {
        if (*cp == '\0') {
            nelements++;
        }
    }

    list = (char **)malloc(nelements * sizeof(char *));
    if (!list) {
        return XNoMemory;
    }

    if (utf8) {
        len = datalen;
    } else {
        len = l1countUtf8Bytes((char *)tp->value, datalen);
    }

    start = (char *)malloc((len + 1) * sizeof(char));
    if (!start) {
        free((char *)list);
        return XNoMemory;
    }

    if (utf8) {
        memcpy(start, (char *)tp->value, datalen);
    } else {
        l1utf8copy(start, (char *) tp->value, datalen);
    }
    start[len] = '\0';

    for (cp = start, i = len + 1, j = 0; i > 0; cp++, i--) {
        if (*cp == '\0') {
            list[j] = start;
            start = (cp + 1);
            j++;
        }
    }

    list[j] = NULL;
    *list_return = list;
    *count_return = nelements;
    return 0;
}

int Xutf8TextListToTextProperty(Display *dpy, char **list, int count, XICCEncodingStyle style, XTextProperty *text_prop)
{
    XTextProperty proto;
    unsigned int nbytes;
    int i;

    if (style != XStringStyle && style != XCompoundTextStyle && style != XStdICCTextStyle && style != XUTF8StringStyle) {
        return XConverterNotFound;
    }

    if (style == XUTF8StringStyle) {
        for (i = 0, nbytes = 0; i < count; i++) {
            nbytes += (unsigned)((list[i] ? strlen(list[i]) : 0) + 1);
        }
    } else {
        for (i = 0, nbytes = 0; i < count; i++) {
            nbytes += (unsigned)((list[i] ? utf8l1strlen(list[i]) : 0) + 1);
        }
    }

    if (style == XCompoundTextStyle) {
        proto.encoding = XA_COMPOUND_TEXT(dpy);
    } else if (style == XUTF8StringStyle) {
        proto.encoding = XA_UTF8_STRING(dpy);
    } else {
        proto.encoding = XA_STRING;
    }
    proto.format = 8;
    if (nbytes) {
        proto.nitems = nbytes - 1;
    } else {
        proto.nitems = 0;
    }
    proto.value = NULL;

    if (nbytes > 0) {
        register char *buf = malloc(nbytes);
        if (!buf) {
            return XNoMemory;
        }

        proto.value = (unsigned char *)buf;
        for (i = 0; i < count; i++) {
            char *arg = list[i];

            if (arg) {
                if (style == XUTF8StringStyle) {
                    strcpy(buf, arg);
                } else {
                    utf8l1strcpy(buf, arg);
                }
                buf += (strlen(buf) + 1);
            } else {
                *buf++ = '\0';
            }
        }
    } else {
        proto.value = (unsigned char *)malloc(1);	/* easier for client */
        if (!proto.value) {
            return XNoMemory;
        }

        proto.value[0] = '\0';
    }

    *text_prop = proto;
    return 0;
}
#endif
