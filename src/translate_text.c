/*
 * translate_text.c - Translation texts to be included in translate.c
 *
 * Written by
 *  Marco van den Heuvel <blackystardust68@yahoo.com>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

translate_t string_table[] = {

/* joystick.c */
/* en */ {IDCLS_ENABLE_JOY_OPPOSITE,    N_("Enable opposite joystick directions")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_JOY_OPPOSITE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_JOY_OPPOSITE_DE, "Gegen�berliegende Joystick Richtungen zulassen"},
/* es */ {IDCLS_ENABLE_JOY_OPPOSITE_ES, "Permitir direcciones opuestas del joystick"},
/* fr */ {IDCLS_ENABLE_JOY_OPPOSITE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_JOY_OPPOSITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_JOY_OPPOSITE_IT, "Attiva direzioni opposte joystick"},
/* ko */ {IDCLS_ENABLE_JOY_OPPOSITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_JOY_OPPOSITE_NL, "Tegenovergestelde richtingen toestaan"},
/* pl */ {IDCLS_ENABLE_JOY_OPPOSITE_PL, "Pozw�l na przeciwstawne kierunki joysticka"},
/* ru */ {IDCLS_ENABLE_JOY_OPPOSITE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_JOY_OPPOSITE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_JOY_OPPOSITE_TR, ""},  /* fuzzy */
#endif

/* joystick.c */
/* en */ {IDCLS_DISABLE_JOY_OPPOSITE,    N_("Disable opposite joystick directions")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_JOY_OPPOSITE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_JOY_OPPOSITE_DE, "Gegen�berliegende Joystick Richtungen verhindern"},
/* es */ {IDCLS_DISABLE_JOY_OPPOSITE_ES, "Inhabilitar direcciones opuestas del joystick"},
/* fr */ {IDCLS_DISABLE_JOY_OPPOSITE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_JOY_OPPOSITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_JOY_OPPOSITE_IT, "Disattiva direzioni opposte joystick"},
/* ko */ {IDCLS_DISABLE_JOY_OPPOSITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_JOY_OPPOSITE_NL, "Tegenovergestelde richtingen niet toestaan"},
/* pl */ {IDCLS_DISABLE_JOY_OPPOSITE_PL, "Nie pozw�l na przeciwstawne kierunki joysticka"},
/* ru */ {IDCLS_DISABLE_JOY_OPPOSITE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_JOY_OPPOSITE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_JOY_OPPOSITE_TR, ""},  /* fuzzy */
#endif

/* joystick.c */
/* en */ {IDCLS_ENABLE_KEYSET,    N_("Enable keyset")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_KEYSET_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_KEYSET_DE, "Tastaturbelegung aktivieren"},
/* es */ {IDCLS_ENABLE_KEYSET_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_KEYSET_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_KEYSET_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_KEYSET_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_KEYSET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_KEYSET_NL, "Keyset inschakelen"},
/* pl */ {IDCLS_ENABLE_KEYSET_PL, "W��cz zestaw klawiszy"},
/* ru */ {IDCLS_ENABLE_KEYSET_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_KEYSET_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_KEYSET_TR, ""},  /* fuzzy */
#endif

/* joystick.c */
/* en */ {IDCLS_DISABLE_KEYSET,    N_("Disable keyset")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_KEYSET_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_KEYSET_DE, "Tastaturbelegung deaktivieren"},
/* es */ {IDCLS_DISABLE_KEYSET_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_KEYSET_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_KEYSET_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_KEYSET_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_KEYSET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_KEYSET_NL, "Keyset uitschakelen"},
/* pl */ {IDCLS_DISABLE_KEYSET_PL, "Wy��cz zestaw klawiszy"},
/* ru */ {IDCLS_DISABLE_KEYSET_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_KEYSET_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_KEYSET_TR, ""},  /* fuzzy */
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_ENABLE_VFLI_MOD,    N_("Enable VFLI modification.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_VFLI_MOD_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_VFLI_MOD_DE, "VFLI Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_VFLI_MOD_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_VFLI_MOD_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_VFLI_MOD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_VFLI_MOD_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_VFLI_MOD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_VFLI_MOD_NL, "VFLI modificatie inschakelen"},
/* pl */ {IDCLS_ENABLE_VFLI_MOD_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_VFLI_MOD_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_VFLI_MOD_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_VFLI_MOD_TR, ""},  /* fuzzy */
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_DISABLE_VFLI_MOD,    N_("Disable VFLI modification.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_VFLI_MOD_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_VFLI_MOD_DE, "VFLI Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_VFLI_MOD_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_VFLI_MOD_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_VFLI_MOD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_VFLI_MOD_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_VFLI_MOD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_VFLI_MOD_NL, "VFLI modificatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_VFLI_MOD_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_VFLI_MOD_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_VFLI_MOD_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_VFLI_MOD_TR, ""},  /* fuzzy */
#endif

/* c128/c128-cmdline-options.c, c64/c64-cmdline-options.c,
   c64/psid.c, plus4/plus4-cmdline-options.c,
   vic20/vic20-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_USE_PAL_SYNC_FACTOR,    N_("Use PAL sync factor")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_PAL_SYNC_FACTOR_DA, "Anvend PAL-synkfaktor"},
/* de */ {IDCLS_USE_PAL_SYNC_FACTOR_DE, "PAL Sync Faktor benutzen"},
/* es */ {IDCLS_USE_PAL_SYNC_FACTOR_ES, "Usar factor sincronizaci�n PAL"},
/* fr */ {IDCLS_USE_PAL_SYNC_FACTOR_FR, "Utiliser PAL"},
/* hu */ {IDCLS_USE_PAL_SYNC_FACTOR_HU, "PAL szinkron faktor haszn�lata"},
/* it */ {IDCLS_USE_PAL_SYNC_FACTOR_IT, "Usa fattore di sincronizzazione PAL"},
/* ko */ {IDCLS_USE_PAL_SYNC_FACTOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_PAL_SYNC_FACTOR_NL, "Gebruik PAL synchronisatiefactor"},
/* pl */ {IDCLS_USE_PAL_SYNC_FACTOR_PL, "U�ywaj synchronizacji PAL"},
/* ru */ {IDCLS_USE_PAL_SYNC_FACTOR_RU, "Use PAL sync factor"},
/* sv */ {IDCLS_USE_PAL_SYNC_FACTOR_SV, "Anv�nd PAL-synkfaktor"},
/* tr */ {IDCLS_USE_PAL_SYNC_FACTOR_TR, "PAL senkron fakt�r� kullan"},
#endif

/* c128/c128-cmdline-options.c, c64/c64-cmdline-options.c,
   c64/psid.c, plus4/plus4-cmdline-options.c,
   vic20/vic20-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_USE_NTSC_SYNC_FACTOR,    N_("Use NTSC sync factor")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_NTSC_SYNC_FACTOR_DA, "Anvend NTSC-synkfaktor"},
/* de */ {IDCLS_USE_NTSC_SYNC_FACTOR_DE, "NTSC Sync Faktor benutzen"},
/* es */ {IDCLS_USE_NTSC_SYNC_FACTOR_ES, "Usar factor sincronizaci�n NTSC"},
/* fr */ {IDCLS_USE_NTSC_SYNC_FACTOR_FR, "Utiliser NTSC"},
/* hu */ {IDCLS_USE_NTSC_SYNC_FACTOR_HU, "NTSC szinkron faktor haszn�lata"},
/* it */ {IDCLS_USE_NTSC_SYNC_FACTOR_IT, "Usa fattore di sincronizzazione NTSC"},
/* ko */ {IDCLS_USE_NTSC_SYNC_FACTOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_NTSC_SYNC_FACTOR_NL, "Gebruik NTSC synchronisatiefactor"},
/* pl */ {IDCLS_USE_NTSC_SYNC_FACTOR_PL, "U�ywaj synchronizacji NTSC"},
/* ru */ {IDCLS_USE_NTSC_SYNC_FACTOR_RU, "Use NTSC sync factor"},
/* sv */ {IDCLS_USE_NTSC_SYNC_FACTOR_SV, "Anv�nd NTSC-synkfaktor"},
/* tr */ {IDCLS_USE_NTSC_SYNC_FACTOR_TR, "NTSC senkron fakt�r� kullan"},
#endif

/* c64/c64-cmdline-options.c, c64/psid.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_USE_PALN_SYNC_FACTOR,    N_("Use PAL-N sync factor")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_PALN_SYNC_FACTOR_DA, "Anvend PAL-N synkfaktor"},
/* de */ {IDCLS_USE_PALN_SYNC_FACTOR_DE, "PAL Sync Faktor benutzen"},
/* es */ {IDCLS_USE_PALN_SYNC_FACTOR_ES, "Usar factor sincronizaci�n PAL-N"},
/* fr */ {IDCLS_USE_PALN_SYNC_FACTOR_FR, "Utiliser le facteur de synchronisation PAL-N"},
/* hu */ {IDCLS_USE_PALN_SYNC_FACTOR_HU, ""},  /* fuzzy */
/* it */ {IDCLS_USE_PALN_SYNC_FACTOR_IT, "Usa fattore di sincronizzazione PAL-N"},
/* ko */ {IDCLS_USE_PALN_SYNC_FACTOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_PALN_SYNC_FACTOR_NL, "Gebruik PAL-N synchronisatiefactor"},
/* pl */ {IDCLS_USE_PALN_SYNC_FACTOR_PL, "U�ywaj synchronizacji PAL-N"},
/* ru */ {IDCLS_USE_PALN_SYNC_FACTOR_RU, "Use PAL-N sync factor"},
/* sv */ {IDCLS_USE_PALN_SYNC_FACTOR_SV, "Anv�nd PAL N-synkfaktor"},
/* tr */ {IDCLS_USE_PALN_SYNC_FACTOR_TR, "PAL-N senkron fakt�r� kullan"},
#endif

/* c64/c64-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SET_BURST_MOD,    N_("Burst modification (0 = None, 1 = CIA1, 2 = CIA2)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_BURST_MOD_DA, "Burst modification (0 = ingen, 1 = CIA1, 2 = CIA2)"},
/* de */ {IDCLS_SET_BURST_MOD_DE, "Burst Modifikation (0 = Kein, 1 = CIA1, 2 = CIA2)"},
/* es */ {IDCLS_SET_BURST_MOD_ES, "Modificaci�n arranque (0=No, 1=CIA1, 2=CIA2)"},
/* fr */ {IDCLS_SET_BURST_MOD_FR, "Modification Burst (0 = Aucune, 1 = CIA1, 2 = CIA2)"},
/* hu */ {IDCLS_SET_BURST_MOD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_BURST_MOD_IT, "Burst modification (0 = Nessuna, 1 = CIA1, 2 = CIA2)"},
/* ko */ {IDCLS_SET_BURST_MOD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_BURST_MOD_NL, "Burst modificatie (0 = Geen, 1 = CIA1, 2 = CIA2)"},
/* pl */ {IDCLS_SET_BURST_MOD_PL, "Modyfikacja trybu synchronicznego (0 = Brak, 1 = CIA1, 2 = CIA2)"},
/* ru */ {IDCLS_SET_BURST_MOD_RU, "Burst modification (0 = None, 1 = CIA1, 2 = CIA2)"},
/* sv */ {IDCLS_SET_BURST_MOD_SV, "Burstmodifiering (0 = ingen, 1 = CIA1, 2 = CIA2)"},
/* tr */ {IDCLS_SET_BURST_MOD_TR, "Burst de�i�ikli�i (0 = Yok, 1 = CIA1, 2 = CIA2)"},
#endif

/* c64/c64-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SET_IEC_RESET,    N_("Computer reset goes to IEC bus (0 = No, 1 = Yes)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_IEC_RESET_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_IEC_RESET_DE, "Computer Reset auf IEC Bus (0 = Nein, 1 = Ja)"},
/* es */ {IDCLS_SET_IEC_RESET_ES, "Reinicio del ordenador va a IEC bus (0 = No, 1 = S�)"},
/* fr */ {IDCLS_SET_IEC_RESET_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_IEC_RESET_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_IEC_RESET_IT, "Reset del computer va sul bus IEC (0 = No, 1 = S�)"},
/* ko */ {IDCLS_SET_IEC_RESET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_IEC_RESET_NL, "Computer reset gaat naar de IEC bus (0 = Nee, 1 = Ja)"},
/* pl */ {IDCLS_SET_IEC_RESET_PL, "Reset komputera u�ywa szyny IEC (0 = nie, 1 = tak)"},
/* ru */ {IDCLS_SET_IEC_RESET_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_IEC_RESET_SV, "Datornollst�llning g�r till IEC-bussen (0 = nej, 1 = ja)"},
/* tr */ {IDCLS_SET_IEC_RESET_TR, ""},  /* fuzzy */
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_INT_KERNEL_NAME,    N_("Specify name of international Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_INT_KERNEL_NAME_DA, "Angiv navn p� internationalt kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_INT_KERNEL_NAME_DE, "Namen f�r internationale Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_INT_KERNEL_NAME_ES, "Especificar nombre imagen ROM Kernal internacional"},
/* fr */ {IDCLS_SPECIFY_INT_KERNEL_NAME_FR, "Sp�cifier le nom de l'image Kernal internationale"},
/* hu */ {IDCLS_SPECIFY_INT_KERNEL_NAME_HU, "Adja meg a nemzetk�zi Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_INT_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal internazionale"},
/* ko */ {IDCLS_SPECIFY_INT_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_INT_KERNEL_NAME_NL, "Geef de naam van het internationaal Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_INT_KERNEL_NAME_PL, "Okre�l nazw� obrazu mi�dzynarodowego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_INT_KERNEL_NAME_RU, "Specify name of international Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_INT_KERNEL_NAME_SV, "Ange namn p� internationell kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_INT_KERNEL_NAME_TR, "Uluslararas� Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_DE_KERNEL_NAME,    N_("Specify name of German Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_DE_KERNEL_NAME_DA, "Angiv navn p� tysk kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_DE_KERNEL_NAME_DE, "Name f�r deutsche Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_DE_KERNEL_NAME_ES, "Especificar nombre imagen ROM Kernal alem�n"},
/* fr */ {IDCLS_SPECIFY_DE_KERNEL_NAME_FR, "Sp�cifier le nom de l'image Kernal allemande"},
/* hu */ {IDCLS_SPECIFY_DE_KERNEL_NAME_HU, "Adja meg a n�met Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_DE_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal tedesca"},
/* ko */ {IDCLS_SPECIFY_DE_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_DE_KERNEL_NAME_NL, "Geef de naam van het Duitse Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_DE_KERNEL_NAME_PL, "Podaj nazw� obrazu niemieckiego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_DE_KERNEL_NAME_RU, "Specify name of German Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_DE_KERNEL_NAME_SV, "Ange namn p� tysk kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_DE_KERNEL_NAME_TR, "Alman Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_FI_KERNEL_NAME,    N_("Specify name of Finnish Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_FI_KERNEL_NAME_DA, "Angiv navn p� finsk kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_FI_KERNEL_NAME_DE, "Name f�r finnische Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_FI_KERNEL_NAME_ES, "Especificar nombre imagen ROM Kernal finland�s"},
/* fr */ {IDCLS_SPECIFY_FI_KERNEL_NAME_FR, "Sp�cifier le nom de l'image Kernal finlandaise"},
/* hu */ {IDCLS_SPECIFY_FI_KERNEL_NAME_HU, "Adja meg a finn Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_FI_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal finlandese"},
/* ko */ {IDCLS_SPECIFY_FI_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_FI_KERNEL_NAME_NL, "Geef de naam van het Finse Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_FI_KERNEL_NAME_PL, "Okre�l nazw� obrazu fi�skiego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_FI_KERNEL_NAME_RU, "Specify name of Finnish Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_FI_KERNEL_NAME_SV, "Ange namn p� finsk kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_FI_KERNEL_NAME_TR, "Finlandiya Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_FR_KERNEL_NAME,    N_("Specify name of French Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_FR_KERNEL_NAME_DA, "Angiv navn p� fransk kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_FR_KERNEL_NAME_DE, "Name f�r franz�sische Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_FR_KERNEL_NAME_ES, "Especificar nombre imagen ROM Kernal franc�s"},
/* fr */ {IDCLS_SPECIFY_FR_KERNEL_NAME_FR, "Sp�cifier le nom de l'image Kernal fran�aise"},
/* hu */ {IDCLS_SPECIFY_FR_KERNEL_NAME_HU, "Adja meg a francia Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_FR_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal francese"},
/* ko */ {IDCLS_SPECIFY_FR_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_FR_KERNEL_NAME_NL, "Geef de naam van het Franse Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_FR_KERNEL_NAME_PL, "Okre�l nazw� obrazu francuskiego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_FR_KERNEL_NAME_RU, "Specify name of French Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_FR_KERNEL_NAME_SV, "Ange namn p� fransk kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_FR_KERNEL_NAME_TR, "Frans�z Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_IT_KERNEL_NAME,    N_("Specify name of Italian Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_IT_KERNEL_NAME_DA, "Angiv navn p� italiensk kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_IT_KERNEL_NAME_DE, "Name f�r italienische Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_IT_KERNEL_NAME_ES, "Especificar nombre imagen ROM Kernal italiano"},
/* fr */ {IDCLS_SPECIFY_IT_KERNEL_NAME_FR, "Sp�cifier le nom de l'image Kernal italienne"},
/* hu */ {IDCLS_SPECIFY_IT_KERNEL_NAME_HU, "Adja meg az olasz Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_IT_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal italiana"},
/* ko */ {IDCLS_SPECIFY_IT_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_IT_KERNEL_NAME_NL, "Geef de naam van het Italiaanse Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_IT_KERNEL_NAME_PL, "Okre�l nazw� obrazu w�oskiego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_IT_KERNEL_NAME_RU, "Specify name of Italian Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_IT_KERNEL_NAME_SV, "Ange namn p� italiensk kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_IT_KERNEL_NAME_TR, "�talyan Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_NO_KERNEL_NAME,    N_("Specify name of Norwegian Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_NO_KERNEL_NAME_DA, "Angiv navn p� norsk kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_NO_KERNEL_NAME_DE, "Name f�r norwegische Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_NO_KERNEL_NAME_ES, "Especificar nombre imagen ROM noruego"},
/* fr */ {IDCLS_SPECIFY_NO_KERNEL_NAME_FR, "Sp�cifier le nom de l'image Kernal norv�gienne"},
/* hu */ {IDCLS_SPECIFY_NO_KERNEL_NAME_HU, "Adja meg a norv�g Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_NO_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal norvegese"},
/* ko */ {IDCLS_SPECIFY_NO_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_NO_KERNEL_NAME_NL, "Geef de naam van het Noorse Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_NO_KERNEL_NAME_PL, "Okre�l nazw� obrazu norweskiego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_NO_KERNEL_NAME_RU, "Specify name of Norwegian Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_NO_KERNEL_NAME_SV, "Ange namn p� norsk kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_NO_KERNEL_NAME_TR, "Norve� Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_SV_KERNEL_NAME,    N_("Specify name of Swedish Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_SV_KERNEL_NAME_DA, "Angiv navn p� svensk kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_SV_KERNEL_NAME_DE, "Name f�r schwedische Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_SV_KERNEL_NAME_ES, "Especificar nombre imagen ROM Kernal sueco"},
/* fr */ {IDCLS_SPECIFY_SV_KERNEL_NAME_FR, "Sp�cifier le nom de l'image Kernal su�doise"},
/* hu */ {IDCLS_SPECIFY_SV_KERNEL_NAME_HU, "Adja meg s sv�d Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_SV_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal svedese"},
/* ko */ {IDCLS_SPECIFY_SV_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_SV_KERNEL_NAME_NL, "Geef de naam van het Zweedse Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_SV_KERNEL_NAME_PL, "Okre�l nazw� obrazu szwedzkiego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_SV_KERNEL_NAME_RU, "Specify name of Swedish Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_SV_KERNEL_NAME_SV, "Ange namn p� svensk kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_SV_KERNEL_NAME_TR, "�sve� Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CH_KERNEL_NAME,    N_("Specify name of Swiss Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CH_KERNEL_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_CH_KERNEL_NAME_DE, "Name f�r schweizer Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_CH_KERNEL_NAME_ES, "Especificar nombre imagen Kernal ROM suizo"},
/* fr */ {IDCLS_SPECIFY_CH_KERNEL_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_CH_KERNEL_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_CH_KERNEL_NAME_IT, "Specifica il nome immagine della ROM del Kernal svizzera"},
/* ko */ {IDCLS_SPECIFY_CH_KERNEL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CH_KERNEL_NAME_NL, "Geef de naam van het Zwitserse Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_CH_KERNEL_NAME_PL, "Okre�l nazw� obrazu szwajcarskiego ROM-u Kernala"},
/* ru */ {IDCLS_SPECIFY_CH_KERNEL_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_CH_KERNEL_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_CH_KERNEL_NAME_TR, ""},  /* fuzzy */
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW,    N_("Specify name of BASIC ROM image (lower part)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_DA, "Angiv navn p� BASIC ROM-image (lav del)"},
/* de */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_DE, "Namen f�r Basic ROM Datei spezifizieren (unterer Teil)"},
/* es */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_ES, "Especificar nombre imagen BASIC ROM (parte baja)"},
/* fr */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_FR, "Sp�cifier le nom de l'image BASIC ROM (partie basse)"},
/* hu */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_HU, "Adja meg a BASIC ROM k�pm�s nev�t (als� r�sz)"},
/* it */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_IT, "Specifica il nome immagine della ROM del BASIC (parte inferiore)"},
/* ko */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_NL, "Geef de naam van het BASIC ROM bestand (laag gedeelte)"},
/* pl */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_PL, "Okre�l nazw� obrazu ROM BASIC (ni�sza partia)"},
/* ru */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_RU, "Specify name of BASIC ROM image (lower part)"},
/* sv */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_SV, "Ange namn p� BASIC ROM-avbildning (nedre delen)"},
/* tr */ {IDCLS_SPECIFY_BASIC_ROM_NAME_LOW_TR, "BASIC ROM imaj�n�n (alt k�s�m) ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH,    N_("Specify name of BASIC ROM image (higher part)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_DA, "Angiv navn p� BASIC ROM-image (h�j del)"},
/* de */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_DE, "Namen f�r Basic ROM Datei spezifizieren (oberer Teil)"},
/* es */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_ES, "Especificar nombre imagen BASIC ROM (parte alta)"},
/* fr */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_FR, "Sp�cifier le nom de l'image BASIC ROM (partie haute)"},
/* hu */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_HU, "Adja meg a BASIC ROM k�pm�s nev�t (fels� r�sz)"},
/* it */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_IT, "Specifica il nome immagine della ROM del BASIC (parte superiore)"},
/* ko */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_NL, "Geef de naam van het BASIC ROM bestand (hoog gedeelte)"},
/* pl */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_PL, "Okre�l nazw� obrazu ROM BASIC (wy�sza partia)"},
/* ru */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_RU, "Specify name of BASIC ROM image (higher part)"},
/* sv */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_SV, "Ange namn p� BASIC ROM-avbildning (�vre delen)"},
/* tr */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HIGH_TR, "BASIC ROM imaj�n�n (�st k�s�m) ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME,    N_("Specify name of international character generator ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_DA, "Angiv navn p� internationalt tegngenerator-ROM-image"},
/* de */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_DE, "Name f�r internationale Charakter ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_ES, "Especificar nombre imagen ROM generador caracteres internacional"},
/* fr */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_FR, "Sp�cifier le nom de l'image du g�n�rateur de caract�res internationaux"},
/* hu */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_HU, "Adja meg a nemzetk�zi karaktergener�tor ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_IT, "Specifica il nome immagine della ROM del generatore di caratteri internazionale"},
/* ko */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_NL, "Geef de naam van het internationaal CHARGEN ROM bestand"},
/* pl */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_PL, "Okre�l nazw� obrazu ROM generatora znak�w mi�dzynarodowych"},
/* ru */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_RU, "Specify name of international character generator ROM image"},
/* sv */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_SV, "Ange namn p� internationell teckengenerator-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_INT_CHARGEN_ROM_NAME_TR, "Uluslararas� Karakter Olu�turucu ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME,    N_("Specify name of German character generator ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_DA, "Angiv navn p� tysk tegngenerator-ROM-image"},
/* de */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_DE, "Name f�r deutsche Charakter ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_ES, "Especificar nombre imagen ROM generador caracteres alem�n"},
/* fr */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_FR, "Sp�cifier le nom de l'image du g�n�rateur de caract�res allemands"},
/* hu */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_HU, "Adja meg a n�met karaktergener�tor ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_IT, "Specifica il nome immagine della ROM del generatore di caratteri tedesco"},
/* ko */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_NL, "Geef de naam van het Duitse CHARGEN ROM bestand"},
/* pl */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_PL, "Okre�l nazw� obrazu ROM generatora niemieckich znak�w"},
/* ru */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_RU, "������� ��� ROM ������ ���������� �������� ��������"},
/* sv */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_SV, "Ange namn p� tysk teckengenerator-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_DE_CHARGEN_ROM_NAME_TR, "Alman Karakter Olu�turucu ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME,    N_("Specify name of French character generator ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_DA, "Angiv navn p� fransk tegngenerator-ROM-image"},
/* de */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_DE, "Name f�r franz�sische Charakter ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_ES, "Especificar nombre imagen ROM generador caracteres franc�s"},
/* fr */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_FR, "Sp�cifier le nom de l'image du g�n�rateur de caract�res fran�ais"},
/* hu */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_HU, "Adja meg a francia karaktergener�tor ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_IT, "Specifica il nome immagine della ROM del generatore di caratteri francese"},
/* ko */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_NL, "Geef de naam van het Franse CHARGEN ROM bestand"},
/* pl */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_PL, "Okre�l nazw� obrazu ROM generatora francuskich znak�w"},
/* ru */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_RU, "������� ��� ROM ������ ���������� ����������� ��������"},
/* sv */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_SV, "Ange namn p� fransk teckengenerator-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_FR_CHARGEN_ROM_NAME_TR, "Finlandiya Karakter Olu�turucu ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME,    N_("Specify name of Swedish character generator ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_DA, "Angiv navn p� svensk tegngenerator-ROM-image"},
/* de */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_DE, "Name f�r schwedische Charakter ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_ES, "Especificar nombre imagen ROM generador caracteres sueco"},
/* fr */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_FR, "Sp�cifier le nom de l'image du g�n�rateur de caract�res su�dois"},
/* hu */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_HU, "Adja meg a sv�d karaktergener�tor ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_IT, "Specifica il nome immagine della ROM del generatore di caratteri svedese"},
/* ko */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_NL, "Geef de naam van het Zweedse CHARGEN ROM bestand"},
/* pl */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_PL, "Okre�l nazw� obrazu ROM generatora szwedzkich znak�w"},
/* ru */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_RU, "������� ��� ROM ������ ���������� �������� ��������"},
/* sv */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_SV, "Ange namn p� svensk teckengenerator-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_SV_CHARGEN_ROM_NAME_TR, "�sve� Karakter Olu�turucu ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME,    N_("Specify name of Swedish character generator ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_DA, "Angiv navn p� svensk tegngenerator-ROM-image"},
/* de */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_DE, "Name f�r schwedische Charakter ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_ES, "Especificar nombre imagen ROM generador caracteres sueco"},
/* fr */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_FR, "Sp�cifier le nom de l'image du g�n�rateur de caract�res su�dois"},
/* hu */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_HU, "Adja meg a sv�d karaktergener�tor ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_IT, "Specifica il nome immagine della ROM del generatore di caratteri svedese"},
/* ko */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_NL, "Geef de naam van het Zweedse CHARGEN ROM bestand"},
/* pl */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_PL, "Okre�l nazw� obrazu ROM generatora szwedzkich znak�w"},
/* ru */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_RU, "������� ��� ROM ������ ���������� �������� ��������"},
/* sv */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_SV, "Ange namn p� svensk teckengenerator-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_CH_CHARGEN_ROM_NAME_TR, "�sve� Karakter Olu�turucu ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME,    N_("Specify name of C64 mode Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_DA, "Angiv navn p� C64-kerne-ROM-image"},
/* de */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_DE, "Name f�r C64 Modus Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_ES, "Especificar nombre imagen ROM Kernal modo C64"},
/* fr */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_FR, "Sp�cifier le nom de l'image Kernal du mode C64"},
/* hu */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_HU, "Adja meg a C64 m�d� Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_IT, "Specifica il nome immagine della ROM del Kernal in modalit� C64"},
/* ko */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_NL, "Geef de naam van het Kernal ROM bestand voor de C64 modus"},
/* pl */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_PL, "Okre�l nazw� obrazu ROM Kernala trybu C64"},
/* ru */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_RU, "Specify name of C64 mode Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_SV, "Ange namn p� C64-kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_C64_MODE_KERNAL_NAME_TR, "C64 modu Kernal ROM imaj�n�n ismini belirt"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME,    N_("Specify name of C64 mode BASIC ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_DA, "Angiv navn p� C64-BASIC-ROM-image"},
/* de */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_DE, "Name f�r C64 Modus Basic ROM Datei spezifizieren"},
/* es */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_ES, "Especificar nombre imagen BASIC ROM modo C64"},
/* fr */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_FR, "Sp�cifier le nom de l'image BASIC ROM du mode C64"},
/* hu */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_HU, "Adja meg a C64 m�d� BASIC ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_IT, "Specifica il nome immagine della ROM in modalit� C64"},
/* ko */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_NL, "Geef de naam van het BASIC ROM bestand voor de C64 modus"},
/* pl */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_PL, "Okre�l nazw� obrazu ROM BASIC trybu C64"},
/* ru */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_RU, "������� ��� ROM ������ ������ C64 BASIC"},
/* sv */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_SV, "Ange namn p� C64-BASIC-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_C64_MODE_BASIC_NAME_TR, "C64 modu BASIC ROM imaj�n�n ismini belirt"},
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_ENABLE_OEM_JOY,    N_("Enable the OEM userport joystick adapter")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_OEM_JOY_DA, "Aktiv�r OEM brugerportjoystickadapter"},
/* de */ {IDCLS_ENABLE_OEM_JOY_DE, "OEM Userport Joystick Adapter aktivieren"},
/* es */ {IDCLS_ENABLE_OEM_JOY_ES, "Permitir adaptador puerto joystick OEM"},
/* fr */ {IDCLS_ENABLE_OEM_JOY_FR, "Activer l'adaptateur joystick port utilisateur OEM"},
/* hu */ {IDCLS_ENABLE_OEM_JOY_HU, "OEM userport botkorm�ny adapter enged�lyez�se"},
/* it */ {IDCLS_ENABLE_OEM_JOY_IT, "Attiva adattatore joystick OEM su userport"},
/* ko */ {IDCLS_ENABLE_OEM_JOY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_OEM_JOY_NL, "OEM userport joystick adapter inschakelen"},
/* pl */ {IDCLS_ENABLE_OEM_JOY_PL, "W��cz z��cze OEM userportu joysticka"},
/* ru */ {IDCLS_ENABLE_OEM_JOY_RU, "Enable the OEM userport joystick adapter"},
/* sv */ {IDCLS_ENABLE_OEM_JOY_SV, "Aktivera OEM-anv�ndarportspelportsadapter"},
/* tr */ {IDCLS_ENABLE_OEM_JOY_TR, "OEM userport joystick d�n��t�r�c�y� aktif et"},
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_DISABLE_OEM_JOY,    N_("Disable the OEM userport joystick adapter")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_OEM_JOY_DA, "Deaktiv�r OEM brugerportjoystickadapter"},
/* de */ {IDCLS_DISABLE_OEM_JOY_DE, "OEM Userport Joystick Adapter deaktivieren"},
/* es */ {IDCLS_DISABLE_OEM_JOY_ES, "Deshabilitar adaptador puerto joystick OEM"},
/* fr */ {IDCLS_DISABLE_OEM_JOY_FR, "D�sactiver l'adaptateur OEM Joystick port utilisateur"},
/* hu */ {IDCLS_DISABLE_OEM_JOY_HU, "OEM userport botkorm�ny adapter tilt�sa"},
/* it */ {IDCLS_DISABLE_OEM_JOY_IT, "Disattiva adattatore joystick OEM su userport"},
/* ko */ {IDCLS_DISABLE_OEM_JOY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_OEM_JOY_NL, "OEM userport joystick adapter uitschakelen"},
/* pl */ {IDCLS_DISABLE_OEM_JOY_PL, "Wy��cz z��cze OEM userportu joysticka"},
/* ru */ {IDCLS_DISABLE_OEM_JOY_RU, "Disable the OEM userport joystick adapter"},
/* sv */ {IDCLS_DISABLE_OEM_JOY_SV, "Inaktivera OEM-anv�ndarportspelportsadapter"},
/* tr */ {IDCLS_DISABLE_OEM_JOY_TR, "OEM userport joystick d�n��t�r�c�y� pasifle�tir"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_ENABLE_IEE488,    N_("Enable the IEEE488 interface emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEE488_DA, "Aktiv�r emulering af IEEE488-interface"},
/* de */ {IDCLS_ENABLE_IEE488_DE, "IEEE488 Schnittstellen-Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_IEE488_ES, "Permitir emulaci�n interface IEEE488"},
/* fr */ {IDCLS_ENABLE_IEE488_FR, "Activer l'interface d'�mulation IEEE488"},
/* hu */ {IDCLS_ENABLE_IEE488_HU, "IEEE488 interf�sz emul�ci� enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEE488_IT, "Attiva emulazione interfaccia IEEE488"},
/* ko */ {IDCLS_ENABLE_IEE488_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEE488_NL, "IEEE488 interface emulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_IEE488_PL, "W��cz emulacj� interfejsu IEEE488"},
/* ru */ {IDCLS_ENABLE_IEE488_RU, "Enable the IEEE488 interface emulation"},
/* sv */ {IDCLS_ENABLE_IEE488_SV, "Aktivera emulering av IEEE488-gr�nssnitt"},
/* tr */ {IDCLS_ENABLE_IEE488_TR, "IEEE488 arabirim em�lasyonunu aktif et"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_DISABLE_IEE488,    N_("Disable the IEEE488 interface emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEE488_DA, "Deaktiv�r emulering af IEEE488-interface"},
/* de */ {IDCLS_DISABLE_IEE488_DE, "IEEE488 Schnittstellen-Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_IEE488_ES, "Deshabilitar emulaci�n interface IEEE488"},
/* fr */ {IDCLS_DISABLE_IEE488_FR, "D�sactiver l'interface d'�mulation IEEE488"},
/* hu */ {IDCLS_DISABLE_IEE488_HU, "IEEE488 interf�sz emul�ci� tilt�sa"},
/* it */ {IDCLS_DISABLE_IEE488_IT, "Disattiva emulazione interfaccia IEEE488"},
/* ko */ {IDCLS_DISABLE_IEE488_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEE488_NL, "IEEE488 interface emulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEE488_PL, "Wy��cz emulacj� interfejsu IEEE488"},
/* ru */ {IDCLS_DISABLE_IEE488_RU, "Disable the IEEE488 interface emulation"},
/* sv */ {IDCLS_DISABLE_IEE488_SV, "Inaktivera emulering av IEEE488-gr�nssnitt"},
/* tr */ {IDCLS_DISABLE_IEE488_TR, "IEEE488 arabirim em�lasyonunu pasifle�tir"},
#endif

/* c128/c128-cmdline-options.c, c64/c64-cmdline-options.c */
/* en */ {IDCLS_P_REVISION,    N_("<Revision>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_REVISION_DA, "<Udgave>"},
/* de */ {IDCLS_P_REVISION_DE, "<Revision>"},
/* es */ {IDCLS_P_REVISION_ES, "<Revisi�n>"},
/* fr */ {IDCLS_P_REVISION_FR, "<R�vision>"},
/* hu */ {IDCLS_P_REVISION_HU, "<V�ltozatsz�m>"},
/* it */ {IDCLS_P_REVISION_IT, "<Revisione>"},
/* ko */ {IDCLS_P_REVISION_KO, "<����>"},
/* nl */ {IDCLS_P_REVISION_NL, "<Revisie>"},
/* pl */ {IDCLS_P_REVISION_PL, "<Wersja>"},
/* ru */ {IDCLS_P_REVISION_RU, "<Revision>"},
/* sv */ {IDCLS_P_REVISION_SV, "<Utg�va>"},
/* tr */ {IDCLS_P_REVISION_TR, "<Revizyon>"},
#endif

/* c128/c128-cmdline-options.c, c64/c64-cmdline-options.c */
/* en */ {IDCLS_PATCH_KERNAL_TO_REVISION,    N_("Patch the Kernal ROM to the specified <revision> (1: rev. 1, 2: rev. 2, 3: rev. 3, 67/sx: sx64, 100/4064: 4064)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PATCH_KERNAL_TO_REVISION_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PATCH_KERNAL_TO_REVISION_DE, "Kernal ROM auf <revision> modifzieren (1: rev. 1, 2: rev. 2, 3: rev. 3, 67/sx: sx64, 100/4064: 4064)"},
/* es */ {IDCLS_PATCH_KERNAL_TO_REVISION_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_PATCH_KERNAL_TO_REVISION_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PATCH_KERNAL_TO_REVISION_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PATCH_KERNAL_TO_REVISION_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_PATCH_KERNAL_TO_REVISION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PATCH_KERNAL_TO_REVISION_NL, "Verbeter de Kernal ROM naar de opgegeven <revisie> (1: rev. 1, 2: rev. 2, 3: rev. 3, 67/sx: sx64, 100/4064: 4064)"},
/* pl */ {IDCLS_PATCH_KERNAL_TO_REVISION_PL, "Za�ataj ROM Kernala do konkretnej <wersji> (1: rev. 1, 2: rev. 2, 3: rev. 3, 67/sx: sx64, 100/4064: 4064)"},
/* ru */ {IDCLS_PATCH_KERNAL_TO_REVISION_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PATCH_KERNAL_TO_REVISION_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PATCH_KERNAL_TO_REVISION_TR, ""},  /* fuzzy */
#endif

#if defined(HAVE_RS232DEV) || defined(HAVE_RS232NET)
/* c128/c128-cmdline-options.c, c64/c64-cmdline-options.c
   scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU,    N_("Enable the ACIA RS232 interface emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_DA, "Aktiv�r ACIA RS232-interface emulering"},
/* de */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_DE, "ACIA RS232 Schnittstellen-Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_ES, "Permitir emulaci�n interface ACIA RS232"},
/* fr */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_FR, "Activer l'�mulation de l'interface ACIA RS232"},
/* hu */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_IT, "Attiva emulazione interfaccia ACIA RS232"},
/* ko */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_NL, "ACIA RS232 interface emulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_PL, "W��cz emulacj� interfejsu ACIA RS232"},
/* ru */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_RU, "Enable the ACIA RS232 interface emulation"},
/* sv */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_SV, "Aktivera ACIA RS232-gr�nssnittsemulering"},
/* tr */ {IDCLS_ENABLE_DEXX_ACIA_RS232_EMU_TR, "ACIA RS232 arabirim em�lasyonunu aktif et"},
#endif

/* c128/c128-cmdline-options.c, c64/c64-cmdline-options.c,
   scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU,    N_("Disable the ACIA RS232 interface emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_DA, "Deaktiv�r ACIA-RS232-interface emulering"},
/* de */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_DE, "ACIA RS232 Schnittstellen-Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_ES, "Deshabilitar emulaci�n interface ACIA RS232"},
/* fr */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_FR, "D�sactiver l'�mulation de l'interface ACIA RS232"},
/* hu */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_IT, "Disattiva emulazione interfaccia ACIA RS232"},
/* ko */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_NL, "ACIA RS232 interface emulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_PL, "Wy��cz emulacj� interfejsu ACIA RS232"},
/* ru */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_RU, "Disable the ACIA RS232 interface emulation"},
/* sv */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_SV, "Inaktivera ACIA-RS232-gr�nssnittsemulering"},
/* tr */ {IDCLS_DISABLE_DEXX_ACIA_RS232_EMU_TR, "ACIA RS232 arabirim em�lasyonunu pasifle�tir"},
#endif

/* c64/cart/c64acia1.c */
/* en */ {IDCLS_P_IRQ,    N_("<interrupt>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_IRQ_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_IRQ_DE, "<Interrupt>"},
/* es */ {IDCLS_P_IRQ_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_P_IRQ_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_IRQ_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_IRQ_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_P_IRQ_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_IRQ_NL, "<interrupt>"},
/* pl */ {IDCLS_P_IRQ_PL, "<przerwanie>"},
/* ru */ {IDCLS_P_IRQ_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_IRQ_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_P_IRQ_TR, ""},  /* fuzzy */
#endif

/* c64/cart/c64acia1.c */
/* en */ {IDCLS_SET_ACIA_IRQ,    N_("Set the ACIA interrupt (0: None, 1: NMI, 2: IRQ)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_ACIA_IRQ_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_ACIA_IRQ_DE, "ACIA Interrupt setzen (0: None, 1: NMI, 2: IRQ)"},
/* es */ {IDCLS_SET_ACIA_IRQ_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_ACIA_IRQ_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_ACIA_IRQ_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_ACIA_IRQ_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_ACIA_IRQ_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_ACIA_IRQ_NL, "Stel de ACIA interrupt in (0: Geen, 1: NMI, 2: IRQ)"},
/* pl */ {IDCLS_SET_ACIA_IRQ_PL, "Ustaw przerwanie ACIA (0:Brak, 1: NMI, 2: IRQ)"},
/* ru */ {IDCLS_SET_ACIA_IRQ_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_ACIA_IRQ_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_ACIA_IRQ_TR, ""},  /* fuzzy */
#endif

/* c64/cart/c64acia1.c */
/* en */ {IDCLS_SET_ACIA_MODE,    N_("Set the ACIA mode (0: Normal, 1: Swiftlink, 2: Turbo232)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_ACIA_MODE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_ACIA_MODE_DE, "ACIA Modus setzen (0: Normal, 1: Swiftlink, 2: Turbo232)"},
/* es */ {IDCLS_SET_ACIA_MODE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_ACIA_MODE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_ACIA_MODE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_ACIA_MODE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_ACIA_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_ACIA_MODE_NL, "Stel de ACIA modus in (0: normaal, 1: Swiftlink, 2: Turbo232)"},
/* pl */ {IDCLS_SET_ACIA_MODE_PL, "Okre�l tryb ACIA (0:Zwyk�y, 1: Swiftlink, 2: Turbo232)"},
/* ru */ {IDCLS_SET_ACIA_MODE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_ACIA_MODE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_ACIA_MODE_TR, ""},  /* fuzzy */
#endif
#endif


/* plus4/plus4acia.c */
/* en */ {IDCLS_ENABLE_ACIA_EMU,    N_("Enable the ACIA emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_ACIA_EMU_DA, "Aktiv�r ACIA-emulering"},
/* de */ {IDCLS_ENABLE_ACIA_EMU_DE, "ACIA Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_ACIA_EMU_ES, "Habilitar emulaci�n ACIA"},
/* fr */ {IDCLS_ENABLE_ACIA_EMU_FR, "Activer l'�mulation ACIA"},
/* hu */ {IDCLS_ENABLE_ACIA_EMU_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_ACIA_EMU_IT, "Attiva emulazione ACIA"},
/* ko */ {IDCLS_ENABLE_ACIA_EMU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_ACIA_EMU_NL, "ACIA emulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_ACIA_EMU_PL, "W��cz emulacj� ACIA"},
/* ru */ {IDCLS_ENABLE_ACIA_EMU_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_ACIA_EMU_SV, "Aktivera ACIA-emuleringen"},
/* tr */ {IDCLS_ENABLE_ACIA_EMU_TR, "ACIA em�lasyonunu aktif et"},
#endif

/* plus4/plus4acia.c */
/* en */ {IDCLS_DISABLE_ACIA_EMU,    N_("Disable the ACIA emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_ACIA_EMU_DA, "Deaktiv�r ACIA-emulering"},
/* de */ {IDCLS_DISABLE_ACIA_EMU_DE, "ACIA Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_ACIA_EMU_ES, "Deshabilitar emulaci�n ACIA"},
/* fr */ {IDCLS_DISABLE_ACIA_EMU_FR, "D�sactiver l'�mulation ACIA"},
/* hu */ {IDCLS_DISABLE_ACIA_EMU_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_ACIA_EMU_IT, "Disattiva emulazione ACIA"},
/* ko */ {IDCLS_DISABLE_ACIA_EMU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_ACIA_EMU_NL, "ACIA emulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_ACIA_EMU_PL, "Wy��cz emulacj� ACIA"},
/* ru */ {IDCLS_DISABLE_ACIA_EMU_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_ACIA_EMU_SV, "Inaktivera ACIA-emuleringen"},
/* tr */ {IDCLS_DISABLE_ACIA_EMU_TR, "ACIA em�lasyonunu pasifle�tir"},
#endif

/* c128/c128mmu.c */
/* en */ {IDCLS_ACTIVATE_40_COL_MODE,    N_("Activate 40 column mode")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ACTIVATE_40_COL_MODE_DA, "Aktiv�r 40-kolonners tilstand"},
/* de */ {IDCLS_ACTIVATE_40_COL_MODE_DE, "40 Spalten Modus aktivieren"},
/* es */ {IDCLS_ACTIVATE_40_COL_MODE_ES, "Activar modo 40 columnas"},
/* fr */ {IDCLS_ACTIVATE_40_COL_MODE_FR, "Activer le mode 40 colonnes"},
/* hu */ {IDCLS_ACTIVATE_40_COL_MODE_HU, "40 oszlopos m�d aktiv�l�sa"},
/* it */ {IDCLS_ACTIVATE_40_COL_MODE_IT, "Attiva modalit� a 40 colonne"},
/* ko */ {IDCLS_ACTIVATE_40_COL_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ACTIVATE_40_COL_MODE_NL, "Activeer 40 kolomsmodus"},
/* pl */ {IDCLS_ACTIVATE_40_COL_MODE_PL, "W��cz tryb 40 kolumn"},
/* ru */ {IDCLS_ACTIVATE_40_COL_MODE_RU, "������������ ����� 40 �������"},
/* sv */ {IDCLS_ACTIVATE_40_COL_MODE_SV, "Aktivera 40-kolumnersl�ge"},
/* tr */ {IDCLS_ACTIVATE_40_COL_MODE_TR, "40 s�tun modunu aktif et"},
#endif

/* c128/c128mmu.c */
/* en */ {IDCLS_ACTIVATE_80_COL_MODE,    N_("Activate 80 column mode")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ACTIVATE_80_COL_MODE_DA, "Aktiv�r 80-kolonners tilstand"},
/* de */ {IDCLS_ACTIVATE_80_COL_MODE_DE, "80 Spalten Modus aktivieren"},
/* es */ {IDCLS_ACTIVATE_80_COL_MODE_ES, "Activar modo 80 columnas"},
/* fr */ {IDCLS_ACTIVATE_80_COL_MODE_FR, "Activer le mode 80 colonnes"},
/* hu */ {IDCLS_ACTIVATE_80_COL_MODE_HU, "80 oszlopos m�d aktiv�l�sa"},
/* it */ {IDCLS_ACTIVATE_80_COL_MODE_IT, "Attiva modalit� a 80 colonne"},
/* ko */ {IDCLS_ACTIVATE_80_COL_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ACTIVATE_80_COL_MODE_NL, "Activeer 80 kolomsmodus"},
/* pl */ {IDCLS_ACTIVATE_80_COL_MODE_PL, "W��cz tryb 80 kolumn"},
/* ru */ {IDCLS_ACTIVATE_80_COL_MODE_RU, "������������ ����� 80 �������"},
/* sv */ {IDCLS_ACTIVATE_80_COL_MODE_SV, "Aktivera 80-kolumnersl�ge"},
/* tr */ {IDCLS_ACTIVATE_80_COL_MODE_TR, "80 s�tun modunu aktif et"},
#endif

/* c128/c128mmu.c */
/* en */ {IDCLS_GO64_MODE,    N_("Always switch to C64 mode on reset")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_GO64_MODE_DA, "Skift altid til C64-tilstand ved reset"},
/* de */ {IDCLS_GO64_MODE_DE, "Immer bei Reset in C64 Modus schalten"},
/* es */ {IDCLS_GO64_MODE_ES, "Al reiniciar, pasar siempre al modo C64"},
/* fr */ {IDCLS_GO64_MODE_FR, "Toujours revenir au mode C64 au red�marrage"},
/* hu */ {IDCLS_GO64_MODE_HU, "Mindig C64 m�dban �jraind�t�s ut�n"},
/* it */ {IDCLS_GO64_MODE_IT, "Vai sempre in modalit� C64 al reset"},
/* ko */ {IDCLS_GO64_MODE_KO, "�ٽ� �����ϸ� �׻� C64 ��� �� �ٲ�ϴ�"},
/* nl */ {IDCLS_GO64_MODE_NL, "Start altijd op in C64 modus na reset"},
/* pl */ {IDCLS_GO64_MODE_PL, "Przy restarcie zawsze prze��czaj w tryb C64"},
/* ru */ {IDCLS_GO64_MODE_RU, "Always switch to C64 mode on reset"},
/* sv */ {IDCLS_GO64_MODE_SV, "V�xla alltid till C64-l�ge vid �terst�llning"},
/* tr */ {IDCLS_GO64_MODE_TR, "Resetlendi�inde her zaman C64 moduna ge�"},
#endif

/* c128/c128mmu.c */
/* en */ {IDCLS_GO128_MODE,    N_("Always switch to C128 mode on reset")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_GO128_MODE_DA, "Skift altid til C128-tilstand ved reset"},
/* de */ {IDCLS_GO128_MODE_DE, "Immer be Reset in C128 Modus schalten"},
/* es */ {IDCLS_GO128_MODE_ES, "Al reiniciar, pasar siempre al modo C128"},
/* fr */ {IDCLS_GO128_MODE_FR, "Toujours revenir au mode C128 au red�marrage"},
/* hu */ {IDCLS_GO128_MODE_HU, "Mindig C128 m�d �jraind�t�s ut�n"},
/* it */ {IDCLS_GO128_MODE_IT, "Vai sempre in modalit� C128 al reset"},
/* ko */ {IDCLS_GO128_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_GO128_MODE_NL, "Start altijd op in C128 modus na reset"},
/* pl */ {IDCLS_GO128_MODE_PL, "Przy restarcie zawsze prze��czaj w tryb C128"},
/* ru */ {IDCLS_GO128_MODE_RU, "������ ����������� � ����� C128 ����� �����������"},
/* sv */ {IDCLS_GO128_MODE_SV, "V�xla alltid till C128-l�ge vid �terst�llning"},
/* tr */ {IDCLS_GO128_MODE_TR, "Resetlendi�inde her zaman C128 moduna ge�"},
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME,    N_("Specify name of internal Function ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_DA, "Angiv navn p� internt funktions-ROM-image"},
/* de */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_DE, "Name der internen Funktions ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_ES, "Especificar nombre imagen ROM funci�n interna"},
/* fr */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_FR, "Sp�cifier le nom de l'image ROM des fonctions internes"},
/* hu */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_HU, "Adja meg a bels� Function ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_IT, "Specifica il nome immagine della Function ROM interna"},
/* ko */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_NL, "Geef de naam van het intern functie ROM bestand"},
/* pl */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_PL, "Okre�l nazw� obrazu wewn�trznego Function ROM-u"},
/* ru */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_RU, "Specify name of internal Function ROM image"},
/* sv */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_SV, "Ange namn p� intern funktions-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_INT_FUNC_ROM_NAME_TR, "Dahili Function ROM imaj�n�n ismini belirt"},
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME,    N_("Specify name of external Function ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_DA, "Angiv navn p� externt funktions-ROM-image"},
/* de */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_DE, "Name der externen Funktions ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_ES, "Especificar nombre imagen ROM funci�n externa"},
/* fr */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_FR, "Sp�cifier le nom de l'image ROM des fonctions externes"},
/* hu */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_HU, "Adja meg a k�ls� Function ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_IT, "Specifica il nome immagine della Function ROM esterna"},
/* ko */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_NL, "Geef de naam van het extern functie ROM bestand"},
/* pl */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_PL, "Okre�l nazw� obrazu zewn�trznego Function ROM-u"},
/* ru */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_RU, "Specify name of external Function ROM image"},
/* sv */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_SV, "Ange namn p� extern funktions-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_EXT_FUNC_ROM_NAME_TR, "Harici Function ROM imaj�n�n ismini belirt"},
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_ENABLE_INT_FUNC_ROM,    N_("Type of internal Function ROM: (0: None, 1: ROM, 2: RAM, 3: RTC)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_INT_FUNC_ROM_DA, "Typen af intern funktions-ROM: (0: Ingen, 1: ROM, 2: RAM, 3:RTC)"},
/* de */ {IDCLS_ENABLE_INT_FUNC_ROM_DE, "Typ des internen Funktions ROM: (0: Kein, 1: ROM, 2: RAM, 3: RTC)"},
/* es */ {IDCLS_ENABLE_INT_FUNC_ROM_ES, "Tipo de Function ROM interna: (0: None, 1: ROM, 2: RAM, 3: RTC)"},
/* fr */ {IDCLS_ENABLE_INT_FUNC_ROM_FR, "Type de ROM Fonction interne: (0: Aucun, 1: ROM, 2: RAM, 3: RTC)"},
/* hu */ {IDCLS_ENABLE_INT_FUNC_ROM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_INT_FUNC_ROM_IT, "Tipo di Function ROM interna: (0: None, 1: ROM, 2: RAM, 3: RTC)"},
/* ko */ {IDCLS_ENABLE_INT_FUNC_ROM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_INT_FUNC_ROM_NL, "Intern functie ROM soort: (0: Geen, 1: ROM, 2: RAM, 3: RTC)"},
/* pl */ {IDCLS_ENABLE_INT_FUNC_ROM_PL, "Typ wewn�trznego Function ROM-u: (0: �aden, 1: ROM, 2: RAM, 3: RTC)"},
/* ru */ {IDCLS_ENABLE_INT_FUNC_ROM_RU, "Type of internal Function ROM: (0: None, 1: ROM, 2: RAM, 3: RTC)"},
/* sv */ {IDCLS_ENABLE_INT_FUNC_ROM_SV, "Typ f�r intern funktions-ROM (0: ingen, 1: ROM, 2: RAM, 3: RTC)"},
/* tr */ {IDCLS_ENABLE_INT_FUNC_ROM_TR, "Dahili Function ROM Tipi: (0: Yok, 1: ROM, 2: RAM, 3: RTC)"},
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_ENABLE_EXT_FUNC_ROM,    N_("Type of external Function ROM: (0: None, 1: ROM, 2: RAM, 3: RTC)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_EXT_FUNC_ROM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_EXT_FUNC_ROM_DE, "Typ des esternen Funktions ROM: (0: Kein, 1: ROM, 2: RAM, 3: RTC)"},
/* es */ {IDCLS_ENABLE_EXT_FUNC_ROM_ES, "Tipo de Function ROM externa: (0: None, 1: ROM, 2: RAM, 3: RTC)"},
/* fr */ {IDCLS_ENABLE_EXT_FUNC_ROM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_EXT_FUNC_ROM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_EXT_FUNC_ROM_IT, "Tipo di Function ROM esterna: (0: None, 1: ROM, 2: RAM, 3: RTC)"},
/* ko */ {IDCLS_ENABLE_EXT_FUNC_ROM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_EXT_FUNC_ROM_NL, "Extern functie ROM soort: (0: Geen, 1: ROM, 2: RAM, 3: RTC)"},
/* pl */ {IDCLS_ENABLE_EXT_FUNC_ROM_PL, "Typ zewn�trznego Function ROM-u: (0: �aden, 1: ROM, 2: RAM, 3: RTC)"},
/* ru */ {IDCLS_ENABLE_EXT_FUNC_ROM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_EXT_FUNC_ROM_SV, "Typ f�r extern funktions-ROM (0: ingen, 1: ROM, 2: RAM, 3: RTC)"},
/* tr */ {IDCLS_ENABLE_EXT_FUNC_ROM_TR, ""},  /* fuzzy */
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE,    N_("Enable saving of the internal function RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_DE, "Interne Funktions RTC Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_ES, "Permitir grabar datos de Internal Function RTC cuando cambien"},
/* fr */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_IT, "Attiva il salvataggio dei dati RTC della internal function alla modifica."},
/* ko */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_NL, "Opslaan van de interne functie RTC gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_PL, "Zapisuj dane zegara czasu rzeczywistego wewn�trznego Function ROM-u przy zmianie"},
/* ru */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_INT_FUNC_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE,    N_("Disable saving of the internal function RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_DE, "Interne Funktions RTC Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_ES, "Deshabilitar grabar datos de Internal Function RTC cuando cambien"},
/* fr */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_IT, "Disattiva il salvataggio dei dati RTC della internal function alla modifica."},
/* ko */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_NL, "Opslaan van de interne functie RTC gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_PL, "Nie zapisuj danych zegara czasu rzeczywistego wewn�trznego Function ROM-u przy zmianie"},
/* ru */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_INT_FUNC_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE,    N_("Enable saving of the external function RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_DE, "Externe Funktions RTC Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_ES, "Permitir grabar datos de External Function RTC cuando cambien"},
/* fr */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_IT, "Attiva il salvataggio dei dati RTC della external function alla modifica."},
/* ko */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_NL, "Opslaan van de externe functie RTC gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_PL, "Zapisuj dane zegara czasu rzeczywistego zewn�trznego Function ROM-u przy zmianie"},
/* ru */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_EXT_FUNC_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* c128/functionrom.c */
/* en */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE,    N_("Disable saving of the external function RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_DE, "Externe Funktions RTC Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_ES, "Deshabilitar grabar datos de External Function RTC cuando cambien"},
/* fr */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_IT, "Disattiva il salvataggio dei dati RTC della external function alla modifica."},
/* ko */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_NL, "Opslaan van de externe functie RTC gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_PL, "Nie zapisuj danych zegara czasu rzeczywistego zewn�trznego Function ROM-u przy zmianie"},
/* ru */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_EXT_FUNC_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* c64/c64-cmdline-options.c, c64/psid.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR,    N_("Use old NTSC sync factor")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_DA, "Anvend gammel NTSC-synkfaktor"},
/* de */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_DE, "Alten NTSC Sync Faktor verwenden"},
/* es */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_ES, "Usar antiguo factor de sincronizaci�n NTSC"},
/* fr */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_FR, "Utiliser l'ancien mode NTSC"},
/* hu */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_HU, "R�gi NTSC szinkron faktor haszn�lata"},
/* it */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_IT, "Usa il vecchio fattore di sincronizzazione NTSC"},
/* ko */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_NL, "Gebruik oude NTSC synchronisatiefactor"},
/* pl */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_PL, "U�ywaj starej synchronizacji NTSC"},
/* ru */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_RU, "Use old NTSC sync factor"},
/* sv */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_SV, "Anv�nd gammal NTSC-synkfaktor"},
/* tr */ {IDCLS_USE_OLD_NTSC_SYNC_FACTOR_TR, "Eski NTSC senkron fakt�r� kullan"},
#endif

/* c64/c64-cmdline-options.c, viciisc/vicii-cmdline-options.c,
   scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_P_MODEL,    N_("<Model>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_MODEL_DA, "<Model>"},
/* de */ {IDCLS_P_MODEL_DE, "<Modell>"},
/* es */ {IDCLS_P_MODEL_ES, "<Modelo>"},
/* fr */ {IDCLS_P_MODEL_FR, "<Mod�le>"},
/* hu */ {IDCLS_P_MODEL_HU, "<Modell>"},
/* it */ {IDCLS_P_MODEL_IT, "<Modello>"},
/* ko */ {IDCLS_P_MODEL_KO, "<��>"},
/* nl */ {IDCLS_P_MODEL_NL, "<Model>"},
/* pl */ {IDCLS_P_MODEL_PL, "<Model>"},
/* ru */ {IDCLS_P_MODEL_RU, "<������>"},
/* sv */ {IDCLS_P_MODEL_SV, "<Modell>"},
/* tr */ {IDCLS_P_MODEL_TR, "<Model>"},
#endif

/* c64/c64-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SET_BOTH_CIA_MODELS,    N_("Set both CIA models (0 = old 6526, 1 = new 8521)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_BOTH_CIA_MODELS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_BOTH_CIA_MODELS_DE, "W�hle beide CIA Modelle (0 = alt 6526, 1 = neu 8521)"},
/* es */ {IDCLS_SET_BOTH_CIA_MODELS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_BOTH_CIA_MODELS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_BOTH_CIA_MODELS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_BOTH_CIA_MODELS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_BOTH_CIA_MODELS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_BOTH_CIA_MODELS_NL, ""},  /* fuzzy */
/* pl */ {IDCLS_SET_BOTH_CIA_MODELS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SET_BOTH_CIA_MODELS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_BOTH_CIA_MODELS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_BOTH_CIA_MODELS_TR, ""},  /* fuzzy */
#endif

/* c64/c64-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SET_CIA1_MODEL,    N_("Set CIA 1 model (0 = old 6526, 1 = new 8521)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_CIA1_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_CIA1_MODEL_DE, "W�hle CIA 1 Modell (0 = alt 6526, 1 = neu 8521)"},
/* es */ {IDCLS_SET_CIA1_MODEL_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_CIA1_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_CIA1_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_CIA1_MODEL_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_CIA1_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_CIA1_MODEL_NL, ""},  /* fuzzy */
/* pl */ {IDCLS_SET_CIA1_MODEL_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SET_CIA1_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_CIA1_MODEL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_CIA1_MODEL_TR, ""},  /* fuzzy */
#endif

/* c64/c64-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SET_CIA2_MODEL,    N_("Set CIA 2 model (0 = old 6526, 1 = new 8521)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_CIA2_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_CIA2_MODEL_DE, "W�hle CIA 2 Modell (0 = alt 6526, 1 = neu 8521)\""},
/* es */ {IDCLS_SET_CIA2_MODEL_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_CIA2_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_CIA2_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_CIA2_MODEL_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_CIA2_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_CIA2_MODEL_NL, ""},  /* fuzzy */
/* pl */ {IDCLS_SET_CIA2_MODEL_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SET_CIA2_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_CIA2_MODEL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_CIA2_MODEL_TR, ""},  /* fuzzy */
#endif

/* c64/c64-cmdline-options.c */
/* en */ {IDCLS_SET_C64_MODEL,    N_("Set C64 model (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs, pet64, ultimax)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_C64_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_C64_MODEL_DE, "W�hle C64 Modell (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs, pet64, ultimax)"},
/* es */ {IDCLS_SET_C64_MODEL_ES, "Seleccionar modelo C64 (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs, pet64, ultimax)"},
/* fr */ {IDCLS_SET_C64_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_C64_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_C64_MODEL_IT, "Imposta modello C64 (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs, pet64, ultimax)"},
/* ko */ {IDCLS_SET_C64_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_C64_MODEL_NL, "Stel C64 model in (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs, pet64, ultimax)"},
/* pl */ {IDCLS_SET_C64_MODEL_PL, "Wybierz model C64 (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs, pet64, ultimax)"},
/* ru */ {IDCLS_SET_C64_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_C64_MODEL_SV, "V�lj C64-modell (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs, pet64, ultimax)"},
/* tr */ {IDCLS_SET_C64_MODEL_TR, ""},  /* fuzzy */
#endif

/* scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SET_SCPU64_MODEL,    N_("Set C64 model (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_SCPU64_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_SCPU64_MODEL_DE, "W�hle C64 Modell (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs)"},
/* es */ {IDCLS_SET_SCPU64_MODEL_ES, "Seleccionar modelo C64 (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs)"},
/* fr */ {IDCLS_SET_SCPU64_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_SCPU64_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_SCPU64_MODEL_IT, "Imposta modello C64 (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs)"},
/* ko */ {IDCLS_SET_SCPU64_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_SCPU64_MODEL_NL, "Stel C64 model in (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs)"},
/* pl */ {IDCLS_SET_SCPU64_MODEL_PL, "Wybierz model C64 (c64/c64c/c64old, ntsc/newntsc/oldntsc, drean, jap, c64gs)"},
/* ru */ {IDCLS_SET_SCPU64_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_SCPU64_MODEL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_SCPU64_MODEL_TR, ""},  /* fuzzy */
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SET_C128_MODEL,    N_("Set C128 model (c128/c128dcr, pal/ntsc)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_C128_MODEL_DA, "Angiv C128-model (c128/c128dcr, pal/ntsc)"},
/* de */ {IDCLS_SET_C128_MODEL_DE, "W�hle C128 Modell (c128/c128dcr, pal/ntsc)"},
/* es */ {IDCLS_SET_C128_MODEL_ES, "Seleccionar modelo C128 (c128/c128dcr, pal/ntsc)"},
/* fr */ {IDCLS_SET_C128_MODEL_FR, "D�finir le mod�le C128 (c128/c128dcr, pal/ntsc)"},
/* hu */ {IDCLS_SET_C128_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_C128_MODEL_IT, "Imposta modello C128 (c128/c128dcr, pal/ntsc)"},
/* ko */ {IDCLS_SET_C128_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_C128_MODEL_NL, "Stel C128 model in (c128/c128dcr, pal/ntsc)"},
/* pl */ {IDCLS_SET_C128_MODEL_PL, "Ustaw model C128 (c128/c128dcr, pal/ntsc)"},
/* ru */ {IDCLS_SET_C128_MODEL_RU, "Set C128 model (c128/c128dcr, pal/ntsc)"},
/* sv */ {IDCLS_SET_C128_MODEL_SV, "V�lj C128-modell (c128/c128dcr, pal/ntsc)"},
/* tr */ {IDCLS_SET_C128_MODEL_TR, "C128 modelini belirle (c128/c128dcr, pal/ntsc)"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_SET_C128_MACHINE_TYPE,    N_("Set C128 machine type (0: International, 1: Finnish, 2: French, 3: German, 4: Italian, 5: Norwegian, 6: Swedish, 7: Swiss)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_C128_MACHINE_TYPE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_C128_MACHINE_TYPE_DE, "W�hle C128 Modell (0: International, 1: Finnisch, 2: Franz�sisch, 3: Deutsch, 4: Italienisch , 5: Norwegisch, 6: Schwedisch, 7: Schweiz)"},
/* es */ {IDCLS_SET_C128_MACHINE_TYPE_ES, "Seleccionar tipo de m�quina C128 (0: Internacional, 1: Finlandesa, 2: Francesa, 3: Alemana, 4: Italiana, 5: Noruega, 6: Sueca, 7: Suiza)"},
/* fr */ {IDCLS_SET_C128_MACHINE_TYPE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_C128_MACHINE_TYPE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_C128_MACHINE_TYPE_IT, "Imposta tipo C128 (0: Internazionale, 1: Finlandese, 2: Francese, 3: Tedesco, 4: Italiano, 5: Norvegese, 6: Svedese, 7: Svizzero)"},
/* ko */ {IDCLS_SET_C128_MACHINE_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_C128_MACHINE_TYPE_NL, "Stel C128 machine soort in (0: Internationaal, 1: Fins, 2: Frans, 3: Duits, 4: Italiaans, 5: Noors, 6: Zweeds, 7: Zwitsers)"},
/* pl */ {IDCLS_SET_C128_MACHINE_TYPE_PL, "Wybierz typ maszyny C128 (0: Mi�dzynarodowy, 1: Fi�ski, 2: Francuski, 3: Niemiecki, 4: W�oski, 5: Norweski, 6: Szwedzki, 7: Szwajcarski)"},
/* ru */ {IDCLS_SET_C128_MACHINE_TYPE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_C128_MACHINE_TYPE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_C128_MACHINE_TYPE_TR, ""},  /* fuzzy */
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_ENABLE_C128_FULL_BANKS,    N_("Enable RAM banks 2 and 3")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_C128_FULL_BANKS_DA, "Aktiv�r RAM-bank 2 og 3"},
/* de */ {IDCLS_ENABLE_C128_FULL_BANKS_DE, "RAM B�nke 2 und 3 aktivieren"},
/* es */ {IDCLS_ENABLE_C128_FULL_BANKS_ES, "Permitir bancos 2 y 3"},
/* fr */ {IDCLS_ENABLE_C128_FULL_BANKS_FR, "Activer les banques RAM 2 et 3"},
/* hu */ {IDCLS_ENABLE_C128_FULL_BANKS_HU, "2-es �s 3-as RAM bankok enged�lyez�se"},
/* it */ {IDCLS_ENABLE_C128_FULL_BANKS_IT, "Attiva banchi RAM 2 e 3"},
/* ko */ {IDCLS_ENABLE_C128_FULL_BANKS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_C128_FULL_BANKS_NL, "RAM bank 2 en 3 inschakelen"},
/* pl */ {IDCLS_ENABLE_C128_FULL_BANKS_PL, "W��cz banki RAM 2 i 3"},
/* ru */ {IDCLS_ENABLE_C128_FULL_BANKS_RU, "Enable RAM banks 2 and 3"},
/* sv */ {IDCLS_ENABLE_C128_FULL_BANKS_SV, "Aktivera RAM-bank 2 och 3"},
/* tr */ {IDCLS_ENABLE_C128_FULL_BANKS_TR, "RAM banklar� 2 ve 3'� aktif et"},
#endif

/* c128/c128-cmdline-options.c */
/* en */ {IDCLS_DISABLE_C128_FULL_BANKS,    N_("Disable RAM banks 2 and 3")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_C128_FULL_BANKS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_C128_FULL_BANKS_DE, "RAM B�nke 2 und 3 deaktivieren"},
/* es */ {IDCLS_DISABLE_C128_FULL_BANKS_ES, "Inhabilitar bancos 2 y 3"},
/* fr */ {IDCLS_DISABLE_C128_FULL_BANKS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_C128_FULL_BANKS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_C128_FULL_BANKS_IT, "Disattiva banchi RAM 2 e 3"},
/* ko */ {IDCLS_DISABLE_C128_FULL_BANKS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_C128_FULL_BANKS_NL, "RAM bank 2 en 3 uitschakelen"},
/* pl */ {IDCLS_DISABLE_C128_FULL_BANKS_PL, "Wy��cz banki RAM 2 i 3"},
/* ru */ {IDCLS_DISABLE_C128_FULL_BANKS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_C128_FULL_BANKS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_C128_FULL_BANKS_TR, ""},  /* fuzzy */
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SET_PLUS4_MODEL,    N_("Set Plus4 model (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_PLUS4_MODEL_DA, "Angiv Plus4-modem (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* de */ {IDCLS_SET_PLUS4_MODEL_DE, "Setze Plus4 Modell (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* es */ {IDCLS_SET_PLUS4_MODEL_ES, "Seleccionar Plus4 model (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* fr */ {IDCLS_SET_PLUS4_MODEL_FR, "D�finir le mod�le Plus4 (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* hu */ {IDCLS_SET_PLUS4_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_PLUS4_MODEL_IT, "Imposta modello Plus4 (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* ko */ {IDCLS_SET_PLUS4_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_PLUS4_MODEL_NL, "Stel Plus4 model in (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* pl */ {IDCLS_SET_PLUS4_MODEL_PL, "Ustaw model Plus4 (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* ru */ {IDCLS_SET_PLUS4_MODEL_RU, "Set Plus4 model (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* sv */ {IDCLS_SET_PLUS4_MODEL_SV, "V�lj Plus4-modell (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
/* tr */ {IDCLS_SET_PLUS4_MODEL_TR, "Plus4 modelini ayarla (c16/c16pal/c16ntsc, plus4/plus4pal/plus4ntsc, v364/cv364, c232)"},
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_SET_VIC20_MODEL,    N_("Set VIC20 model (vic20/vic20pal/vic20ntsc, vic21)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_VIC20_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_VIC20_MODEL_DE, "W�hle VIC20 Modell (vic20/vic20pal/vic20ntsc, vic21)"},
/* es */ {IDCLS_SET_VIC20_MODEL_ES, "Seleccionar modelo  VIC20 (vic20/vic20pal/vic20ntsc, vic21)"},
/* fr */ {IDCLS_SET_VIC20_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_VIC20_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_VIC20_MODEL_IT, "Imposta modello VIC20 (vic20/vic20pal/vic20ntsc, vic21)"},
/* ko */ {IDCLS_SET_VIC20_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_VIC20_MODEL_NL, "Stel VIC20 model in (vic20/vic20pal/vic20ntsc, vic21)"},
/* pl */ {IDCLS_SET_VIC20_MODEL_PL, "Wybierz model VIC20 (vic20/vic20pal/vic20ntsc, vic21)"},
/* ru */ {IDCLS_SET_VIC20_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_VIC20_MODEL_SV, "V�lj VIC20-modell (vic20/vic20pal/vic20ntsc, vic21)"},
/* tr */ {IDCLS_SET_VIC20_MODEL_TR, ""},  /* fuzzy */
#endif

/* c64dtv/c64dtv-cmdline-options.c */
/* en */ {IDCLS_SET_DTV_MODEL,    N_("Set DTV model (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DTV_MODEL_DA, "Angiv DTV-model (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* de */ {IDCLS_SET_DTV_MODEL_DE, "Setze DTV Modell (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* es */ {IDCLS_SET_DTV_MODEL_ES, "Seleccionar DTV model (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* fr */ {IDCLS_SET_DTV_MODEL_FR, "D�finir le mod�le DTV (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* hu */ {IDCLS_SET_DTV_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_DTV_MODEL_IT, "Imposta modello DTV (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* ko */ {IDCLS_SET_DTV_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DTV_MODEL_NL, "Stel DTV model in (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* pl */ {IDCLS_SET_DTV_MODEL_PL, "Ustaw model DTV (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* ru */ {IDCLS_SET_DTV_MODEL_RU, "Set DTV model (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* sv */ {IDCLS_SET_DTV_MODEL_SV, "V�lj DTV-modell (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
/* tr */ {IDCLS_SET_DTV_MODEL_TR, "DTV modelini ayarla (v2/v2pal/v2ntsc, v3/v3pal/v3ntsc, hummer)"},
#endif

/* c64/c64-cmdline-options.c, cbm2/cbm2-cmdline-options.c,
   pet/pet-cmdline-options.c, plus4/plus4-cmdline-options.c,
   vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_KERNAL_ROM_NAME,    N_("Specify name of Kernal ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_DA, "Angiv navn p� kernal-ROM-image"},
/* de */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_DE, "Name von Kernal ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_ES, "Especificar nombre de la imagen ROM Kernal"},
/* fr */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_FR, "Sp�cifier le nom de l'image ROM Kernal"},
/* hu */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_HU, "Adja meg a Kernal ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_IT, "Specifica il nome immagine della ROM del Kernal"},
/* ko */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_NL, "Geef de naam van het Kernal ROM bestand"},
/* pl */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Kernala"},
/* ru */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_RU, "Specify name of Kernal ROM image"},
/* sv */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_SV, "Ange namn p� kernal-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_KERNAL_ROM_NAME_TR, "Kernal ROM imaj�n�n ismini belirt"},
#endif

/* scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_SCPU64_ROM_NAME,    N_("Specify name of SCPU64 ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_DE, "Name von SCPU64 ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_ES, "Especificar nombre imagen ROM SCPU64"},
/* fr */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_IT, "Specifica il nome immagine della ROM della SCPU64"},
/* ko */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_NL, "Geef de naam van het SCPU64 ROM bestand"},
/* pl */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_PL, "Okre�l nazw� obrazu ROM SCPU64"},
/* ru */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_SCPU64_ROM_NAME_TR, ""},  /* fuzzy */
#endif

/* c64/c64-cmdline-options.c, cbm2/cbm2-cmdline-options.c,
   pet/pet-cmdline-options.c, plus4/plus4-cmdline-options.c,
   vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_BASIC_ROM_NAME,    N_("Specify name of BASIC ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BASIC_ROM_NAME_DA, "Angiv navn p� BASIC-ROM-image"},
/* de */ {IDCLS_SPECIFY_BASIC_ROM_NAME_DE, "Name von Basic ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_BASIC_ROM_NAME_ES, "Especificar nombre de la imagen ROM BASIC"},
/* fr */ {IDCLS_SPECIFY_BASIC_ROM_NAME_FR, "Sp�cifier le nom de l'image BASIC ROM"},
/* hu */ {IDCLS_SPECIFY_BASIC_ROM_NAME_HU, "Adja meg a BASIC ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_BASIC_ROM_NAME_IT, "Specifica il nome immagine della ROM del BASIC"},
/* ko */ {IDCLS_SPECIFY_BASIC_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BASIC_ROM_NAME_NL, "Geef de naam van het BASIC ROM bestand"},
/* pl */ {IDCLS_SPECIFY_BASIC_ROM_NAME_PL, "Okre�l nazw� obrazu BASIC ROM"},
/* ru */ {IDCLS_SPECIFY_BASIC_ROM_NAME_RU, "Specify name of BASIC ROM image"},
/* sv */ {IDCLS_SPECIFY_BASIC_ROM_NAME_SV, "Ange namn p� BASIC-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_BASIC_ROM_NAME_TR, "BASIC ROM imaj�n�n ismini belirt"},
#endif

/* c64/c64-cmdline-options.c, cbm2/cbm2-cmdline-options.c,
   pet/pet-cmdline-options.c, vic20/vic20-cmdline-options.c,
   scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME,    N_("Specify name of character generator ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_DA, "Angiv navn p� BASIC-ROM-image"},
/* de */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_DE, "Name von Character ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_ES, "Especificar el nombre de la imagen ROM generador de caracteres"},
/* fr */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_FR, "Sp�cifier le nom de l'image du g�n�rateur de caract�res"},
/* hu */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_HU, "Adja meg a karaktergener�tor ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_IT, "Specifica il nome della ROM del generatore di caratteri"},
/* ko */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_NL, "Geef de naam van het CHARGEN ROM bestand"},
/* pl */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_PL, "Okre�l nazw� obrazu ROM tworzenia znak�w"},
/* ru */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_RU, "Specify name of character generator ROM image"},
/* sv */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_SV, "Ange namn p� teckengenerator-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_CHARGEN_ROM_NAME_TR, "Karakter Olu�turucu ROM imaj�n�n ismini belirt"},
#endif

/* c64/c64-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2,    N_("Specify index of keymap file (0=sym, 1=symDE, 2=pos)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_DA, "Angiv indeks for tastaturindstillingsfil (0=symbolsk, 1=symbolsk tysk, 2=positionsbestemt)"},
/* de */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_DE, "Index f�r Keymap Datei festlegen (0=symbol, 1=symDE, 2=positional)"},
/* es */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_ES, "Especificar �ndice fichero mapa teclado (0=sim, 1=simAL, 2=pos)"},
/* fr */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_FR, "Sp�cifier l'index du fichier keymap (0=sym, 1=symDE, 2=pos)"},
/* hu */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_HU, "Adja meg a billenty�zet lek�pz�si f�jl t�pus�t (0=szimbolikus, 1=n�met szimbolikus, 2=poz�ci� szerinti)"},
/* it */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_IT, "Specifica l'indice del file della mappa della tastiera (0=sim, 1=simGER, 2=pos)"},
/* ko */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_NL, "Geef de index van het toetstoewijzingsbestand (0=sym, 1=symDE, 2=pos)"},
/* pl */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_PL, "Podaj indeks dla uk�adu klawiatury (0=symbol, 1=symbolDE, 2=pozycja)"},
/* ru */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_RU, "Specify index of keymap file (0=sym, 1=symDE, 2=pos)"},
/* sv */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_SV, "Ange index f�r f�r tangentbordsinst�llningsfil (0=symbolisk, 1=symbolisk tysk, 2=positionsriktig)"},
/* tr */ {IDCLS_SPECIFY_INDEX_KEYMAP_FILE_0_2_TR, "Tu� haritas� dosyas�n�n indeksini belirt (0=sembol, 1=sembol Almanca, 2=konumsal)"},
#endif

/* c64/c64-cmdline-options.c, scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP,    N_("Specify name of symbolic German keymap file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_DA, "Angiv fil for tysk symbolsk tastaturindstilling"},
/* de */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_DE, "Name von symbolischer Keymap Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_ES, "Especificar nombre del fichero teclado simb�lico alem�n"},
/* fr */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_FR, "Sp�cifier le nom du fichier symbolique de mappage clavier"},
/* hu */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_HU, "Adja meg a nev�t a n�met billenty�zet lek�pz�s f�jlnak"},
/* it */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_IT, "Specifica il nome del file della mappa simbolica della tastiera tedesca"},
/* ko */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_NL, "Geef de naam van het symbolische Duitse toetstoewijzingsbestand"},
/* pl */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_PL, "Okre�l nazw� pliku symbolicznego niemieckiego uk�adu klawiatury"},
/* ru */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_RU, "Specify name of symbolic German keymap file"},
/* sv */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_SV, "Ange fil f�r tysk symbolisk tangentbordsemulering"},
/* tr */ {IDCLS_SPECIFY_NAME_SYM_DE_KEYMAP_TR, "Sembolik Almanca tu� haritas� dosyas�n�n ismini belirt"},
#endif

/* c64/c64gluelogic.c */
/* en */ {IDCLS_SET_GLUE_LOGIC_TYPE,    N_("Set glue logic type (0 = discrete, 1 = 252535-01)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_GLUE_LOGIC_TYPE_DA, "V�lg glue logic type (0=diskret, 1=252535-01)"},
/* de */ {IDCLS_SET_GLUE_LOGIC_TYPE_DE, "Setze Glue-Lokig Typ (0 = diskret, 1 = 252535-01)"},
/* es */ {IDCLS_SET_GLUE_LOGIC_TYPE_ES, "Seleccionar tipo de 'glue' l�gico (0 = discrete, 1 = 252535-01)"},
/* fr */ {IDCLS_SET_GLUE_LOGIC_TYPE_FR, "D�finir le type de logique glue (0 = discr�te, 1 = 252535-01)"},
/* hu */ {IDCLS_SET_GLUE_LOGIC_TYPE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_GLUE_LOGIC_TYPE_IT, "Imposta il tipo di glue logic (0 = discreta, 1 = 252535-01)"},
/* ko */ {IDCLS_SET_GLUE_LOGIC_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_GLUE_LOGIC_TYPE_NL, "Stel glue logic type in (0 = discreet, 1 = 252535-01)"},
/* pl */ {IDCLS_SET_GLUE_LOGIC_TYPE_PL, "Ustaw typ glue logic (0 = dyskretna, 1 = 252535-01)"},
/* ru */ {IDCLS_SET_GLUE_LOGIC_TYPE_RU, "Set glue logic type (0 = discrete, 1 = 252535-01)"},
/* sv */ {IDCLS_SET_GLUE_LOGIC_TYPE_SV, "V�lj typ av klisterlogik (0 = diskret, 1 = 252535-01)"},
/* tr */ {IDCLS_SET_GLUE_LOGIC_TYPE_TR, "Glue logic tipini ayarla (0 = ba�lant�y� kes, 1 = 252535-01)"},
#endif

/* c64dtv/c64dtv-cmdline-options.c */
/* en */ {IDCLS_ENABLE_HUMMER_ADC,    N_("Enable Hummer ADC")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_HUMMER_ADC_DA, "Aktiv�r Hummer ADC"},
/* de */ {IDCLS_ENABLE_HUMMER_ADC_DE, "Hummer ADC Aktivieren"},
/* es */ {IDCLS_ENABLE_HUMMER_ADC_ES, "Permitir Hummer ADC"},
/* fr */ {IDCLS_ENABLE_HUMMER_ADC_FR, "Activer Hummer ADC"},
/* hu */ {IDCLS_ENABLE_HUMMER_ADC_HU, "Hummer ADC enged�lyez�se"},
/* it */ {IDCLS_ENABLE_HUMMER_ADC_IT, "Attiva Hummer ADC"},
/* ko */ {IDCLS_ENABLE_HUMMER_ADC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_HUMMER_ADC_NL, "Hummer ADC inschakelen"},
/* pl */ {IDCLS_ENABLE_HUMMER_ADC_PL, "W��cz Hummer ADC"},
/* ru */ {IDCLS_ENABLE_HUMMER_ADC_RU, "Enable Hummer ADC"},
/* sv */ {IDCLS_ENABLE_HUMMER_ADC_SV, "Aktivera Hummer-A/D-omvandlare"},
/* tr */ {IDCLS_ENABLE_HUMMER_ADC_TR, "Hummer ADC'yi aktif et"},
#endif

/* c64dtv/c64dtv-cmdline-options.c */
/* en */ {IDCLS_DISABLE_HUMMER_ADC,    N_("Disable Hummer ADC")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_HUMMER_ADC_DA, "Deaktiv�r Hummer ADC"},
/* de */ {IDCLS_DISABLE_HUMMER_ADC_DE, "Hummer ADC deaktivieren"},
/* es */ {IDCLS_DISABLE_HUMMER_ADC_ES, "Deshabilitar Hummer ADC"},
/* fr */ {IDCLS_DISABLE_HUMMER_ADC_FR, "D�sactiver Hummer ADC"},
/* hu */ {IDCLS_DISABLE_HUMMER_ADC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_HUMMER_ADC_IT, "Disattiva Hummer ADC"},
/* ko */ {IDCLS_DISABLE_HUMMER_ADC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_HUMMER_ADC_NL, "Hummer ADC uitschakelen"},
/* pl */ {IDCLS_DISABLE_HUMMER_ADC_PL, "Wy��cz Hummer ADC"},
/* ru */ {IDCLS_DISABLE_HUMMER_ADC_RU, "Disable Hummer ADC"},
/* sv */ {IDCLS_DISABLE_HUMMER_ADC_SV, "Inaktivera Hummer-A/D-omvandlare"},
/* tr */ {IDCLS_DISABLE_HUMMER_ADC_TR, "Hummer ADC'yi pasifle�tir"},
#endif

/* c64/c64io.c, vic20/vic20io.c */
/* en */ {IDCLS_SELECT_CONFLICT_HANDLING,    N_("Select the way the I/O collisions should be handled, (0: error message and detach all involved carts, 1: error message and detach last attached involved carts, 2: warning in log and 'AND' the valid return values")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SELECT_CONFLICT_HANDLING_DA, "V�lg hvordan I/O-kollisioner skal h�ndteres (0: fejlbesked og afbryd alle involverede cartridges, 1: fejlbesked og afbryd senest tilsluttede cartridge, 2: Advarsel i log og returner 'logisk OG' af de gyldige returv�rdier)"},
/* de */ {IDCLS_SELECT_CONFLICT_HANDLING_DE, "W�hle, wie I/O Kollisionen behandelt werden sollen, (0: Fehler Meldung\nund Entfernen s�mtlicher betroffener Module, 1: Fehler Meldung und\nEntfernen des letzten Moduls, 2: Warnung im Log und liefere logische\nUND-Verkn�pfung g�ltiger R�ckgabewerte"},
/* es */ {IDCLS_SELECT_CONFLICT_HANDLING_ES, "Seleccionar la forma en que las colisiones deben ser manejadas, (0: mensaje de error y desconectar todas los cartuchos involucrados, 1: mensaje de error y desconectar el �ltimo cartucho involucrado, 2: advertencia en  log y 'AND' los valores v�lidos de retorno"},
/* fr */ {IDCLS_SELECT_CONFLICT_HANDLING_FR, "S�lectionner la fa�on que les collisions E/S devraient �tre trait�es, (0: message d'erreur et d�tachement de toutes les cartouches impliqu�es, 1: message d'erreur et d�tachement de la derni�re cartouches impliqu�es � avoir �t� attach�e, 2: message d'avertissement avec journalisation et 'ET' les valeurs de retour valides"},
/* hu */ {IDCLS_SELECT_CONFLICT_HANDLING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SELECT_CONFLICT_HANDLING_IT, "Seleziona come gestire le collisioni di I/O, (0: messaggio di errore e rimozione di tutte le cartucce coinvolte, 1: messaggio di errore e rimozione delle ultima cartucce coinvolte, 2: warning nei log e 'AND' il valore di ritorno valido"},
/* ko */ {IDCLS_SELECT_CONFLICT_HANDLING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SELECT_CONFLICT_HANDLING_NL, "Selecteer de manier waarop I/O conflicten worden afgehandeld, (0: foutmelding en ontkoppel alle betrokken cartridges, 1: foutmelding en ontkoppel alle cartridges behalve de eerste cartridge, 2: waarschuwing in het logbestand en doe een logische 'AND' met de teruggegeven waarden"},
/* pl */ {IDCLS_SELECT_CONFLICT_HANDLING_PL, "Wybierz metod� obs�ugi konflikt�w we/wy, (0: komunikat b��du i od��czenie wszystkich konfliktuj�cych kartrid��w, 1: komunikat b��du i od��czenie ostatnio pod��czonych konfliktuj�cych kartrid��w, 2: ostrze�enie w logu i 'AND' w�a�ciwe warto�ci)"},
/* ru */ {IDCLS_SELECT_CONFLICT_HANDLING_RU, "Select the way the I/O collisions should be handled, (0: error message and detach all involved carts, 1: error message and detach last attached involved carts, 2: warning in log and 'AND' the valid return values"},
/* sv */ {IDCLS_SELECT_CONFLICT_HANDLING_SV, "V�ljer hur I/O-kollisioner skall hanteras, (0: felmeddelande och koppla fr�n alla inblandade moduler, 1: felmeddelande och koppla fr�n sist anslutna inblandade modul, 2: varning i logg och logisk OCH p� giltiga returv�rden)"},
/* tr */ {IDCLS_SELECT_CONFLICT_HANDLING_TR, "G/� �ak��malar�n�n de�erlendirilme y�ntemini se�, (0: hata mesaj� ve t�m ilgili cihazlar�n ��kar�lmas�, 1: hata mesaj� ve en son tak�lm�� t�m ilgili cihazlar�n ��kar�lmas�, 2: log'a uyar� yaz�lmas� ve ge�erli d�n�� de�erlerinin 'VE'lenmesi"},
#endif

/* userport/userport.c */
/* en */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING,    N_("Select the way the Userport collisions should be handled, (0: error message and detach all involved devices, 1: error message and detach last attached involved device, 2: warning in log and 'AND' the valid return values")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_DE, "W�hle, wie Userport Kollisionen behandelt werden sollen, (0: Fehler Meldung\nund Entfernen s�mtlicher betroffener Ger�te, 1: Fehler Meldung und\nEntfernen des letzten Ger�ts, 2: Warnung im Log und liefere logische\nUND-Verkn�pfung g�ltiger R�ckgabewerte"},
/* es */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_NL, "Selecteer de manier waarop userport conflicten worden afgehandeld, (0: foutmelding en ontkoppel alle betrokken apparaten, 1: foutmelding en ontkoppel alle apparaten behalve het eerste apparaat, 2: waarschuwing in het logbestand en doe een logische 'AND' met de teruggegeven waarden"},
/* pl */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SELECT_USERPORT_CONFLICT_HANDLING_TR, ""},  /* fuzzy */
#endif

/* c64/cart/c64tpi.c */
/* en */ {IDCLS_ENABLE_IEEE488_INTERFACE,    N_("Enable the IEEE488 interface emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEEE488_INTERFACE_DA, "Aktiv�r emulering af IEEE488-interface"},
/* de */ {IDCLS_ENABLE_IEEE488_INTERFACE_DE, "IEEE488 Schnittstellen-Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_IEEE488_INTERFACE_ES, "Permitir emulaci�n interface IEEE488"},
/* fr */ {IDCLS_ENABLE_IEEE488_INTERFACE_FR, "Activer l'interface d'�mulation IEEE488"},
/* hu */ {IDCLS_ENABLE_IEEE488_INTERFACE_HU, "IEEE488 interf�sz emul�ci� enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEEE488_INTERFACE_IT, "Attiva emulazione interfaccia IEEE488"},
/* ko */ {IDCLS_ENABLE_IEEE488_INTERFACE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEEE488_INTERFACE_NL, "IEEE488 interface emulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_IEEE488_INTERFACE_PL, "W��cz emulacj� interfejsu IEEE488"},
/* ru */ {IDCLS_ENABLE_IEEE488_INTERFACE_RU, "Enable the IEEE488 interface emulation"},
/* sv */ {IDCLS_ENABLE_IEEE488_INTERFACE_SV, "Aktivera emulering av IEEE488-gr�nssnitt"},
/* tr */ {IDCLS_ENABLE_IEEE488_INTERFACE_TR, "IEEE488 arabirim em�lasyonunu aktif et"},
#endif

/* c64/cart/c64tpi.c */
/* en */ {IDCLS_DISABLE_IEEE488_INTERFACE,    N_("Disable the IEEE488 interface emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEEE488_INTERFACE_DA, "Deaktiv�r emulering af IEEE488-interface"},
/* de */ {IDCLS_DISABLE_IEEE488_INTERFACE_DE, "IEEE488 Schnittstellen-Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_IEEE488_INTERFACE_ES, "Deshabilitar emulaci�n interface IEEE488"},
/* fr */ {IDCLS_DISABLE_IEEE488_INTERFACE_FR, "D�sactiver l'interface d'�mulation IEEE488"},
/* hu */ {IDCLS_DISABLE_IEEE488_INTERFACE_HU, "IEEE488 interf�sz emul�ci� tilt�sa"},
/* it */ {IDCLS_DISABLE_IEEE488_INTERFACE_IT, "Disattiva emulazione interfaccia IEEE488"},
/* ko */ {IDCLS_DISABLE_IEEE488_INTERFACE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEEE488_INTERFACE_NL, "IEEE488 interface emulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEEE488_INTERFACE_PL, "Wy��cz emulacj� interfejsu IEEE488"},
/* ru */ {IDCLS_DISABLE_IEEE488_INTERFACE_RU, "Disable the IEEE488 interface emulation"},
/* sv */ {IDCLS_DISABLE_IEEE488_INTERFACE_SV, "Inaktivera emulering av IEEE488-gr�nssnitt"},
/* tr */ {IDCLS_DISABLE_IEEE488_INTERFACE_TR, "IEEE488 arabirim em�lasyonunu pasifle�tir"},
#endif

/* c64/cart/c64tpi.c */
/* en */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME,    N_("specify IEEE488 interface image name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_DA, "angiv IEEE488-interface image navn"},
/* de */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_DE, "IEEE488 Schnittstellenmodul Imagename"},
/* es */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_ES, "Especificar nombre imagen interface IEEE488"},
/* fr */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_FR, "sp�cifier le nom de l'image d'interface IEEE-488"},
/* hu */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_IT, "specifica il nome immagine dell'interfaccia IEEE488"},
/* ko */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_NL, "Geef de naam van het IEEE488 interface bestand"},
/* pl */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_PL, "Okre�l nazw� obrazu interfejsu IEEE488"},
/* ru */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_RU, "specify IEEE488 interface image name"},
/* sv */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_SV, "ange namn p� IEEE488-gr�nssnittsfil"},
/* tr */ {IDCLS_SPECIFY_IEEE488_INTERFACE_NAME_TR, "IEEE488 arabirimi imaj ismini belirleyin"},
#endif

/* samplerdrv/file_drv.c */
/* en */ {IDCLS_SPECIFY_SAMPLE_NAME,    N_("Specify name of sample file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_SAMPLE_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_SAMPLE_NAME_DE, "Namen f�r Sample Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_SAMPLE_NAME_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_SAMPLE_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_SAMPLE_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_SAMPLE_NAME_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_SAMPLE_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_SAMPLE_NAME_NL, "Geef naam van het samplebestand"},
/* pl */ {IDCLS_SPECIFY_SAMPLE_NAME_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_SAMPLE_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_SAMPLE_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_SAMPLE_NAME_TR, ""},  /* fuzzy */
#endif

/* tapeport/tape_diag_586220_harness.c */
/* en */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS,    N_("Enable the tape part of the 586220 diagnostics harness")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_DE, "586220 Diagnose Harness f�r Bandteil aktivieren"},
/* es */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_NL, "Tape onderdeel van de 586220 diagnostics gareel inschakelen"},
/* pl */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TAPE_DIAG_586220_HARNESS_TR, ""},  /* fuzzy */
#endif

/* tapeport/tape_diag_586220_harness.c */
/* en */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS,    N_("Disable the tape part of the 586220 diagnostics harness")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_DE, "586220 Diagnose Harness f�r Bandteil deaktivieren"},
/* es */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_NL, "Tape onderdeel van de 586220 diagnostics gareel uitschakelen"},
/* pl */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_TAPE_DIAG_586220_HARNESS_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapelog.c */
/* en */ {IDCLS_ENABLE_TAPELOG,    N_("Enable the tape log device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TAPELOG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TAPELOG_DE, "Bandlog Ger�t aktivieren"},
/* es */ {IDCLS_ENABLE_TAPELOG_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TAPELOG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TAPELOG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TAPELOG_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TAPELOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TAPELOG_NL, "Tape log apparaat inschakelen"},
/* pl */ {IDCLS_ENABLE_TAPELOG_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TAPELOG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TAPELOG_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TAPELOG_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapelog.c */
/* en */ {IDCLS_DISABLE_TAPELOG,    N_("Disable the tape log device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TAPELOG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_TAPELOG_DE, "Bandlog Ger�t deaktivieren"},
/* es */ {IDCLS_DISABLE_TAPELOG_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_TAPELOG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_TAPELOG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_TAPELOG_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_TAPELOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TAPELOG_NL, "Tape log apparaat uitschakelen"},
/* pl */ {IDCLS_DISABLE_TAPELOG_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_TAPELOG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_TAPELOG_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_TAPELOG_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapelog.c */
/* en */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE,    N_("Enable logging to a file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_DE, "Logging auf Datei aktivieren"},
/* es */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_NL, "Logboekvermeldingen schrijven naar een bestand inschakelen"},
/* pl */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TAPELOG_LOG_TO_FILE_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapelog.c */
/* en */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG,    N_("Enable logging to the emulator log file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_DE, "Logging auf Emaulatorlogdatei aktivieren"},
/* es */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_NL, "Schrijven naar het emulator log bestand inschakelen"},
/* pl */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TAPELOG_LOG_TO_LOG_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapelog.c */
/* en */ {IDCLS_SPECIFY_TAPELOG_NAME,    N_("Specify tape log file name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TAPELOG_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_TAPELOG_NAME_DE, "Bandlogdateiname ausw�hlen"},
/* es */ {IDCLS_SPECIFY_TAPELOG_NAME_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_TAPELOG_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_TAPELOG_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_TAPELOG_NAME_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_TAPELOG_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TAPELOG_NAME_NL, "Geef de naam van het tape logbestand"},
/* pl */ {IDCLS_SPECIFY_TAPELOG_NAME_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_TAPELOG_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_TAPELOG_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_TAPELOG_NAME_TR, ""},  /* fuzzy */
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_ENABLE_GEORAM,    N_("Enable the GEO-RAM expansion unit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_GEORAM_DA, "Aktiv�r GEO-RAM-udviddelsesenheden"},
/* de */ {IDCLS_ENABLE_GEORAM_DE, "GEO-RAM Erweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_GEORAM_ES, "Permitir unidad expansi�n GEO-RAM"},
/* fr */ {IDCLS_ENABLE_GEORAM_FR, "Activer l'unit� d'expansion GEO-RAM"},
/* hu */ {IDCLS_ENABLE_GEORAM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_GEORAM_IT, "Attiva l'espansione GEO-RAM"},
/* ko */ {IDCLS_ENABLE_GEORAM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_GEORAM_NL, "GEO-RAM uitbreidingseenheid inschakelen"},
/* pl */ {IDCLS_ENABLE_GEORAM_PL, "W��cz jednostk� rozszerzenia GEO-RAM"},
/* ru */ {IDCLS_ENABLE_GEORAM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_GEORAM_SV, "Aktivera GEORAM-expansionsenhet"},
/* tr */ {IDCLS_ENABLE_GEORAM_TR, "GEO-RAM geni�letme birimini aktif et"},
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_DISABLE_GEORAM,    N_("Disable the GEO-RAM expansion unit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_GEORAM_DA, "Deaktiv�r GEO-RAM-udviddelsesenhed"},
/* de */ {IDCLS_DISABLE_GEORAM_DE, "GEO-RAM Erweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_GEORAM_ES, "Deshabilitar unidad expansi�n GEO-RAM"},
/* fr */ {IDCLS_DISABLE_GEORAM_FR, "D�sactiver l'unit� d'expansion GEO-RAM"},
/* hu */ {IDCLS_DISABLE_GEORAM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_GEORAM_IT, "Disattiva l'espansione GEO-RAM"},
/* ko */ {IDCLS_DISABLE_GEORAM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_GEORAM_NL, "GEO-RAM uitbreidingseenheid uitschakelen"},
/* pl */ {IDCLS_DISABLE_GEORAM_PL, "Wy��cz jednostk� rozszerzenia GEO-RAM"},
/* ru */ {IDCLS_DISABLE_GEORAM_RU, "���������� ������ GEORAM"},
/* sv */ {IDCLS_DISABLE_GEORAM_SV, "Inaktivera GEO RAM-expansionsenhet"},
/* tr */ {IDCLS_DISABLE_GEORAM_TR, "GEO-RAM geni�letme birimini pasifle�tir"},
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_SPECIFY_GEORAM_NAME,    N_("Specify name of GEORAM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_GEORAM_NAME_DA, "Angiv navn p� GEORAM-image"},
/* de */ {IDCLS_SPECIFY_GEORAM_NAME_DE, "GEORAM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_GEORAM_NAME_ES, "Especificar nombre imagen GEORAM"},
/* fr */ {IDCLS_SPECIFY_GEORAM_NAME_FR, "Sp�cifier le nom de l'image GEO-RAM"},
/* hu */ {IDCLS_SPECIFY_GEORAM_NAME_HU, "Adja meg a GEORAM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_GEORAM_NAME_IT, "Specifica il nome immagine GEORAM"},
/* ko */ {IDCLS_SPECIFY_GEORAM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_GEORAM_NAME_NL, "Geef de naam van het GEORAM bestand"},
/* pl */ {IDCLS_SPECIFY_GEORAM_NAME_PL, "Okre�l nazw� obrazu GEORAM"},
/* ru */ {IDCLS_SPECIFY_GEORAM_NAME_RU, "Specify name of GEORAM image"},
/* sv */ {IDCLS_SPECIFY_GEORAM_NAME_SV, "Ange namn p� GEORAM-avbildning"},
/* tr */ {IDCLS_SPECIFY_GEORAM_NAME_TR, "GEORAM imaj�n�n ismini belirt"},
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE,    N_("Allow writing to GEORAM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_DA, "Tillad skrivning til GEORAM-image."},
/* de */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_DE, "Schreibzugriff auf GEORAM Image erlauben"},
/* es */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_ES, "Permitir grabaci�n sobre imagen GEORAM"},
/* fr */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_FR, "Permettre l'�criture sur l'image GEO-RAM"},
/* hu */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_IT, "Attiva la scrittura su immagine GEORAM"},
/* ko */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_NL, "Schrijven naar GEORAM bestand toestaan"},
/* pl */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_PL, "Pozw�l na zapis do obrazu GEORAM"},
/* ru */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_RU, "Allow writing to GEORAM image"},
/* sv */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_SV, "Till�t skrivning till GEORAM-avbildning"},
/* tr */ {IDCLS_ALLOW_WRITING_TO_GEORAM_IMAGE_TR, "GEORAM imaj�na yazmay� aktif et"},
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE,    N_("Do not write to GEORAM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_DA, "Skriv ikke til GEORAM-image"},
/* de */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_DE, "Kein Schreibzugriff auf GEORAM Image"},
/* es */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_ES, "No grabar en imagen GEORAM"},
/* fr */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_FR, "Ne pas �crire sur l'image GEO-RAM"},
/* hu */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_IT, "Disattiva la scrittura su immagine GEORAM"},
/* ko */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_NL, "Schrijf niet naar GEORAM bestand"},
/* pl */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_PL, "Nie zapisuj do obrazu GEORAM"},
/* ru */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_RU, "Do not write to GEORAM image"},
/* sv */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_SV, "Skriv inte till GEORAM-avbildning"},
/* tr */ {IDCLS_DO_NOT_WRITE_TO_GEORAM_IMAGE_TR, "GEORAM imaj�na yazma"},
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_SWAP_CART_IO,    N_("Swap io mapping (map cart I/O-1 to VIC20 I/O-3 and cart I/O-2 to VIC20 I/O-2)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SWAP_CART_IO_DA, "Ombyt I/O-forbindelse (forbind cart I/O-1 til VIC20 I/O-3 og cart I/O-2 til VIC20 I/O-2)"},
/* de */ {IDCLS_SWAP_CART_IO_DE, "Vertausche IO Zuordnung (cart I/O-1 auf VIC20 I/O-3 und cart I/O-2 auf VIC20 I/O-2)"},
/* es */ {IDCLS_SWAP_CART_IO_ES, "Intercambiar mapeado IO (map cart I/O-1 to VIC20 I/O-3 and cart I/O-2 to VIC20 I/O-2)"},
/* fr */ {IDCLS_SWAP_CART_IO_FR, "�changer le mappage E/S (mapper I/O-1 cartouche � I/O-3 VIC20 et I/O-2 cartouche � I/O-2 VIC20)"},
/* hu */ {IDCLS_SWAP_CART_IO_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SWAP_CART_IO_IT, "Scambia mapping di I/O (mappa I/O-1 cart su I/O-3 VIC20 e I/O-2 cart su I/O-2 VIC20)"},
/* ko */ {IDCLS_SWAP_CART_IO_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SWAP_CART_IO_NL, "Verwissel de io toewijzing (verwijs cart I/O-1 naar VIC20 I/O-3 en cart I/O-2 naar VIC20 I/O-2)"},
/* pl */ {IDCLS_SWAP_CART_IO_PL, "Zamie� mapowanie we/wy (mapuj  we/wy-1  kartrid�a do we/wy-3 VIC20 i we/wy-2 kartid�a do we/wy-2 VIC20)"},
/* ru */ {IDCLS_SWAP_CART_IO_RU, "Swap io mapping (map cart I/O-1 to VIC20 I/O-3 and cart I/O-2 to VIC20 I/O-2)"},
/* sv */ {IDCLS_SWAP_CART_IO_SV, "V�xla io-mappning (mappa modul-I/O 1 till VIC20-I/O 3 och modul-I/O 2 till VIC20-I/O 2)"},
/* tr */ {IDCLS_SWAP_CART_IO_TR, "G/� haritalamas�n� yer de�i�tir (harita kart� G/�-1 ile VIC20 G/�-3 ve kart G/�-2 ile VIC20 G/�-2)"},
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_DONT_SWAP_CART_IO,    N_("Don't swap io mapping (map cart I/O-1 to VIC20 I/O-2 and cart I/O-2 to VIC20 I/O-3)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DONT_SWAP_CART_IO_DA, "Ombyt ikke I/O-forbindelse (forbind cart I/O-1 til VIC20 I/O-2 og cart I/O-2 til VIC20 I/O-3)"},
/* de */ {IDCLS_DONT_SWAP_CART_IO_DE, "Keine Vertauschung der IO Zuordnung (cart I/O-1 auf VIC20 I/O-2 und cart I/O-2 auf VIC20 I/O-3)"},
/* es */ {IDCLS_DONT_SWAP_CART_IO_ES, "No intercambiar mapeado IO (map cart I/O-1 to VIC20 I/O-2 and cart I/O-2 to VIC20 I/O-3)"},
/* fr */ {IDCLS_DONT_SWAP_CART_IO_FR, "Ne pas �changer le mappage E/S (mapper I/O-1 cartouche � I/O-2 VIC20 et I/O-2 cartouche � I/O-3 VIC20)"},
/* hu */ {IDCLS_DONT_SWAP_CART_IO_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DONT_SWAP_CART_IO_IT, "Non scambiare mapping di I/O (mappa I/O-1 cart su I/O-2 VIC20 e I/O-2 cart su I/O-3 VIC20)"},
/* ko */ {IDCLS_DONT_SWAP_CART_IO_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DONT_SWAP_CART_IO_NL, "Verwissel de io toewijzing niet (verwijs cart I/O-1 naar VIC20 I/O-2 en cart I/O-2 naar VIC20 I/O-3)"},
/* pl */ {IDCLS_DONT_SWAP_CART_IO_PL, "Nie zamieniaj mapowania we/wy (mapuj  we/wy-1  kartrid�a do we/wy-2 VIC20 i we/wy-2 kartid�a do we/wy-3 VIC20)"},
/* ru */ {IDCLS_DONT_SWAP_CART_IO_RU, "Don't swap io mapping (map cart I/O-1 to VIC20 I/O-2 and cart I/O-2 to VIC20 I/O-3)"},
/* sv */ {IDCLS_DONT_SWAP_CART_IO_SV, "V�xla inte io-mappning (mappa modul-I/O 1 till VIC20-I/O 2 och modul-I/O 2 till VIC20-I/O 3)"},
/* tr */ {IDCLS_DONT_SWAP_CART_IO_TR, "G/� haritalamas�n� yer de�i�tirme (harita kart� G/�-1 ile VIC20 G/�-2 ve kart G/�-2 ile VIC20 G/�-3)"},
#endif

/* c64/cart/sfx_soundexpander.c, c64/cart/sfx_soundsampler.c */
/* en */ {IDCLS_MAP_CART_IO_2,    N_("Swap io mapping (map cart I/O to VIC20 I/O-2)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MAP_CART_IO_2_DA, "Ombyt I/O-forbindelse (forbind cart I/O til VIC20 I/O-2)"},
/* de */ {IDCLS_MAP_CART_IO_2_DE, "Vertausche IO Zuordnung (cart I/O auf VIC20 I/O-2)"},
/* es */ {IDCLS_MAP_CART_IO_2_ES, "Intercambiar mapeado IO (map cart I/O to VIC20 I/O-2)"},
/* fr */ {IDCLS_MAP_CART_IO_2_FR, "�changer le mappage E/S (mapper I/O cartouche � I/O-2 VIC20)"},
/* hu */ {IDCLS_MAP_CART_IO_2_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MAP_CART_IO_2_IT, "Scambia mapping di I/O (mappa I/O cart su I/O-2 VIC20)"},
/* ko */ {IDCLS_MAP_CART_IO_2_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MAP_CART_IO_2_NL, "Verwissel de io toewijzing (verwijs cart I/O naar VIC20 I/O-2)"},
/* pl */ {IDCLS_MAP_CART_IO_2_PL, "Zamie� mapowanie we/wy (mapuj  we/wy  kartrid�a do we/wy-2 VIC20)"},
/* ru */ {IDCLS_MAP_CART_IO_2_RU, "Swap io mapping (map cart I/O to VIC20 I/O-2)"},
/* sv */ {IDCLS_MAP_CART_IO_2_SV, "V�xla io-mappning (mappa modul-I/O till VIC20-I/O 2)"},
/* tr */ {IDCLS_MAP_CART_IO_2_TR, "G/� haritalamas�n� yer de�i�tir (harita kart� G/� ile VIC20 G/�-2)"},
#endif

/* c64/cart/sfx_soundexpander.c, c64/cart/sfx_soundsampler.c */
/* en */ {IDCLS_MAP_CART_IO_3,    N_("Don't swap io mapping (map cart I/O to VIC20 I/O-3)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MAP_CART_IO_3_DA, "Ombyt ikke I/O-forbindelse (forbind cart I/O til VIC20 I/O-3)"},
/* de */ {IDCLS_MAP_CART_IO_3_DE, "Keine Vertauschung der IO Zuordnung (cart I/O auf VIC20 I/O-3)"},
/* es */ {IDCLS_MAP_CART_IO_3_ES, "No intercambia mapeado IO (map cart I/O to VIC20 I/O-3)"},
/* fr */ {IDCLS_MAP_CART_IO_3_FR, "Ne pas �changer le mappage E/S (mapper I/O cartouche � I/O-3 VIC20)"},
/* hu */ {IDCLS_MAP_CART_IO_3_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MAP_CART_IO_3_IT, "Non scambiare mapping di I/O (mappa I/O cart su I/O-3 VIC20)"},
/* ko */ {IDCLS_MAP_CART_IO_3_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MAP_CART_IO_3_NL, "Verwissel de io toewijzing niet (verwijs cart I/O naar VIC20 I/O-3)"},
/* pl */ {IDCLS_MAP_CART_IO_3_PL, "Nie zamieniaj mapowania we/wy (mapuj  we/wy  kartrid�a do we/wy-3 VIC20)"},
/* ru */ {IDCLS_MAP_CART_IO_3_RU, "Don't swap io mapping (map cart I/O to VIC20 I/O-3)"},
/* sv */ {IDCLS_MAP_CART_IO_3_SV, "V�xla io-mappning (mappa modul-I/O till VIC20-I/O 3)"},
/* tr */ {IDCLS_MAP_CART_IO_3_TR, "G/� haritalamas�n� yer de�i�tirme (harita kart� G/� ile VIC20 G/�-3)"},
#endif

/* c64/cart/georam.c, c64/cart/ramcart.c, c64/cart/reu.c, pet/petreu.c */
/* en */ {IDCLS_P_SIZE_IN_KB,    N_("<size in KB>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_SIZE_IN_KB_DA, "<st�rrelse i kB>"},
/* de */ {IDCLS_P_SIZE_IN_KB_DE, "<Gr��e in KB>"},
/* es */ {IDCLS_P_SIZE_IN_KB_ES, "<tama�o en KB>"},
/* fr */ {IDCLS_P_SIZE_IN_KB_FR, "<taille en ko>"},
/* hu */ {IDCLS_P_SIZE_IN_KB_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_SIZE_IN_KB_IT, "<dimensione in KB>"},
/* ko */ {IDCLS_P_SIZE_IN_KB_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_SIZE_IN_KB_NL, "<grootte in KB>"},
/* pl */ {IDCLS_P_SIZE_IN_KB_PL, "<rozmiar w KB>"},
/* ru */ {IDCLS_P_SIZE_IN_KB_RU, "<������ � ��>"},
/* sv */ {IDCLS_P_SIZE_IN_KB_SV, "<storlek i KB>"},
/* tr */ {IDCLS_P_SIZE_IN_KB_TR, "<KB cinsinden boyut>"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_P_SIZE,    N_("<size>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_SIZE_DE, "<Gr��e>"},
/* es */ {IDCLS_P_SIZE_ES, "<Tama�o>"},
/* fr */ {IDCLS_P_SIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_SIZE_IT, "<dimensione>"},
/* ko */ {IDCLS_P_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_SIZE_NL, "<grootte>"},
/* pl */ {IDCLS_P_SIZE_PL, "<wielko��>"},
/* ru */ {IDCLS_P_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_SIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_P_SIZE_TR, ""},  /* fuzzy */
#endif

/* pet/pet-sidcart.c */
/* en */ {IDCLS_P_ADDRESS,    N_("<address>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_ADDRESS_DA, "<adresse>"},
/* de */ {IDCLS_P_ADDRESS_DE, "<Adresse>"},
/* es */ {IDCLS_P_ADDRESS_ES, "<direcci�n>"},
/* fr */ {IDCLS_P_ADDRESS_FR, "<adresse>"},
/* hu */ {IDCLS_P_ADDRESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_ADDRESS_IT, "<indirizzo>"},
/* ko */ {IDCLS_P_ADDRESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_ADDRESS_NL, "<adres>"},
/* pl */ {IDCLS_P_ADDRESS_PL, "<address>"},
/* ru */ {IDCLS_P_ADDRESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_ADDRESS_SV, "<adress>"},
/* tr */ {IDCLS_P_ADDRESS_TR, "<adres>"},
#endif

/* pet/pet-sidcart.c */
/* en */ {IDCLS_P_CLOCK,    N_("<clock>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_CLOCK_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_CLOCK_DE, "<Takt>"},
/* es */ {IDCLS_P_CLOCK_ES, "<Reloj>"},
/* fr */ {IDCLS_P_CLOCK_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_CLOCK_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_CLOCK_IT, "<clock>"},
/* ko */ {IDCLS_P_CLOCK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_CLOCK_NL, "<klok>"},
/* pl */ {IDCLS_P_CLOCK_PL, "<zegar>"},
/* ru */ {IDCLS_P_CLOCK_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_CLOCK_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_P_CLOCK_TR, ""},  /* fuzzy */
#endif

/* c64/cart/georam.c */
/* en */ {IDCLS_GEORAM_SIZE,    N_("Size of the GEORAM expansion unit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_GEORAM_SIZE_DA, "St�rrelse af GEORAM-udviddelsesenhed"},
/* de */ {IDCLS_GEORAM_SIZE_DE, "Gr��e der GEORAM Erweiterung"},
/* es */ {IDCLS_GEORAM_SIZE_ES, "Tama�o de la unidad expansi�n GEORAM"},
/* fr */ {IDCLS_GEORAM_SIZE_FR, "Taille de l'unit� d'expansion GEO-RAM"},
/* hu */ {IDCLS_GEORAM_SIZE_HU, "GEORAM Expansion Unit m�rete"},
/* it */ {IDCLS_GEORAM_SIZE_IT, "Dimensione dell'espansione GEORAM"},
/* ko */ {IDCLS_GEORAM_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_GEORAM_SIZE_NL, "Grootte van de GEORAM uitbreidingseenheid"},
/* pl */ {IDCLS_GEORAM_SIZE_PL, "Rozmiar jednostki rozszerzenia GEORAM"},
/* ru */ {IDCLS_GEORAM_SIZE_RU, "Size of the GEORAM expansion unit"},
/* sv */ {IDCLS_GEORAM_SIZE_SV, "Storlek p� GEORAM-expansionsenhet"},
/* tr */ {IDCLS_GEORAM_SIZE_TR, "GEORAM geni�letme biriminin boyutu"},
#endif

/* pet/petreu.c */
/* en */ {IDCLS_ENABLE_PETREU,    N_("Enable the PET Ram and Expansion Unit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_PETREU_DA, "Aktiv�r PET REU"},
/* de */ {IDCLS_ENABLE_PETREU_DE, "PET RAM Speicher und Erweiterungsmodul aktivieren"},
/* es */ {IDCLS_ENABLE_PETREU_ES, "Permitir PET ram y Unidad Expansi�n"},
/* fr */ {IDCLS_ENABLE_PETREU_FR, "Activer l'expansion d'unit� et de RAM du PET"},
/* hu */ {IDCLS_ENABLE_PETREU_HU, "PET RAM and Expansion Unit enged�lyez�se"},
/* it */ {IDCLS_ENABLE_PETREU_IT, "Attiva la RAM e l'unit� di espansione del PET"},
/* ko */ {IDCLS_ENABLE_PETREU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_PETREU_NL, "PET RAM en uitbreidingseenheid inschakelen"},
/* pl */ {IDCLS_ENABLE_PETREU_PL, "W��cz PET Ram i Expansion Unit"},
/* ru */ {IDCLS_ENABLE_PETREU_RU, "Enable the PET Ram and Expansion Unit"},
/* sv */ {IDCLS_ENABLE_PETREU_SV, "Aktivera PET Ram- och -expansionsenhet"},
/* tr */ {IDCLS_ENABLE_PETREU_TR, "PET Ram ve Geni�letme Birimi'ni aktif et"},
#endif

/* pet/petreu.c */
/* en */ {IDCLS_DISABLE_PETREU,    N_("Disable the PET Ram and Expansion Unit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_PETREU_DA, "Deaktiv�r PET REU"},
/* de */ {IDCLS_DISABLE_PETREU_DE, "PET RAM Speicher und Erweiterungsmodul dektivieren"},
/* es */ {IDCLS_DISABLE_PETREU_ES, "Deshabilitar PET RAM y Unidad Expansi�n"},
/* fr */ {IDCLS_DISABLE_PETREU_FR, "D�sactiver l'expansion d'unit� et de RAM du PET"},
/* hu */ {IDCLS_DISABLE_PETREU_HU, "PET RAM and Expansion Unit tilt�sa"},
/* it */ {IDCLS_DISABLE_PETREU_IT, "Disattiva la RAM e l'unit� di espansione del PET"},
/* ko */ {IDCLS_DISABLE_PETREU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_PETREU_NL, "PET RAM en uitbreidingseenheid uitschakelen"},
/* pl */ {IDCLS_DISABLE_PETREU_PL, "Wy��cz PET Ram i Expansion Unit"},
/* ru */ {IDCLS_DISABLE_PETREU_RU, "Disable the PET Ram and Expansion Unit"},
/* sv */ {IDCLS_DISABLE_PETREU_SV, "Inaktivera PET Ram- och -expansionsenhet"},
/* tr */ {IDCLS_DISABLE_PETREU_TR, "PET Ram ve Geni�letme Birimi'ni pasifle�tir"},
#endif

/* pet/petreu.c */
/* en */ {IDCLS_SPECIFY_PETREU_NAME,    N_("Specify name of PET Ram and Expansion Unit image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PETREU_NAME_DA, "Angiv navn p� PET REU-image"},
/* de */ {IDCLS_SPECIFY_PETREU_NAME_DE, "Namen f�r PET RAM Speicher und Erweiterungsmodul w�hlen"},
/* es */ {IDCLS_SPECIFY_PETREU_NAME_ES, "Especificar nombre imagen PET Ram y Unidad Expansi�n"},
/* fr */ {IDCLS_SPECIFY_PETREU_NAME_FR, "Sp�cifier le nom de l'image d�unit� d'expansion RAM"},
/* hu */ {IDCLS_SPECIFY_PETREU_NAME_HU, "Adja meg a PET RAM and Expansion Unit k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_PETREU_NAME_IT, "Specifica il nome immagine della RAM e dell'unit� di espansione del PET"},
/* ko */ {IDCLS_SPECIFY_PETREU_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PETREU_NAME_NL, "Geef de naam van het PET RAM en uitbreidingseenheid bestand"},
/* pl */ {IDCLS_SPECIFY_PETREU_NAME_PL, "Okre�l nazw� obrazu PET Ram i Expansion Unit"},
/* ru */ {IDCLS_SPECIFY_PETREU_NAME_RU, "Specify name of PET Ram and Expansion Unit image"},
/* sv */ {IDCLS_SPECIFY_PETREU_NAME_SV, "Ange namn p� PET Ram- och -expansionsenhet"},
/* tr */ {IDCLS_SPECIFY_PETREU_NAME_TR, "PET Ram ve Geni�letme Birimi'nin ismini belirt"},
#endif

/* pet/petreu.c */
/* en */ {IDCLS_PETREU_SIZE,    N_("Size of the PET Ram and Expansion Unit. (128/512/1024/2048)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PETREU_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PETREU_SIZE_DE, "Gr��e des PET RAM Speicher und Erweiterungsmodul. (128/512/1024/2048)"},
/* es */ {IDCLS_PETREU_SIZE_ES, "Tama�o de PET Ram y Unidad Expansi�n. (128/512/1024/2048)"},
/* fr */ {IDCLS_PETREU_SIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PETREU_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PETREU_SIZE_IT, "Dimensione della RAM e dell'unit� di espansione del PET. (128/512/1024/2048)"},
/* ko */ {IDCLS_PETREU_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PETREU_SIZE_NL, "Grootte van de PET RAM en uitbreidingseenheid. (128/512/1024/2048)"},
/* pl */ {IDCLS_PETREU_SIZE_PL, "Rozmiar PET Ram i Expansion Unit. (128/512/1024/2048)"},
/* ru */ {IDCLS_PETREU_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PETREU_SIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PETREU_SIZE_TR, ""},  /* fuzzy */
#endif

/* pet/petdww.c */
/* en */ {IDCLS_SPECIFY_PETDWW_NAME,    N_("Specify name of PET DWW image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PETDWW_NAME_DA, "Angiv navn p� PET DWW-image"},
/* de */ {IDCLS_SPECIFY_PETDWW_NAME_DE, "Namen f�r PET DWW Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_PETDWW_NAME_ES, "Especificar nombre imagen PET DWW"},
/* fr */ {IDCLS_SPECIFY_PETDWW_NAME_FR, "Sp�cifier le nom de l'image PET DWW"},
/* hu */ {IDCLS_SPECIFY_PETDWW_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_PETDWW_NAME_IT, "Specifica il nome immagine PET DWW"},
/* ko */ {IDCLS_SPECIFY_PETDWW_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PETDWW_NAME_NL, "Geef de naam van het PET DWW bestand"},
/* pl */ {IDCLS_SPECIFY_PETDWW_NAME_PL, "Okre�l nazw� obrazu PET DWW"},
/* ru */ {IDCLS_SPECIFY_PETDWW_NAME_RU, "Specify name of PET DWW image"},
/* sv */ {IDCLS_SPECIFY_PETDWW_NAME_SV, "Ange namn p� PET DWW-avbildning"},
/* tr */ {IDCLS_SPECIFY_PETDWW_NAME_TR, "PET DWW imaj�n�n ismini belirt"},
#endif

/* pet/petdww.c */
/* en */ {IDCLS_ENABLE_PETDWW,    N_("Enable the PET DWW hi-res board")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_PETDWW_DA, "Aktiv�r PET DWW h�jopl�sningskort"},
/* de */ {IDCLS_ENABLE_PETDWW_DE, "PET DWW hi-res Karte aktivieren"},
/* es */ {IDCLS_ENABLE_PETDWW_ES, "Permitir tablero de alta resoluci�n PET DWW"},
/* fr */ {IDCLS_ENABLE_PETDWW_FR, "Activer la carte haute-r�s PET DWW"},
/* hu */ {IDCLS_ENABLE_PETDWW_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_PETDWW_IT, "Attiva la scheda hi-res PET DWW"},
/* ko */ {IDCLS_ENABLE_PETDWW_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_PETDWW_NL, "PET DWW hi-res bord inschakelen"},
/* pl */ {IDCLS_ENABLE_PETDWW_PL, "W��cz uk�ad PET DWW hi-res"},
/* ru */ {IDCLS_ENABLE_PETDWW_RU, "Enable the PET DWW hi-res board"},
/* sv */ {IDCLS_ENABLE_PETDWW_SV, "Aktivera PET DWW-h�guppl�sningskort"},
/* tr */ {IDCLS_ENABLE_PETDWW_TR, "PET DWW hi-res boardunu aktif et"},
#endif

/* pet/petdww.c */
/* en */ {IDCLS_DISABLE_PETDWW,    N_("Disable the PET DWW hi-res board")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_PETDWW_DA, "Deaktiv�r PET DWW h�jopl�sningskort"},
/* de */ {IDCLS_DISABLE_PETDWW_DE, "PET DWW Hi-Res Karte deaktivieren"},
/* es */ {IDCLS_DISABLE_PETDWW_ES, "Deshabilitar tablero de alta resoluci�n PET DWW"},
/* fr */ {IDCLS_DISABLE_PETDWW_FR, "D�sactiver la carte haute-r�s PET DWW"},
/* hu */ {IDCLS_DISABLE_PETDWW_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_PETDWW_IT, "Disattiva la scheda hi-res PET DWW"},
/* ko */ {IDCLS_DISABLE_PETDWW_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_PETDWW_NL, "PET DWW hi-res bord uitschakelen"},
/* pl */ {IDCLS_DISABLE_PETDWW_PL, "Wy��cz p�yt� PET DWW hi-res"},
/* ru */ {IDCLS_DISABLE_PETDWW_RU, "Disable the PET DWW hi-res board"},
/* sv */ {IDCLS_DISABLE_PETDWW_SV, "Inaktivera PET DWW-h�guppl�sningskort"},
/* tr */ {IDCLS_DISABLE_PETDWW_TR, "PET DWW hi-res boardu pasifle�tir"},
#endif

/* userport/userport_dac.c */
/* en */ {IDCLS_ENABLE_USERPORT_DAC,    N_("Enable Userport DAC for sound output")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_DAC_DA, "Aktiv�r brugerport DAC for lydoutput"},
/* de */ {IDCLS_ENABLE_USERPORT_DAC_DE, "Userport DAC Sound aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_DAC_ES, "Permitir puerto DAC para salida de sonido"},
/* fr */ {IDCLS_ENABLE_USERPORT_DAC_FR, "Activer DAC port utilisateur comme sortie de son"},
/* hu */ {IDCLS_ENABLE_USERPORT_DAC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_DAC_IT, "Attiva DAC su userport per la riproduzione audio"},
/* ko */ {IDCLS_ENABLE_USERPORT_DAC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_DAC_NL, "Userport DAC voor geluidsuitvoer inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_DAC_PL, "W��cz userport DAC jako wyj�cie d�wi�ku"},
/* ru */ {IDCLS_ENABLE_USERPORT_DAC_RU, "Enable Userport DAC for sound output"},
/* sv */ {IDCLS_ENABLE_USERPORT_DAC_SV, "Aktivera D/A-omvandlare p� anv�ndarporten f�r ljudutdata"},
/* tr */ {IDCLS_ENABLE_USERPORT_DAC_TR, "Ses ��k��� i�in Userport DAC'� aktif et"},
#endif

/* userport/userport_dac.c */
/* en */ {IDCLS_DISABLE_USERPORT_DAC,    N_("Disable Userport DAC for sound output")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_DAC_DA, "Deaktiv�r brugerport DAC for lydoutput"},
/* de */ {IDCLS_DISABLE_USERPORT_DAC_DE, "Userport DAC Sound deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_DAC_ES, "Deshabilitar puerto DAC para salida de sonido"},
/* fr */ {IDCLS_DISABLE_USERPORT_DAC_FR, "D�sactiver DAC port utilisateur comme sortie de son"},
/* hu */ {IDCLS_DISABLE_USERPORT_DAC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_DAC_IT, "Disattiva DAC su userport per la riproduzione audio"},
/* ko */ {IDCLS_DISABLE_USERPORT_DAC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_DAC_NL, "Userport DAC voor geluidsuitvoer uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_DAC_PL, "Wy��cz userport DAC jako wy�cie d�wi�ku"},
/* ru */ {IDCLS_DISABLE_USERPORT_DAC_RU, "Disable Userport DAC for sound output"},
/* sv */ {IDCLS_DISABLE_USERPORT_DAC_SV, "Inaktivera D/A-omvandlare p� anv�ndarporten f�r ljudutdata"},
/* tr */ {IDCLS_DISABLE_USERPORT_DAC_TR, "Ses ��k��� i�in Userport DAC'� pasifle�tir"},
#endif

/* userport/userport_joystick.c */
/* en */ {IDCLS_ENABLE_USERPORT_JOY,    N_("Enable Userport joystick adapter")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_JOY_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_JOY_DE, "Userport Joystick Adapter aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_JOY_ES, "Permitir adaptador puerto joystick"},
/* fr */ {IDCLS_ENABLE_USERPORT_JOY_FR, "Activer l'adaptateur joystick port utilisateur"},
/* hu */ {IDCLS_ENABLE_USERPORT_JOY_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_JOY_IT, "Attiva adattatore joystick su userport"},
/* ko */ {IDCLS_ENABLE_USERPORT_JOY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_JOY_NL, "Userport joystick adapter inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_JOY_PL, "W��cz z��cze userportu joysticka"},
/* ru */ {IDCLS_ENABLE_USERPORT_JOY_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_JOY_SV, "Aktivera adapter f�r anv�ndarportstyrspakar"},
/* tr */ {IDCLS_ENABLE_USERPORT_JOY_TR, ""},  /* fuzzy */
#endif

/* userport/userport_joystick.c */
/* en */ {IDCLS_DISABLE_USERPORT_JOY,    N_("Disable Userport joystick adapter")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_JOY_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_JOY_DE, "Userport Joystick Adapter deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_JOY_ES, "Deshabilitar adaptador puerto joystick"},
/* fr */ {IDCLS_DISABLE_USERPORT_JOY_FR, "D�sactiver l'adaptateur Joystick port utilisateur"},
/* hu */ {IDCLS_DISABLE_USERPORT_JOY_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_JOY_IT, "Disattiva adattatore joystick su userport"},
/* ko */ {IDCLS_DISABLE_USERPORT_JOY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_JOY_NL, "Userport joystick adapter uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_JOY_PL, "Wy��cz z��cze userportu joysticka"},
/* ru */ {IDCLS_DISABLE_USERPORT_JOY_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_JOY_SV, "Inativera adapter f�r anv�ndarportstyrspakar"},
/* tr */ {IDCLS_DISABLE_USERPORT_JOY_TR, ""},  /* fuzzy */
#endif

/* userport/userport_joystick.c */
/* en */ {IDCLS_SET_USERPORT_JOY_TYPE,    N_("Set Userport joystick adapter type (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_USERPORT_JOY_TYPE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_USERPORT_JOY_TYPE_DE, "Setze Userport Joystick adapter Typ (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)"},
/* es */ {IDCLS_SET_USERPORT_JOY_TYPE_ES, "Seleccionar tipo adaptador para puerto joystick  (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)"},
/* fr */ {IDCLS_SET_USERPORT_JOY_TYPE_FR, "D�finir le type de joystick port utilisateur (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)"},
/* hu */ {IDCLS_SET_USERPORT_JOY_TYPE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_USERPORT_JOY_TYPE_IT, "Imposta il tipo di adattatore joystick su userport (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)"},
/* ko */ {IDCLS_SET_USERPORT_JOY_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_USERPORT_JOY_TYPE_NL, "Stel Userport joystick adapter soort in (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)"},
/* pl */ {IDCLS_SET_USERPORT_JOY_TYPE_PL, "Okre�l typ z��cza userportu joysticka (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)"},
/* ru */ {IDCLS_SET_USERPORT_JOY_TYPE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_USERPORT_JOY_TYPE_SV, "V�lj typ av styrspakadapter f�r anv�ndarporten (0: CGA/Protovision, 1: PET, 2: Hummer, 3: OEM, 4: DXS/HIT, 5: Kingsoft, 6: Starbyte)"},
/* tr */ {IDCLS_SET_USERPORT_JOY_TYPE_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_58321a.c */
/* en */ {IDCLS_ENABLE_USERPORT_RTC_58321A,    N_("Enable Userport RTC (58321a)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_RTC_58321A_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_RTC_58321A_DE, "Userport RTC (58321a) aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_RTC_58321A_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_RTC_58321A_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_RTC_58321A_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_RTC_58321A_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_RTC_58321A_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_RTC_58321A_NL, "Userport RTC (58321a) inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_RTC_58321A_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_RTC_58321A_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_RTC_58321A_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_58321a.c */
/* en */ {IDCLS_DISABLE_USERPORT_RTC_58321A,    N_("Disable Userport RTC (58321a)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_RTC_58321A_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_RTC_58321A_DE, "Userport RTC (58321a) deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_RTC_58321A_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_RTC_58321A_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_RTC_58321A_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_RTC_58321A_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_RTC_58321A_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_RTC_58321A_NL, "Userport RTC (58321a) uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_RTC_58321A_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_RTC_58321A_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_RTC_58321A_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_58321a.c */
/* en */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE,    N_("Enable saving of the Userport RTC (58321a) data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_DE, "Userport RTC (58321a) Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_NL, "Opslaan van de Userport RTC (58321a) gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_RTC_58321A_SAVE_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_58321a.c */
/* en */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE,    N_("Disable saving of the Userport RTC (58321a) data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_DE, "Userport RTC (58321a) Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_NL, "Opslaan van de Userport RTC (58321a) gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_RTC_58321A_SAVE_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_ds1307.c */
/* en */ {IDCLS_ENABLE_USERPORT_RTC_DS1307,    N_("Enable Userport RTC (DS1307)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_DE, "Userport RTC (DS1307) aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_NL, "Userport RTC (DS1307) inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_ds1307.c */
/* en */ {IDCLS_DISABLE_USERPORT_RTC_DS1307,    N_("Disable Userport RTC (DS1307)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_DE, "Userport RTC (DS1307) deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_NL, "Userport RTC (DS1307) uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_ds1307.c */
/* en */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE,    N_("Enable saving of the Userport RTC (DS1307) data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_DE, "Userport RTC (DS1307) Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_NL, "Opslaan van de Userport RTC (DS1307) gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_RTC_DS1307_SAVE_TR, ""},  /* fuzzy */
#endif

/* userport/userport_rtc_ds1307.c */
/* en */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE,    N_("Disable saving of the Userport RTC (DS1307) data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_DE, "Userport RTC (DS1307) Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_NL, "Opslaan van de Userport RTC (DS1307) gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_RTC_DS1307_SAVE_TR, ""},  /* fuzzy */
#endif

/* userport/userport_diag_586220_harness.c */
/* en */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS,    N_("Enable Userport diag 586220 harness module")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_DE, "Userport Diag 586220 Harnessmodul aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_NL, "Userport diag 586220 gareel module inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_DIAG_586220_HARNESS_TR, ""},  /* fuzzy */
#endif

/* userport/userport_diag_586220_harness.c */
/* en */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS,    N_("Disable Userport diag 586220 harness module")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_DE, "Userport Diag 586220 Harnessmodul deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_NL, "Userport diag 586220 gareel module uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_DIAG_586220_HARNESS_TR, ""},  /* fuzzy */
#endif

/* joyport/bbrtc.c */
/* en */ {IDCLS_ENABLE_BBRTC_SAVE,    N_("Enable saving of the BBRTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_BBRTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_BBRTC_SAVE_DE, "BBRTC Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_BBRTC_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_BBRTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_BBRTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_BBRTC_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_BBRTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_BBRTC_SAVE_NL, "Opslaan van de BBRTC gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_BBRTC_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_BBRTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_BBRTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_BBRTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* joyport/bbrtc.c */
/* en */ {IDCLS_DISABLE_BBRTC_SAVE,    N_("Disable saving of the BBRTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_BBRTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_BBRTC_SAVE_DE, "BBRTC Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_BBRTC_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_BBRTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_BBRTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_BBRTC_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_BBRTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_BBRTC_SAVE_NL, "Opslaan van de BBRTC gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_BBRTC_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_BBRTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_BBRTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_BBRTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* tapeport/sense-dongle.c */
/* en */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE,    N_("Enable tape sense dongle")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_DE, "Band Sense Dongle aktivieren"},
/* es */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_NL, "Tape sense dongle inschakelen"},
/* pl */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TAPE_SENSE_DONGLE_TR, ""},  /* fuzzy */
#endif

/* tapeport/sense-dongle.c */
/* en */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE,    N_("Disable tape sense dongle")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_DE, "Band Sense Dongle deaktivieren"},
/* es */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_NL, "Tape sense dongle uitschakelen"},
/* pl */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_TAPE_SENSE_DONGLE_TR, ""},  /* fuzzy */
#endif

/* tapeport/dtl-basic-dongle.c */
/* en */ {IDCLS_ENABLE_DTL_BASIC_DONGLE,    N_("Enable DTL Basic dongle")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_DE, "DTL Basic Dongle aktivieren"},
/* es */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_NL, "DTL Basic dongle inschakelen"},
/* pl */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_DTL_BASIC_DONGLE_TR, ""},  /* fuzzy */
#endif

/* tapeport/dtl-basic-dongle.c */
/* en */ {IDCLS_DISABLE_DTL_BASIC_DONGLE,    N_("Enable DTL Basic dongle")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_DE, "DTL Basic Dongle aktivieren"},
/* es */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_NL, "DTL Basic dongle inschakelen"},
/* pl */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_DTL_BASIC_DONGLE_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapertc.c */
/* en */ {IDCLS_ENABLE_TAPERTC,    N_("Enable CP Clock F83 (PCF8583 RTC)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TAPERTC_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TAPERTC_DE, "CP Clock F83 (PCF8583 RTC) aktivieren"},
/* es */ {IDCLS_ENABLE_TAPERTC_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TAPERTC_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TAPERTC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TAPERTC_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TAPERTC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TAPERTC_NL, "CP Clock F83 (PCF8583 RTC) inschakelen"},
/* pl */ {IDCLS_ENABLE_TAPERTC_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TAPERTC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TAPERTC_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TAPERTC_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapertc.c */
/* en */ {IDCLS_DISABLE_TAPERTC,    N_("Disable CP Clock F83 (PCF8583 RTC)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TAPERTC_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_TAPERTC_DE, "CP Clock F83 (PCF8583 RTC) deaktivieren"},
/* es */ {IDCLS_DISABLE_TAPERTC_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_TAPERTC_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_TAPERTC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_TAPERTC_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_TAPERTC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TAPERTC_NL, "CP Clock F83 (PCF8583 RTC) uitschakelen"},
/* pl */ {IDCLS_DISABLE_TAPERTC_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_TAPERTC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_TAPERTC_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_TAPERTC_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapertc.c */
/* en */ {IDCLS_ENABLE_TAPERTC_SAVE,    N_("Enable saving of the CP Clock F83 (PCF8583 RTC) data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TAPERTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TAPERTC_SAVE_DE, "CP Clock F83 (PCF8583 RTC) Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_TAPERTC_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TAPERTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TAPERTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TAPERTC_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TAPERTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TAPERTC_SAVE_NL, "Opslaan van de CP Clock F83 (PCF8583 RTC) gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_TAPERTC_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TAPERTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TAPERTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TAPERTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* tapeport/tapertc.c */
/* en */ {IDCLS_DISABLE_TAPERTC_SAVE,    N_("Disable saving of the CP Clock F83 (PCF8583 RTC) data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TAPERTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_TAPERTC_SAVE_DE, "CP Clock F83 (PCF8583 RTC) Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_TAPERTC_SAVE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_TAPERTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_TAPERTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_TAPERTC_SAVE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_TAPERTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TAPERTC_SAVE_NL, "Opslaan van de CP Clock F83 (PCF8583 RTC) gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_TAPERTC_SAVE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_TAPERTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_TAPERTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_TAPERTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* userport/userport_4bit_sampler.c */
/* en */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER,    N_("Enable Userport 4bit sampler")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_DE, "Userport 4bit Sampler aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_NL, "Userport 4bit sampler inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_4BIT_SAMPLER_TR, ""},  /* fuzzy */
#endif

/* userport/userport_4bit_sampler.c */
/* en */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER,    N_("Disable Userport 4bit sampler")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_DE, "Userport 4bit Sampler deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_NL, "Userport 4bit sampler uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_4BIT_SAMPLER_TR, ""},  /* fuzzy */
#endif

/* userport/userport_8bss.c */
/* en */ {IDCLS_ENABLE_USERPORT_8BSS,    N_("Enable Userport 8bit stereo sampler")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_8BSS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_8BSS_DE, "Userport 8bit Sampler aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_8BSS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_8BSS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_8BSS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_8BSS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_8BSS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_8BSS_NL, "Userport 8bit stereo sampler inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_8BSS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_8BSS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_8BSS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_8BSS_TR, ""},  /* fuzzy */
#endif

/* userport/userport_8bss.c */
/* en */ {IDCLS_DISABLE_USERPORT_8BSS,    N_("Disable Userport 8bit stereo sampler")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_8BSS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_8BSS_DE, "Userport 8bit Sampler deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_8BSS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_8BSS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_8BSS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_8BSS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_8BSS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_8BSS_NL, "Userport 8bit stereo sampler uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_8BSS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_8BSS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_8BSS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_8BSS_TR, ""},  /* fuzzy */
#endif

/* c64/psid.c */
/* en */ {IDCLS_OVERWRITE_PSID_SETTINGS,    N_("Override PSID settings for Video standard and SID model")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_OVERWRITE_PSID_SETTINGS_DA, "Overstyr PSID-indstillinger for Video-standard og SID-model"},
/* de */ {IDCLS_OVERWRITE_PSID_SETTINGS_DE, "PSID Einstellung f�r Video Standard und SID Modell ver�ndern"},
/* es */ {IDCLS_OVERWRITE_PSID_SETTINGS_ES, "Sobrescribir ajustes para v�deo standard y modelo SID"},
/* fr */ {IDCLS_OVERWRITE_PSID_SETTINGS_FR, "�craser les param�tres PSID pour le standard vid�o et le mod�le SID"},
/* hu */ {IDCLS_OVERWRITE_PSID_SETTINGS_HU, "A vide� szabv�ny �s a SID modell PSID be�ll�t�sainak fel�lb�r�l�sa"},
/* it */ {IDCLS_OVERWRITE_PSID_SETTINGS_IT, "Non tener conto delle impostazioni del PSID per lo standard video e il modello di SID"},
/* ko */ {IDCLS_OVERWRITE_PSID_SETTINGS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_OVERWRITE_PSID_SETTINGS_NL, "Overschrijf PSID instellingen voor videostandaard en SID model"},
/* pl */ {IDCLS_OVERWRITE_PSID_SETTINGS_PL, "Zast�p ustawienia PSID standardu wideo i modelu SID"},
/* ru */ {IDCLS_OVERWRITE_PSID_SETTINGS_RU, "Override PSID settings for Video standard and SID model"},
/* sv */ {IDCLS_OVERWRITE_PSID_SETTINGS_SV, "Ers�tt PSID-inst�llningar f�r videostandard och SID-modell"},
/* tr */ {IDCLS_OVERWRITE_PSID_SETTINGS_TR, "Video standard� ve SID modeli i�in PSID ayarlar�n� ge�ersiz k�l"},
#endif

/* c64/psid.c */
/* en */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER,    N_("Specify PSID tune <number>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_DA, "V�lg PSID-nummer <nummer>"},
/* de */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_DE, "PSID St�ck <Nummer> w�hlen"},
/* es */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_ES, "Especificar PSID tono <n�mero>"},
/* fr */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_FR, "Sp�cifier le <num�ro> de piste PSID"},
/* hu */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_HU, "Adja meg a PSID hangzatok <sz�m>"},
/* it */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_IT, "Specifica la melodia <numero> del PSID"},
/* ko */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_NL, "Geef PSID melodie <nummer>"},
/* pl */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_PL, "Okre�l ton PSID <numer>"},
/* ru */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_RU, "Specify PSID tune <number>"},
/* sv */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_SV, "Ange PSID-l�t <nummer>"},
/* tr */ {IDCLS_SPECIFY_PSID_TUNE_NUMBER_TR, "PSID par�a <numara>'s�n� belirt"},
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_ENABLE_RAMCART,    N_("Enable the RamCart expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RAMCART_DA, "Aktiv�r RamCart-udviddelsen"},
/* de */ {IDCLS_ENABLE_RAMCART_DE, "RamCart Erweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_RAMCART_ES, "Permitir expansi�n RAMCART"},
/* fr */ {IDCLS_ENABLE_RAMCART_FR, "Activer l'expansion RAMCART"},
/* hu */ {IDCLS_ENABLE_RAMCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_RAMCART_IT, "Attiva l'espansione RamCart"},
/* ko */ {IDCLS_ENABLE_RAMCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RAMCART_NL, "RamCart uitbreiding inschakelen"},
/* pl */ {IDCLS_ENABLE_RAMCART_PL, "W��cz rozszerzenie RamCart"},
/* ru */ {IDCLS_ENABLE_RAMCART_RU, "Enable the RamCart expansion"},
/* sv */ {IDCLS_ENABLE_RAMCART_SV, "Aktivera RamCart-expansion"},
/* tr */ {IDCLS_ENABLE_RAMCART_TR, "RamCart geni�lemesini aktif et"},
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_DISABLE_RAMCART,    N_("Disable the RamCart expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RAMCART_DA, "Deaktiv�r RamCart-udviddelse"},
/* de */ {IDCLS_DISABLE_RAMCART_DE, "RamCart Erweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_RAMCART_ES, "Deshabilitar expansi�n RamCart"},
/* fr */ {IDCLS_DISABLE_RAMCART_FR, "D�sactiver l'expansion RAMCART"},
/* hu */ {IDCLS_DISABLE_RAMCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_RAMCART_IT, "Disattiva l'espansione RamCart"},
/* ko */ {IDCLS_DISABLE_RAMCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RAMCART_NL, "RamCart uitbreiding uitschakelen"},
/* pl */ {IDCLS_DISABLE_RAMCART_PL, "Wy��cz rozszerzenie RamCart"},
/* ru */ {IDCLS_DISABLE_RAMCART_RU, "Disable the RamCart expansion"},
/* sv */ {IDCLS_DISABLE_RAMCART_SV, "Inaktivera RamCart-expansion"},
/* tr */ {IDCLS_DISABLE_RAMCART_TR, "RamCart geni�lemesini pasifle�tir"},
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_SPECIFY_RAMCART_NAME,    N_("Specify name of RAMCART image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_RAMCART_NAME_DA, "Angiv navn p� RAMCART-image"},
/* de */ {IDCLS_SPECIFY_RAMCART_NAME_DE, "Name f�r RAMCART Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_RAMCART_NAME_ES, "Especificar nombre imagen RAMCART"},
/* fr */ {IDCLS_SPECIFY_RAMCART_NAME_FR, "Sp�cifier le nom de l'image RAMCART"},
/* hu */ {IDCLS_SPECIFY_RAMCART_NAME_HU, "Adja meg a RAMCART k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_RAMCART_NAME_IT, "Specifica il nome immagine RAMCART"},
/* ko */ {IDCLS_SPECIFY_RAMCART_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_RAMCART_NAME_NL, "Geef de naam van het RAMCART bestand"},
/* pl */ {IDCLS_SPECIFY_RAMCART_NAME_PL, "Okre�l nazw� obrazu RAMCART"},
/* ru */ {IDCLS_SPECIFY_RAMCART_NAME_RU, "Specify name of RAMCART image"},
/* sv */ {IDCLS_SPECIFY_RAMCART_NAME_SV, "Ange namn p� RAMCART-avbildning"},
/* tr */ {IDCLS_SPECIFY_RAMCART_NAME_TR, "RAMCART imaj�n�n ismini belirt"},
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE,    N_("Allow writing to RAMCart image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_DA, "Tillad skrivning til RAMCart-image."},
/* de */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_DE, "Schreibzugriff auf RAMCart Image erlauben"},
/* es */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_ES, "Permitir grabar en imagen RAMCart"},
/* fr */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_FR, "Permetre l'�criture � l'image RAMCart"},
/* hu */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_IT, "Attiva scrittura su immagine RAMCart"},
/* ko */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_NL, "Sta schrijven naar RAMCart bestand toe"},
/* pl */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_PL, "Pozw�l na zapis do obrazu RAMCart"},
/* ru */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_RU, "Allow writing to RAMCart image"},
/* sv */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_SV, "Till�t skrivning till RAMCart-avbildning"},
/* tr */ {IDCLS_ALLOW_WRITING_TO_RAMCART_IMAGE_TR, "RAMCart imaj�na yazmay� aktif et"},
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE,    N_("Do not write to RAMCart image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_DA, "Skriv ikke til RAMcart-image"},
/* de */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_DE, "Kein Schreibzugriff auf RAMCart Image"},
/* es */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_ES, "No permitir grabar en imagen RAMCart"},
/* fr */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_FR, "Ne pas �crire sur l'image RAMCart"},
/* hu */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_IT, "Disattiva scrittura su immagine RAMCart"},
/* ko */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_NL, "Schrijf niet naar RAMCart bestand"},
/* pl */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_PL, "Nie zapisuj do obrazu RAMCart"},
/* ru */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_RU, "Do not write to RAMCart image"},
/* sv */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_SV, "Skriv inte till RAMCart-avbildning"},
/* tr */ {IDCLS_DO_NOT_WRITE_TO_RAMCART_IMAGE_TR, "RAMCart imaj�na yazma"},
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_RAMCART_READ_ONLY,    N_("Set the RAMCart switch to read-only")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RAMCART_READ_ONLY_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RAMCART_READ_ONLY_DE, "RAMCart Schalter auf Schreibschutz"},
/* es */ {IDCLS_RAMCART_READ_ONLY_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_RAMCART_READ_ONLY_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RAMCART_READ_ONLY_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RAMCART_READ_ONLY_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_RAMCART_READ_ONLY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RAMCART_READ_ONLY_NL, "Stel de RAMCart schakelaar in op alleen-lezen"},
/* pl */ {IDCLS_RAMCART_READ_ONLY_PL, "Ustaw RAMCart na tryb tylko do odczytu"},
/* ru */ {IDCLS_RAMCART_READ_ONLY_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RAMCART_READ_ONLY_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RAMCART_READ_ONLY_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_RAMCART_READ_WRITE,    N_("Set the RAMCart switch to read/write")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RAMCART_READ_WRITE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RAMCART_READ_WRITE_DE, "RAMCart Schalter auf Schreibzugriff"},
/* es */ {IDCLS_RAMCART_READ_WRITE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_RAMCART_READ_WRITE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RAMCART_READ_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RAMCART_READ_WRITE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_RAMCART_READ_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RAMCART_READ_WRITE_NL, "Stel de RAMCart schakelaar in op lezen/schrijven"},
/* pl */ {IDCLS_RAMCART_READ_WRITE_PL, "Ustaw RAMCart na tryb zapisu i odczytu"},
/* ru */ {IDCLS_RAMCART_READ_WRITE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RAMCART_READ_WRITE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RAMCART_READ_WRITE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ramcart.c */
/* en */ {IDCLS_RAMCART_SIZE,    N_("Size of the RAMCART expansion. (64/128)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RAMCART_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RAMCART_SIZE_DE, "Gr��e der RAMCART Erweiterung. (64/128)"},
/* es */ {IDCLS_RAMCART_SIZE_ES, "Tama�o expansi�n RAMCart. (64/128)"},
/* fr */ {IDCLS_RAMCART_SIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RAMCART_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RAMCART_SIZE_IT, "Dimensione dell'espansione RAMCART. (64/128)"},
/* ko */ {IDCLS_RAMCART_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RAMCART_SIZE_NL, "Grootte van de RAMCART uitbreiding. (64/128)"},
/* pl */ {IDCLS_RAMCART_SIZE_PL, "Rozmiar rozszerzenia RAMCART. (64/128)"},
/* ru */ {IDCLS_RAMCART_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RAMCART_SIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RAMCART_SIZE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/debugcart.c */
/* en */ {IDCLS_ENABLE_DEBUGCART,    N_("Enable Debug cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DEBUGCART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_DEBUGCART_DE, "Debug Modul aktivieren"},
/* es */ {IDCLS_ENABLE_DEBUGCART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_DEBUGCART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_DEBUGCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_DEBUGCART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_DEBUGCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DEBUGCART_NL, "Debug cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_DEBUGCART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_DEBUGCART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_DEBUGCART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_DEBUGCART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/debugcart.c */
/* en */ {IDCLS_DISABLE_DEBUGCART,    N_("Disable Debug cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DEBUGCART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_DEBUGCART_DE, "Debug Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_DEBUGCART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_DEBUGCART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_DEBUGCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_DEBUGCART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_DEBUGCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DEBUGCART_NL, "Debug cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_DEBUGCART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_DEBUGCART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_DEBUGCART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_DEBUGCART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/dqbb.c */
/* en */ {IDCLS_ENABLE_DQBB,    N_("Enable Double Quick Brown Box")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DQBB_DA, "Aktiv�r Double Quick Brown Box"},
/* de */ {IDCLS_ENABLE_DQBB_DE, "Double Quick Brown Box aktivieren"},
/* es */ {IDCLS_ENABLE_DQBB_ES, "Permitir Double Quick Brown Box"},
/* fr */ {IDCLS_ENABLE_DQBB_FR, "Activer Double Quick Brown Box"},
/* hu */ {IDCLS_ENABLE_DQBB_HU, "Double Quick Brown Box enged�lyez�se"},
/* it */ {IDCLS_ENABLE_DQBB_IT, "Attiva Double Quick Brown Box"},
/* ko */ {IDCLS_ENABLE_DQBB_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DQBB_NL, "Double Quick Brown Box cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_DQBB_PL, "W��cz Double Quick Brown Box"},
/* ru */ {IDCLS_ENABLE_DQBB_RU, "Enable Double Quick Brown Box"},
/* sv */ {IDCLS_ENABLE_DQBB_SV, "Aktivera Double Quick Brown Box"},
/* tr */ {IDCLS_ENABLE_DQBB_TR, "Double Quick Brown Box'� aktif et"},
#endif

/* c64/cart/dqbb.c */
/* en */ {IDCLS_DISABLE_DQBB,    N_("Disable Double Quick Brown Box")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DQBB_DA, "Deaktiv�r Double Quick Brown Box"},
/* de */ {IDCLS_DISABLE_DQBB_DE, "Double Quick Brown Box Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_DQBB_ES, "Deshabilitar Double Quick Brown Box"},
/* fr */ {IDCLS_DISABLE_DQBB_FR, "D�sactiver Double Quick Brown Box"},
/* hu */ {IDCLS_DISABLE_DQBB_HU, "Double Quick Brown Box tilt�sa"},
/* it */ {IDCLS_DISABLE_DQBB_IT, "Disattiva Double Quick Brown Box"},
/* ko */ {IDCLS_DISABLE_DQBB_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DQBB_NL, "Double Quick Brown Box cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_DQBB_PL, "Wy��cz Double Quick Brown Box"},
/* ru */ {IDCLS_DISABLE_DQBB_RU, "Disable Double Quick Brown Box"},
/* sv */ {IDCLS_DISABLE_DQBB_SV, "Inaktivera Double Quick Brown Box"},
/* tr */ {IDCLS_DISABLE_DQBB_TR, "Double Quick Brown Box'� pasifle�tir"},
#endif

/* c64/cart/dqbb.c */
/* en */ {IDCLS_SPECIFY_DQBB_NAME,    N_("Specify Double Quick Brown Box filename")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_DQBB_NAME_DA, "Angiv filnavn for Double Quick Brown Box"},
/* de */ {IDCLS_SPECIFY_DQBB_NAME_DE, "Double Quick Brown Box Dateiname spezifizieren"},
/* es */ {IDCLS_SPECIFY_DQBB_NAME_ES, "Especificar fichero imagen Double Quick Brown Box"},
/* fr */ {IDCLS_SPECIFY_DQBB_NAME_FR, "Sp�cifier nom de fichier Double Quick Brown Box"},
/* hu */ {IDCLS_SPECIFY_DQBB_NAME_HU, "Adja meg a Double Quick Brown Box f�jlnevet"},
/* it */ {IDCLS_SPECIFY_DQBB_NAME_IT, "Specifica il nome del file Double Quick Brown Box"},
/* ko */ {IDCLS_SPECIFY_DQBB_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_DQBB_NAME_NL, "Geef de naam van het Double Quick Brown Box cartridge bestand"},
/* pl */ {IDCLS_SPECIFY_DQBB_NAME_PL, "Okre�l nazw� pliku Double Quick Brown Box"},
/* ru */ {IDCLS_SPECIFY_DQBB_NAME_RU, "Specify Double Quick Brown Box filename"},
/* sv */ {IDCLS_SPECIFY_DQBB_NAME_SV, "Ange filnamn f�r Double Quick Brown Box"},
/* tr */ {IDCLS_SPECIFY_DQBB_NAME_TR, "Double Quick Brown Box dosya ismi belirt"},
#endif

/* c64/cart/dqbb.c */
/* en */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE,    N_("Allow writing to DQBB image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_DA, "Tillad skrivning til DQBB-image."},
/* de */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_DE, "Schreibzugriff auf DQBB Image erlauben"},
/* es */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_ES, "Permitir grabaci�n en imagen DQBB "},
/* fr */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_FR, "Permettre l'�criture � l'image DQBB"},
/* hu */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_IT, "Attiva scrittura su immagine DQBB"},
/* ko */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_NL, "Sta schrijven naar DQBB bestand toe"},
/* pl */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_PL, "Pozw�l na zapis do obrazu DQBB"},
/* ru */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_RU, "Allow writing to DQBB image"},
/* sv */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_SV, "Till�t skrivning till DQBB-avbildning"},
/* tr */ {IDCLS_ALLOW_WRITING_TO_DQBB_IMAGE_TR, "DQBB imaj�na yazmay� aktif et"},
#endif

/* c64/cart/dqbb.c */
/* en */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE,    N_("Do not write to DQBB image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_DA, "Skriv ikke til DQBB-image"},
/* de */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_DE, "Kein Schreibzugriff auf DQBB Image"},
/* es */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_ES, "No permitir grabaci�n en imagen DQBB "},
/* fr */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_FR, "Ne pas �crire sur l'image  DQBB"},
/* hu */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_IT, "Disattiva scrittura su immagine DQBB"},
/* ko */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_NL, "Schrijf niet naar DQBB bestand"},
/* pl */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_PL, "Nie zapisuj do obrazu DQBB"},
/* ru */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_RU, "Do not write to DQBB image"},
/* sv */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_SV, "Skriv inte till DQBB-avbildning"},
/* tr */ {IDCLS_DO_NOT_WRITE_TO_DQBB_IMAGE_TR, "DQBB imaj�na yazma"},
#endif

/* c64/cart/isepic.c */
/* en */ {IDCLS_ENABLE_ISEPIC,    N_("Enable the ISEPIC cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_ISEPIC_DA, "Aktiv�r ISEPIC-cartridge"},
/* de */ {IDCLS_ENABLE_ISEPIC_DE, "ISEPIC Modul aktivieren"},
/* es */ {IDCLS_ENABLE_ISEPIC_ES, "Permitir cartucho ISEPIC"},
/* fr */ {IDCLS_ENABLE_ISEPIC_FR, "Activer la cartouche ISEPIC"},
/* hu */ {IDCLS_ENABLE_ISEPIC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_ISEPIC_IT, "Attiva la cartuccia ISEPIC"},
/* ko */ {IDCLS_ENABLE_ISEPIC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_ISEPIC_NL, "ISEPIC cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_ISEPIC_PL, "W��cz kartrid� ISEPIC"},
/* ru */ {IDCLS_ENABLE_ISEPIC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_ISEPIC_SV, "Aktivera ISEPIC-modul"},
/* tr */ {IDCLS_ENABLE_ISEPIC_TR, "ISEPIC kartu�unu aktif et"},
#endif

/* c64/cart/isepic.c */
/* en */ {IDCLS_DISABLE_ISEPIC,    N_("Disable the ISEPIC cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_ISEPIC_DA, "Deaktiv�r ISEPIC-cartridget"},
/* de */ {IDCLS_DISABLE_ISEPIC_DE, "ISEPIC Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_ISEPIC_ES, "Deshabilitar cartucho ISEPIC"},
/* fr */ {IDCLS_DISABLE_ISEPIC_FR, "D�sactiver la cartouche ISEPIC"},
/* hu */ {IDCLS_DISABLE_ISEPIC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_ISEPIC_IT, "Disattiva la cartuccia ISEPIC"},
/* ko */ {IDCLS_DISABLE_ISEPIC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_ISEPIC_NL, "ISEPIC cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_ISEPIC_PL, "Wy��cz kartrid� ISEPIC"},
/* ru */ {IDCLS_DISABLE_ISEPIC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_ISEPIC_SV, "Inaktivera ISEPIC-modul"},
/* tr */ {IDCLS_DISABLE_ISEPIC_TR, "ISEPIC kartu�unu pasifle�tir"},
#endif

/* c64/cart/isepic.c */
/* en */ {IDCLS_ENABLE_ISEPIC_SWITCH,    N_("Enable the ISEPIC switch")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_ISEPIC_SWITCH_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_ISEPIC_SWITCH_DE, "ISEPIC Schalter aktivieren"},
/* es */ {IDCLS_ENABLE_ISEPIC_SWITCH_ES, "Permitir conmutaci�n ISEPIC"},
/* fr */ {IDCLS_ENABLE_ISEPIC_SWITCH_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_ISEPIC_SWITCH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_ISEPIC_SWITCH_IT, "Attiva l'interrutore  ISEPIC"},
/* ko */ {IDCLS_ENABLE_ISEPIC_SWITCH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_ISEPIC_SWITCH_NL, "Activeer de ISEPIC schakelaar"},
/* pl */ {IDCLS_ENABLE_ISEPIC_SWITCH_PL, "Ustaw prze��cznik ISEPIC"},
/* ru */ {IDCLS_ENABLE_ISEPIC_SWITCH_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_ISEPIC_SWITCH_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_ISEPIC_SWITCH_TR, ""},  /* fuzzy */
#endif

/* c64/cart/isepic.c */
/* en */ {IDCLS_DISABLE_ISEPIC_SWITCH,    N_("Disable the ISEPIC switch")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_ISEPIC_SWITCH_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_ISEPIC_SWITCH_DE, "ISEPIC Schalter deaktivieren"},
/* es */ {IDCLS_DISABLE_ISEPIC_SWITCH_ES, "Deshabilitar conmutaci�n ISEPIC"},
/* fr */ {IDCLS_DISABLE_ISEPIC_SWITCH_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_ISEPIC_SWITCH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_ISEPIC_SWITCH_IT, "Disattiva l'interrutore  ISEPIC"},
/* ko */ {IDCLS_DISABLE_ISEPIC_SWITCH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_ISEPIC_SWITCH_NL, "Deactiveer de ISEPIC schakelaar"},
/* pl */ {IDCLS_DISABLE_ISEPIC_SWITCH_PL, "Wy��cz prze��cznik ISEPIC"},
/* ru */ {IDCLS_DISABLE_ISEPIC_SWITCH_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_ISEPIC_SWITCH_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_ISEPIC_SWITCH_TR, ""},  /* fuzzy */
#endif

/* c64/cart/isepic.c */
/* en */ {IDCLS_SET_ISEPIC_FILENAME,    N_("Set ISEPIC image name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_ISEPIC_FILENAME_DA, "V�lg ISEPIC image-navn"},
/* de */ {IDCLS_SET_ISEPIC_FILENAME_DE, "ISEPIC Imagedateiname setzen"},
/* es */ {IDCLS_SET_ISEPIC_FILENAME_ES, "Seleccionar nombre imagen ISEPIC"},
/* fr */ {IDCLS_SET_ISEPIC_FILENAME_FR, "Nom de l'image ISEPIC"},
/* hu */ {IDCLS_SET_ISEPIC_FILENAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_ISEPIC_FILENAME_IT, "Imposta nome immagine ISEPIC"},
/* ko */ {IDCLS_SET_ISEPIC_FILENAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_ISEPIC_FILENAME_NL, "Geef de naam op van het ISEPIC cartridge bestand"},
/* pl */ {IDCLS_SET_ISEPIC_FILENAME_PL, "Okre�l nazw� obrazu ISEPIC"},
/* ru */ {IDCLS_SET_ISEPIC_FILENAME_RU, "Set ISEPIC image name"},
/* sv */ {IDCLS_SET_ISEPIC_FILENAME_SV, "Namn p� ISEPIC-avbildning"},
/* tr */ {IDCLS_SET_ISEPIC_FILENAME_TR, "ISEPIC imaj ismini belirle"},
#endif

/* c64/cart/isepic.c */
/* en */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE,    N_("Allow writing to ISEPIC image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_DA, "Tillad skrivning til ISEPIC-image"},
/* de */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_DE, "Schreibzugriff auf ISEPIC Image erlauben"},
/* es */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_ES, "Permitir grabaci�n en imagen ISEPIC"},
/* fr */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_FR, "Permettre l'�criture sur l'image ISEPIC"},
/* hu */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_IT, "Attiva scrittura su immagine ISEPIC"},
/* ko */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_NL, "Sta schrijven naar ISEPIC bestand toe"},
/* pl */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_PL, "Pozw�l na zapis do obrazu ISEPIC"},
/* ru */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_RU, "Allow writing to ISEPIC image"},
/* sv */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_SV, "Till�t skrivning till ISEPIC-avbildning"},
/* tr */ {IDCLS_ALLOW_WRITING_TO_ISEPIC_IMAGE_TR, "ISEPIC imaj�na yazmay� aktif et"},
#endif

/* c64/cart/isepic.c */
/* en */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE,    N_("Do not write to ISEPIC image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_DA, "Skriv ikke til ISEPIC-image"},
/* de */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_DE, "Kein Schreibzugriff auf ISEPIC Image"},
/* es */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_ES, "No permitir grabaci�n en imagen ISEPIC"},
/* fr */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_FR, "Ne pas �crire sur l'image ISEPIC"},
/* hu */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_IT, "Disattiva scrittura su immagine ISEPIC"},
/* ko */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_NL, "Schrijf niet naar ISEPIC bestand"},
/* pl */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_PL, "Nie zapisuj do obrazu ISEPIC"},
/* ru */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_RU, "Do not write to ISEPIC image"},
/* sv */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_SV, "Skriv inte till ISEPIC-avbildning"},
/* tr */ {IDCLS_DO_NOT_WRITE_TO_ISEPIC_IMAGE_TR, "ISEPIC imaj�na yazma"},
#endif

/* c64/cart/magicvoice.c */
/* en */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME,    N_("Specify name of Magic Voice ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_DE, "Name f�r Magic Voice ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_ES, "Especificar nombre imagen Magic Voice ROM"},
/* fr */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_IT, "Specifica il nome immagine della ROM Magic Voice"},
/* ko */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_NL, "Geef de naam van het Magic Voice ROM bestand op"},
/* pl */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_PL, "Okre�l nazw� obrazu ROM Magic Voice"},
/* ru */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_MAGICVOICE_IMAGE_NAME_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_ENABLE_MAGICVOICE,    N_("Enable the Magic Voice cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_MAGICVOICE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_MAGICVOICE_DE, "DigiMAX Cartridge aktivieren"},
/* es */ {IDCLS_ENABLE_MAGICVOICE_ES, "Permitir cartucho Magic Voice"},
/* fr */ {IDCLS_ENABLE_MAGICVOICE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_MAGICVOICE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_MAGICVOICE_IT, "Attiva la cartuccia Magic Voice"},
/* ko */ {IDCLS_ENABLE_MAGICVOICE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_MAGICVOICE_NL, "Magic Voice cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_MAGICVOICE_PL, "W��cz kartrid� Magic Voice"},
/* ru */ {IDCLS_ENABLE_MAGICVOICE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_MAGICVOICE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_MAGICVOICE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_DISABLE_MAGICVOICE,    N_("Disable the Magic Voice cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_MAGICVOICE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_MAGICVOICE_DE, "DigiMAX Cartridge deaktivieren"},
/* es */ {IDCLS_DISABLE_MAGICVOICE_ES, "Deshabilitar cartucho Magic Voice"},
/* fr */ {IDCLS_DISABLE_MAGICVOICE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_MAGICVOICE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_MAGICVOICE_IT, "Disattiva la  cartuccia Magic Voice"},
/* ko */ {IDCLS_DISABLE_MAGICVOICE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_MAGICVOICE_NL, "Magic Voice cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_MAGICVOICE_PL, "Wy��cz kartrid� Magic Voice"},
/* ru */ {IDCLS_DISABLE_MAGICVOICE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_MAGICVOICE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_MAGICVOICE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_ENABLE_MMC64,    N_("Enable the MMC64 expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_MMC64_DA, "Aktiv�r MMC64-udviddelse"},
/* de */ {IDCLS_ENABLE_MMC64_DE, "MMC64 Erweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_MMC64_ES, "Permitir expansi�n MMC64"},
/* fr */ {IDCLS_ENABLE_MMC64_FR, "Activer l'expansion MMC64"},
/* hu */ {IDCLS_ENABLE_MMC64_HU, "MMC64 b�v�t�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_MMC64_IT, "Attiva l'espansione MMC64"},
/* ko */ {IDCLS_ENABLE_MMC64_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_MMC64_NL, "MMC64 uitbreiding inschakelen"},
/* pl */ {IDCLS_ENABLE_MMC64_PL, "W��cz rozszerzenie MMC64"},
/* ru */ {IDCLS_ENABLE_MMC64_RU, "Enable the MMC64 expansion"},
/* sv */ {IDCLS_ENABLE_MMC64_SV, "Aktivera MMC64-expansion"},
/* tr */ {IDCLS_ENABLE_MMC64_TR, "MMC64 geni�lemesini aktif et"},
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_DISABLE_MMC64,    N_("Disable the MMC64 expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_MMC64_DA, "Deaktiv�r MMC64-udviddelse"},
/* de */ {IDCLS_DISABLE_MMC64_DE, "MMC64 Erweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_MMC64_ES, "Deshabilitar expansi�n MMC64"},
/* fr */ {IDCLS_DISABLE_MMC64_FR, "D�sactiver l'expansion MMC64"},
/* hu */ {IDCLS_DISABLE_MMC64_HU, "MMC64 b�v�t�s tilt�sa"},
/* it */ {IDCLS_DISABLE_MMC64_IT, "Disattiva l'espansione MMC64"},
/* ko */ {IDCLS_DISABLE_MMC64_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_MMC64_NL, "MMC64 uitbreiding uitschakelen"},
/* pl */ {IDCLS_DISABLE_MMC64_PL, "Wy��cz rozszerzenie MMC64"},
/* ru */ {IDCLS_DISABLE_MMC64_RU, "Disable the MMC64 expansion"},
/* sv */ {IDCLS_DISABLE_MMC64_SV, "Inaktivera MMC64-expansion"},
/* tr */ {IDCLS_DISABLE_MMC64_TR, "MMC64 geni�lemesini pasifle�tir"},
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_SPECIFY_MMC64_BIOS_NAME,    N_("Specify name of MMC64 BIOS image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_DA, "Angiv navn p� MMC64-BIOS-image"},
/* de */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_DE, "Name f�r MMC64 BIOS Datei spezifizieren"},
/* es */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_ES, "Especificar nombre imagen BIOS MMC64"},
/* fr */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_FR, "Sp�cifier le nom de l'image MMC64 BIOS"},
/* hu */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_HU, "Adja meg az MMC64 BIOS k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_IT, "Specifica il nome immagine del BIOS MMC64"},
/* ko */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_NL, "Geef de naam van het MMC64 BIOS bestand"},
/* pl */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_PL, "Okre�l nazw� obrazu BIOS MMC64"},
/* ru */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_RU, "Specify name of MMC64 BIOS image"},
/* sv */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_SV, "Ange namn p� MMC64-BIOS-avbildning"},
/* tr */ {IDCLS_SPECIFY_MMC64_BIOS_NAME_TR, "MMC64 BIOS imaj�n�n ismini belirt"},
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME,    N_("Specify name of MMC64 image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_DA, "Angiv navn p� MMC64-image"},
/* de */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_DE, "Name der MMC64 Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_ES, "Especificar nombre imagen MMC64"},
/* fr */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_FR, "Sp�cifier le nom de l'image MMC64"},
/* hu */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_HU, "Adja meg az MMC64 k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_IT, "Specifica il nome immagine MMC64"},
/* ko */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_NL, "Geef de naam van het MMC64 bestand"},
/* pl */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_PL, "Okre�l nazw� obrazu MMC64"},
/* ru */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_RU, "Specify name of MMC64 image"},
/* sv */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_SV, "Ange namn p� MMC64-avbildning"},
/* tr */ {IDCLS_SPECIFY_MMC64_IMAGE_NAME_TR, "MMC64 imaj�n�n ismini belirt"},
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_SPECIFY_MMC64_REVISION,    N_("Specify MMC64 revision (0: Rev A, 1: Rev B)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_MMC64_REVISION_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_MMC64_REVISION_DE, "Setze MMC64 Revision (0: Rev A, 1: Rev B)"},
/* es */ {IDCLS_SPECIFY_MMC64_REVISION_ES, "Especificar revisi�n MMC64 (0: Rev A, 1: Rev B)"},
/* fr */ {IDCLS_SPECIFY_MMC64_REVISION_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_MMC64_REVISION_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_MMC64_REVISION_IT, "Specifica la revisione MMC64 (0: Rev A, 1: Rev B)"},
/* ko */ {IDCLS_SPECIFY_MMC64_REVISION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_MMC64_REVISION_NL, "Geef de MMC64 revisie (0: Rev A, 1: Rev B)"},
/* pl */ {IDCLS_SPECIFY_MMC64_REVISION_PL, "Okre�l wersj� MMC64 (0: Rev A, 1: Rev B)"},
/* ru */ {IDCLS_SPECIFY_MMC64_REVISION_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_MMC64_REVISION_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_MMC64_REVISION_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_SPECIFY_MMC64_SD_TYPE,    N_("Specify MMC64 SD type (0: auto, 1: MMC, 2: SD, 3: SDHC)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_MMC64_SD_TYPE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_MMC64_SD_TYPE_DE, "Setze MMC64 SD Typ (0: Auto, 1: MMC, 2: SD, 3: SDHC)"},
/* es */ {IDCLS_SPECIFY_MMC64_SD_TYPE_ES, "Especificar tipo MMC64 SD (0: auto, 1: MMC, 2: SD, 3: SDHC)"},
/* fr */ {IDCLS_SPECIFY_MMC64_SD_TYPE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_MMC64_SD_TYPE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_MMC64_SD_TYPE_IT, "Specifica il tipo di SD dell'MMC64 (0: auto, 1: MMC, 2: SD, 3: SDHC)"},
/* ko */ {IDCLS_SPECIFY_MMC64_SD_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_MMC64_SD_TYPE_NL, "Geef het MMC64 SD soort op (0: automatisch, 1: MMC, 2: SD, 3: SDHC)"},
/* pl */ {IDCLS_SPECIFY_MMC64_SD_TYPE_PL, "Okre�l typ SD MMC64 (0: Auto, 1: MMC, 2: SD, 3: SDHC)"},
/* ru */ {IDCLS_SPECIFY_MMC64_SD_TYPE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_MMC64_SD_TYPE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_MMC64_SD_TYPE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_MMC64_READONLY,    N_("Set the MMC64 card to read-only")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC64_READONLY_DA, "Skrivebeskyt MMC64-kort"},
/* de */ {IDCLS_MMC64_READONLY_DE, "MMC64 Karte Schreibschutz"},
/* es */ {IDCLS_MMC64_READONLY_ES, "Seleccionar tarjeta MMC64 en modo s�lo lectura"},
/* fr */ {IDCLS_MMC64_READONLY_FR, "D�finir la carte MMC64 en lecture seule"},
/* hu */ {IDCLS_MMC64_READONLY_HU, "MMC64 k�rtya csak olvashat�"},
/* it */ {IDCLS_MMC64_READONLY_IT, "Imposta la card MMC64 in sola lettura"},
/* ko */ {IDCLS_MMC64_READONLY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC64_READONLY_NL, "Stel de MMC64 in als alleen-lezen"},
/* pl */ {IDCLS_MMC64_READONLY_PL, "Ustaw kart� MMC64 na tryb tylko do odczytu"},
/* ru */ {IDCLS_MMC64_READONLY_RU, "Set the MMC64 card to read-only"},
/* sv */ {IDCLS_MMC64_READONLY_SV, "Skrivskydda MMC64-kort"},
/* tr */ {IDCLS_MMC64_READONLY_TR, "MMC64 kart�n� salt okunura �evir"},
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_MMC64_READWRITE,    N_("Set the MMC64 card to read/write")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC64_READWRITE_DA, "Tillad skrivning p� MMC64-kort"},
/* de */ {IDCLS_MMC64_READWRITE_DE, "MMC64 Karte Schreibzugriff"},
/* es */ {IDCLS_MMC64_READWRITE_ES, "Seleccionar tarjeta MMC64 en modo lectura/grabaci�n"},
/* fr */ {IDCLS_MMC64_READWRITE_FR, "D�finir la carte MMC64 en lecture/�criture"},
/* hu */ {IDCLS_MMC64_READWRITE_HU, "MMC64 k�rtya �rhat�/olvashat�"},
/* it */ {IDCLS_MMC64_READWRITE_IT, "Imposta la card MMC64 in lettura/scrittura"},
/* ko */ {IDCLS_MMC64_READWRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC64_READWRITE_NL, "Stel de MMC64 in als lezen/schrijven"},
/* pl */ {IDCLS_MMC64_READWRITE_PL, "Ustaw kart� MMC64 na tryb zapisu i odczytu"},
/* ru */ {IDCLS_MMC64_READWRITE_RU, "Set the MMC64 card to read/write"},
/* sv */ {IDCLS_MMC64_READWRITE_SV, "Till�t skrivning p� MMC64-kort"},
/* tr */ {IDCLS_MMC64_READWRITE_TR, "MMC64 kart�n� okunur/yaz�l�ra �evir"},
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_MMC64_BIOS_WRITE,    N_("Save the MMC64 bios when changed")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC64_BIOS_WRITE_DA, "Gem MMC64-BIOS ved �ndring"},
/* de */ {IDCLS_MMC64_BIOS_WRITE_DE, "MMC64 BIOS speichern bei �nderung"},
/* es */ {IDCLS_MMC64_BIOS_WRITE_ES, "Grabar BIOS MMC64 cuando cambie"},
/* fr */ {IDCLS_MMC64_BIOS_WRITE_FR, "Sauvegarder le BIOS MMC64 lorsque modifi�"},
/* hu */ {IDCLS_MMC64_BIOS_WRITE_HU, "MMC64 BIOS ment�se v�ltoz�s ut�n"},
/* it */ {IDCLS_MMC64_BIOS_WRITE_IT, "Salva il bios MMC64 alla modifica"},
/* ko */ {IDCLS_MMC64_BIOS_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC64_BIOS_WRITE_NL, "Sla de MMC64 BIOS op bij wijziging"},
/* pl */ {IDCLS_MMC64_BIOS_WRITE_PL, "Zapisuj bios MMC64 przy zmianie"},
/* ru */ {IDCLS_MMC64_BIOS_WRITE_RU, "Save the MMC64 bios when changed"},
/* sv */ {IDCLS_MMC64_BIOS_WRITE_SV, "Spara MMC64-BIOS vid �ndring"},
/* tr */ {IDCLS_MMC64_BIOS_WRITE_TR, "MMC64 BIOS'unu de�i�ti�inde kaydet"},
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_MMC64_BIOS_READ_ONLY,    N_("Do not save the MMC64 bios when changed")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC64_BIOS_READ_ONLY_DA, ""},  /* fuzzy */
/* de */ {IDCLS_MMC64_BIOS_READ_ONLY_DE, "MMC64 BIOS nicht speichern bei �nderung"},
/* es */ {IDCLS_MMC64_BIOS_READ_ONLY_ES, "No grabar BIOS MMC64 cuando cambie"},
/* fr */ {IDCLS_MMC64_BIOS_READ_ONLY_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_MMC64_BIOS_READ_ONLY_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC64_BIOS_READ_ONLY_IT, "Non salvare il bios MMC64 alla modifica"},
/* ko */ {IDCLS_MMC64_BIOS_READ_ONLY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC64_BIOS_READ_ONLY_NL, "Sla de MMC64 BIOS niet op bij wijziging"},
/* pl */ {IDCLS_MMC64_BIOS_READ_ONLY_PL, "Nie zapisuj bios-a MMC64 przy zmianie"},
/* ru */ {IDCLS_MMC64_BIOS_READ_ONLY_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_MMC64_BIOS_READ_ONLY_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_MMC64_BIOS_READ_ONLY_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_MMC64_SET_FLASH_JUMPER,    N_("Set the MMC64 Flash Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC64_SET_FLASH_JUMPER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_MMC64_SET_FLASH_JUMPER_DE, "Aktiviere MMC64 Flash Jumper"},
/* es */ {IDCLS_MMC64_SET_FLASH_JUMPER_ES, "Seleccionar el  MMC64 Flash Jumper"},
/* fr */ {IDCLS_MMC64_SET_FLASH_JUMPER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_MMC64_SET_FLASH_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC64_SET_FLASH_JUMPER_IT, "Imposta il ponticello flash della MMC64"},
/* ko */ {IDCLS_MMC64_SET_FLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC64_SET_FLASH_JUMPER_NL, "Stel de MMC64 Flash Jumper in"},
/* pl */ {IDCLS_MMC64_SET_FLASH_JUMPER_PL, "Ustaw zwork� MMC64 Flash"},
/* ru */ {IDCLS_MMC64_SET_FLASH_JUMPER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_MMC64_SET_FLASH_JUMPER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_MMC64_SET_FLASH_JUMPER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmc64.c */
/* en */ {IDCLS_MMC64_UNSET_FLASH_JUMPER,    N_("Remove the MMC64 Flash Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_DE, "Deaktiviere MMC64 Flash Jumper"},
/* es */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_ES, "Quitar el  MMC64 Flash Jumper"},
/* fr */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_IT, "Rimuovi il ponticello flash della MMC64"},
/* ko */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_NL, "Verwijder de MMC64 Flash Jumper"},
/* pl */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_PL, "Usu� zwork� RR Flash"},
/* ru */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_MMC64_UNSET_FLASH_JUMPER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/rrnetmk3.c */
/* en */ {IDCLS_RRNETMK3_BIOS_WRITE,    N_("Save the RRNETMK3 bios when changed")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RRNETMK3_BIOS_WRITE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RRNETMK3_BIOS_WRITE_DE, "RRNETMK3 BIOS speichern bei �nderung"},
/* es */ {IDCLS_RRNETMK3_BIOS_WRITE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_RRNETMK3_BIOS_WRITE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RRNETMK3_BIOS_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RRNETMK3_BIOS_WRITE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_RRNETMK3_BIOS_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RRNETMK3_BIOS_WRITE_NL, "Sla de RRNET MK3 bios op bij wijziging"},
/* pl */ {IDCLS_RRNETMK3_BIOS_WRITE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_RRNETMK3_BIOS_WRITE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RRNETMK3_BIOS_WRITE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RRNETMK3_BIOS_WRITE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/rrnetmk3.c */
/* en */ {IDCLS_RRNETMK3_BIOS_READ_ONLY,    N_("Do not save the RRNETMK3 bios when changed")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_DE, "RRNETMK3 BIOS nicht speichern bei �nderung"},
/* es */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_NL, "Sla de RRNET MK3 bios niet op bij wijziging"},
/* pl */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RRNETMK3_BIOS_READ_ONLY_TR, ""},  /* fuzzy */
#endif

/* c64/cart/rrnetmk3.c */
/* en */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER,    N_("Set the RRNETMK3 Flash Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_DE, "Aktiviere RRNETMK3 Flash Jumper"},
/* es */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_NL, "Stel de RRNET MK3 Flash Jumper in"},
/* pl */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RRNETMK3_SET_FLASH_JUMPER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/rrnetmk3.c */
/* en */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER,    N_("Remove the RRNETMK3 Flash Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_DE, "Deaktiviere RRNETMK3 Flash Jumper"},
/* es */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_NL, "Verwijder de RRNET MK3 Flash Jumper"},
/* pl */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RRNETMK3_UNSET_FLASH_JUMPER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME,    N_("Specify MMC Replay card image filename")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_DA, "Angiv filnavn for MMC Replay kort-image"},
/* de */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_DE, "MMC Replay Modul imeage datei w�hlen"},
/* es */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_ES, "Especificar fichero imagen tarjeta MMC Replay"},
/* fr */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_FR, "Sp�cifier le nom du fichier de l'image carte MMC Replay"},
/* hu */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_IT, "Specifica il nome file immagine della card MMC Replay"},
/* ko */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_NL, "Geef de naam van het MMC Replay card bestand"},
/* pl */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_PL, "Okre�l nazw� pliku obrazu karty MMC Replay"},
/* ru */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_RU, "Specify MMC Replay card image filename"},
/* sv */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_SV, "Ange namn p� avbildningsfil f�r MMC Replay-kort"},
/* tr */ {IDCLS_SELECT_MMC_REPLAY_CARD_IMAGE_FILENAME_TR, "MMC Replay kart imaj dosyaismini belirt"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE,    N_("Specify MMC Replay SD type (0: auto, 1: MMC, 2: SD, 3: SDHC)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_DE, "Setze MMC Replay SD type (0: Auto, 1: MMC, 2: SD, 3: SDHC)"},
/* es */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_ES, "Especificar tipo MMC Replay SD (0: auto, 1: MMC, 2: SD, 3: SDHC)"},
/* fr */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_IT, "Specifica il tipo di SD dell'MMC Replay (0: auto, 1: MMC, 2: SD, 3: SDHC)"},
/* ko */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_NL, "Geef de MMC Replay SD soort op (0: automatisch, 1: MMC, 2: SD, 3: SDHC)"},
/* pl */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_PL, "Okre�l typ SD MMC Replay (0: Auto, 1: MMC, 2: SD, 3: SDHC)"},
/* ru */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SELECT_MMC_REPLAY_SD_TYPE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE,    N_("Enable writes to MMC Replay card image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_DA, "Tillad skrivning til MMC Replay kort-image"},
/* de */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_DE, "Erlaube Schreibzugriff auf MMC Replay Imagedatei"},
/* es */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_ES, "Permitir grabaci�n en imagen tarjeta MMC Replay"},
/* fr */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_FR, "Permetre l'�criture � l'image MMC Replay"},
/* hu */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_IT, "Attiva scrittura su immagine card MMC Replay"},
/* ko */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_NL, "Schrijven naar MMC Replay card bestand inschakelen"},
/* pl */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_PL, "W��cz zapis do obrazu karty MMC Replay"},
/* ru */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_RU, "Enable writes to MMC Replay card image"},
/* sv */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_SV, "Aktivera skrivning till MMC Replay-kortavbildning"},
/* tr */ {IDCLS_MMC_REPLAY_CARD_WRITE_ENABLE_TR, "MMC Replay kart imaj�nda yazmalar� aktif et"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE,    N_("Disable writes to MMC Replay card image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_DA, "Skriv ikke til MMC Replay kort-image"},
/* de */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_DE, "Schreibzugriff auf MMC Replay Imagedatei verhindern"},
/* es */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_ES, "Deshabilitar grabaci�n en imagen tarjeta MMC Replay"},
/* fr */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_FR, "Interdire l'�criture � l'image MMC Replay"},
/* hu */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_IT, "Disattiva scrittura su immagine card MMC Replay"},
/* ko */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_NL, "Schrijven naar het MMC Replay card bestand uitschakelen"},
/* pl */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_PL, "Wy��cz zapis do obrazu karty MMC Replay"},
/* ru */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_RU, "Disable writes to MMC Replay card image"},
/* sv */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_SV, "Inaktivera skrivning till MMC Replay-kortavbildning"},
/* tr */ {IDCLS_MMC_REPLAY_CARD_WRITE_DISABLE_TR, "MMC Replay kart imaj�nda yazmalar� pasifle�tir"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE,    N_("Specify MMC Replay EEPROM image filename")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_DA, "Angiv filnavn for MMC Replay EEPROM-image"},
/* de */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_DE, "MMC Replay EEPROM Imagedatei w�hlen"},
/* es */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_ES, "Especificar nombre fichero imagen EEPROM MMC Replay"},
/* fr */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_FR, "Sp�cifier le nom du fichier de l'image EEPROM MMC Replay"},
/* hu */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_IT, "Specifica il nome file immagine della EEPROM MMC Replay"},
/* ko */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_NL, "Geef de naam van het MMC Replay EEPROM bestand"},
/* pl */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_PL, "Okre�l nazw� pliku obrazu EEPROM MMC Replay"},
/* ru */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_RU, "Specify MMC Replay EEPROM image filename"},
/* sv */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_SV, "Ange filnamn f�r MMC Replay EEPROM-avbildning"},
/* tr */ {IDCLS_SELECT_MMC_REPLAY_EEPROM_IMAGE_TR, "MMC Replay EEPROM imaj dosyaismini belirt"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE,    N_("Enable writes to MMC Replay EEPROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_DA, "Tillad skrivning til MMC Replay EEPROM-image"},
/* de */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_DE, "Erlaube Schreibzugriff auf MMC Replay EEPROM Imagedatei"},
/* es */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_ES, "Permitir grabaci�n en imagen EEPROM MMC Replay"},
/* fr */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_FR, "Permetre l'�criture � l'image MMC Replay EEPROM"},
/* hu */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_IT, "Attiva scrittura su immagine EEPROM MMC Replay"},
/* ko */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_KO, "MMC Replay EEPROM �̹��� �� ���� �����ϰ� �ϱ�"},
/* nl */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_NL, "Schrijven naar MMC Replay EEPROM bestand inschakelen"},
/* pl */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_PL, "W��cz zapis do obrazu EEPROM MMC Replay"},
/* ru */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_RU, "Enable writes to MMC Replay EEPROM image"},
/* sv */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_SV, "Aktivera skrivning till MMC Replay EEPROM-avbildning"},
/* tr */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_ENABLE_TR, "MMC Replay EEPROM imaj�nda yazmalar� aktif et"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE,    N_("Disable writes to MMC Replay EEPROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_DA, "Skriv ikke til MMC Replay EEPROM-image"},
/* de */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_DE, "Schreibzugriff auf MMC Replay EEPROM Imagedatei verhindern"},
/* es */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_ES, "Deshabilitar grabaci�n en imagen EEPROM MMC Replay"},
/* fr */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_FR, "Interdire l'�criture � l'image MMC Replay EEPROM"},
/* hu */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_IT, "Disattiva scrittura su immagine EEPROM MMC Replay"},
/* ko */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_NL, "Schrijven naar MMC Replay EEPROM bestand uitschakelen"},
/* pl */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_PL, "Wy��cz zapis do obrazu EEPROM MMC Replay"},
/* ru */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_RU, "Disable writes to MMC Replay EEPROM image"},
/* sv */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_SV, "Inaktivera skrivning till MMC Replay EEPROM-avbildning"},
/* tr */ {IDCLS_MMC_REPLAY_EEPROM_WRITE_DISABLE_TR, "MMC Replay EEPROM imaj�nda yazmalar� pasifle�tir"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE,    N_("Enable MMC Replay rescue mode")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_DA, "Aktiv�r MMC Replay fejlsikret tilstand"},
/* de */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_DE, "MMC Replay Rescue Modus aktivieren"},
/* es */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_ES, "Permitir modo rescate MMC Replay "},
/* fr */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_FR, "Activer le mode de secours MMC Replay"},
/* hu */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_IT, "Attiva modalit� ripristino MMC Replay"},
/* ko */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_NL, "MMC Replay reddingsmodus inschakelen"},
/* pl */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_PL, "W��cz tryb ratunkowy MMC Replay"},
/* ru */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_RU, "Enable MMC Replay rescue mode"},
/* sv */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_SV, "Aktivera MMC Replay-r�ddningsl�ge"},
/* tr */ {IDCLS_MMC_REPLAY_RESCUE_MODE_ENABLE_TR, "MMC Replay kurtarma modunu aktif et"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE,    N_("Disable MMC Replay rescue mode")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_DA, "Deaktiv�r MMC Replay fejlsikret tilstand"},
/* de */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_DE, "MMC Replay Rescue Modus deaktivieren"},
/* es */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_ES, "Deshabilitar modo rescate MMC Replay "},
/* fr */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_FR, "D�sactiver le mode de secours MMC Replay"},
/* hu */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_IT, "Disattiva modalit� ripristino MMC Replay"},
/* ko */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_NL, "MMC Replay reddingsmodus uitschakelen"},
/* pl */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_PL, "Wy��cz tryb ratunkowy MMC Replay"},
/* ru */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_RU, "Disable MMC Replay rescue mode"},
/* sv */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_SV, "Inaktivera MMC Replay-r�ddningsl�ge"},
/* tr */ {IDCLS_MMC_REPLAY_RESCUE_MODE_DISABLE_TR, "MMC Replay kurtarma modunu pasifle�tir"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE,    N_("Allow writing to MMC Replay image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_DA, "Tillad skrivning til MMC Replay-image"},
/* de */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_DE, "Erlaube Schreibzugriff auf MMC Replay Image"},
/* es */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_ES, "Permitir grabaci�n en imagen MMC Replay"},
/* fr */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_FR, "Permetre l'�criture � l'image MMC Replay"},
/* hu */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_IT, "Attiva scrittura su immagine MMC Replay"},
/* ko */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_NL, "Sta schrijven naar MMC Replay bestand toe"},
/* pl */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_PL, "Pozw�l na zapis do obrazu MMC Replay"},
/* ru */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_RU, "Allow writing to MMC Replay image"},
/* sv */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_SV, "Till�t skrivning till MMC Replay-avbildning"},
/* tr */ {IDCLS_ALLOW_WRITING_TO_MMC_REPLAY_IMAGE_TR, "MMC Replay imaj�na yazmay� aktif et"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE,    N_("Do not write to MMC Replay image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_DA, "Skriv ikke til MMC Replay-image"},
/* de */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_DE, "Kein Schreibzugriff auf MMC Replay Image"},
/* es */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_ES, "No grabar en imagen MMC Replay"},
/* fr */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_FR, "Interdire l'�criture � l'image MMC Replay"},
/* hu */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_IT, "Disattiva scrittura su immagine MMC Replay"},
/* ko */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_NL, "Schrijf niet naar MMC Replay bestand"},
/* pl */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_PL, "Nie zapisuj do obrazu MMC Replay"},
/* ru */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_RU, "Do not write to MMC Replay image"},
/* sv */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_SV, "Skriv inte till MMC Replay-avbildning"},
/* tr */ {IDCLS_DO_NOT_WRITE_TO_MMC_REPLAY_IMAGE_TR, "MMC Replay imaj�na yazma"},
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE,    N_("Specify GMod2 EEPROM image filename")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_DE, "GMod2 EEPROM Imagedatei w�hlen"},
/* es */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_NL, "Geef de naam van het GMod2 EEPROM bestand"},
/* pl */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SELECT_GMOD2_EEPROM_IMAGE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE,    N_("Enable writes to GMod2 EEPROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_DE, "Erlaube Schreibzugriff auf GMod2 EEPROM Image"},
/* es */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_NL, "Schrijven naar GMod2 EEPROM bestand inschakelen"},
/* pl */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_GMOD2_EEPROM_WRITE_ENABLE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/mmcreplay.c */
/* en */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE,    N_("Disable writes to GMod2 EEPROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_DE, "Schreibzugriff auf GMod2 EEPROM Imagedatei verhindern"},
/* es */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_NL, "Schrijven naar GMod2 EEPROM bestand uitschakelen"},
/* pl */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_GMOD2_EEPROM_WRITE_DISABLE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/gmod2.c */
/* en */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT,    N_("Enable saving of the GMod2 ROM at exit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_DE, "Speichern des GMod2 ROMs beim Beenden aktivieren"},
/* es */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_NL, "Opslaan van het GMod2 ROM bestand bij afsluiten inschakelen"},
/* pl */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_SAVE_GMOD2_ROM_AT_EXIT_TR, ""},  /* fuzzy */
#endif

/* c64/cart/gmod2.c */
/* en */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT,    N_("Disable saving of the GMod2 ROM at exit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_DE, "Speichern des GMod2 ROMs beim Beenden deaktivieren"},
/* es */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_NL, "Opslaan van het GMod2 ROM bestand bij afsluiten uitschakelen"},
/* pl */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_SAVE_GMOD2_ROM_AT_EXIT_TR, ""},  /* fuzzy */
#endif

/* c64/cart/retroreplay.c */
/* en */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT,    N_("Enable saving of the RR ROM at exit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_DA, "Aktiv�r skrivning af RR ROM ved afslutning"},
/* de */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_DE, "Speichern des RR ROMs beim Beenden aktivieren"},
/* es */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_ES, "Permitir grabar ROM RR al salir"},
/* fr */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_FR, "Activer la sauvegarde du ROM RR � la fin du programme"},
/* hu */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_IT, "Attiva salvataggio ROM della RR all'uscita"},
/* ko */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_NL, "Opslaan van het RR ROM bestand bij afsluiten inschakelen"},
/* pl */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_PL, "W��cz zapis ROM RR przy wyj�ciu"},
/* ru */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_RU, "Enable saving of the RR ROM at exit"},
/* sv */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_SV, "Aktivera sparande av RR-ROM vid avslutning"},
/* tr */ {IDCLS_ENABLE_SAVE_RR_ROM_AT_EXIT_TR, "��k��ta RR ROM'un kaydedilmesini aktif et"},
#endif

/* c64/cart/retroreplay.c */
/* en */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT,    N_("Disable saving of the RR ROM at exit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_DA, "Dektiv�r skrivning af RR ROM ved afslutning"},
/* de */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_DE, "Speichern des RR ROMs beim Beenden deaktivieren"},
/* es */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_ES, "Deshabilitar grabar ROM RR al salir"},
/* fr */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_FR, "D�sactiver la sauvegarde du ROM RR � la fin du programme"},
/* hu */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_IT, "Disattiva salvataggio ROM della RR all'uscita"},
/* ko */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_NL, "Opslaan van het RR ROM bestand bij afsluiten uitschakelen"},
/* pl */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_PL, "Wy��cz zapis ROM RR przy wyj�ciu"},
/* ru */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_RU, "Disable saving of the RR ROM at exit"},
/* sv */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_SV, "Inaktivera sparande av RR-ROM vid avslutning"},
/* tr */ {IDCLS_DISABLE_SAVE_RR_ROM_AT_EXIT_TR, "��k��ta RR ROM'un kaydedilmesini pasifle�tir"},
#endif

/* c64/cart/retroreplay.c */
/* en */ {IDCLS_SET_RR_BANK_JUMPER,    N_("Set RR Bank Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_RR_BANK_JUMPER_DA, "Tilslut RR Bank Jumper"},
/* de */ {IDCLS_SET_RR_BANK_JUMPER_DE, "Aktiviere RR Bank Jumper"},
/* es */ {IDCLS_SET_RR_BANK_JUMPER_ES, "Seleccionar conmutador banco RR"},
/* fr */ {IDCLS_SET_RR_BANK_JUMPER_FR, "Activer le jumper Banque RR"},
/* hu */ {IDCLS_SET_RR_BANK_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_RR_BANK_JUMPER_IT, "Imposta ponticello bank della RR"},
/* ko */ {IDCLS_SET_RR_BANK_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_RR_BANK_JUMPER_NL, "Stel RR bank jumper in"},
/* pl */ {IDCLS_SET_RR_BANK_JUMPER_PL, "Ustaw zwork� RR Bank"},
/* ru */ {IDCLS_SET_RR_BANK_JUMPER_RU, "Set RR Bank Jumper"},
/* sv */ {IDCLS_SET_RR_BANK_JUMPER_SV, "Aktivera RR-bankbygel"},
/* tr */ {IDCLS_SET_RR_BANK_JUMPER_TR, "RR Bank Jumper'� tak"},
#endif

/* c64/cart/retroreplay.c */
/* en */ {IDCLS_UNSET_RR_BANK_JUMPER,    N_("Unset RR Bank Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_UNSET_RR_BANK_JUMPER_DA, "Afbryd RR Bank Jumper"},
/* de */ {IDCLS_UNSET_RR_BANK_JUMPER_DE, "Deaktiviere RR Bank Jumper"},
/* es */ {IDCLS_UNSET_RR_BANK_JUMPER_ES, "Quitar conmutador banco RR"},
/* fr */ {IDCLS_UNSET_RR_BANK_JUMPER_FR, "Ne pas activer le jumper Banque RR"},
/* hu */ {IDCLS_UNSET_RR_BANK_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_UNSET_RR_BANK_JUMPER_IT, "Rimuovi ponticello bank della RR"},
/* ko */ {IDCLS_UNSET_RR_BANK_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_UNSET_RR_BANK_JUMPER_NL, "Verwijder RR bank jumper"},
/* pl */ {IDCLS_UNSET_RR_BANK_JUMPER_PL, "Usu� zwork� RR Bank"},
/* ru */ {IDCLS_UNSET_RR_BANK_JUMPER_RU, "Unset RR Bank Jumper"},
/* sv */ {IDCLS_UNSET_RR_BANK_JUMPER_SV, "Inaktivera RR-bankbygel"},
/* tr */ {IDCLS_UNSET_RR_BANK_JUMPER_TR, "RR Bank Jumper'� ��kart"},
#endif

/* c64/cart/retroreplay.c */
/* en */ {IDCLS_SET_RR_FLASH_JUMPER,    N_("Set RR Flash Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_RR_FLASH_JUMPER_DA, "Tilslut RR Flash jumper"},
/* de */ {IDCLS_SET_RR_FLASH_JUMPER_DE, "Aktviere RR Flash Jumper"},
/* es */ {IDCLS_SET_RR_FLASH_JUMPER_ES, "Seleccionar conmutador RR Flash"},
/* fr */ {IDCLS_SET_RR_FLASH_JUMPER_FR, "Activer le Jumper RR Flash"},
/* hu */ {IDCLS_SET_RR_FLASH_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_RR_FLASH_JUMPER_IT, "Imposta ponticello flash della RR"},
/* ko */ {IDCLS_SET_RR_FLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_RR_FLASH_JUMPER_NL, "Stel RR Flash Jumper in"},
/* pl */ {IDCLS_SET_RR_FLASH_JUMPER_PL, "Ustaw prze��cznik RR Flash"},
/* ru */ {IDCLS_SET_RR_FLASH_JUMPER_RU, "Set RR Flash Jumper"},
/* sv */ {IDCLS_SET_RR_FLASH_JUMPER_SV, "S�tt RR-flashbygel"},
/* tr */ {IDCLS_SET_RR_FLASH_JUMPER_TR, "RR Flash Jumper'� tak"},
#endif

/* c64/cart/retroreplay.c */
/* en */ {IDCLS_UNSET_RR_FLASH_JUMPER,    N_("Unset RR Bank Jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_UNSET_RR_FLASH_JUMPER_DA, "Afbryd RR Bank Jumper"},
/* de */ {IDCLS_UNSET_RR_FLASH_JUMPER_DE, "Deaktiviere RR Bank Jumper"},
/* es */ {IDCLS_UNSET_RR_FLASH_JUMPER_ES, "Quitar conmutador banco RR"},
/* fr */ {IDCLS_UNSET_RR_FLASH_JUMPER_FR, "Ne pas activer le jumper Banque RR"},
/* hu */ {IDCLS_UNSET_RR_FLASH_JUMPER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_UNSET_RR_FLASH_JUMPER_IT, "Rimuovi ponticello bank della RR"},
/* ko */ {IDCLS_UNSET_RR_FLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_UNSET_RR_FLASH_JUMPER_NL, "Verwijder RR bank jumper"},
/* pl */ {IDCLS_UNSET_RR_FLASH_JUMPER_PL, "Usu� zwork� RR Bank"},
/* ru */ {IDCLS_UNSET_RR_FLASH_JUMPER_RU, "Unset RR Bank Jumper"},
/* sv */ {IDCLS_UNSET_RR_FLASH_JUMPER_SV, "Inaktivera RR-bankbygel"},
/* tr */ {IDCLS_UNSET_RR_FLASH_JUMPER_TR, "RR Bank Jumper'� ��kart"},
#endif

/* c64/cart/retroreplay.c */
/* en */ {IDCLS_RR_REVISION,    N_("Set RR Revision (0: Retro Replay, 1: Nordic Replay)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RR_REVISION_DA, ""},  /* fuzzy */
/* de */ {IDCLS_RR_REVISION_DE, "RR Revision (0: Retro Replay, 1: Nordic Replay)"},
/* es */ {IDCLS_RR_REVISION_ES, "Seleccionar RR Revision (0: Retro Replay, 1: Nordic Replay)"},
/* fr */ {IDCLS_RR_REVISION_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_RR_REVISION_HU, ""},  /* fuzzy */
/* it */ {IDCLS_RR_REVISION_IT, "Imposta revisione RR (0: Retro Replay, 1: Nordic Replay)"},
/* ko */ {IDCLS_RR_REVISION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_RR_REVISION_NL, "Stel RR Revisie in (0: Retro Replay, 1: Nordic Replay)"},
/* pl */ {IDCLS_RR_REVISION_PL, "Okre�l wersj� RR (0: Retro Replay, 1: Nordic Replay)"},
/* ru */ {IDCLS_RR_REVISION_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_RR_REVISION_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_RR_REVISION_TR, ""},  /* fuzzy */
#endif

/* c64/cart/supersnapshot.c */
/* en */ {IDCLS_ENABLE_SS_RAM_EXPANSION,    N_("Enable SS 32k RAM expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SS_RAM_EXPANSION_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_SS_RAM_EXPANSION_DE, "SS 32k RAM Erweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_SS_RAM_EXPANSION_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_SS_RAM_EXPANSION_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_SS_RAM_EXPANSION_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SS_RAM_EXPANSION_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_SS_RAM_EXPANSION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SS_RAM_EXPANSION_NL, "SS 32k RAM uitbreiding inschakelen"},
/* pl */ {IDCLS_ENABLE_SS_RAM_EXPANSION_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_SS_RAM_EXPANSION_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SS_RAM_EXPANSION_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_SS_RAM_EXPANSION_TR, ""},  /* fuzzy */
#endif

/* c64/cart/supersnapshot.c */
/* en */ {IDCLS_DISABLE_SS_RAM_EXPANSION,    N_("Disable SS 32k RAM expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SS_RAM_EXPANSION_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_SS_RAM_EXPANSION_DE, "SS 32k RAM Erweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_SS_RAM_EXPANSION_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_SS_RAM_EXPANSION_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_SS_RAM_EXPANSION_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SS_RAM_EXPANSION_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_SS_RAM_EXPANSION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SS_RAM_EXPANSION_NL, "SS 32k RAM uitbreiding uitschakelen"},
/* pl */ {IDCLS_DISABLE_SS_RAM_EXPANSION_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_SS_RAM_EXPANSION_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SS_RAM_EXPANSION_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_SS_RAM_EXPANSION_TR, ""},  /* fuzzy */
#endif

/* c64/cart/reu.c */
/* en */ {IDCLS_ENABLE_REU,    N_("Enable the RAM Expansion Unit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_REU_DA, "Aktiv�r RAM-udviddelsesenheden"},
/* de */ {IDCLS_ENABLE_REU_DE, "RAM Speichererweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_REU_ES, "Permitir unidad RAM expansion"},
/* fr */ {IDCLS_ENABLE_REU_FR, "Activer l'unit� d'expansion RAM"},
/* hu */ {IDCLS_ENABLE_REU_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_REU_IT, "Attiva l'espansione di RAM"},
/* ko */ {IDCLS_ENABLE_REU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_REU_NL, "RAM uitbreidingseenheid (REU) inschakelen"},
/* pl */ {IDCLS_ENABLE_REU_PL, "W��cz RAM Expansion Unit"},
/* ru */ {IDCLS_ENABLE_REU_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_REU_SV, "Aktivera RAM-expansionsenhet"},
/* tr */ {IDCLS_ENABLE_REU_TR, "RAM Geni�letme Birimi'ni aktif et"},
#endif

/* c64/cart/reu.c */
/* en */ {IDCLS_DISABLE_REU,    N_("Disable the RAM Expansion Unit")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_REU_DA, "Deaktiv�r RAM-udviddelsesenhed"},
/* de */ {IDCLS_DISABLE_REU_DE, "RAM Speichererweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_REU_ES, "Deshabilitar unidad RAM Expansion"},
/* fr */ {IDCLS_DISABLE_REU_FR, "D�sactiver l'unit� d'expansion RAM"},
/* hu */ {IDCLS_DISABLE_REU_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_REU_IT, "Disattiva l'espansione di RAM"},
/* ko */ {IDCLS_DISABLE_REU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_REU_NL, "RAM uitbreidingseenheid (REU) uitschakelen"},
/* pl */ {IDCLS_DISABLE_REU_PL, "Wy��cz RAM Expansion Unit"},
/* ru */ {IDCLS_DISABLE_REU_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_REU_SV, "Inaktivera RAM-expansionsenhet"},
/* tr */ {IDCLS_DISABLE_REU_TR, "RAM Geni�letme Birimi'ni pasifle�tir"},
#endif

/* c64/cart/reu.c */
/* en */ {IDCLS_SPECIFY_REU_NAME,    N_("Specify name of REU image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_REU_NAME_DA, "Angiv navn p� REU-image"},
/* de */ {IDCLS_SPECIFY_REU_NAME_DE, "Namen f�r REU Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_REU_NAME_ES, "Especificar nombre imagen REU"},
/* fr */ {IDCLS_SPECIFY_REU_NAME_FR, "Sp�cifier le nom de l'image REU"},
/* hu */ {IDCLS_SPECIFY_REU_NAME_HU, "Adja meg a REU k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_REU_NAME_IT, "Specifica il nome immagine REU"},
/* ko */ {IDCLS_SPECIFY_REU_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_REU_NAME_NL, "Geef de naam van het REU bestand"},
/* pl */ {IDCLS_SPECIFY_REU_NAME_PL, "Okre�l nazw� obrazu REU"},
/* ru */ {IDCLS_SPECIFY_REU_NAME_RU, "Specify name of REU image"},
/* sv */ {IDCLS_SPECIFY_REU_NAME_SV, "Ange namn p� REU-avbildning"},
/* tr */ {IDCLS_SPECIFY_REU_NAME_TR, "REU imaj�n�n ismini belirt"},
#endif

/* c64/cart/reu.c */
/* en */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE,    N_("Allow writing to REU image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_DA, "Tillad skrivning til REU-image"},
/* de */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_DE, "Schreibzugriff auf REU Image erlauben"},
/* es */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_ES, "Permitir grabar en imagen REU"},
/* fr */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_FR, "Permetre l'�criture � l'image REU"},
/* hu */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_IT, "Attiva scrittura su immagine REU"},
/* ko */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_NL, "Sta schrijven naar REU bestand toe"},
/* pl */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_PL, "Pozw�l na zapis do obrazu REU"},
/* ru */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_RU, "Allow writing to REU image"},
/* sv */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_SV, "Till�t skrivning till REU-avbildning"},
/* tr */ {IDCLS_ALLOW_WRITING_TO_REU_IMAGE_TR, "REU imaj�na yazmay� aktif et"},
#endif

/* c64/cart/reu.c */
/* en */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE,    N_("Do not write to REU image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_DA, "Skriv ikke til REU-image"},
/* de */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_DE, "Kein Schreibzugriff auf REU Image"},
/* es */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_ES, "No grabar en imagen REU"},
/* fr */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_FR, "Interdire l'�criture � l'image REU"},
/* hu */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_IT, "Disattiva scrittura su immagine REU"},
/* ko */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_NL, "Schrijf niet naar REU bestand"},
/* pl */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_PL, "Nie zapisuj do obrazu REU"},
/* ru */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_RU, "Do not write to REU image"},
/* sv */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_SV, "Skriv inte till REU-avbildning"},
/* tr */ {IDCLS_DO_NOT_WRITE_TO_REU_IMAGE_TR, "REU imaj�na yazma"},
#endif

/* c64/cart/reu.c */
/* en */ {IDCLS_REU_SIZE,    N_("Size of the RAM expansion unit. (128/256/512/1024/2048/4096/8192/16384)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_REU_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_REU_SIZE_DE, "Gr��e der RAM Erweiterung. (128/256/512/1024/2048/4096/8192/16384)"},
/* es */ {IDCLS_REU_SIZE_ES, "Tama�o de la unidad de expansi�n RAM. (128/256/512/1024/2048/4096/8192/16384)"},
/* fr */ {IDCLS_REU_SIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_REU_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_REU_SIZE_IT, "Dimensione dell'espansione di RAM. (128/256/512/1024/2048/4096/8192/16384)"},
/* ko */ {IDCLS_REU_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_REU_SIZE_NL, "Grootte van de RAM uitbreidingseenheid. (128/256/512/1024/2048/4096/8192/16384)"},
/* pl */ {IDCLS_REU_SIZE_PL, "Wielko�� jednostki rozszerzenia RAM. (128/256/512/1024/2048/4096/8192/16384)"},
/* ru */ {IDCLS_REU_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_REU_SIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_REU_SIZE_TR, ""},  /* fuzzy */
#endif

#ifdef HAVE_RAWNET
/* c64/cart/ethernetcart.c */
/* en */ {IDCLS_ENABLE_TFE,    N_("Enable the Ethernet Cartridge in TFE (\"The Final Ethernet\") compatible mode and set default I/O address")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TFE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TFE_DE, "Aktiviere Ethernet Erweiterungsmodul in TFE (\"The Final Ethernet\") kompatiblen Modus und setze die Standard I/O Adresse"},
/* es */ {IDCLS_ENABLE_TFE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TFE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TFE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TFE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TFE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TFE_NL, "Ethernet Cartridge inschakelen in TFE (\"The Final Ethernet\") compatibel modus en zet het standaard I/O adres"},
/* pl */ {IDCLS_ENABLE_TFE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TFE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TFE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TFE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ethernetcart.c */
/* en */ {IDCLS_ENABLE_RRNET,    N_("Enable the Ethernet Cartridge in RR-Net compatible mode and set default I/O address")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RRNET_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_RRNET_DE, "Aktiviere Ethernet Erweiterungsmodul in RR-Net kompatiblen Modus uns\nsetze die Standard I/O Adresse"},
/* es */ {IDCLS_ENABLE_RRNET_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_RRNET_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_RRNET_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_RRNET_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_RRNET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RRNET_NL, "Ethernet Cartridge inschakelen in RR-Net compatibel modus en zet het standaard I/O adres"},
/* pl */ {IDCLS_ENABLE_RRNET_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_RRNET_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_RRNET_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_RRNET_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ethernetcart.c */
/* en */ {IDCLS_ENABLE_ETHERNETCART,    N_("Enable the Ethernet Cartridge (TFE/RR-Net/64NIC/FB-NET)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_ETHERNETCART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_ETHERNETCART_DE, "Ethernet Cartridge (TFE/RR-Net/64NIC/FB-NET) aktivieren"},
/* es */ {IDCLS_ENABLE_ETHERNETCART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_ETHERNETCART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_ETHERNETCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_ETHERNETCART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_ETHERNETCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_ETHERNETCART_NL, "Ethernet Cartridge (TFE/RR-Net/64NIC/FB-NET) inschakelen"},
/* pl */ {IDCLS_ENABLE_ETHERNETCART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_ETHERNETCART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_ETHERNETCART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_ETHERNETCART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ethernetcart.c */
/* en */ {IDCLS_DISABLE_ETHERNETCART,    N_("Disable the Ethernet Cartridge (TFE/RR-Net/64NIC/FB-NET)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_ETHERNETCART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_ETHERNETCART_DE, "Ethernet Cartridge  (TFE/RR-Net/64NIC/FB-NET)deaktivieren"},
/* es */ {IDCLS_DISABLE_ETHERNETCART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_ETHERNETCART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_ETHERNETCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_ETHERNETCART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_ETHERNETCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_ETHERNETCART_NL, "Ethernet Cartridge (TFE/RR-Net/64NIC/FB-NET) uitschakelen"},
/* pl */ {IDCLS_DISABLE_ETHERNETCART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_ETHERNETCART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_ETHERNETCART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_ETHERNETCART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ethernetcart.c */
/* en */ {IDCLS_ETHERNETCART_MODE,    N_("Mode of Ethernet Cartridge (0: TFE, 1: RR-Net)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ETHERNETCART_MODE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ETHERNETCART_MODE_DE, "Modus des Ethernet Erweiterungsmoduls (0: TFE, 1: RR-Net)"},
/* es */ {IDCLS_ETHERNETCART_MODE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ETHERNETCART_MODE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ETHERNETCART_MODE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ETHERNETCART_MODE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ETHERNETCART_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ETHERNETCART_MODE_NL, "Modus van den Ethernet Cartridge (0: TFE, 1: RR-Net)"},
/* pl */ {IDCLS_ETHERNETCART_MODE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ETHERNETCART_MODE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ETHERNETCART_MODE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ETHERNETCART_MODE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/cs8900io.c */
/* en */ {IDCLS_ETHERNET_INTERFACE,    N_("Set the system ethernet interface")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ETHERNET_INTERFACE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ETHERNET_INTERFACE_DE, "Setze die System Ethernet Schnittstelle"},
/* es */ {IDCLS_ETHERNET_INTERFACE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ETHERNET_INTERFACE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ETHERNET_INTERFACE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ETHERNET_INTERFACE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ETHERNET_INTERFACE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ETHERNET_INTERFACE_NL, "Stel de systeem ethernetinterface in"},
/* pl */ {IDCLS_ETHERNET_INTERFACE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ETHERNET_INTERFACE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ETHERNET_INTERFACE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ETHERNET_INTERFACE_TR, ""},  /* fuzzy */
#endif
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_CART_ATTACH_DETACH_RESET,    N_("Reset machine if a cartridge is attached or detached")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_CART_ATTACH_DETACH_RESET_DA, "Reset maskinen hvis et cartridge tilsluttes eller frakobles"},
/* de */ {IDCLS_CART_ATTACH_DETACH_RESET_DE, "Reset der Maschine wenn ein Erweiterungsmodul eingelegt oder entfernt wird"},
/* es */ {IDCLS_CART_ATTACH_DETACH_RESET_ES, "Reiniciar m�quina si un cartucho es insertado o extraido"},
/* fr */ {IDCLS_CART_ATTACH_DETACH_RESET_FR, "R�initialiser si une cartouche est attach�e ou d�tach�e"},
/* hu */ {IDCLS_CART_ATTACH_DETACH_RESET_HU, "Reset a cartridge csatol�sakorgy lev�laszt�sakor"},
/* it */ {IDCLS_CART_ATTACH_DETACH_RESET_IT, "Fare il reset del computer se una cartuccia � collegata o rimossa"},
/* ko */ {IDCLS_CART_ATTACH_DETACH_RESET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_CART_ATTACH_DETACH_RESET_NL, "Reset machine als een cartridge wordt gekoppeld of ontkoppeld"},
/* pl */ {IDCLS_CART_ATTACH_DETACH_RESET_PL, "Resetuj maszyn� przy zamontowaniu i odmontowaniu kartrid�a"},
/* ru */ {IDCLS_CART_ATTACH_DETACH_RESET_RU, "Reset machine if a cartridge is attached or detached"},
/* sv */ {IDCLS_CART_ATTACH_DETACH_RESET_SV, "Nollst�ll maskinen om en insticksmodul kopplas till eller fr�n"},
/* tr */ {IDCLS_CART_ATTACH_DETACH_RESET_TR, "Bir kartu� tak�l�r ya da ��kart�l�rsa makineyi resetle"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_CART_ATTACH_DETACH_NO_RESET,    N_("Do not reset machine if a cartridge is attached or detached")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_DA, "Reset ikke maskinen hvis et cartridge tilsluttes eller frakobles"},
/* de */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_DE, "Kein Reset der Maschine wenn ein Erweiterungsmodul eingelegt oder entfernt wird"},
/* es */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_ES, "No reiniciar m�quina si un cartucho es insertado o extraido"},
/* fr */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_FR, "Ne pas r�initialiser si une cartouche est attach�e ou d�tach�e"},
/* hu */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_HU, "Nincs reset a cartridge csatol�sakorgy lev�laszt�sakor"},
/* it */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_IT, "Non fare il reset del computer se una cartuccia � collegata o rimossa"},
/* ko */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_NL, "Reset machine niet als een cartridge wordt gekoppeld of ontkoppeld"},
/* pl */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_PL, "Nie resetuj maszyny przy zamontowaniu i odmontowaniu kartrid�a"},
/* ru */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_RU, "Do not reset machine if a cartridge is attached or detached"},
/* sv */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_SV, "Nollst�ll inte maskinen om en insticksmodul kopplas till eller fr�n"},
/* tr */ {IDCLS_CART_ATTACH_DETACH_NO_RESET_TR, "Bir kartu� tak�l�r ya da ��kart�l�rsa makineyi resetleme"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_CRT_CART,    N_("Attach CRT cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_CRT_CART_DA, "Tilslut CRT-cartridge image"},
/* de */ {IDCLS_ATTACH_CRT_CART_DE, "CRT Erweiterungsmodul Image einlegen"},
/* es */ {IDCLS_ATTACH_CRT_CART_ES, "Insertar imagen de cartucho CRT"},
/* fr */ {IDCLS_ATTACH_CRT_CART_FR, "Ins�rer une cartouche CRT"},
/* hu */ {IDCLS_ATTACH_CRT_CART_HU, "CRT cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_CRT_CART_IT, "Seleziona immagine cartuccia CRT"},
/* ko */ {IDCLS_ATTACH_CRT_CART_KO, "CRT īƮ���� �̹����� �ٿ������ÿ�"},
/* nl */ {IDCLS_ATTACH_CRT_CART_NL, "Koppel CRT cartridge bestand"},
/* pl */ {IDCLS_ATTACH_CRT_CART_PL, "Zamontuj obraz kartrid�a CRT"},
/* ru */ {IDCLS_ATTACH_CRT_CART_RU, "Attach CRT cartridge image"},
/* sv */ {IDCLS_ATTACH_CRT_CART_SV, "Anslut CRT-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_CRT_CART_TR, "CRT kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_GENERIC_8KB_CART,    N_("Attach raw 8KB cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_GENERIC_8KB_CART_DA, "Tilslut r�t 8kB-cartridge image"},
/* de */ {IDCLS_ATTACH_GENERIC_8KB_CART_DE, "8KB Erweiterungsmodul (raw) Image einlegen"},
/* es */ {IDCLS_ATTACH_GENERIC_8KB_CART_ES, "Insertar imagen de cartucho 8KB"},
/* fr */ {IDCLS_ATTACH_GENERIC_8KB_CART_FR, "Ins�rer une cartouche 8KO"},
/* hu */ {IDCLS_ATTACH_GENERIC_8KB_CART_HU, "Nyers 8KB-os cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_GENERIC_8KB_CART_IT, "Seleziona immagine cartuccia di 8KB"},
/* ko */ {IDCLS_ATTACH_GENERIC_8KB_CART_KO, "8kb īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_GENERIC_8KB_CART_NL, "Koppel binair 8KB cartridge bestand"},
/* pl */ {IDCLS_ATTACH_GENERIC_8KB_CART_PL, "Zamontuj surowy obraz kartrid�a 8KB"},
/* ru */ {IDCLS_ATTACH_GENERIC_8KB_CART_RU, "���������� ������ ������ 8�� ���������"},
/* sv */ {IDCLS_ATTACH_GENERIC_8KB_CART_SV, "Anslut r� 8KB-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_GENERIC_8KB_CART_TR, "D�z 8KB kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_GENERIC_16KB_CART,    N_("Attach raw 16KB cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_GENERIC_16KB_CART_DA, "Tilslut r�t 16kB-cartridge image"},
/* de */ {IDCLS_ATTACH_GENERIC_16KB_CART_DE, "16KB Erweiterungsmodul (raw) Image einlegen"},
/* es */ {IDCLS_ATTACH_GENERIC_16KB_CART_ES, "Insertar imagen de cartucho 16KB"},
/* fr */ {IDCLS_ATTACH_GENERIC_16KB_CART_FR, "Ins�rer une cartouche 16KO"},
/* hu */ {IDCLS_ATTACH_GENERIC_16KB_CART_HU, "Nyers 16KB-os cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_GENERIC_16KB_CART_IT, "Seleziona immagine cartuccia di 16KB"},
/* ko */ {IDCLS_ATTACH_GENERIC_16KB_CART_KO, "16kb īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_GENERIC_16KB_CART_NL, "Koppel binair 16KB cartridge bestand"},
/* pl */ {IDCLS_ATTACH_GENERIC_16KB_CART_PL, "Zamontuj surowy obraz kartrid�a 16KB"},
/* ru */ {IDCLS_ATTACH_GENERIC_16KB_CART_RU, "���������� ������ ������ 16�� ���������"},
/* sv */ {IDCLS_ATTACH_GENERIC_16KB_CART_SV, "Anslut r� 16KB-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_GENERIC_16KB_CART_TR, "D�z 16KB kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART,    N_("Attach generic 16kB Ultimax cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_DA, "Tilslut standard 16kB Ultimax cartridge image"},
/* de */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_DE, "Generisches 16kB Ultimax Erweiterungsmodul Image einlegen"},
/* es */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_ES, "Insertar imagen cartucho gen�rico Ultimax 16KB"},
/* fr */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_FR, "Attacher une cartouche g�n�rique 16 ko Ultimax"},
/* hu */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_IT, "Seleziona immagine cartuccia Ultimax generica di 16kB"},
/* ko */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_NL, "Koppel algemeen 16KB Ultimax cartridge bestand"},
/* pl */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_PL, "Zamontuj standardowy obraz kartrid�a 16kB Ultimax"},
/* ru */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_RU, "Attach generic 16kB Ultimax cartridge image"},
/* sv */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_SV, "Anslut vanlig 16KB Ultimax-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_GENERIC_16KB_ULTIMAX_CART_TR, "Jenerik 16KB Ultimax kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_STARDOS_CART,    N_("Attach raw 16KB Stardos cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_STARDOS_CART_DA, "Tilslut r�t 16KB StarDOS cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_STARDOS_CART_DE, "16kB Stardos Erweiterungsmodul Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_STARDOS_CART_ES, "Insertar imagen cartucho Stardos 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_STARDOS_CART_FR, "Attacher une image de cartouche 16 ko Stardos"},
/* hu */ {IDCLS_ATTACH_RAW_STARDOS_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_STARDOS_CART_IT, "Seleziona immagine cartuccia Stardos di 16KB"},
/* ko */ {IDCLS_ATTACH_RAW_STARDOS_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_STARDOS_CART_NL, "Koppel binair 16KB Stardos cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_STARDOS_CART_PL, "Zamontuj surowy obraz kartrid�a 16KB Stardos"},
/* ru */ {IDCLS_ATTACH_RAW_STARDOS_CART_RU, "Attach raw 16KB Stardos cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_STARDOS_CART_SV, "Anslut r� 16KB Stardos-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_STARDOS_CART_TR, "D�z 16KB Stardos kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART,    N_("Attach raw 32KB Action Replay MK4 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_DA, "Tilslut r�t 32KB Action Replay MK4 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_DE, "32kB Action Replay MK4 Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_ES, "Insertar imagen cartucho Action Replay MK4 32KB"},
/* fr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_FR, "Attacher une image de cartouche 2 ko Action Replay MK4"},
/* hu */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_IT, "Seleziona immagine cartuccia Action Replay MK4 di 326KB"},
/* ko */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_NL, "Koppel binair 32KB Action Replay MK4 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_PL, "Zamontuj surowy obraz kartrid�a 32KB Action Replay MK4"},
/* ru */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_RU, "Attach raw 32KB Action Replay MK4 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_SV, "Anslut r� 32KB-Action Replay MK4-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY4_CART_TR, "D�z 32KB Action Replay MK4 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART,    N_("Attach raw 16kB Action Replay MK2 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_DA, "Tilslut r�t 16kB Action Replay MK2 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_DE, "16kB Action Replay MK2 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_ES, "Insertar imagen cartucho Action Replay MK2 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_FR, "Attacher une image de cartouche 16 ko Action Replay MK2"},
/* hu */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_IT, "Seleziona immagine cartuccia Action Replay MK2 di 16KB"},
/* ko */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_NL, "Koppel binair 16kB Action Replay MK2 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_PL, "Zamontuj surowy obraz kartrid�a 16kB Action Replay MK2"},
/* ru */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_RU, "Attach raw 16kB Action Replay MK2 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_SV, "Anslut r� 16KB-Action Replay MK2-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY2_CART_TR, "D�z 16kB Action Replay MK2 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART,    N_("Attach raw 16KB Action Replay MK3 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_DA, "Tilslut r�t 16KB Action Replay MK3 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_DE, "16kB Action Replay MK3 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_ES, "Insertar imagen cartucho Action Replay MK3 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_FR, "Attacher une image de cartouche 16 ko Action Replay MK3"},
/* hu */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_IT, "Seleziona immagine cartuccia Action Replay MK3 di 16KB"},
/* ko */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_NL, "Koppel binair 16KB Action Replay MK3 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_PL, "Zamontuj surowy obraz kartrid�a 16KB Action Replay MK3"},
/* ru */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_RU, "Attach raw 16KB Action Replay MK3 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_SV, "Anslut r� 16KB-Action Replay MK3-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY3_CART_TR, "D�z 16KB Action Replay MK3 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART,    N_("Attach raw 32KB Action Replay cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_DA, "Tilslut r�t 32KB Action Replay cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_DE, "32kB Action Replay Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_ES, "Insertar imagen cartucho Action Replay 32KB"},
/* fr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_FR, "Ins�rer une cartouche Action Replay 32KO"},
/* hu */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_HU, "32KB-os Action Replay cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_IT, "Seleziona immagine cartuccia Action Replay di 32KB"},
/* ko */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_NL, "Koppel binair 32KB Action Replay cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_PL, "Zamontuj surowy obraz kartid�a 32KB Action Replay"},
/* ru */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_RU, "Attach raw 32KB Action Replay cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_SV, "Anslut r� 32KB-Action Replay-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_ACTION_REPLAY_CART_TR, "D�z 32KB Action Replay kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_CAPTURE_CART,    N_("Attach raw 8kB Capture cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_CAPTURE_CART_DA, "Tilslut r�t 8kB Capture cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_CAPTURE_CART_DE, "8kB Capture Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_CAPTURE_CART_ES, "Insertar imagen cartucho Capture 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_CAPTURE_CART_FR, "Attacher une image de cartouche 8 ko Capture"},
/* hu */ {IDCLS_ATTACH_RAW_CAPTURE_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_CAPTURE_CART_IT, "Seleziona immagine cartuccia Capture di 8KB"},
/* ko */ {IDCLS_ATTACH_RAW_CAPTURE_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_CAPTURE_CART_NL, "Koppel binair 8kB Capture cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_CAPTURE_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB Capture"},
/* ru */ {IDCLS_ATTACH_RAW_CAPTURE_CART_RU, "Attach raw 8kB Capture cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_CAPTURE_CART_SV, "Anslut r� 8KB Capture-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_CAPTURE_CART_TR, "D�z 8kB Capture kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_COMAL80_CART,    N_("Attach raw 64kB Comal 80 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_COMAL80_CART_DA, "Tilslut r�t 64kB Comal 80 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_COMAL80_CART_DE, "64kB Comal 80 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_COMAL80_CART_ES, "Insertar imagen cartucho Comal 80 64KB"},
/* fr */ {IDCLS_ATTACH_RAW_COMAL80_CART_FR, "Attacher une image de cartouche 64 ko Comal 80"},
/* hu */ {IDCLS_ATTACH_RAW_COMAL80_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_COMAL80_CART_IT, "Seleziona immagine cartuccia Comal 80 di 64kB"},
/* ko */ {IDCLS_ATTACH_RAW_COMAL80_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_COMAL80_CART_NL, "Koppel binair 64kB Comal 80 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_COMAL80_CART_PL, "Zamontuj surowy obraz kartrid�a 64kB Comal 80"},
/* ru */ {IDCLS_ATTACH_RAW_COMAL80_CART_RU, "Attach raw 64kB Comal 80 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_COMAL80_CART_SV, "Anslut r� 64kB Comal 80-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_COMAL80_CART_TR, "D�z 64kB Comal 80 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_DELA_EP256_CART,    N_("Attach raw Dela EP256 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_DA, "Tilslut r�t Dela EP256 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_DE, "Dela EP256 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_ES, "Insertar imagen cartucho Dela EP256"},
/* fr */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_FR, "Attacher une image de cartouche RAW EP256"},
/* hu */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_IT, "Seleziona immagine cartuccia Dela EP256"},
/* ko */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_NL, "Koppel binair Dela EP256 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_PL, "Zamontuj surowy obraz kartrid�a Dela EP256"},
/* ru */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_RU, "Attach raw Dela EP256 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_SV, "Anslut r� dela EP256-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_DELA_EP256_CART_TR, "D�z Dela EP256 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_DELA_EP64_CART,    N_("Attach raw Dela EP64 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_DA, "Tilslut r�t Dela EP64 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_DE, "Dela EP64 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_ES, "Insertar imagen cartucho Dela EP64"},
/* fr */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_FR, "Attacher une image de cartouche Dela EP64"},
/* hu */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_IT, "Seleziona immagine cartuccia Dela EP64"},
/* ko */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_NL, "Koppel binair Dela EO64 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_PL, "Zamontuj surowy obraz kartrid�a EP64"},
/* ru */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_RU, "Attach raw Dela EP64 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_SV, "Anslut r� Dela EP64-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_DELA_EP64_CART_TR, "D�z Dela EP64 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART,    N_("Attach raw Dela EP7x8 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_DA, "Tilslut r�t Dela EP7x8 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_DE, "Dela EP7x8 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_ES, "Insertar imagen cartucho Dela EP 7x8"},
/* fr */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_FR, "Attacher une image de cartouche Dela EP7x8"},
/* hu */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_IT, "Seleziona immagine cartuccia Dela EP7x8"},
/* ko */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_NL, "Koppel binair Dela ep7x8 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_PL, "Zamontuj surowy obraz kartrid�a Dela EP7x8"},
/* ru */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_RU, "Attach raw Dela EP7x8 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_SV, "Anslut r� Dela EP7x8-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_DELA_EP7X8_CART_TR, "D�z Dela EP7x8 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_DINAMIC_CART,    N_("Attach raw 128kB Dinamic cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_DINAMIC_CART_DA, "Tilslut r�t 128kB Dinamic cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_DINAMIC_CART_DE, "128kB Dinamic Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_DINAMIC_CART_ES, "Insertar imagen cartucho Dinamic 128KB"},
/* fr */ {IDCLS_ATTACH_RAW_DINAMIC_CART_FR, "Attacher une image RAW 128 ko Dinamic"},
/* hu */ {IDCLS_ATTACH_RAW_DINAMIC_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_DINAMIC_CART_IT, "Seleziona immagine cartuccia Dinamic di 128kB"},
/* ko */ {IDCLS_ATTACH_RAW_DINAMIC_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_DINAMIC_CART_NL, "Koppel binair 128kB Dinamic cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_DINAMIC_CART_PL, "Zamontuj surowy obraz kartrid�a 128kB Dinamic"},
/* ru */ {IDCLS_ATTACH_RAW_DINAMIC_CART_RU, "Attach raw 128kB Dinamic cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_DINAMIC_CART_SV, "Anslut r� 12kB Dinamic-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_DINAMIC_CART_TR, "D�z 128kB Dinamic kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART,    N_("Attach raw 8kB Diashow-Maker cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_DA, "Tilslut r�t 8kB Diashow-Maker cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_DE, "8kB Diashow-Maker Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_ES, "Insertar imagen cartucho Diashow-Maker 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_FR, "Attacher image RAW 8 ko Diashow-Maker"},
/* hu */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_IT, "Seleziona immagine cartuccia Diashow-Maker di 8KB"},
/* ko */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_NL, "Koppel binair 8kB Diashow-Maker cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB Diashow-Maker"},
/* ru */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_RU, "Attach raw 8kB Diashow-Maker cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_SV, "Anslut r� 8kB Diashow-Maker-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_DIASHOW_MAKER_CART_TR, "D�z 8kB Diashow-Maker kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_DQBB_CART,    N_("Attach raw 16kB Double Quick Brown Box cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_DQBB_CART_DA, "Tilslut r�t 16kB Double Quick Brown Box cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_DQBB_CART_DE, "16kB Double Quick Brown Box Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_DQBB_CART_ES, "Insertar imagen cartucho DBQQ 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_DQBB_CART_FR, "Attacher image RAW 16 ko Cartouche Double Quick Brown Box"},
/* hu */ {IDCLS_ATTACH_RAW_DQBB_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_DQBB_CART_IT, "Seleziona immagine cartuccia Double Quick Brown Box di 16kB"},
/* ko */ {IDCLS_ATTACH_RAW_DQBB_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_DQBB_CART_NL, "Koppel binair 16kB Double Quick Brown Box cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_DQBB_CART_PL, "Zamontuj surowy obraz kartrid�a Double Quick Brown Box"},
/* ru */ {IDCLS_ATTACH_RAW_DQBB_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_DQBB_CART_SV, "Anslut r� 16KB Double Quick Brown Box-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_DQBB_CART_TR, "D�z 16kB Double Quick Brown Box kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART,    N_("Attach raw EasyFlash cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_DA, "Tilslut r�t EasyFlash cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_DE, "Easyflash Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_ES, "Insertar imagen cartucho  EasyFlash"},
/* fr */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_FR, "Attacher une image de cartouche EasyFlash"},
/* hu */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_IT, "Seleziona immagine cartuccia EasyFlash"},
/* ko */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_KO, "EasyFlash īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_NL, "Koppel binair EasyFlash cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_PL, "Zamontuj surowy obraz kartrid�a EasyFlash"},
/* ru */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_SV, "Anslut r� EasyFlash-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_EASY_FLASH_CART_TR, "D�z EasyFlash kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART,    N_("Attach raw 64KB Retro Replay cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_DA, "Tilslut r�t 64kB-Retro Replay-cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_DE, "64kB Retro Replay Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_ES, "Insertar imagen cartucho Retro Replay 64KB"},
/* fr */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_FR, "Ins�rer une cartouche Retro Replay 64KO"},
/* hu */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_HU, "64KB-os Retro Replay cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_IT, "Seleziona immagine cartuccia Retro Replay di 64KB"},
/* ko */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_KO, "64KB Retro Replay īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_NL, "Koppel binair 64KB Retro Replay cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_PL, "Zamontuj surowy obraz kartrid�a 64KB Retro Replay"},
/* ru */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_RU, "Attach raw 64KB Retro Replay cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_SV, "Anslut r� 64KB-Retro Replay-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_RETRO_REPLAY_CART_TR, "D�z 64KB Retro Replay kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART,    N_("Attach raw 8kB REX Utility cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_DA, "Tilslut r�t 8kB REX Utility cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_DE, "8kB REX Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_ES, "Insertar imagen cartucho REX Utility 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_FR, "Attacher une image de cartouche 8 ko REX Utility"},
/* hu */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_IT, "Seleziona immagine cartuccia REX Utility di 8kB"},
/* ko */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_NL, "Koppel binair 8kB REX Utility cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB REX Utility"},
/* ru */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_RU, "Attach raw 8kB REX Utility cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_SV, "Anslut r� 8kB REX Utility-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_REX_UTILITY_CART_TR, "D�z 8kB REX Utility kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_SS64_CART,    N_("Attach raw 4kB Snapshot 64 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_SS64_CART_DA, "Tilslut r�t 4kB Snapshot 64 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_SS64_CART_DE, "4kB Snapshot 64 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_SS64_CART_ES, "Insertar imagen cartucho Snapshot 64 4KB"},
/* fr */ {IDCLS_ATTACH_RAW_SS64_CART_FR, "Attacher une image de cartouche 4 ko Snapshot 64"},
/* hu */ {IDCLS_ATTACH_RAW_SS64_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_SS64_CART_IT, "Seleziona immagine cartuccia Snapshot 64 di 4kB"},
/* ko */ {IDCLS_ATTACH_RAW_SS64_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_SS64_CART_NL, "Koppel binair 4kB Snapshot 64 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_SS64_CART_PL, "Zamontuj surowy obraz kartrid�a 4kB Snapshot 64"},
/* ru */ {IDCLS_ATTACH_RAW_SS64_CART_RU, "Attach raw 4kB Snapshot 64 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_SS64_CART_SV, "Anslut r� 4kB Snapshot 64-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_SS64_CART_TR, "D�z 4kB Snapshot 64 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_IDE64_CART,    N_("Attach raw 64KB IDE64 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_IDE64_CART_DA, "Tilslut r�t 64kB IDE64-cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_IDE64_CART_DE, "64kB IDE64 Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_IDE64_CART_ES, "Insertar imagen cartucho IDE64 64KB"},
/* fr */ {IDCLS_ATTACH_RAW_IDE64_CART_FR, "Ins�rer une cartouche IDE64 64KO"},
/* hu */ {IDCLS_ATTACH_RAW_IDE64_CART_HU, "64KB-os IDE64 cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_RAW_IDE64_CART_IT, "Seleziona immagine cartuccia IDE64 di 64KB"},
/* ko */ {IDCLS_ATTACH_RAW_IDE64_CART_KO, "64kb IDE64 īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_IDE64_CART_NL, "Koppel binair 64KB IDE64 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_IDE64_CART_PL, "Zamontuj surowy obraz kartrid�a 64KB IDE64"},
/* ru */ {IDCLS_ATTACH_RAW_IDE64_CART_RU, "Attach raw 64KB IDE64 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_IDE64_CART_SV, "Anslut r� 64KB IDE64-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_IDE64_CART_TR, "D�z 64KB IDE64 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART,    N_("Attach raw 32KB Atomic Power cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_DA, "Tilslut r�t 32kB Atomic Power-cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_DE, "32kB Atomic Power Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_ES, "Insertar imagen cartucho Atomic Power 32KB"},
/* fr */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_FR, "Ins�rer une cartouche Atomic Power 32KO"},
/* hu */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_HU, "32KB-os Atomic Power cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_IT, "Seleziona immagine cartuccia Atomic Power di 32KB"},
/* ko */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_KO, "32kb Atomic Power īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_NL, "Koppel binair 32KB Atomic Power cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_PL, "Zamontuj surowy obraz kartrid�a 32KB Atomic Power"},
/* ru */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_RU, "Attach raw 32KB Atomic Power cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_SV, "Anslut r� 32KB Atomic Power-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_ATOMIC_POWER_CART_TR, "D�z 32KB Atomic Power kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART,    N_("Attach raw 8KB Epyx FastLoad cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_DA, "Tilslut r�t 8kB Epyx FastLoad cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_DE, "8kB Epyx Fastload Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_ES, "Insertar imagen cartucho Epyx Fastload 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_FR, "Attacher une image de cartouche 8 ko Epyx FastLoad"},
/* hu */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_IT, "Seleziona immagine cartuccia Epyx FastLoad di 8KB"},
/* ko */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_KO, "8kb Epyx FastLoad īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_NL, "Koppel binair 8KB Epyx FastLoad cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_PL, "Zamontuj surowy obraz kartrid�a 8KB Epyx FastLoad"},
/* ru */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_RU, "Attach raw 8KB Epyx FastLoad cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_SV, "Anslut r� 8KB Epyx FastLoad-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_EPYX_FASTLOAD_CART_TR, "D�z 8KB Epyx FastLoad kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_EXOS_CART,    N_("Attach raw 8kB EXOS cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_EXOS_CART_DA, "Tilslut r�t 8kB EXOS cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_EXOS_CART_DE, "8kB EXOS Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_EXOS_CART_ES, "Insertar imagen cartucho EXOS 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_EXOS_CART_FR, "Attacher une image de cartouche EXOS"},
/* hu */ {IDCLS_ATTACH_RAW_EXOS_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_EXOS_CART_IT, "Seleziona immagine cartuccia EXOS di 8KB"},
/* ko */ {IDCLS_ATTACH_RAW_EXOS_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_EXOS_CART_NL, "Koppel binair 8kB EXOS cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_EXOS_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB EXOS"},
/* ru */ {IDCLS_ATTACH_RAW_EXOS_CART_RU, "Attach raw 8kB EXOS cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_EXOS_CART_SV, "Anslut r� 8kB EXOS-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_EXOS_CART_TR, "D�z 8kB EXOS kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_EXPERT_CART,    N_("Attach raw 8kB Expert Cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_EXPERT_CART_DA, "Tilslut r�t 8kB Expert Cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_EXPERT_CART_DE, "8kB Expert Cartridge Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_EXPERT_CART_ES, "Insertar imagen cartucho Expert 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_EXPERT_CART_FR, "Ins�rer une image de Cartouche Expert 8 ko"},
/* hu */ {IDCLS_ATTACH_RAW_EXPERT_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_EXPERT_CART_IT, "Seleziona immagine cartuccia Expert Cartridge di 8kB"},
/* ko */ {IDCLS_ATTACH_RAW_EXPERT_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_EXPERT_CART_NL, "Koppel binair 8kB Expert Cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_EXPERT_CART_PL, "Zamontuj surowy obraz 8kB Expert Cartridge"},
/* ru */ {IDCLS_ATTACH_RAW_EXPERT_CART_RU, "Attach raw 8kB Expert Cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_EXPERT_CART_SV, "Anslut r� 8kB Expert Cartridge-avbildning"},
/* tr */ {IDCLS_ATTACH_RAW_EXPERT_CART_TR, "D�z 8kB Expert Kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_F64_CART,    N_("Attach raw 32kB Formel 64 image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_F64_CART_DA, "Tilslut r�t 32kB Formel 64 image"},
/* de */ {IDCLS_ATTACH_RAW_F64_CART_DE, "32kB Formel 64 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_F64_CART_ES, "Insertar imagen cartucho Formel 64 de 32KB"},
/* fr */ {IDCLS_ATTACH_RAW_F64_CART_FR, "Attacher une image de cartouche 32 ko Formel 64"},
/* hu */ {IDCLS_ATTACH_RAW_F64_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_F64_CART_IT, "Seleziona immagine cartuccia Formel 64 di 32kb"},
/* ko */ {IDCLS_ATTACH_RAW_F64_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_F64_CART_NL, "Koppel binair 32kB Formel 64 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_F64_CART_PL, "Zamontuj surowy obraz 32kB Formel 64"},
/* ru */ {IDCLS_ATTACH_RAW_F64_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_F64_CART_SV, "Anslut r� 32kB Formel 64-avbildning"},
/* tr */ {IDCLS_ATTACH_RAW_F64_CART_TR, "D�z 32kB Formel 64 imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_FC1_CART,    N_("Attach raw 16kB Final Cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_FC1_CART_DA, "Tilslut r�t 16kB Final Cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_FC1_CART_DE, "16kB Final Cartridge Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_FC1_CART_ES, "Insertar imagen cartucho Final Cartridge 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_FC1_CART_FR, "Attacher une image de cartouche 16 ko Final Cartridge"},
/* hu */ {IDCLS_ATTACH_RAW_FC1_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_FC1_CART_IT, "Seleziona immagine cartuccia Final Cartridge di 16kB"},
/* ko */ {IDCLS_ATTACH_RAW_FC1_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_FC1_CART_NL, "Koppel binair 16kB Final Cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_FC1_CART_PL, "Zamontuj surowy obraz 16kB Final Cartridge"},
/* ru */ {IDCLS_ATTACH_RAW_FC1_CART_RU, "Attach raw 16kB Final Cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_FC1_CART_SV, "Anslut r� 16kB Final Cartridge-avbildning"},
/* tr */ {IDCLS_ATTACH_RAW_FC1_CART_TR, "D�z 16kB Final kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_FC3_CART,    N_("Attach raw 64kB Final Cartridge III image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_FC3_CART_DA, "Tilslut r�t 64kB Final Cartridge III image"},
/* de */ {IDCLS_ATTACH_RAW_FC3_CART_DE, "64kB Final Cartridge Image III (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_FC3_CART_ES, "Insertar imagen cartucho Final Cartridge III 64KB"},
/* fr */ {IDCLS_ATTACH_RAW_FC3_CART_FR, "Attacher une image de cartouche 64 ko Final Cartridge III"},
/* hu */ {IDCLS_ATTACH_RAW_FC3_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_FC3_CART_IT, "Seleziona immagine cartuccia Final Cartridge III di 64kB"},
/* ko */ {IDCLS_ATTACH_RAW_FC3_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_FC3_CART_NL, "Koppel binair 16kB Final Cartridge III bestand"},
/* pl */ {IDCLS_ATTACH_RAW_FC3_CART_PL, "Zamontuj surowy obraz Final Cartridge III"},
/* ru */ {IDCLS_ATTACH_RAW_FC3_CART_RU, "Attach raw 64kB Final Cartridge III image"},
/* sv */ {IDCLS_ATTACH_RAW_FC3_CART_SV, "Anslut r� 64kB Final Cartridge III-avbildning"},
/* tr */ {IDCLS_ATTACH_RAW_FC3_CART_TR, "D�z 64kB Final Cartridge III imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_FCPLUS_CART,    N_("Attach raw 32kB Final Cartridge Plus image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_FCPLUS_CART_DA, "Tilslut r�t 32kB Final Cartridge Plus image"},
/* de */ {IDCLS_ATTACH_RAW_FCPLUS_CART_DE, "32kB Final Cartridge Plus Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_FCPLUS_CART_ES, "Insertar imagen cartucho Final Cartridge PLUS 32KB"},
/* fr */ {IDCLS_ATTACH_RAW_FCPLUS_CART_FR, "Attacher une image de cartouche 32 ko Final Cartridge Plus"},
/* hu */ {IDCLS_ATTACH_RAW_FCPLUS_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_FCPLUS_CART_IT, "Seleziona immagine cartuccia Final Cartridge Plus di 32kB"},
/* ko */ {IDCLS_ATTACH_RAW_FCPLUS_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_FCPLUS_CART_NL, "Koppel binair 32kB Final Cartridge Plus bestand"},
/* pl */ {IDCLS_ATTACH_RAW_FCPLUS_CART_PL, "Zamontuj surowy obraz 32kB Final Cartridge Plus"},
/* ru */ {IDCLS_ATTACH_RAW_FCPLUS_CART_RU, "Attach raw 32kB Final Cartridge Plus image"},
/* sv */ {IDCLS_ATTACH_RAW_FCPLUS_CART_SV, "Anslut r� 32kB Final Cartridge Plus-fil"},
/* tr */ {IDCLS_ATTACH_RAW_FCPLUS_CART_TR, "D�z 32kB Final Cartridge Plus imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART,    N_("Attach raw 8kB Freeze Frame image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_DA, "Tilslut r�t 8kB Freeze Frame image"},
/* de */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_DE, "8kB Freeze Frame Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_ES, "Insertar imagen cartucho Freeze Frame 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_FR, "Attacher une image de cartouche 8 ko Freeze Frame"},
/* hu */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_IT, "Seleziona immagine cartuccia Freeze Frame di 8kb"},
/* ko */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_NL, "Koppel binair 8kB Freeze Frame cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_PL, "Zamontuj surowy obraz 8kB Freeze Frame"},
/* ru */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_RU, "Attach raw 8kB Freeze Frame image"},
/* sv */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_SV, "Anslut r� 8kB Freeze Frame-avbildning"},
/* tr */ {IDCLS_ATTACH_RAW_FREEZE_FRAME_CART_TR, "D�z 8kB Freeze Frame imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART,    N_("Attach raw 32kB Freeze Machine image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_DA, "Tilslut r�t 32kB Freeze Machine image"},
/* de */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_DE, "8kB Freeze Machine Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_ES, "Insertar imagen cartucho Freeze Machine 32KB"},
/* fr */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_FR, "Attacher une image de cartouche 32 ko Freeze Machine"},
/* hu */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_IT, "Seleziona immagine cartuccia Freeze Machine di 32kb"},
/* ko */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_NL, "Koppel binair 32kB Freeze Machine cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_PL, "Zamontuj surowy obraz 32kB Freeze Machine"},
/* ru */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_RU, "Attach raw 32kB Freeze Machine image"},
/* sv */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_SV, "Anslut r� 32kB Freeze Machine-avbildning"},
/* tr */ {IDCLS_ATTACH_RAW_FREEZE_MACHINE_CART_TR, "D�z 32kB Freeze Machine imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_FP_PP_CART,    N_("Attach raw 128kB Fun Play/Power Play cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_FP_PP_CART_DA, "Tilslut r�t 128kB Fun Play/Power Play cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_FP_PP_CART_DE, "128kB Fun Play/Power Play Cartridge  Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_FP_PP_CART_ES, "Insertar imagen cartucho Fun Play/Power Play 128KB"},
/* fr */ {IDCLS_ATTACH_RAW_FP_PP_CART_FR, "Attacher une image de cartouche 128 ko Fun Play / Power Play"},
/* hu */ {IDCLS_ATTACH_RAW_FP_PP_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_FP_PP_CART_IT, "Seleziona immagine cartuccia Fun Play/Power Play di 128kB"},
/* ko */ {IDCLS_ATTACH_RAW_FP_PP_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_FP_PP_CART_NL, "Koppel binair 128kB Fun Play/Power Play cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_FP_PP_CART_PL, "Zamontuj surowy obraz kartrid�a 128kB Fun Play/Power Play"},
/* ru */ {IDCLS_ATTACH_RAW_FP_PP_CART_RU, "Attach raw 128kB Fun Play/Power Play cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_FP_PP_CART_SV, "Anslut r� 128kB Fun Play/Power Play-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_FP_PP_CART_TR, "D�z 128kB Fun Play/Power Play kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_SS4_CART,    N_("Attach raw 32KB Super Snapshot V4 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_SS4_CART_DA, "Tilslut r�t 32kB Super Snapshot V4 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_SS4_CART_DE, "32kB Super Snapshot V4 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_SS4_CART_ES, "Insertar imagen cartucho Super Snapshot V4 32KB"},
/* fr */ {IDCLS_ATTACH_RAW_SS4_CART_FR, "Attacher une image de cartouche 32 ko Super Snapshot V4"},
/* hu */ {IDCLS_ATTACH_RAW_SS4_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_SS4_CART_IT, "Seleziona immagine cartuccia Super Snapshot V4 di 32KB"},
/* ko */ {IDCLS_ATTACH_RAW_SS4_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_SS4_CART_NL, "Koppel binair 32KB Super Snapshot V4 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_SS4_CART_PL, "Zamontuj surowy obraz kartrid�a 32KB Super Snapshot V4"},
/* ru */ {IDCLS_ATTACH_RAW_SS4_CART_RU, "Attach raw 32KB Super Snapshot V4 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_SS4_CART_SV, "Anslut r� 32KB Super Snapshot V4-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_SS4_CART_TR, "D�z 32KB Super Snapshot V4 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_SS5_CART,    N_("Attach raw 64KB Super Snapshot V5 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_SS5_CART_DA, "Tilslut r�t 64kB Super Snapshot V5 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_SS5_CART_DE, "64kB Super Snapshot V5 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_SS5_CART_ES, "Insertar imagen cartucho Super Snapshot V5 64KB"},
/* fr */ {IDCLS_ATTACH_RAW_SS5_CART_FR, "Attacher une image de cartouche 64 ko Super Snapshot V5"},
/* hu */ {IDCLS_ATTACH_RAW_SS5_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_SS5_CART_IT, "Seleziona immagine cartuccia Super Snapshot V5 di 64KB"},
/* ko */ {IDCLS_ATTACH_RAW_SS5_CART_KO, "64KB Super Snapshot V5 īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_SS5_CART_NL, "Koppel binair 64KB Super Snapshot V5 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_SS5_CART_PL, "Zamontuj surowy obraz kartrid�a Super Snapshot V5"},
/* ru */ {IDCLS_ATTACH_RAW_SS5_CART_RU, "Attach raw 64KB Super Snapshot V5 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_SS5_CART_SV, "Anslut r� 64KB-Super Snapshot V5-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_SS5_CART_TR, "D�z 64KB Super Snapshot V5 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_CBM_IEEE488_CART,    N_("Attach IEEE-488 Interface cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_CBM_IEEE488_CART_DA, "Tilslut IEEE-488 interface cartridge image"},
/* de */ {IDCLS_ATTACH_CBM_IEEE488_CART_DE, "IEEE Schnittstellen Erweiterungsmodul Image einlegen"},
/* es */ {IDCLS_ATTACH_CBM_IEEE488_CART_ES, "Insertar imagen de cartucho Interface IEEE-488"},
/* fr */ {IDCLS_ATTACH_CBM_IEEE488_CART_FR, "Attacher une image de cartouche Interface IEEE-488"},
/* hu */ {IDCLS_ATTACH_CBM_IEEE488_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_CBM_IEEE488_CART_IT, "Seleziona immagine cartuccia interfaccia IEEE"},
/* ko */ {IDCLS_ATTACH_CBM_IEEE488_CART_KO, "IEEE-488 �������̽� īƮ���� �̹����� �ٿ���������"},
/* nl */ {IDCLS_ATTACH_CBM_IEEE488_CART_NL, "Koppel IEEE-488 Interface cartridge bestand"},
/* pl */ {IDCLS_ATTACH_CBM_IEEE488_CART_PL, "Zamontuj obraz kartrid�a IEEE-488 Interface"},
/* ru */ {IDCLS_ATTACH_CBM_IEEE488_CART_RU, "Attach IEEE-488 Interface cartridge image"},
/* sv */ {IDCLS_ATTACH_CBM_IEEE488_CART_SV, "Anslut IEEE-488-gr�nssnittsavbildningsfil"},
/* tr */ {IDCLS_ATTACH_CBM_IEEE488_CART_TR, "IEEE-488 Arabirimi kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ISEPIC_CART,    N_("Attach raw 2kB ISEPIC cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ISEPIC_CART_DA, "Tilslut r�t 2kB ISEPIC-cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ISEPIC_CART_DE, "2kB ISEPIC Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ISEPIC_CART_ES, "Insertar imagen cartucho ISEPIC 2KB"},
/* fr */ {IDCLS_ATTACH_RAW_ISEPIC_CART_FR, "Attacher une image de cartouche 2 ko ISEPIC"},
/* hu */ {IDCLS_ATTACH_RAW_ISEPIC_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_ISEPIC_CART_IT, "Seleziona immagine cartuccia ISEPIC di 2kB"},
/* ko */ {IDCLS_ATTACH_RAW_ISEPIC_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_ISEPIC_CART_NL, "Koppel binair 2kB ISEPIC cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ISEPIC_CART_PL, "Zamontuj surowy obraz kartrid�a 2kB ISEPIC"},
/* ru */ {IDCLS_ATTACH_RAW_ISEPIC_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_ISEPIC_CART_SV, "Anslut r� 2kB ISEPIC-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_ISEPIC_CART_TR, "D�z 2kB ISEPIC kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_KCS_CART,    N_("Attach raw 16kB KCS Power cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_KCS_CART_DA, "Tilslut r�t 16kB KCS Power Cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_KCS_CART_DE, "16kB KCS Power Cartridge Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_KCS_CART_ES, "Insertar imagen cartucho KCS Power Cartridge 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_KCS_CART_FR, "Attacher une image de cartouche 16 ko KCS Power"},
/* hu */ {IDCLS_ATTACH_RAW_KCS_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_KCS_CART_IT, "Seleziona immagine cartuccia KCS Power di 16kB"},
/* ko */ {IDCLS_ATTACH_RAW_KCS_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_KCS_CART_NL, "Koppel binair 16kB KSC Power cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_KCS_CART_PL, "Zamontuj surowy obraz kartrid�a 16kB KCS Power"},
/* ru */ {IDCLS_ATTACH_RAW_KCS_CART_RU, "Attach raw 16kB KCS Power cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_KCS_CART_SV, "Anslut r� 16KB KCS Power-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_KCS_CART_TR, "D�z 16kB KCS Power kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_KINGSOFT_CART,    N_("Attach raw 24kB Kingsoft cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_DA, "Tilslut r�t 24kB Snapshot 64 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_DE, "24kB Kingsoft Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_ES, "Insertar imagen cartucho 24KB Kingsoft"},
/* fr */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_FR, "Attacher une image de cartouche 24 ko Kingsoft"},
/* hu */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_IT, "Seleziona immagine cartuccia Kingsoft di 24kB"},
/* ko */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_NL, "Koppel binair 24kB Kingsoft cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_PL, "Zamontuj surowy obraz kartrid�a 24kB Kingsoft"},
/* ru */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_SV, "Anslut r� 24kB-Kingsoft-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_KINGSOFT_CART_TR, "D�z 24kB Kingsoft kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_MACH5_CART,    N_("Attach raw 8kB MACH 5 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_MACH5_CART_DA, "Tilslut r�t 8kB MACH 5 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_MACH5_CART_DE, "8kB MAC 5 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_MACH5_CART_ES, "Insertar imagen cartucho MACH 5 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_MACH5_CART_FR, "Attacher une image de cartouche 8 ko MACH 5"},
/* hu */ {IDCLS_ATTACH_RAW_MACH5_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_MACH5_CART_IT, "Seleziona immagine cartuccia MACH 5 di 8kB"},
/* ko */ {IDCLS_ATTACH_RAW_MACH5_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_MACH5_CART_NL, "Koppel binair 8kB MACH 5 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_MACH5_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB MACH 5"},
/* ru */ {IDCLS_ATTACH_RAW_MACH5_CART_RU, "Attach raw 8kB MACH 5 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_MACH5_CART_SV, "Anslut r� 8kB MACH 5-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_MACH5_CART_TR, "D�z 8kB MACH 5 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART,    N_("Attach raw 32/64/128kB Magic Desk cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_DA, "Tilslut r�t 32/64/128kB Magic Desk cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_DE, "32/64/128kB Magic Desk Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_ES, "Insertar imagen cartucho Magic Desc 32/64/128KB"},
/* fr */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_FR, "Attacher une image de cartouche 32/64/128 ko Magic Desk"},
/* hu */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_IT, "Seleziona immagine cartuccia Magic Desk di 32/64/128kB"},
/* ko */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_NL, "Koppel binair 32/64/128kB Magic Desk cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_PL, "Zamontuj surowy obraz kartrid�a 32/64/128kB Magic Desk"},
/* ru */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_RU, "Attach raw 32/64/128kB Magic Desk cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_SV, "Anslut r� 32/64/128kB Magic Desk-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_MAGIC_DESK_CART_TR, "D�z 32/64/128kB Magic Desk kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART,    N_("Attach raw Magic Formel cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_DA, "Tilslut r�t Magic Formel cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_DE, "Magic Formel Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_ES, "Insertar imagen cartucho Magic Formel"},
/* fr */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_FR, "Attacher une image de cartouche Magic Formel"},
/* hu */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_IT, "Seleziona immagine cartuccia Magic Formel"},
/* ko */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_KO, "Magic Formel īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_NL, "Koppel binair Magic Formel cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_PL, "Zamontuj surowy obraz kartrid�a Magic Formel"},
/* ru */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_RU, "Attach raw Magic Formel cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_SV, "Anslut r� Magic Romel-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_MAGIC_FORMEL_CART_TR, "D�z Magic Formel kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART,    N_("Attach raw 8kB Mikro Assembler cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_DA, "Tilslut r�t 8kB Mikro Assembler cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_DE, "8kB Mikro Assembler Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_ES, "Insertar imagen cartucho Mikro Assembler 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_FR, "Attacher une image de cartouche 8 ko Mikor Assembler"},
/* hu */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_IT, "Seleziona immagine cartuccia Mikro Assembler di 8kB"},
/* ko */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_NL, "Koppel binair 8KB Mikro Assembler cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB Mikro Assembler"},
/* ru */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_RU, "Attach raw 8kB Mikro Assembler cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_SV, "Anslut r� 8kB Mikro Assembler-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_MIKRO_ASSEMBLER_CART_TR, "D�z 8kB Mikro Assembler kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_MMC64_CART,    N_("Attach raw 8kB MMC64 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_MMC64_CART_DA, "Tilslut r�t 8kB MMC64 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_MMC64_CART_DE, "8kB MMC64 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_MMC64_CART_ES, "Insertar imagen cartucho MMC64 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_MMC64_CART_FR, "Attacher une image de cartouche 8 ko MMC64"},
/* hu */ {IDCLS_ATTACH_RAW_MMC64_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_MMC64_CART_IT, "Seleziona immagine cartuccia MMC64 di 8kB"},
/* ko */ {IDCLS_ATTACH_RAW_MMC64_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_MMC64_CART_NL, "Koppel binair 8kB MMC64 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_MMC64_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB MMC64"},
/* ru */ {IDCLS_ATTACH_RAW_MMC64_CART_RU, "Attach raw 8kB MMC64 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_MMC64_CART_SV, "Anslut r� 8kB MMC64-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_MMC64_CART_TR, "D�z 8kB MMC64 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART,    N_("Attach raw 512kB MMC Replay cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_DA, "Tilslut r�t 512kB MMC Replay cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_DE, "512kB MMC Replay Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_ES, "Insertar imagen cartucho MMC Replay 512KB"},
/* fr */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_FR, "Attacher une image de cartouche 512 ko MMC Replay"},
/* hu */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_IT, "Seleziona immagine cartuccia MMC Replay di 512kB"},
/* ko */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_KO, "512KB MMC Replay īƮ���� �̹����� ���̼���"},
/* nl */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_NL, "Koppel binair 512kB MMC Replay cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_PL, "Zamontuj surowy obraz kartrid�a 512kB MMC Replay"},
/* ru */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_RU, "Attach raw 512kB MMC Replay cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_SV, "Anslut r� 512kB MMC Replay-avbildningsfil"},
/* tr */ {IDCLS_ATTACH_RAW_MMC_REPLAY_CART_TR, "D�z 512kB MMC Replay kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART,    N_("Attach raw 16kB Magic Voice cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_DA, "Tilslut r�t 16kB Magic Voice cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_DE, "16kB Magic Voice Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_ES, "Insertar imagen cartucho Magic Voice 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_FR, "Attacher une image de cartouche 16 ko Magic Voice"},
/* hu */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_IT, "Seleziona immagine cartuccia Magic Voice di 16kB"},
/* ko */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_NL, "Koppel binair 16kB Magic Voice cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_PL, "Zamontuj surowy obraz kartrid�a 16kB Magic Voice"},
/* ru */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_RU, "Attach raw 16kB Magic Voice cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_SV, "Anslut r� 16kB Magic Voice-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_MAGIC_VOICE_CART_TR, "D�z 16kB Magic Voice kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_OCEAN_CART,    N_("Attach raw Ocean cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_OCEAN_CART_DA, "Tilslut r�t Ocean cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_OCEAN_CART_DE, "Ocean Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_OCEAN_CART_ES, "Insertar imagen cartucho Ocean"},
/* fr */ {IDCLS_ATTACH_RAW_OCEAN_CART_FR, "Attacher une image de cartouche RAW Ocean"},
/* hu */ {IDCLS_ATTACH_RAW_OCEAN_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_OCEAN_CART_IT, "Seleziona immagine cartuccia Ocean"},
/* ko */ {IDCLS_ATTACH_RAW_OCEAN_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_OCEAN_CART_NL, "Koppel binair Ocean cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_OCEAN_CART_PL, "Zamontuj surowy obraz kartrid�a Ocean"},
/* ru */ {IDCLS_ATTACH_RAW_OCEAN_CART_RU, "Attach raw Ocean cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_OCEAN_CART_SV, "Anslut r� Ocean-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_OCEAN_CART_TR, "D�z Ocean kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_WESTERMANN_CART,    N_("Attach raw 16KB Westermann Learning cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_DA, "Tilslut r�t 16kB Westermann Learning cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_DE, "16kB Westermann learning Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_ES, "Insertar imagen cartucho Wstermann Learning 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_FR, "Attacher une image de cartouche 16 ko Westermann Leaning"},
/* hu */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_IT, "Seleziona immagine cartuccia Westermann Learning di 16KB"},
/* ko */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_NL, "Koppel binair 16kB Westermann Learning cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_PL, "Zamontuj surowy obraz kartrid�a 16KB Westermann Learning"},
/* ru */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_RU, "Attach raw 16KB Westermann Learning cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_SV, "Anslut r� 16KB Westermann Learning-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_WESTERMANN_CART_TR, "D�z 16KB Westermann Learning kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_WARPSPEED_CART,    N_("Attach raw 8kB Warp Speed cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_DA, "Tilslut r�t 8kB Warp Speed cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_DE, "8kB Warp Speed Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_ES, "Insertar imagen cartucho Warp Speed 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_FR, "Attacher une image de cartouche 8 ko Warp Speed"},
/* hu */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_IT, "Seleziona immagine cartuccia Warp Speed di 8kB"},
/* ko */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_NL, "Koppel binair 8kB Warp Speed cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_PL, "Zamontuj surowy obraz kartrid�a 8kB Warp Speed"},
/* ru */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_RU, "Attach raw 8kB Warp Speed cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_SV, "Anslut r� 8kB-Warp Speed-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_WARPSPEED_CART_TR, "D�z 8kB Warp Speed kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ZAXXON_CART,    N_("Attach raw 16kB Zaxxon cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ZAXXON_CART_DA, "Tilslut r�t 16kB Zaxxon cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ZAXXON_CART_DE, "16kB Zaxxon Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ZAXXON_CART_ES, "Insertar imagen cartucho Zaxxon 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_ZAXXON_CART_FR, "Attacher une image de cartouche 16 ko Zaxxon"},
/* hu */ {IDCLS_ATTACH_RAW_ZAXXON_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_ZAXXON_CART_IT, "Seleziona immagine cartuccia Zaxxon di 16kB"},
/* ko */ {IDCLS_ATTACH_RAW_ZAXXON_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_ZAXXON_CART_NL, "Koppel binair 16kB Zaxxon cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ZAXXON_CART_PL, "Zamontuj surowy obraz kartrid�a 16kB Zaxxon"},
/* ru */ {IDCLS_ATTACH_RAW_ZAXXON_CART_RU, "Attach raw 16kB Zaxxon cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_ZAXXON_CART_SV, "Anslut r� 16kB Zaxxon-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_ZAXXON_CART_TR, "D�z 16kB Zaxxon kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_EASYCALC_CART,    N_("Attach raw 24kB Easy Calc Result cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_EASYCALC_CART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ATTACH_RAW_EASYCALC_CART_DE, "Easy Calc Result Erweiterungsmodul Image (24kb raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_EASYCALC_CART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ATTACH_RAW_EASYCALC_CART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ATTACH_RAW_EASYCALC_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_EASYCALC_CART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ATTACH_RAW_EASYCALC_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_EASYCALC_CART_NL, "Koppel binair 24kB Easy Calc Result cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_EASYCALC_CART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ATTACH_RAW_EASYCALC_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_EASYCALC_CART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ATTACH_RAW_EASYCALC_CART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_PAGEFOX_CART,    N_("Attach raw 64KB Pagefox cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_DA, "Tilslut r�t 64kB Pagefox cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_DE, "Pagefox Erweiterungsmodul Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_ES, "Insertar imagen cartucho 64KB Pagefox"},
/* fr */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_FR, "Attacher une image de cartouche 64 ko Pagefox"},
/* hu */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_IT, "Seleziona immagine cartuccia Pagefox di 64KB"},
/* ko */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_NL, "Koppel binair 64KB Pagefox cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_PL, "Zamontuj surowy obraz kartrid�a 64KB Pagefox"},
/* ru */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_SV, "Anslut r� 64KB-Pagefox-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_PAGEFOX_CART_TR, "D�z 64KB Pagefox kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_P64_CART,    N_("Attach raw 256KB Prophet 64 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_P64_CART_DA, "Tilslut r�t 256kB Prophet 64 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_P64_CART_DE, "256KB Prophet 64 Erweiterungsmodul Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_P64_CART_ES, "Insertar imagen cartucho Prohet 64 256KB"},
/* fr */ {IDCLS_ATTACH_RAW_P64_CART_FR, "Attacher une image de cartouche 256 ko Prophet 64"},
/* hu */ {IDCLS_ATTACH_RAW_P64_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_P64_CART_IT, "Seleziona immagine cartuccia Prophet 64 di 256KB"},
/* ko */ {IDCLS_ATTACH_RAW_P64_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_P64_CART_NL, "Koppel binair 256KB Prophet 64 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_P64_CART_PL, "Zamontuj surowy obraz kartrid�a 256KB Prophet 64"},
/* ru */ {IDCLS_ATTACH_RAW_P64_CART_RU, "Attach raw 256KB Prophet 64 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_P64_CART_SV, "Anslut r� 256KB Prophet 64-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_P64_CART_TR, "D�z 256KB Prophet 64 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_RAMCART_CART,    N_("Attach raw RamCart cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_RAMCART_CART_DA, "Tilslut r�t RamCart cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_RAMCART_CART_DE, "RamCart Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_RAMCART_CART_ES, "Insertar imagen cartucho RamCart"},
/* fr */ {IDCLS_ATTACH_RAW_RAMCART_CART_FR, "Attacher une image de cartouche RAW RAMCART"},
/* hu */ {IDCLS_ATTACH_RAW_RAMCART_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_RAMCART_CART_IT, "Seleziona immagine cartuccia RamCart"},
/* ko */ {IDCLS_ATTACH_RAW_RAMCART_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_RAMCART_CART_NL, "Koppel binair RamCart cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_RAMCART_CART_PL, "Zamontuj surowy obraz kartrid�a RamCart"},
/* ru */ {IDCLS_ATTACH_RAW_RAMCART_CART_RU, "Attach raw RamCart cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_RAMCART_CART_SV, "Anslut r� RamCart-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_RAMCART_CART_TR, "D�z RamCart kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_REU_CART,    N_("Attach raw REU cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_REU_CART_DA, "Tilslut r�t REU cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_REU_CART_DE, "REU Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_REU_CART_ES, "Insertar imagen cartucho REU"},
/* fr */ {IDCLS_ATTACH_RAW_REU_CART_FR, "Attacher une image de cartouche RAW REU"},
/* hu */ {IDCLS_ATTACH_RAW_REU_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_REU_CART_IT, "Seleziona immagine cartuccia REU"},
/* ko */ {IDCLS_ATTACH_RAW_REU_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_REU_CART_NL, "Koppel binair REU cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_REU_CART_PL, "Zamontuj surowy obraz kartrid�a REU"},
/* ru */ {IDCLS_ATTACH_RAW_REU_CART_RU, "Attach raw REU cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_REU_CART_SV, "Anslut r� REU-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_REU_CART_TR, "D�z REU kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_REX_EP256_CART,    N_("Attach raw REX EP256 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_REX_EP256_CART_DA, "Tilslut r�t REX EP256 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_REX_EP256_CART_DE, "REX EP256 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_REX_EP256_CART_ES, "Insertar imagen cartucho REX EP256"},
/* fr */ {IDCLS_ATTACH_RAW_REX_EP256_CART_FR, "Attacher une image de cartouche REX EP256"},
/* hu */ {IDCLS_ATTACH_RAW_REX_EP256_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_REX_EP256_CART_IT, "Seleziona immagine cartuccia REX EP256"},
/* ko */ {IDCLS_ATTACH_RAW_REX_EP256_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_REX_EP256_CART_NL, "Koppel binair REX EP256 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_REX_EP256_CART_PL, "Zamontuj surowy obraz kartrid�a REX EP256"},
/* ru */ {IDCLS_ATTACH_RAW_REX_EP256_CART_RU, "Attach raw REX EP256 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_REX_EP256_CART_SV, "Anslut r� REX EP256-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_REX_EP256_CART_TR, "D�z REX EP256 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_RGCD_CART,    N_("Attach raw 64kB RGCD cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_RGCD_CART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ATTACH_RAW_RGCD_CART_DE, "64kB RGBD Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_RGCD_CART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ATTACH_RAW_RGCD_CART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ATTACH_RAW_RGCD_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_RGCD_CART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ATTACH_RAW_RGCD_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_RGCD_CART_NL, "Koppel binair 64KB RGCD cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_RGCD_CART_PL, "Zamontuj surowy 64KB obraz kartrid�a  RGCD"},
/* ru */ {IDCLS_ATTACH_RAW_RGCD_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_RGCD_CART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ATTACH_RAW_RGCD_CART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_RRNETMK3_CART,    N_("Attach raw 8kB RR-Net MK3 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_DE, "8kB RR-Net MK3 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_NL, "Koppel binair 8kB RRNET MK3 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ATTACH_RAW_RRNETMK3_CART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_ROSS_CART,    N_("Attach raw 16/32kB ROSS cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_ROSS_CART_DA, "Tilslut r�t 16/32kB ROSS cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_ROSS_CART_DE, "16/32kB ROSS Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_ROSS_CART_ES, "Insertar imagen cartucho ROSS 16/32KB"},
/* fr */ {IDCLS_ATTACH_RAW_ROSS_CART_FR, "Attacher une image de cartouche 16/32 ko ROSS"},
/* hu */ {IDCLS_ATTACH_RAW_ROSS_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_ROSS_CART_IT, "Seleziona immagine cartuccia ROSS di 16/32kB"},
/* ko */ {IDCLS_ATTACH_RAW_ROSS_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_ROSS_CART_NL, "Koppel binair 16/32kB ROSS cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_ROSS_CART_PL, "Zamontuj surowy obraz kartrid�a 12/32kB ROSS"},
/* ru */ {IDCLS_ATTACH_RAW_ROSS_CART_RU, "Attach raw 16/32kB ROSS cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_ROSS_CART_SV, "Anslut r� 16/32kB ROSS-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_ROSS_CART_TR, "D�z 16/32kB ROSS kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART,    N_("Attach raw 8KB Game Killer cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_DA, "Tilslut r�t 8kB Game Killer cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_DE, "8KB Game Killer Erweiterungsmodul (raw) Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_ES, "Insertar imagen cartucho Game Killer 8KB"},
/* fr */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_FR, "Attacher une image de cartouche 8 ko Game Killer"},
/* hu */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_IT, "Seleziona immagine cartuccia Game Killer di 8KB"},
/* ko */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_NL, "Koppel binair 8KB Game Killer cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_PL, "Zamontuj surowy obraz kartrid�a 8KB Game Killer"},
/* ru */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_RU, "Attach raw 8KB Game Killer cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_SV, "Anslut r� 8KB Game Killer-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_GAME_KILLER_CART_TR, "D�z 8KB Game Killer kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_GEORAM_CART,    N_("Attach raw GEO-RAM cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_GEORAM_CART_DA, "Tilslut r�t GEO-RAM cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_GEORAM_CART_DE, "GEO-RAM Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_GEORAM_CART_ES, "Insertar imagen cartucho GEO-RAM"},
/* fr */ {IDCLS_ATTACH_RAW_GEORAM_CART_FR, "Attacher une image de cartouche RAW GEO-RAM"},
/* hu */ {IDCLS_ATTACH_RAW_GEORAM_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_GEORAM_CART_IT, "Seleziona immagine cartuccia GEO-RAM"},
/* ko */ {IDCLS_ATTACH_RAW_GEORAM_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_GEORAM_CART_NL, "Koppel binair GEO-RAM cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_GEORAM_CART_PL, "Zamontuj surowy obraz kartrid�a GEO-RAM"},
/* ru */ {IDCLS_ATTACH_RAW_GEORAM_CART_RU, "Attach raw GEO-RAM cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_GEORAM_CART_SV, "Anslut r� GEO-RAM-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_GEORAM_CART_TR, "D�z GEO-RAM kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART,    N_("Attach raw 512kB Game System cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_DA, "Tilslut r�t 512kB Game System cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_DE, "512kB Game System Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_ES, "Insertar imagen cartucho Game System 512KB"},
/* fr */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_FR, "Attacher une image de cartouche 512 ko Game System"},
/* hu */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_IT, "Seleziona immagine cartuccia Game System di 512kB"},
/* ko */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_NL, "Koppel binair 512kB Game System cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_PL, "Zamontuj surowy obraz kartrid�a 512kB Game System"},
/* ru */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_RU, "Attach raw 512kB Game System cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_SV, "Anslut r� 512kB Game System-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_GAME_SYSTEM_CART_TR, "D�z 512kB Game System kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c, c64/expert.c */
/* en */ {IDCLS_ENABLE_EXPERT_CART,    N_("Enable the Expert Cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_EXPERT_CART_DA, "Aktiv�r Expert Cartridge"},
/* de */ {IDCLS_ENABLE_EXPERT_CART_DE, "Expert Cartridge aktivieren"},
/* es */ {IDCLS_ENABLE_EXPERT_CART_ES, "Permitir Expert Cartridge"},
/* fr */ {IDCLS_ENABLE_EXPERT_CART_FR, "Activer Cartouche Expert"},
/* hu */ {IDCLS_ENABLE_EXPERT_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_EXPERT_CART_IT, "Attiva Expert Cartridge"},
/* ko */ {IDCLS_ENABLE_EXPERT_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_EXPERT_CART_NL, "Expert Cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_EXPERT_CART_PL, "W��cz Expert Cartridge"},
/* ru */ {IDCLS_ENABLE_EXPERT_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_EXPERT_CART_SV, "Aktivera Expert Cartridge"},
/* tr */ {IDCLS_ENABLE_EXPERT_CART_TR, "Expert Kartu�u'nu aktif et"},
#endif

/* c64/expert.c */
/* en */ {IDCLS_DISABLE_EXPERT_CART,    N_("Disable the Expert Cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_EXPERT_CART_DA, "Deaktiv�r Expert Cartridge"},
/* de */ {IDCLS_DISABLE_EXPERT_CART_DE, "Expert Cartridge deaktivieren"},
/* es */ {IDCLS_DISABLE_EXPERT_CART_ES, "Deshabilitar Expert Cartridge"},
/* fr */ {IDCLS_DISABLE_EXPERT_CART_FR, "D�sactiver la Cartouche Expert"},
/* hu */ {IDCLS_DISABLE_EXPERT_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_EXPERT_CART_IT, "Disattiva Expert Cartridge"},
/* ko */ {IDCLS_DISABLE_EXPERT_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_EXPERT_CART_NL, "Expert Cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_EXPERT_CART_PL, "Wy��cz Expert Cartridge"},
/* ru */ {IDCLS_DISABLE_EXPERT_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_EXPERT_CART_SV, "Inaktivera Expert Cartridge"},
/* tr */ {IDCLS_DISABLE_EXPERT_CART_TR, "Expert Kartu�u'nu pasifle�tir"},
#endif

/* c64/expert.c */
/* en */ {IDCLS_SET_EXPERT_FILENAME,    N_("Set Expert Cartridge image name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_EXPERT_FILENAME_DA, "V�lg Expert Cartridge image-navn"},
/* de */ {IDCLS_SET_EXPERT_FILENAME_DE, "Expert Cartridge Imagedateiname setzen"},
/* es */ {IDCLS_SET_EXPERT_FILENAME_ES, "Seleccionar nombre imagen Expert Cartridge"},
/* fr */ {IDCLS_SET_EXPERT_FILENAME_FR, "Choisir le nom de l'image de la Cartouche Expert"},
/* hu */ {IDCLS_SET_EXPERT_FILENAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_EXPERT_FILENAME_IT, "Imposta nome immagine Expert Cartridge"},
/* ko */ {IDCLS_SET_EXPERT_FILENAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_EXPERT_FILENAME_NL, "Stel Expert Cartridge bestandsnaam in"},
/* pl */ {IDCLS_SET_EXPERT_FILENAME_PL, "Okre�l nazw� obrazu Expert Cartridge"},
/* ru */ {IDCLS_SET_EXPERT_FILENAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_EXPERT_FILENAME_SV, "V�lj Expert Cartridge-modulfil"},
/* tr */ {IDCLS_SET_EXPERT_FILENAME_TR, "Expert Kartu� imaj ismini belirle"},
#endif

/* c64/expert.c */
/* en */ {IDCLS_SET_EXPERT_MODE,    N_("Set Expert Cartridge mode (0: Off, 1: Prg, 2: On)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_EXPERT_MODE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_EXPERT_MODE_DE, "Setze Expert Cartridge Modus (0: Off, 1: Prg, 2: On)"},
/* es */ {IDCLS_SET_EXPERT_MODE_ES, "Seleccionar modo Expert Cartridge (0: Apagado, 1: Prg, 2: Encendido)"},
/* fr */ {IDCLS_SET_EXPERT_MODE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_EXPERT_MODE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_EXPERT_MODE_IT, "Imposta modalit� Expert Cartridge (0: Off, 1: Prg, 2: On)"},
/* ko */ {IDCLS_SET_EXPERT_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_EXPERT_MODE_NL, "Stel de Expert Cartridge modus in (0: uit, 1: prg, 2: aan)"},
/* pl */ {IDCLS_SET_EXPERT_MODE_PL, "Wybierz tryb Expert Cartridge (0: Wy��czony, 1: Prg, 2: W��czony)"},
/* ru */ {IDCLS_SET_EXPERT_MODE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_EXPERT_MODE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_EXPERT_MODE_TR, ""},  /* fuzzy */
#endif

/* c64/expert.c */
/* en */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE,    N_("Allow writing to Expert Cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_DA, "Tillad skrivning til Expert Cartridge image"},
/* de */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_DE, "Schreibzugriff auf Expert Cartridge Image erlauben"},
/* es */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_ES, "Permitir grabaci�n en Expert Cartridge"},
/* fr */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_FR, "Permettre l'�criture sur l'image Cartouche Expert"},
/* hu */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_IT, "Attiva scrittura su immagine Expert Cartridge"},
/* ko */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_NL, "Sta schrijven naar Expert Cartridge bestand toe"},
/* pl */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_PL, "Pozw�l na zapis do obrazu Expert Cartridge"},
/* ru */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_RU, "Allow writing to Expert Cartridge image"},
/* sv */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_SV, "Till�t skrivning till Expert Cartridge-avbildning"},
/* tr */ {IDCLS_ALLOW_WRITING_TO_EXPERT_IMAGE_TR, "Expert Kartu� imaj�na yazmaya izin ver"},
#endif

/* c64/expert.c */
/* en */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE,    N_("Do not write to Expert Cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_DA, "Skriv ikke til Expert Cartridge image"},
/* de */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_DE, "Kein Schreibzugriff auf Expert Cartridge Image"},
/* es */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_ES, "Deshabilitar grabaci�n en Expert Cartridge"},
/* fr */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_FR, "NE PAS permettre l'�criture sur l'image de Cartouche Expert"},
/* hu */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_IT, "Disattiva scrittura su immagine Expert Cartridge"},
/* ko */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_NL, "Schrijf niet naar Expert Cartridge bestand"},
/* pl */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_PL, "Nie zapisuj do obrazu Expert Cartridge"},
/* ru */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_RU, "Do not write to Expert Cartridge image"},
/* sv */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_SV, "Skriv inte till Expert Cartridge-avbildning"},
/* tr */ {IDCLS_DO_NOT_WRITE_TO_EXPERT_IMAGE_TR, "Expert Kartu� imaj�na yazma"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_DISABLE_CART,    N_("Disable default cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_CART_DA, "Deaktiv�r standard cartridge"},
/* de */ {IDCLS_DISABLE_CART_DE, "Standard Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_CART_ES, "Deshabilitar cartucho por defecto"},
/* fr */ {IDCLS_DISABLE_CART_FR, "D�sactiver la cartouche par d�faut"},
/* hu */ {IDCLS_DISABLE_CART_HU, "Alap cartridge tilt�sa"},
/* it */ {IDCLS_DISABLE_CART_IT, "Disattiva cartuccia predefinita"},
/* ko */ {IDCLS_DISABLE_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_CART_NL, "Standaard cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_CART_PL, "Wy��cz domy�lny kartrid�"},
/* ru */ {IDCLS_DISABLE_CART_RU, "Disable default cartridge"},
/* sv */ {IDCLS_DISABLE_CART_SV, "Inaktivera standardinsticksmodul"},
/* tr */ {IDCLS_DISABLE_CART_TR, "Varsay�lan kartu�u pasifle�tir"},
#endif

/* plus4/plus4cart.c */
/* en */ {IDCLS_SMART_ATTACH_CART,    N_("Smart-attach cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SMART_ATTACH_CART_DA, "Smart-tilslut cartridge-image"},
/* de */ {IDCLS_SMART_ATTACH_CART_DE, "Smart-Einlegen Modul Image"},
/* es */ {IDCLS_SMART_ATTACH_CART_ES, "Insertar imagen cartucho inteligentemente"},
/* fr */ {IDCLS_SMART_ATTACH_CART_FR, "Insertion intelligente d'une image de cartouche"},
/* hu */ {IDCLS_SMART_ATTACH_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SMART_ATTACH_CART_IT, "Seleziona una cartuccia"},
/* ko */ {IDCLS_SMART_ATTACH_CART_KO, "īƮ���� �̹����� ����Ʈ-���̱� �ϱ�"},
/* nl */ {IDCLS_SMART_ATTACH_CART_NL, "Slim-koppel cartridge bestand"},
/* pl */ {IDCLS_SMART_ATTACH_CART_PL, "Inteligentnie zamontuj obraz kartrid�a"},
/* ru */ {IDCLS_SMART_ATTACH_CART_RU, "Smart-attach cartridge image"},
/* sv */ {IDCLS_SMART_ATTACH_CART_SV, "Smartanslut insticksmodulfil"},
/* tr */ {IDCLS_SMART_ATTACH_CART_TR, "Ak�ll� kartu� imaj� yerle�tir"},
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_SPECIFY_IDE64_NAME,    N_("Specify name of IDE64 image file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_IDE64_NAME_DA, "Angiv navn p� IDE64-cartridge image"},
/* de */ {IDCLS_SPECIFY_IDE64_NAME_DE, "Namen f�r IDE64 Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_IDE64_NAME_ES, "Especificar nombre fichero imagen IDE64"},
/* fr */ {IDCLS_SPECIFY_IDE64_NAME_FR, "Sp�cifier le nom de l'image IDE64"},
/* hu */ {IDCLS_SPECIFY_IDE64_NAME_HU, "Adja meg az IDE64 k�pm�s f�jlnev�t"},
/* it */ {IDCLS_SPECIFY_IDE64_NAME_IT, "Specifica il nome del file immagine dell'IDE64"},
/* ko */ {IDCLS_SPECIFY_IDE64_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_IDE64_NAME_NL, "Geef de naam van het IDE64 bestand"},
/* pl */ {IDCLS_SPECIFY_IDE64_NAME_PL, "Okre�l nazw� pliku obrazu IDE64"},
/* ru */ {IDCLS_SPECIFY_IDE64_NAME_RU, "Specify name of IDE64 image file"},
/* sv */ {IDCLS_SPECIFY_IDE64_NAME_SV, "Ange namn p� IDE64-insticksmodulfil"},
/* tr */ {IDCLS_SPECIFY_IDE64_NAME_TR, "IDE64 imaj dosyas�n�n ismini belirt"},
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64,    N_("Set number of cylinders for the IDE64 emulation. (1..65535)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_DE, "Anzahl der Zylinder f�r IDE64 Emulation. (1..65535)"},
/* es */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_ES, "Seleccionar n�mero de cilindros para emulaci�n IDE64 (1..65535)"},
/* fr */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_IT, "Imposta il numero di cilindri dell'emulazione IDE64. (1..65535)"},
/* ko */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_NL, "Stel het aantal cylinders voor de IDE64 emulatie in. (1..65535)"},
/* pl */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_PL, "Okre�l liczb� cylindr�w w emulacji IDE64. (1..65535)"},
/* ru */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_AMOUNT_CYLINDERS_IDE64_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_SET_AMOUNT_HEADS_IDE64,    N_("Set number of heads for the IDE64 emulation. (1..16)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_AMOUNT_HEADS_IDE64_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_AMOUNT_HEADS_IDE64_DE, "Anzahl der Laufwerksk�pfe f�r IDE64 Emulation. (1..16)"},
/* es */ {IDCLS_SET_AMOUNT_HEADS_IDE64_ES, "Seleccionar n�mero de cabezas para emulaci�n IDE64 (1..16)"},
/* fr */ {IDCLS_SET_AMOUNT_HEADS_IDE64_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_AMOUNT_HEADS_IDE64_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_AMOUNT_HEADS_IDE64_IT, "Imposta il numero di testine dell'emulazione IDE64. (1..16)"},
/* ko */ {IDCLS_SET_AMOUNT_HEADS_IDE64_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_AMOUNT_HEADS_IDE64_NL, "Stel het aantal koppen voor de IDE64 emulatie in. (1..16)"},
/* pl */ {IDCLS_SET_AMOUNT_HEADS_IDE64_PL, "Okre�l liczb� g�owic w emulacji IDE64. (1..16)"},
/* ru */ {IDCLS_SET_AMOUNT_HEADS_IDE64_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_AMOUNT_HEADS_IDE64_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_AMOUNT_HEADS_IDE64_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_SET_AMOUNT_SECTORS_IDE64,    N_("Set number of sectors for the IDE64 emulation. (1..63)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_DE, "Anzahl der Sektoren f�r IDE64 Emulation. (1..63)"},
/* es */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_ES, "Seleccionar n�mero de sectores para emulaci�n IDE64 (1..63)"},
/* fr */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_IT, "Imposta il numero di settori dell'emulazione IDE64. (1..63)"},
/* ko */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_NL, "Stel het aantal sectors voor de IDE64 emulatie in. (1..63)"},
/* pl */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_PL, "Okre�l liczb� sektor�w w emulacji IDE64. (1..63)"},
/* ru */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_AMOUNT_SECTORS_IDE64_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_AUTODETECT_IDE64_GEOMETRY,    N_("Autodetect image size")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_DA, "Autodetekt�r st�rrelse p� image"},
/* de */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_DE, "Image Gr��e automatisch erkennen"},
/* es */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_ES, "Autodetecci�n del tama�o de la imagen"},
/* fr */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_FR, "Autod�tection de la taille de l'image"},
/* hu */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_HU, ""},  /* fuzzy */
/* it */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_IT, "Rileva automaticamente immagine"},
/* ko */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_KO, "�̹��� ũ�� �ڵ����� ã��"},
/* nl */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_NL, "Automatisch detecteren bestandsgrootte"},
/* pl */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_PL, "Automatycznie wykrywaj rozmiar obrazu"},
/* ru */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_RU, "�������������� ����������� ������� �����������"},
/* sv */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_SV, "Autodetektera storlek p� avbildning"},
/* tr */ {IDCLS_AUTODETECT_IDE64_GEOMETRY_TR, "Imaj boyutunu otomatik alg�la"},
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY,    N_("Do not autodetect geometry of formatted images")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_DA, "Autodetekt�r ikke geometri fra formatterede images"},
/* de */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_DE, "Geometrie von formatierten Imagedateien nicht automatisch erkennen"},
/* es */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_ES, "No autodetectar formato geometr�a im�genes"},
/* fr */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_FR, "Ne pas d�tecter automatiquement la g�om�trie des images formatt�es"},
/* hu */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_HU, "Form�zott k�pm�sok geometri�j�t ne ismerje fel automatikusan"},
/* it */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_IT, "Non rilevare automaticamente la geometrica delle immagini formattate"},
/* ko */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_NL, "Niet automatisch de grootte van de geformatteerde bestanden detecteren"},
/* pl */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_PL, "Nie wykrywaj geometrii sformatowanych obraz�w"},
/* ru */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_RU, "Do not autodetect geometry of formatted images"},
/* sv */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_SV, "Autodetektera inte geometri fr�n formaterad avbildningsfil"},
/* tr */ {IDCLS_NO_AUTODETECT_IDE64_GEOMETRY_TR, "Formatlanm�� imajlar�n yap�lar�n� otomatik alg�lama"},
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_IDE64_VERSION,    N_("IDE64 cartridge version")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_IDE64_VERSION_DA, ""},  /* fuzzy */
/* de */ {IDCLS_IDE64_VERSION_DE, "IDE64 Modul Version"},
/* es */ {IDCLS_IDE64_VERSION_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_IDE64_VERSION_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_IDE64_VERSION_HU, ""},  /* fuzzy */
/* it */ {IDCLS_IDE64_VERSION_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_IDE64_VERSION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_IDE64_VERSION_NL, "IDE64 cartridge versie"},
/* pl */ {IDCLS_IDE64_VERSION_PL, "Wersja kartrid�a IDE64"},
/* ru */ {IDCLS_IDE64_VERSION_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_IDE64_VERSION_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_IDE64_VERSION_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_ENABLE_IDE64_USB_SERVER,    N_("Enable IDE64 USB server")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IDE64_USB_SERVER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_IDE64_USB_SERVER_DE, "IDE64 USB Server aktivieren"},
/* es */ {IDCLS_ENABLE_IDE64_USB_SERVER_ES, "Permitir IDE64 USB server"},
/* fr */ {IDCLS_ENABLE_IDE64_USB_SERVER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_IDE64_USB_SERVER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_IDE64_USB_SERVER_IT, "Attiva server IDE64 USB"},
/* ko */ {IDCLS_ENABLE_IDE64_USB_SERVER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IDE64_USB_SERVER_NL, "IDE64 USB server inschakelen"},
/* pl */ {IDCLS_ENABLE_IDE64_USB_SERVER_PL, "W��cz serwer USB IDE64"},
/* ru */ {IDCLS_ENABLE_IDE64_USB_SERVER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_IDE64_USB_SERVER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_IDE64_USB_SERVER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_DISABLE_IDE64_USB_SERVER,    N_("Disable IDE64 USB server")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IDE64_USB_SERVER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_IDE64_USB_SERVER_DE, "IDE64 USB Server deaktivieren"},
/* es */ {IDCLS_DISABLE_IDE64_USB_SERVER_ES, "Deshabilitar servidor IDE64 USB"},
/* fr */ {IDCLS_DISABLE_IDE64_USB_SERVER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_IDE64_USB_SERVER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_IDE64_USB_SERVER_IT, "Disattiva server IDE64 USB"},
/* ko */ {IDCLS_DISABLE_IDE64_USB_SERVER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IDE64_USB_SERVER_NL, "IDE64 USB server uitschakelen"},
/* pl */ {IDCLS_DISABLE_IDE64_USB_SERVER_PL, "Wy��cz serwer USB IDE64"},
/* ru */ {IDCLS_DISABLE_IDE64_USB_SERVER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_IDE64_USB_SERVER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_IDE64_USB_SERVER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_IDE64_USB_SERVER_ADDRESS,    N_("IDE64 USB server address")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_IDE64_USB_SERVER_ADDRESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_IDE64_USB_SERVER_ADDRESS_DE, "IDE64 USB Server Adresse"},
/* es */ {IDCLS_IDE64_USB_SERVER_ADDRESS_ES, "Seleccionar direcci�n servidor IDE64 USB"},
/* fr */ {IDCLS_IDE64_USB_SERVER_ADDRESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_IDE64_USB_SERVER_ADDRESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_IDE64_USB_SERVER_ADDRESS_IT, "Indirizzo server IDE64 USB"},
/* ko */ {IDCLS_IDE64_USB_SERVER_ADDRESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_IDE64_USB_SERVER_ADDRESS_NL, "IDE64 USB serveradres"},
/* pl */ {IDCLS_IDE64_USB_SERVER_ADDRESS_PL, "Adres serwera USB IDE64"},
/* ru */ {IDCLS_IDE64_USB_SERVER_ADDRESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_IDE64_USB_SERVER_ADDRESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_IDE64_USB_SERVER_ADDRESS_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_ENABLE_IDE64_RTC_SAVE,    N_("Enable saving of IDE64 RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IDE64_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_IDE64_RTC_SAVE_DE, "IDE64 RTC Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_IDE64_RTC_SAVE_ES, "Permitir grabar datos IDE64 RTC cuando cambien"},
/* fr */ {IDCLS_ENABLE_IDE64_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_IDE64_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_IDE64_RTC_SAVE_IT, "Attiva il salvataggio dei dati RTC dell'IDE64 alla modifica."},
/* ko */ {IDCLS_ENABLE_IDE64_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IDE64_RTC_SAVE_NL, "Opslaan van de IDE64 RTC gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_IDE64_RTC_SAVE_PL, "Zapisuj dane zegara czasu rzeczywistego IDE64 przy zmianie"},
/* ru */ {IDCLS_ENABLE_IDE64_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_IDE64_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_IDE64_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ide64.c */
/* en */ {IDCLS_DISABLE_IDE64_RTC_SAVE,    N_("Disable saving of IDE64 RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IDE64_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_IDE64_RTC_SAVE_DE, "IDE64 RTC Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_IDE64_RTC_SAVE_ES, "Deshabilitar grabar datos IDE64 RTC cuando cambien"},
/* fr */ {IDCLS_DISABLE_IDE64_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_IDE64_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_IDE64_RTC_SAVE_IT, "Disattiva il salvataggio dei dati RTC dell'IDE64 alla modifica."},
/* ko */ {IDCLS_DISABLE_IDE64_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IDE64_RTC_SAVE_NL, "Opslaan van de IDE64 RTC gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_IDE64_RTC_SAVE_PL, "Nie zapisuj danych zegara czasu rzeczywistego IDE64 przy zmianie"},
/* ru */ {IDCLS_DISABLE_IDE64_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_IDE64_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_IDE64_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_P_MODELNUMBER,    N_("<modelnumber>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_MODELNUMBER_DA, "<modelnummer>"},
/* de */ {IDCLS_P_MODELNUMBER_DE, "<Modell Nummer>"},
/* es */ {IDCLS_P_MODELNUMBER_ES, "<n�mero modelo>"},
/* fr */ {IDCLS_P_MODELNUMBER_FR, "<numerodemodele>"},
/* hu */ {IDCLS_P_MODELNUMBER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_MODELNUMBER_IT, "<numero di modello>"},
/* ko */ {IDCLS_P_MODELNUMBER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_MODELNUMBER_NL, "<modelnummer>"},
/* pl */ {IDCLS_P_MODELNUMBER_PL, "<modelnumber>"},
/* ru */ {IDCLS_P_MODELNUMBER_RU, "<modelnumber>"},
/* sv */ {IDCLS_P_MODELNUMBER_SV, "<modellnummer>"},
/* tr */ {IDCLS_P_MODELNUMBER_TR, "<modelnumaras�>"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CBM2_MODEL,    N_("Specify CBM-II model to emulate. (610, 620, 620+, 710, 720, 720+)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CBM2_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_CBM2_MODEL_DE, "CBM-II Modell f�r Emulation w�hlen. (610, 620, 620+, 710, 720, 720+)"},
/* es */ {IDCLS_SPECIFY_CBM2_MODEL_ES, "Especificar modelo CBM-II para emular. (610, 620, 620+, 710, 720, 720+)"},
/* fr */ {IDCLS_SPECIFY_CBM2_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_CBM2_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_CBM2_MODEL_IT, "Specifica il modello di CBM II da emulare. (610, 620, 620+, 710, 720, 720+)"},
/* ko */ {IDCLS_SPECIFY_CBM2_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CBM2_MODEL_NL, "Geef CBM-II model om te emuleren. (610, 620, 620+, 710, 720, 720+)"},
/* pl */ {IDCLS_SPECIFY_CBM2_MODEL_PL, "Okre�l emulowany model CBM-II. (610, 620, 620+, 710, 720, 720+)"},
/* ru */ {IDCLS_SPECIFY_CBM2_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_CBM2_MODEL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_CBM2_MODEL_TR, ""},  /* fuzzy */
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CBM5X0_MODEL,    N_("Specify CBM-II model to emulate. (510)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CBM5X0_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_CBM5X0_MODEL_DE, "CBM-II Modell f�r Emulation w�hlen. (510)"},
/* es */ {IDCLS_SPECIFY_CBM5X0_MODEL_ES, "Especificar modelo CBM-II para emular. (510)"},
/* fr */ {IDCLS_SPECIFY_CBM5X0_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_CBM5X0_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_CBM5X0_MODEL_IT, "Specifica il modello di CBM II da emulare. (510)"},
/* ko */ {IDCLS_SPECIFY_CBM5X0_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CBM5X0_MODEL_NL, "Geef CBM-II model om te emuleren. (510)"},
/* pl */ {IDCLS_SPECIFY_CBM5X0_MODEL_PL, "Okre�l emulowany model CBM-II. (510)"},
/* ru */ {IDCLS_SPECIFY_CBM5X0_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_CBM5X0_MODEL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_CBM5X0_MODEL_TR, ""},  /* fuzzy */
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_TO_USE_VIC_II,    N_("Specify to use VIC-II")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TO_USE_VIC_II_DA, "Brug VIC-II"},
/* de */ {IDCLS_SPECIFY_TO_USE_VIC_II_DE, "VIC-II Unterst�tzung aktivieren"},
/* es */ {IDCLS_SPECIFY_TO_USE_VIC_II_ES, "Especificar usar CBM-II"},
/* fr */ {IDCLS_SPECIFY_TO_USE_VIC_II_FR, "Sp�cifier l'utilisation de VIC-II"},
/* hu */ {IDCLS_SPECIFY_TO_USE_VIC_II_HU, "VIC-II haszn�lata"},
/* it */ {IDCLS_SPECIFY_TO_USE_VIC_II_IT, "Specifica di utilizzare il VIC-II"},
/* ko */ {IDCLS_SPECIFY_TO_USE_VIC_II_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TO_USE_VIC_II_NL, "Gebruik de VIC-II"},
/* pl */ {IDCLS_SPECIFY_TO_USE_VIC_II_PL, "Okre�l u�ycie VIC-II"},
/* ru */ {IDCLS_SPECIFY_TO_USE_VIC_II_RU, "Specify to use VIC-II"},
/* sv */ {IDCLS_SPECIFY_TO_USE_VIC_II_SV, "Ange f�r att anv�nda VIC-II"},
/* tr */ {IDCLS_SPECIFY_TO_USE_VIC_II_TR, "VIC-II kullan�m� i�in se�in"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_TO_USE_CRTC,    N_("Specify to use CRTC")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TO_USE_CRTC_DA, "Brug CRTC"},
/* de */ {IDCLS_SPECIFY_TO_USE_CRTC_DE, "CRTC Unterst�tzung aktivieren"},
/* es */ {IDCLS_SPECIFY_TO_USE_CRTC_ES, "Especificar usar CRT"},
/* fr */ {IDCLS_SPECIFY_TO_USE_CRTC_FR, "Sp�cifier l'utilisation de CRTC"},
/* hu */ {IDCLS_SPECIFY_TO_USE_CRTC_HU, "CRTC haszn�lata"},
/* it */ {IDCLS_SPECIFY_TO_USE_CRTC_IT, "Specifica di utilizzare il CRTC"},
/* ko */ {IDCLS_SPECIFY_TO_USE_CRTC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TO_USE_CRTC_NL, "Gebruik de CRTC"},
/* pl */ {IDCLS_SPECIFY_TO_USE_CRTC_PL, "Okre�l u�ycie CRTC"},
/* ru */ {IDCLS_SPECIFY_TO_USE_CRTC_RU, "Specify to use CRTC"},
/* sv */ {IDCLS_SPECIFY_TO_USE_CRTC_SV, "Ange f�r att anv�nda CRTC"},
/* tr */ {IDCLS_SPECIFY_TO_USE_CRTC_TR, "CRTC kullan�m� i�in se�in"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_P_LINENUMBER,    N_("<linenumber>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_LINENUMBER_DA, "<linjenummer>"},
/* de */ {IDCLS_P_LINENUMBER_DE, "<Zeilennummer>"},
/* es */ {IDCLS_P_LINENUMBER_ES, "<n�mero linea>"},
/* fr */ {IDCLS_P_LINENUMBER_FR, "<num�rodeligne>"},
/* hu */ {IDCLS_P_LINENUMBER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_LINENUMBER_IT, "<numero di linea>"},
/* ko */ {IDCLS_P_LINENUMBER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_LINENUMBER_NL, "<lijnnummer>"},
/* pl */ {IDCLS_P_LINENUMBER_PL, "<linenumber>"},
/* ru */ {IDCLS_P_LINENUMBER_RU, "<linenumber>"},
/* sv */ {IDCLS_P_LINENUMBER_SV, "<linjenummer>"},
/* tr */ {IDCLS_P_LINENUMBER_TR, "<sat�rnumaras�>"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE,    N_("Specify CBM-II model hardware (0=6x0, 1=7x0)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_DA, "Angiv hardware for CBM-II-model (0=6x0, 1=7x0)"},
/* de */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_DE, "CBM-II Hardware Modell w�hlen (0=6x0, 1=7x0)"},
/* es */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_ES, "Especificar modelo hardware CBM-II (0=6x0, 1=7x0)"},
/* fr */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_FR, "Sp�cifier le mod�le hardware CBM-II (0=6x0, 1=7x0)"},
/* hu */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_HU, "Adja meg a CBM-II hardver modellt (0=6x0, 1=7x0)"},
/* it */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_IT, "Specifica il modello hardware del CBM-II (0=6x0, 1=7x0)"},
/* ko */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_NL, "Geef CBM-II hardwaremodel (0=6x0, 1=7x0)"},
/* pl */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_PL, "Okre�l model sprz�tu CBM-II (0=6x0, 1=7x0)"},
/* ru */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_RU, "Specify CBM-II model hardware (0=6x0, 1=7x0)"},
/* sv */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_SV, "Ange maskinvara f�r CBM-II-modell (0=6x0, 1=7x0)"},
/* tr */ {IDCLS_SPECIFY_CBM2_MODEL_HARDWARE_TR, "CBM-II modeli donan�m�n� belirt (0=6x0, 1=7x0)"},
#endif

/* cbm2/cbm2-cmdline-options.c, plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_P_RAMSIZE,    N_("<RAM size>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_RAMSIZE_DA, "<RAM-st�rrelse>"},
/* de */ {IDCLS_P_RAMSIZE_DE, "<RAM Gr��e>"},
/* es */ {IDCLS_P_RAMSIZE_ES, "<Tama�o RAM>"},
/* fr */ {IDCLS_P_RAMSIZE_FR, "<Taille de la RAM>"},
/* hu */ {IDCLS_P_RAMSIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_RAMSIZE_IT, "<Dimensione RAM>"},
/* ko */ {IDCLS_P_RAMSIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_RAMSIZE_NL, "<RAM grootte>"},
/* pl */ {IDCLS_P_RAMSIZE_PL, "<Rozmiar RAM>"},
/* ru */ {IDCLS_P_RAMSIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_RAMSIZE_SV, "<RAM-storlek>"},
/* tr */ {IDCLS_P_RAMSIZE_TR, "<RAM boyutu>"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_SIZE_OF_RAM,    N_("Specify size of RAM (64/128/256/512/1024 kByte)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_SIZE_OF_RAM_DA, "Angiv st�rrelse p� RAM (64/128/256/512/1024 kByte)"},
/* de */ {IDCLS_SPECIFY_SIZE_OF_RAM_DE, "RAM Gr��e w�hlen (64/128/256/512/1024 kByte)"},
/* es */ {IDCLS_SPECIFY_SIZE_OF_RAM_ES, "Especificar tama�o RAM  (64/128/256/512/1024 KB)"},
/* fr */ {IDCLS_SPECIFY_SIZE_OF_RAM_FR, "Sp�cifier la taille de la RAM (64/128/256/512/1024 KO)"},
/* hu */ {IDCLS_SPECIFY_SIZE_OF_RAM_HU, "Adja meg a RAM m�ret�t (64/128/256/512/1024 kB�jt)"},
/* it */ {IDCLS_SPECIFY_SIZE_OF_RAM_IT, "Specifica la dimensione della RAM (4/128/256/512/1024 kByte)"},
/* ko */ {IDCLS_SPECIFY_SIZE_OF_RAM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_SIZE_OF_RAM_NL, "Geef geheugengrootte (64/128/256/512/1024 kByte)"},
/* pl */ {IDCLS_SPECIFY_SIZE_OF_RAM_PL, "Okre�l rozmiar RAM-u (64/128/256/512/1024 kBajty)"},
/* ru */ {IDCLS_SPECIFY_SIZE_OF_RAM_RU, "Specify size of RAM (64/128/256/512/1024 kByte)"},
/* sv */ {IDCLS_SPECIFY_SIZE_OF_RAM_SV, "Ange storlek p� RAM (64/128/256/512/1024 kByte)"},
/* tr */ {IDCLS_SPECIFY_SIZE_OF_RAM_TR, "RAM boyutunu belirt (64/128/256/512/1024 kByte)"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2,    N_("Specify size of RAM (128/256/512/1024 kByte)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_DE, "RAM Gr��e w�hlen (128/256/512/1024 kByte)"},
/* es */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_ES, "Especificar tama�o RAM  (128/256/512/1024 kByte)"},
/* fr */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_IT, "Specifica la dimensione della RAM (128/256/512/1024 kByte)"},
/* ko */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_NL, "Geef geheugengrootte (128/256/512/1024 kByte)"},
/* pl */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_PL, "Okre�l rozmiar RAM-u (128/256/512/1024 kB)"},
/* ru */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_SIZE_OF_RAM_CBM2_TR, ""},  /* fuzzy */
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_ROM_1000_NAME,    N_("Specify name of cartridge ROM image for $1000")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_DA, "Angiv navn p� cartridge-ROM-image for $1000"},
/* de */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_DE, "Name f�r ROM Module Imagedatei ($1000)"},
/* es */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_ES, "Especificar nombre imagen cartucho ROM para $1000"},
/* fr */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_FR, "Sp�cifier le nom de l�image de cartouche ROM pour $1000"},
/* hu */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_HU, "Adja meg a $1000 c�m� cartridge ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_IT, "Specifica il nome immagine della cartuccia ROM a $1000"},
/* ko */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_NL, "Geef de naam van het cartridge ROM bestand voor $1000"},
/* pl */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_PL, "Okre�l nazw� obrazu ROM kartrid�a w $1000"},
/* ru */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_RU, "Specify name of cartridge ROM image for $1000"},
/* sv */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_SV, "Ange namn p� insticksmodul-ROM-avbildning f�r $1000"},
/* tr */ {IDCLS_SPECIFY_CART_ROM_1000_NAME_TR, "$1000 adresi i�in kartu� ROM imaj ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_ROM_2000_NAME,    N_("Specify name of cartridge ROM image for $2000-$3fff")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_DA, "Angiv navn p� cartridge-ROM-image for $2000-3fff"},
/* de */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_DE, "Name f�r ROM Module Imagedatei ($2000-3fff)"},
/* es */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_ES, "Especificar nombre imagen cartucho ROM para $2000-$3FFF"},
/* fr */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_FR, "Sp�cifier le nom de l�image de cartouche ROM pour $2000-$3fff"},
/* hu */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_HU, "Adja meg a $2000-$3fff c�m� cartridge ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_IT, "Specifica il nome immagine della ROM della cartuccia per $2000-$3fff"},
/* ko */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_NL, "Geef de naam van het cartridge ROM bestand voor $2000-$3fff"},
/* pl */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_PL, "Okre�l nazw� obrazu ROM kartrid�a w $2000-$3fff"},
/* ru */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_RU, "Specify name of cartridge ROM image for $2000-$3fff"},
/* sv */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_SV, "Ange namn p� insticksmodul-ROM-avbildning f�r $2000-3fff"},
/* tr */ {IDCLS_SPECIFY_CART_ROM_2000_NAME_TR, "$2000-$3fff adres aral��� i�in kartu� ROM imaj ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_ROM_4000_NAME,    N_("Specify name of cartridge ROM image for $4000-$5fff")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_DA, "Angiv navn p� cartridge-ROM-image for $4000-$5fff"},
/* de */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_DE, "Name f�r ROM Module Imagedatei ($4000-5fff)"},
/* es */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_ES, "Especificar nombre imagen cartucho ROM para $4000-$5FFF"},
/* fr */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_FR, "Sp�cifier le nom de l�image de cartouche ROM pour $4000-$5fff"},
/* hu */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_HU, "Adja meg a $4000-$5fff c�m� cartridge ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_IT, "Specifica il nome immagine della ROM della cartuccia per $4000-$5fff"},
/* ko */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_NL, "Geef de naam van het cartridge ROM bestand voor $4000-$5fff"},
/* pl */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_PL, "Okre�l nazw� obrazu ROM kartrid�a w $4000-$5fff"},
/* ru */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_RU, "Specify name of cartridge ROM image for $4000-$5fff"},
/* sv */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_SV, "Ange namn p� insticksmodul-ROM-avbildning f�r $4000-$5fff"},
/* tr */ {IDCLS_SPECIFY_CART_ROM_4000_NAME_TR, "$4000-$5fff adres aral��� i�in kartu� ROM imaj ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_ROM_6000_NAME,    N_("Specify name of cartridge ROM image for $6000-$7fff")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_DA, "Angiv navn p� cartridge-ROM-image for $6000-$7fff"},
/* de */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_DE, "Name f�r ROM Module Imagedatei ($6000-7fff)"},
/* es */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_ES, "Especificar nombre imagen cartucho ROM para $6000-$7FFF"},
/* fr */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_FR, "Sp�cifier le nom de l�image de cartouche ROM pour $6000-$7fff"},
/* hu */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_HU, "Adja meg a $6000-$7fff c�m� cartridge ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_IT, "Specifica il nome immagine della ROM della cartuccia per $6000-$7fff"},
/* ko */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_NL, "Geef de naam van het cartridge ROM bestand voor $6000-$7fff"},
/* pl */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_PL, "Okre�l nazw� obrazu ROM kartrid�a w $6000-$7fff"},
/* ru */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_RU, "Specify name of cartridge ROM image for $6000-$7fff"},
/* sv */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_SV, "Ange namn p� insticksmodul-ROM-avbildning f�r $6000-$7fff"},
/* tr */ {IDCLS_SPECIFY_CART_ROM_6000_NAME_TR, "$6000-$7fff adres aral��� i�in kartu� ROM imaj ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800,    N_("Enable RAM mapping in $0800-$0FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_DA, "Aktiv�r RAM-mappning p� $0800-$0FFF"},
/* de */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_DE, "RAM Zuordnung in $0800-$0FFF aktivieren"},
/* es */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_ES, "Permitir mapeado RAM en $0800-$0FFF"},
/* fr */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_FR, "Activer le mappage RAM dans $0800-$0FFF"},
/* hu */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_HU, "$0800-$0FFF RAM lek�pz�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_IT, "Attiva mappatura della RAM a $0800-$0FFF"},
/* ko */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_NL, "RAM op adres $0800-$0FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_PL, "W��cz mapowanie RAM w $0800-$0FFF"},
/* ru */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_RU, "Enable RAM mapping in $0800-$0FFF"},
/* sv */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_SV, "Aktivera RAM-mappning p� $0800-$0FFF"},
/* tr */ {IDCLS_ENABLE_RAM_MAPPING_IN_0800_TR, "$0800-$0FFF aral���nda RAM e�le�tirmeyi aktif et"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800,    N_("Disable RAM mapping in $0800-$0FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_DA, "Deaktiv�r RAM-mappning p� $0800-$0FFF"},
/* de */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_DE, "RAM Zuordnung in $0800-$0FFF deaktivieren"},
/* es */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_ES, "Deshabilitar mapeado RAM en $0800-$0FFF"},
/* fr */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_FR, "D�sactiver le mappage RAM dans $0800-$0FFF"},
/* hu */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_HU, "$0800-$0FFF RAM lek�pz�s tilt�sa"},
/* it */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_IT, "Disattiva mappatura della RAM a $0800-$0FFF"},
/* ko */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_NL, "RAM op adres $0800-$0FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_PL, "Wy��cz mapowanie RAM w $0800-$0FFF"},
/* ru */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_RU, "Disable RAM mapping in $0800-$0FFF"},
/* sv */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_SV, "Inaktivera RAM-mappning p� $0800-$0FFF"},
/* tr */ {IDCLS_DISABLE_RAM_MAPPING_IN_0800_TR, "$0800-$0FFF aral���nda RAM e�le�tirmeyi pasifle�tir"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000,    N_("Enable RAM mapping in $1000-$1FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_DA, "Aktiv�r RAM-mappning p� $1000-$1FFF"},
/* de */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_DE, "RAM Zuordnung in $1000-$1FFF aktivieren"},
/* es */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_ES, "Permitir mapeado RAM en $1000-$1FFF"},
/* fr */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_FR, "Activer le mappage RAM dans $1000-$1FFF"},
/* hu */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_HU, "$1000-$1FFF RAM lek�pz�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_IT, "Attiva mappatura della RAM a $1000-$1FFF"},
/* ko */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_NL, "RAM op adres $1000-$1FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_PL, "W��cz mapowanie RAM w $1000-$1FFF"},
/* ru */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_RU, "Enable RAM mapping in $1000-$1FFF"},
/* sv */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_SV, "Aktivera RAM-mappning p� $1000-$1FFF"},
/* tr */ {IDCLS_ENABLE_RAM_MAPPING_IN_1000_TR, "$1000-$1FFF aral���nda RAM e�le�tirmeyi aktif et"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000,    N_("Disable RAM mapping in $1000-$1FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_DA, "Deaktiv�r RAM-mappning p� $1000-$1FFF"},
/* de */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_DE, "RAM Zuordnung in $1000-$1FFF deaktivieren"},
/* es */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_ES, "Deshabilitar mapeado RAM en $1000-$1FFF"},
/* fr */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_FR, "D�sactiver le mappage RAM dans $1000-$1FFF"},
/* hu */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_HU, "$1000-$1FFF RAM lek�pz�s tilt�sa"},
/* it */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_IT, "Disattiva mappatura della RAM a $1000-$1FFF"},
/* ko */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_NL, "RAM op adres $1000-$1FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_PL, "Wy��cz mapowanie RAM w $1000-$1FFF"},
/* ru */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_RU, "Disable RAM mapping in $1000-$1FFF"},
/* sv */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_SV, "Inaktivera RAM-mappning p� $1000-$1FFF"},
/* tr */ {IDCLS_DISABLE_RAM_MAPPING_IN_1000_TR, "$1000-$1FFF aral���nda RAM e�le�tirmeyi pasifle�tir"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000,    N_("Enable RAM mapping in $2000-$3FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_DA, "Aktiv�r RAM-mappning p� $2000-$3FFF"},
/* de */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_DE, "RAM Zuordnung in $2000-3FFF aktivieren"},
/* es */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_ES, "Permitir mapeado RAM en $2000-$3FFF"},
/* fr */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_FR, "Activer le mappage RAM dans $2000-$3FFF"},
/* hu */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_HU, "$2000-$3FFF RAM lek�pz�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_IT, "Attiva mappatura della RAM a $2000-$3FFF"},
/* ko */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_NL, "RAM op adres $2000-$3FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_PL, "W��cz mapowanie RAM w $2000-$3FFF"},
/* ru */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_RU, "Enable RAM mapping in $2000-$3FFF"},
/* sv */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_SV, "Aktivera RAM-mappning p� $2000-$3FFF"},
/* tr */ {IDCLS_ENABLE_RAM_MAPPING_IN_2000_TR, "$2000-$3FFF aral���nda RAM e�le�tirmeyi aktif et"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000,    N_("Disable RAM mapping in $2000-$3FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_DA, "Deaktiv�r RAM-mappning p� $2000-$3FFF"},
/* de */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_DE, "RAM Zuordnung in $2000-$3FFF deaktivieren"},
/* es */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_ES, "Deshabilitar mapeado RAM en $2000-$3FFF"},
/* fr */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_FR, "D�sactiver le mappage RAM dans $2000-$3FFF"},
/* hu */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_HU, "$2000-$3FFF RAM lek�pz�s tilt�sa"},
/* it */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_IT, "Disattiva mappatura della RAM a $2000-$3FFF"},
/* ko */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_NL, "RAM op adres $2000-$3FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_PL, "Wy��cz mapowanie RAM w $2000-$3FFF"},
/* ru */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_RU, "Disable RAM mapping in $2000-$3FFF"},
/* sv */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_SV, "Inaktivera RAM-mappning p� $2000-$3FFF"},
/* tr */ {IDCLS_DISABLE_RAM_MAPPING_IN_2000_TR, "$2000-$3FFF aral���nda RAM e�le�tirmeyi pasifle�tir"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000,    N_("Enable RAM mapping in $4000-$5FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_DA, "Aktiv�r RAM-mappning p� $4000-$5FFF"},
/* de */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_DE, "RAM Zuordnung in $4000-$5FFF aktivieren"},
/* es */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_ES, "Permitir mapeado RAM en $4000-$5FFF"},
/* fr */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_FR, "Activer le mappage RAM dans $4000-$5FFF"},
/* hu */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_HU, "$4000-$5FFF RAM lek�pz�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_IT, "Attiva mappatura della RAM a $4000-$5FFF"},
/* ko */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_NL, "RAM op adres $4000-$5FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_PL, "W��cz mapowanie RAM w $4000-$5FFF"},
/* ru */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_RU, "Enable RAM mapping in $4000-$5FFF"},
/* sv */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_SV, "Aktivera RAM-mappning p� $4000-$5FFF"},
/* tr */ {IDCLS_ENABLE_RAM_MAPPING_IN_4000_TR, "$4000-$5FFF aral���nda RAM e�le�tirmeyi aktif et"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000,    N_("Disable RAM mapping in $4000-$5FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_DA, "Deaktiv�r RAM-mappning p� $4000-$5FFF"},
/* de */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_DE, "RAM Zuordnung in $4000-$5FFF deaktivieren"},
/* es */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_ES, "Deshabilitar mapeado RAM en $4000-$5FFF"},
/* fr */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_FR, "D�sactiver le mappage RAM dans $4000-$5FFF"},
/* hu */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_HU, "$4000-$5FFF RAM lek�pz�s tilt�sa"},
/* it */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_IT, "Disattiva mappatura della RAM a $4000-$5FFF"},
/* ko */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_NL, "RAM op adres $4000-$5FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_PL, "Wy��cz mapowanie RAM w $4000-$5FFF"},
/* ru */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_RU, "Disable RAM mapping in $4000-$5FFF"},
/* sv */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_SV, "Inaktivera RAM-mappning p� $4000-$5FFF"},
/* tr */ {IDCLS_DISABLE_RAM_MAPPING_IN_4000_TR, "$4000-$5FFF aral���nda RAM e�le�tirmeyi pasifle�tir"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000,    N_("Enable RAM mapping in $6000-$7FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_DA, "Aktiv�r RAM-mappning p� $6000-$7FFF"},
/* de */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_DE, "RAM Zuordnung in $6000-$7FFF aktivieren"},
/* es */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_ES, "Permitir mapeado RAM en $6000-$7FFF"},
/* fr */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_FR, "Activer le mappage RAM dans $6000-$7FFF"},
/* hu */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_HU, "$6000-$7FFF RAM lek�pz�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_IT, "Attiva mappatura della RAM a $6000-$7FFF"},
/* ko */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_NL, "RAM op adres $6000-$7FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_PL, "W��cz mapowanie RAM w $6000-$7FFF"},
/* ru */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_RU, "Enable RAM mapping in $6000-$7FFF"},
/* sv */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_SV, "Aktivera RAM-mappning p� $6000-$7FFF"},
/* tr */ {IDCLS_ENABLE_RAM_MAPPING_IN_6000_TR, "$6000-$7FFF aral���nda RAM e�le�tirmeyi aktif et"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000,    N_("Disable RAM mapping in $6000-$7FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_DA, "Deaktiv�r RAM-mappning p� $6000-$7FFF"},
/* de */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_DE, "RAM Zuordnung in $6000-$7FFF deaktivieren"},
/* es */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_ES, "Deshabilitar mapeado RAM en $6000-$7FFF"},
/* fr */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_FR, "D�sactiver le mappage RAM dans $6000-$7FFF"},
/* hu */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_HU, "$6000-$7FFF RAM lek�pz�s tilt�sa"},
/* it */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_IT, "Disattiva mappatura della RAM a $6000-$7FFF"},
/* ko */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_NL, "RAM op adres $6000-$7FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_PL, "Wy��cz mapowanie RAM w $6000-$7FFF"},
/* ru */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_RU, "Disable RAM mapping in $6000-$7FFF"},
/* sv */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_SV, "Inaktivera RAM-mappning p� $6000-$7FFF"},
/* tr */ {IDCLS_DISABLE_RAM_MAPPING_IN_6000_TR, "$6000-$7FFF aral���nda RAM e�le�tirmeyi pasifle�tir"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000,    N_("Enable RAM mapping in $C000-$CFFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_DA, "Aktiv�r RAM-mappning p� $C000-$CFFF"},
/* de */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_DE, "RAM Zuordnung in $C000-$CFFF aktivieren"},
/* es */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_ES, "Permitir mapeado RAM en $C000-$CFFF"},
/* fr */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_FR, "Activer le mappage RAM dans $C000-$CFFF"},
/* hu */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_HU, "$C000-$CFFF RAM lek�pz�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_IT, "Attiva mappatura della RAM a $C000-$CFFF"},
/* ko */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_NL, "RAM op adres $C000-$CFFF inschakelen"},
/* pl */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_PL, "W��cz mapowanie RAM w $C000-$CFFF"},
/* ru */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_RU, "Enable RAM mapping in $C000-$CFFF"},
/* sv */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_SV, "Aktivera RAM-mappning p� $C000-$CFFF"},
/* tr */ {IDCLS_ENABLE_RAM_MAPPING_IN_C000_TR, "$C000-$CFFF aral���nda RAM e�le�tirmeyi aktif et"},
#endif

/* cbm2/cbm2-cmdline-options.c */
/* en */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000,    N_("Disable RAM mapping in $C000-$CFFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_DA, "Deaktiv�r RAM-mappning p� $C000-$CFFF"},
/* de */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_DE, "RAM Zuordnung in $C000-$CFFF deaktivieren"},
/* es */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_ES, "Deshabilitar mapeado RAM en $C000-$CFFF"},
/* fr */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_FR, "D�sactiver le mappage RAM dans $C000-$CFFF"},
/* hu */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_HU, "$C000-$CFFF RAM lek�pz�s tilt�sa"},
/* it */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_IT, "Disattiva mappatura della RAM a $C000-$CFFF"},
/* ko */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_NL, "RAM op adres $C000-$CFFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_PL, "Wy��cz mapowanie RAM w $C000-$CFFF"},
/* ru */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_RU, "Disable RAM mapping in $C000-$CFFF"},
/* sv */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_SV, "Inaktivera RAM-mappning p� $C000-$CFFF"},
/* tr */ {IDCLS_DISABLE_RAM_MAPPING_IN_C000_TR, "$C000-$CFFF aral���nda RAM e�le�tirmeyi pasifle�tir"},
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_KEYMAP_INDEX,    N_("Specify index of keymap file (0: UK business symbolic, 1: UK business positional, 2: Graphics symbolic, 3: Graphics positional, 4: German business symbolic, 5: German business positional)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_KEYMAP_INDEX_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_KEYMAP_INDEX_DE, "Index der Keymap Datei w�hlen (0: UK business symbolic, 1: UK business positional, 2: Graphics symbolic, 3: Graphics positional, 4: German business symbolic, 5: German business positional)"},
/* es */ {IDCLS_SPECIFY_KEYMAP_INDEX_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_KEYMAP_INDEX_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_KEYMAP_INDEX_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_KEYMAP_INDEX_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_KEYMAP_INDEX_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_KEYMAP_INDEX_NL, "Geef index van het toetstoewijzingsbestand (0: UK business symbolisch, 1: UK business positioneel, 2: grafisch symbolisch, 3: grafisch positioneel, 4: Duits business symbolisch, 5: Duits business positioneel)"},
/* pl */ {IDCLS_SPECIFY_KEYMAP_INDEX_PL, "Podaj indeks uk�adu klawiatury (0: UK biznesowa - symbol, 1: UK biznesowa - pozycja, 2: Graficzna - symbol, 3: Graficzna - pozycja, 4: Niemiecka biznesowa - symbol, 5: Niemiecka biznesowa - pozycja)"},
/* ru */ {IDCLS_SPECIFY_KEYMAP_INDEX_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_KEYMAP_INDEX_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_KEYMAP_INDEX_TR, ""},  /* fuzzy */
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME,    N_("Specify name of graphics keyboard symbolic keymap file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_DA, "Angiv fil for symbolsk tastaturemulering for \"graphics\"-tastatur"},
/* de */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_DE, "Keymap Datei f�r graphics keyboard symbolic w�hlen"},
/* es */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_ES, "Especificar nombre fichero gr�ficos teclado simb�lico"},
/* fr */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_FR, "Sp�cifier le nom du fichier de mappage clavier symbolique"},
/* hu */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_HU, "Adja meg a grafikus �s szimbolikus billenty�zet lek�pz�si f�jl nev�t."},
/* it */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_IT, "Specifica il nome del file della mappa simbolica della tastiera grafica"},
/* ko */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_NL, "Geef de naam van het symbolisch toetstoewijzingsbestand voor het grafische toetsenbord"},
/* pl */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_PL, "Okre�l nazw� pliku symbolicznego uk�adu klawiatury graficznej"},
/* ru */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_RU, "Specify name of graphics keyboard symbolic keymap file"},
/* sv */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_SV, "Ange fil f�r symbolisk tangentbordsemulering f�r \"graphics\"-tangentbord"},
/* tr */ {IDCLS_SPECIFY_GFX_SYM_KEYMAP_NAME_TR, "Grafik klavyesi sembolik tu� haritas� dosyas�n�n ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME,    N_("Specify name of graphics keyboard positional keymap file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_DA, "Angiv fil for positionsbestemt tastaturemulering for \"graphics\"-tastatur"},
/* de */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_DE, "Keymap Datei f�r graphics keyboard positional w�hlen"},
/* es */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_ES, "Especificar nombre fichero gr�ficos teclado posicional"},
/* fr */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_FR, "Sp�cifier le nom du fichier de mappage clavier positionnel"},
/* hu */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_HU, "Adja meg a grafikus �s poz�ci� szerinti billenty�zet lek�pz�si f�jl nev�t."},
/* it */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_IT, "Specifica il nome del file della mappa posizionale della tastiera grafica"},
/* ko */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_NL, "Geef de naam van het positioneel toetstoewijzingsbestand voor het grafische toetsenbord"},
/* pl */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_PL, "Okre�l nazw� pliku pozycyjnego uk�adu klawiatury graficznej"},
/* ru */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_RU, "Specify name of graphics keyboard positional keymap file"},
/* sv */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_SV, "Ange fil f�r positionsriktig tangentbordsemulering f�r \"graphics\"-tangentbord"},
/* tr */ {IDCLS_SPECIFY_GFX_POS_KEYMAP_NAME_TR, "Grafik klavyesi konumsal tu� haritas� dosyas�n�n ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME,    N_("Specify name of UK business keyboard symbolic keymap file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_DA, "Angiv fil for symbolsk tastaturemulering for Britisk \"business\"-tastatur"},
/* de */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_DE, "Keymap Datei f�r UK business keyboard symbolic w�hlen"},
/* es */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_ES, "Especificar nombre fichero teclado UK business simb�lico"},
/* fr */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_FR, "Sp�cifier le nom du fichier de mappage clavier symbolique UK"},
/* hu */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_HU, "Adja meg az angol, hivatalos, szimbolikus billenty�zet lek�pz�si f�jl nev�t."},
/* it */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_IT, "Specifica il nome del file della mappa simbolica della tastiera UK business"},
/* ko */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_NL, "Geef de naam van het symbolisch toetstoewijzingsbestand voor het UK zakelijk toetsenbord"},
/* pl */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_PL, "Okre�l nazw� pliku symbolicznego uk�adu angielskiej klawiatury biznesowej"},
/* ru */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_RU, "Specify name of UK business keyboard symbolic keymap file"},
/* sv */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_SV, "Ange fil f�r symbolisk tangentbordsemulering f�r brittiskt \"business\"-tangentbord"},
/* tr */ {IDCLS_SPECIFY_BUK_SYM_KEYMAP_NAME_TR, "UK business klavyesi sembolik tu� haritas� dosyas�n�n ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME,    N_("Specify name of UK business keyboard positional keymap file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_DA, "Angiv fil for positionsbestemt tastaturemulering for Britisk \"business\"-tastatur"},
/* de */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_DE, "Keymap Datei f�r UK business keyboard positional w�hlen"},
/* es */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_ES, "Especificar nombre fichero teclado UK business posicional"},
/* fr */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_FR, "Sp�cifier le nom du fichier de mappage clavier positionnel UK"},
/* hu */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_HU, "Adja meg az angol, hivatalos, poz�ci� szerinti billenty�zet lek�pz�si f�jl nev�t."},
/* it */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_IT, "Specifica il nome del file della mappa posizionale della tastiera UK business"},
/* ko */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_NL, "Geef de naam van het positioneel toetstoewijzingsbestand voor het UK zakelijk toetsenbord"},
/* pl */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_PL, "Okre�l nazw� pliku pozycyjnego uk�adu angielskiej klawiatury biznesowej"},
/* ru */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_RU, "Specify name of UK business keyboard positional keymap file"},
/* sv */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_SV, "Ange fil f�r positionsriktig tangentbordsemulering f�r brittiskt \"business\"-tangentbord"},
/* tr */ {IDCLS_SPECIFY_BUK_POS_KEYMAP_NAME_TR, "UK business klavyesi konumsal tu� haritas� dosyas�n�n ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME,    N_("Specify name of German business keyboard symbolic keymap file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_DA, "Angiv fil for symbolsk tastaturemulering for Tysk \"business\"-tastatur"},
/* de */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_DE, "Keymap Datei f�r German business keyboard symbolic w�hlen"},
/* es */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_ES, "Especificar nombre fichero teclado Alem�n business simb�lico"},
/* fr */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_FR, "Sp�cifier le nom du fichier de mappage clavier symbolique allemand"},
/* hu */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_HU, "Adja meg a n�met, hivatalos, szimbolikus billenty�zet lek�pz�si f�jl nev�t."},
/* it */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_IT, "Specifica il nome del file della mappa simbolica della tastiera business tedesca"},
/* ko */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_NL, "Geef de naam van het symbolisch toetstoewijzingsbestand voor het Duitse zakelijk toetsenbord"},
/* pl */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_PL, "Okre�l nazw� pliku symbolicznego uk�adu niemieckiej klawiatury biznesowej"},
/* ru */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_RU, "Specify name of German business keyboard symbolic keymap file"},
/* sv */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_SV, "Ange fil f�r symbolisk tangentbordsemulering f�r tyskt \"business\"-tangentbord"},
/* tr */ {IDCLS_SPECIFY_BDE_SYM_KEYMAP_NAME_TR, "Alman business klavyesi sembolik tu� haritas� dosyas�n�n ismini belirt"},
#endif

/* cbm2/cbm2-cmdline-options.c, pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME,    N_("Specify name of German business keyboard positional keymap file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_DA, "Angiv fil for positionsbestemt tastaturemulering for Tysk \"business\"-tastatur"},
/* de */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_DE, "Keymap Datei f�r German business keyboard positional w�hlen"},
/* es */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_ES, "Especificar nombre fichero teclado Alem�n business posicional"},
/* fr */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_FR, "Sp�cifier le nom du fichier de mappage clavier positionnel allemand"},
/* hu */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_HU, "Adja meg a n�met, hivatalos, poz�ci� szerinti billenty�zet lek�pz�si f�jl nev�t."},
/* it */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_IT, "Specifica il nome del file della mappa posizionale della tastiera business tedesca"},
/* ko */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_NL, "Geef de naam van het positioneel toetstoewijzingsbestand voor het Duitse zakelijk toetsenbord"},
/* pl */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_PL, "Okre�l nazw� pliku pozycyjnego uk�adu niemieckiej klawiatury biznesowej"},
/* ru */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_RU, "Specify name of German business keyboard positional keymap file"},
/* sv */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_SV, "Ange fil f�r positionsriktig tangentbordsemulering f�r tyskt \"business\"-tangentbord"},
/* tr */ {IDCLS_SPECIFY_BDE_POS_KEYMAP_NAME_TR, "Alman business klavyesi konumsal tu� haritas� dosyas�n�n ismini belirt"},
#endif

/* drive/drive-cmdline-options.c */
/* en */ {IDCLS_P_RPM,    N_("<RPM>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_RPM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_RPM_DE, "<RPM>"},
/* es */ {IDCLS_P_RPM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_P_RPM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_RPM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_RPM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_P_RPM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_RPM_NL, "<RPM>"},
/* pl */ {IDCLS_P_RPM_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_P_RPM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_RPM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_P_RPM_TR, ""},  /* fuzzy */
#endif

/* drive/drive-cmdline-options.c */
/* en */ {IDCLS_P_WOBBLE,    N_("<Wobble>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_WOBBLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_WOBBLE_DE, "<Schwankung>"},
/* es */ {IDCLS_P_WOBBLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_P_WOBBLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_WOBBLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_WOBBLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_P_WOBBLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_WOBBLE_NL, "<Wiebel>"},
/* pl */ {IDCLS_P_WOBBLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_P_WOBBLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_WOBBLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_P_WOBBLE_TR, ""},  /* fuzzy */
#endif

/* drive/drive-cmdline-options.c */
/* en */ {IDCLS_SET_DRIVE_RPM,    N_("Set drive rpm (30000 = 300rpm)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DRIVE_RPM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_DRIVE_RPM_DE, "Setze Laufwerk RPM (30000 = 300rpm)"},
/* es */ {IDCLS_SET_DRIVE_RPM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_DRIVE_RPM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_DRIVE_RPM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_DRIVE_RPM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_DRIVE_RPM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DRIVE_RPM_NL, "Stel drive rpm in (30000 = 300rpm)"},
/* pl */ {IDCLS_SET_DRIVE_RPM_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SET_DRIVE_RPM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_DRIVE_RPM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_DRIVE_RPM_TR, ""},  /* fuzzy */
#endif

/* drive/drive-cmdline-options.c */
/* en */ {IDCLS_SET_DRIVE_WOBBLE,    N_("Set drive wobble (100 = +/-0.5rpm)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DRIVE_WOBBLE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_DRIVE_WOBBLE_DE, "Setze Laufwaerkschwankung (100 = +/-0.5rpm)"},
/* es */ {IDCLS_SET_DRIVE_WOBBLE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_DRIVE_WOBBLE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_DRIVE_WOBBLE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_DRIVE_WOBBLE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_DRIVE_WOBBLE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DRIVE_WOBBLE_NL, "Stel drive wiebel in (100 = +/-0.5rpm)"},
/* pl */ {IDCLS_SET_DRIVE_WOBBLE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SET_DRIVE_WOBBLE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_DRIVE_WOBBLE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_DRIVE_WOBBLE_TR, ""},  /* fuzzy */
#endif

/* gfxoutputdrv/doodledrv.c */
/* en */ {IDCLS_P_COLOR,    N_("<color>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_COLOR_DA, "<farve>"},
/* de */ {IDCLS_P_COLOR_DE, "<Farbe>"},
/* es */ {IDCLS_P_COLOR_ES, "<color>"},
/* fr */ {IDCLS_P_COLOR_FR, "<couleur>"},
/* hu */ {IDCLS_P_COLOR_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_COLOR_IT, "<colore>"},
/* ko */ {IDCLS_P_COLOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_COLOR_NL, "<kleur>"},
/* pl */ {IDCLS_P_COLOR_PL, "<kolor>"},
/* ru */ {IDCLS_P_COLOR_RU, "<����>"},
/* sv */ {IDCLS_P_COLOR_SV, "<f�rg>"},
/* tr */ {IDCLS_P_COLOR_TR, "<renk>"},
#endif

/* gfxoutputdrv/doodledrv.c, gfxoutputdrv/koaladrv.c */
/* en */ {IDCLS_OVERSIZED_HANDLING,    N_("Select the way the oversized input should be handled, (0: scale down, 1: crop left top, 2: crop center top,  3: crop right top, 4: crop left center, 5: crop center, 6: crop right center, 7: crop left bottom, 8: crop center bottom, 9:  crop right bottom)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_OVERSIZED_HANDLING_DA, "Angiv h�ndtering af for stort input (0: skal�r ned, 1: klip venstre top, 2: klip midt top,  3: klip h�jre top, 4: klip venstre midt, 5: klip centreret, 6: klip h�jre midt, 7: klip venstre bund, 8: klip midt bund, 9: klip h�jre bund)"},
/* de */ {IDCLS_OVERSIZED_HANDLING_DE, "W�hle, wie �bergro�er Input behandelt werden soll, (0: skaliere, 1: schneide links oben, 2: schneide mitte oben,  3: schneide rechts oben, 4: schneide links mitte, 5: schneide mitte, 6: schneide rechts mitte, 7: schneide links unten, 8: schneide mitte unten, 9:  schneide rechts unten)"},
/* es */ {IDCLS_OVERSIZED_HANDLING_ES, "Seleccionar c�mo se manejar�n las entradas sobredimensionadas, (0: escalar, 1:recorte sup izq, 2:recorte sup centro, 3:recorte sup dcha, 4:recorte centro izq, 5:recorte centro, 6:recorte centro dcha, 7:recorte abajo izq, 8:recorte centro abajo, 9:recorte abajo dcha)"},
/* fr */ {IDCLS_OVERSIZED_HANDLING_FR, "S�lectionner la fa�on de traiter les entr�es trop longues (0: r�duire, 1-9: Rogner � partir du coin: 1: haut-gauche, 2: haut-centre, 3: haut-droite, 4: centre-gauche, 5: centre, 6: centre-droite, 7: bas-gauche, 8: bas-centre, 9: bas-droite)"},
/* hu */ {IDCLS_OVERSIZED_HANDLING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_OVERSIZED_HANDLING_IT, "Seleziona come gestire il sovradimensionamento dell'input, (0: scale down, 1: ritaglia sinistra alto, 2: ritaglia centro alto,  3: ritaglia destra alto, 4: ritaglia sinistra centro, 5: ritaglia centro, 6: ritaglia destra centro, 7: ritaglia sinistra basso, 8: ritaglia centro basso, 9:  ritaglia destra basso)"},
/* ko */ {IDCLS_OVERSIZED_HANDLING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_OVERSIZED_HANDLING_NL, "Selecteer de manier waarop de te grote invoer moet worden afgehandeld, (0: maak kleiner, 1: knip linker bovenkant, 2: knip midden bovenkant, 3: knip rechter bovenkant, 4: knip linker midden, 5: knip midden, 6: knip rechter midden, 7: knip linker onderkant, 8: knip midden onderkant, 9: knip rechter onderkant)"},
/* pl */ {IDCLS_OVERSIZED_HANDLING_PL, "Wybierz spos�b, w jaki ma by� obs�ugiwany za du�y obraz, (0: zmniejszenie, 1: �ci�cie z g�ry z lewej, 2: �ci�cie z g�ry, 3: �ci�cie z prawej z g�ry, 4: �ci�cie z lewej, 5: �ci�cie od �rodka, 6: �ci�cie z prawej, 7: �ci�cie z lewej z do�u, 8: �ci�cie z do�u, 9: �ci�cie z prawej z do�u)"},
/* ru */ {IDCLS_OVERSIZED_HANDLING_RU, "Select the way the oversized input should be handled, (0: scale down, 1: crop left top, 2: crop center top,  3: crop right top, 4: crop left center, 5: crop center, 6: crop right center, 7: crop left bottom, 8: crop center bottom, 9:  crop right bottom)"},
/* sv */ {IDCLS_OVERSIZED_HANDLING_SV, "V�lj hur f�r stor indata skall hanteras, (0: skala ned, 1: visa �vre v�nstra, 2: visa �vre mitten, 3: visa �vre h�gra, 4: visa v�nstra mitten, 5: visa mitten, 6: visa h�gra mitten, 7: visa nedre v�nstra, 8: visa nedre mitten, 9: visa nedre h�gre)"},
/* tr */ {IDCLS_OVERSIZED_HANDLING_TR, "B�y�k girdilerin ele al�nma y�ntemini se�in, (0: k���lt, 1: sol �stten k�rp, 2: ortal� �stten k�rp,  3: sa� �stten k�rp, 4: soldan ortal� k�rp, 5: ortadan k�rp, 6: sa�dan ortal� k�rp, 7: sol alttan k�rp, 8: ortal� alttan k�rp, 9:  sa� alttan k�rp)"},
#endif

/* gfxoutputdrv/doodledrv.c, gfxoutputdrv/koaladrv.c */
/* en */ {IDCLS_UNDERSIZED_HANDLING,    N_("Select the way the undersized input should be handled, (0: scale up, 1: borderize)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_UNDERSIZED_HANDLING_DA, ""},  /* fuzzy */
/* de */ {IDCLS_UNDERSIZED_HANDLING_DE, "Wie soll ungen�gende Eingabe behandelt werden (0: skaliere, 1: borderize)"},
/* es */ {IDCLS_UNDERSIZED_HANDLING_ES, "Seleccionar c�mo se manejar� la entrada fuera de rango,  (0: scale up, 1: borderize)"},
/* fr */ {IDCLS_UNDERSIZED_HANDLING_FR, "S�lectionner la fa�on de traiter les entr�e trop courtes, (0: agrandir, 1: ajouter bordure)"},
/* hu */ {IDCLS_UNDERSIZED_HANDLING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_UNDERSIZED_HANDLING_IT, "Seleziona come gestire il sottodimensionamento dell'input, (0: scale up, 1: borderize)"},
/* ko */ {IDCLS_UNDERSIZED_HANDLING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_UNDERSIZED_HANDLING_NL, "Selecteer de manier waarop de te kleine invoer moet worden afgehandeld, (0: maak groter, 1: maak border)"},
/* pl */ {IDCLS_UNDERSIZED_HANDLING_PL, "Wybierz spos�b obs�ugi ma�ego obrazu (0: skaluj, 1: dodaj ramk�)"},
/* ru */ {IDCLS_UNDERSIZED_HANDLING_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_UNDERSIZED_HANDLING_SV, "V�lj hur f�r liten indata skall hanteras (0: skala upp, 1: inramning)"},
/* tr */ {IDCLS_UNDERSIZED_HANDLING_TR, ""},  /* fuzzy */
#endif

/* gfxoutputdrv/doodledrv.c */
/* en */ {IDCLS_MULTICOLOR_HANDLING,    N_("Select the way the multicolor to hires should be handled, (0: b&w, 1: 2 colors, 2: 4 colors, 3: gray scale,  4: best cell colors)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_MULTICOLOR_HANDLING_DA, "Angiv m�den multicolor til h�jopl�sning skal h�ndteres p�, (0: sort/hvid, 1: 2 farver, 2: 4 farver, 3: gr�toner,  4: bedste cellefarver)"},
/* de */ {IDCLS_MULTICOLOR_HANDLING_DE, "W�hle, wie Multicolor zu Hochaufl�sung behandelte werden soll, (0: s&w, 1: 2 Farben, 2: 4 Farben, 4 Graustufen, 4: Beste Zellenfarben)"},
/* es */ {IDCLS_MULTICOLOR_HANDLING_ES, "Seleccionar c�mo se manejar�n el cambio multicolor-alta resoluci�n (0:ByN, 1:2 colores, 2:4 colores, 3:escala grises, 4:mejores colores)"},
/* fr */ {IDCLS_MULTICOLOR_HANDLING_FR, "S�lectionner la fa�on de traiter multicolore � haute r�solution, (0: noir et blanc, 1: 2 couleurs, 2: 4 couleurs, 3: �chelle de gris, 4: meilleures couleurs)"},
/* hu */ {IDCLS_MULTICOLOR_HANDLING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_MULTICOLOR_HANDLING_IT, "Seleziona come gestire il multicolor in hires, (0: b&w, 1: 2 colori, 2: 4 colori, 3: scala di grigi,  4: migliori colori cella)"},
/* ko */ {IDCLS_MULTICOLOR_HANDLING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_MULTICOLOR_HANDLING_NL, "Selecteer de manier waarop 'multicolor' naar 'hires' conversie moet worden afgehandeld, (0: zwart/wit, 1: 2 kleuren, 2: 4 kleuren, 3: grijs, 4: best mogelijke kleuren in de cel)"},
/* pl */ {IDCLS_MULTICOLOR_HANDLING_PL, "Wybiera spos�b obs�ugi wielu kolor�w w wysokiej rozdzielczo�ci (0: czarno-bia�y, 1: 2 kolory, 2: 4 kolory, 3: skala szaro�ci, 4: najlepsze kolory kom�rek)"},
/* ru */ {IDCLS_MULTICOLOR_HANDLING_RU, "Select the way the multicolor to hires should be handled, (0: b&w, 1: 2 colors, 2: 4 colors, 3: gray scale,  4: best cell colors)"},
/* sv */ {IDCLS_MULTICOLOR_HANDLING_SV, "V�lj hur flerf�rgs-till-h�guppl�st skall hanteras, (0: svartvit, 1: 2 f�rger, 2: fyra f�rger, 3: gr�skala, 4: b�sta cellf�rger)"},
/* tr */ {IDCLS_MULTICOLOR_HANDLING_TR, "�ok renkliden y�ksek ��z�n�rl��e ge�i�in ele al�nma y�ntemini se�in, (0: siyah&beyaz, 1: 2 renk, 2: 4 renk, 3: gri tonlu,  4: en iyi h�cre renkleri)"},
#endif

/* gfxoutputdrv/doodledrv.c */
/* en */ {IDCLS_TED_LUM_HANDLING,    N_("Select the way the TED luminosity should be handled, (0: ignore, 1: dither)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_TED_LUM_HANDLING_DA, "Angiv m�den TED-lysstyrker skal h�ndteres p� (0: ignor�r, 1: blanding)"},
/* de */ {IDCLS_TED_LUM_HANDLING_DE, "W�hle, wie TED Leuchtst�rke behandelt werden soll, (0: ignorieren, 1: dither)"},
/* es */ {IDCLS_TED_LUM_HANDLING_ES, "Seleccionar c�mo se manejar�n la luminosidad TED (0:ignorar, 1:dither)"},
/* fr */ {IDCLS_TED_LUM_HANDLING_FR, "S�lectionner la fa�on de traiter la luminosit� TED, (0: ignorer, 1: tramer)"},
/* hu */ {IDCLS_TED_LUM_HANDLING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_TED_LUM_HANDLING_IT, "Seleziona come gestire la luminosit� TED, (0: ignora, 1: dither)"},
/* ko */ {IDCLS_TED_LUM_HANDLING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_TED_LUM_HANDLING_NL, "Selecteer de manier waarop de TED kleuren moeten worden afgehandeld, (0: negeren, 1: dither)"},
/* pl */ {IDCLS_TED_LUM_HANDLING_PL, "Wyb�r sposobu obs�ugi jaskrawo�ci TED (0: ignoruj, 1: ditheruj)"},
/* ru */ {IDCLS_TED_LUM_HANDLING_RU, "Select the way the TED luminosity should be handled, (0: ignore, 1: dither)"},
/* sv */ {IDCLS_TED_LUM_HANDLING_SV, "V�lj hur TED-luminositet skall hanteras, (0: ignorera, 1: f�rgutj�mna)"},
/* tr */ {IDCLS_TED_LUM_HANDLING_TR, "TED l�minozitesinin ele al�nma y�ntemini se�in, (0: yok say, 1: dither)"},
#endif

/* gfxoutputdrv/doodledrv.c */
/* en */ {IDCLS_CRTC_TEXT_COLOR,    N_("Select the CRTC text color (0: white, 1: amber, 2: green)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_CRTC_TEXT_COLOR_DA, "V�lg CRTC tekstfarve (0: hvid, 1: ravgul, 2: gr�n)"},
/* de */ {IDCLS_CRTC_TEXT_COLOR_DE, "W�hle CRTC Textfarbe (0: wei�, 1: Bernstein, 2: gr�n)"},
/* es */ {IDCLS_CRTC_TEXT_COLOR_ES, "Seleccionar color texto CRTC (0:blanco, 1:�mbar, 2:verde)"},
/* fr */ {IDCLS_CRTC_TEXT_COLOR_FR, "S�lectionner la couleur du texte CRTC (0: blanc, 1: ambre, 2: vert)"},
/* hu */ {IDCLS_CRTC_TEXT_COLOR_HU, ""},  /* fuzzy */
/* it */ {IDCLS_CRTC_TEXT_COLOR_IT, "Seleziona il colore del testo CRTC (0: bianco, 1: ambra, 2: verde)"},
/* ko */ {IDCLS_CRTC_TEXT_COLOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_CRTC_TEXT_COLOR_NL, "Selecteer de CRTC tekst kleur (0: wit, 1: amber, 2: groen)"},
/* pl */ {IDCLS_CRTC_TEXT_COLOR_PL, "Wybierz kolor tekstu CRTC (0: bia�y, 1: bursztynowy, 2: zielony)"},
/* ru */ {IDCLS_CRTC_TEXT_COLOR_RU, "Select the CRTC text color (0: white, 1: amber, 2: green)"},
/* sv */ {IDCLS_CRTC_TEXT_COLOR_SV, "V�lj CRTC-textf�rg (0: vit, 1: gul, 2: gr�n)"},
/* tr */ {IDCLS_CRTC_TEXT_COLOR_TR, "CRTC yaz� rengini se�in (0: beyaz, 1: kehribar, 2: ye�il)"},
#endif

/* drive/drive-cmdline-options.c */
/* en */ {IDCLS_SET_DRIVE_EXTENSION_POLICY,    N_("Set drive 40 track extension policy (0: never, 1: ask, 2: on access)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_DA, "Angiv drevets regel for 40-spors udviddelse (0: aldrig, 1: sp�rg, 2: ved tilgang)"},
/* de */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_DE, "40 Spur Erweiterungsmethode (0: nie, 1: R�ckfrage, 2: bei Bedarf)"},
/* es */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_ES, "Seleccionar pol�tica unidad disco extensi�n 40 pistas (0:nunca, 1:preguntar, 2:al acceder)"},
/* fr */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_FR, "Sp�cifier la r�gle d'extention 40 pistes (0: jamais, 1: demander, 2: � l'acc�s)"},
/* hu */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_HU, "Adja meg a 40 s�vra kiterjeszt�s terjeszt�s m�dj�t (0: soha, 1: k�rd�s, 2: hozz�f�r�skor)"},
/* it */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_IT, "Imposta la politica di estensione a 40 tracce del drive (0: mai, 1: a richiesta, 2: all'accesso)"},
/* ko */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_NL, "Stel beleid voor 40-sporenuitbreiding drive in (0: nooit, 1: vraag, 2: bij toegang)"},
/* pl */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_PL, "Okre�l zasad� rozszerzania do 40 �cie�ek (0: nigdy, 1: pytaj, 2: przy dost�pie)"},
/* ru */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_RU, "Set drive 40 track extension policy (0: never, 1: ask, 2: on access)"},
/* sv */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_SV, "Ange regel f�r 40-sp�rsut�kning (0: aldrig, 1: fr�ga, 2: vid �tkomst)"},
/* tr */ {IDCLS_SET_DRIVE_EXTENSION_POLICY_TR, "S�r�c� 40 track b�y�me kural�n� ayarla (0: asla, 1: sor, 2: eri�ildi�inde)"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME,    N_("Specify name of 1540 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_DE, "Name der 1540 DOS ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_ES, "Especificar nombre imagen ROM de 1540 DOS "},
/* fr */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1540"},
/* ko */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_NL, "Geef de naam van het 1540 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1540"},
/* ru */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_1540_DOS_ROM_NAME_TR, ""},  /* fuzzy */
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME,    N_("Specify name of 1541 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_DA, "Angiv navn p� 1541-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_DE, "Name der 1541 DOS ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_ES, "Especificar nombre imagen ROM de 1541 DOS "},
/* fr */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1541 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_HU, "Adja meg az 1541 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1541"},
/* ko */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_NL, "Geef de naam van het 1541 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1541"},
/* ru */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_RU, "Specify name of 1541 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_SV, "Ange namn p� 1541-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1541_DOS_ROM_NAME_TR, "1541 DOS ROM imaj�n�n ismini belirt"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME,    N_("Specify name of 1541-II DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_DA, "Angivn navn p� 1541-II-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_DE, "Name der 1541-II DOS ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_ES, "Especificar nombre imagen ROM de 1541-II DOS"},
/* fr */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1541-II DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_HU, "Adja meg az 1541-II DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1541-II"},
/* ko */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_NL, "Geef de naam van het 1541-II DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1541-II"},
/* ru */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_RU, "Specify name of 1541-II DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_SV, "Ange namn p� 1541-II-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1541_II_DOS_ROM_NAME_TR, "1541-II DOS ROM imaj�n�n ismini belirt"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME,    N_("Specify name of 1570 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_DA, "Angivn navn p� 1570-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_DE, "Name der 1570 DOS ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_ES, "Especificar nombre imagen ROM de 1570 DOS"},
/* fr */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1570 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_HU, "Adja meg az 1570 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1570"},
/* ko */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_NL, "Geef de naam van het 1570 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1570"},
/* ru */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_RU, "Specify name of 1570 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_SV, "Ange namn p� 1570-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1570_DOS_ROM_NAME_TR, "1570 DOS ROM imaj�n�n ismini belirt"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME,    N_("Specify name of 1571 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_DA, "Angivn navn p� 1571-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_DE, "Name der 1571 DOS ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_ES, "Especificar nombre imagen ROM de 1571 DOS "},
/* fr */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1571 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_HU, "Adja meg az 1571 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1571"},
/* ko */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_NL, "Geef de naam van het 1571 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1571"},
/* ru */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_RU, "Specify name of 1571 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_SV, "Ange namn p� 1571-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1571_DOS_ROM_NAME_TR, "1571 DOS ROM imaj�n�n ismini belirt"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME,    N_("Specify name of 1581 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_DA, "Angivn navn p� 1581-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_DE, "Name der 1581 DOS ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_ES, "Especificar nombre imagen ROM de 1581 DOS "},
/* fr */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1581 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_HU, "Adja meg az 1581 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1581"},
/* ko */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_NL, "Geef de naam van het 1581 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1581"},
/* ru */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_RU, "Specify name of 1581 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_SV, "Ange namn p� 1581-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1581_DOS_ROM_NAME_TR, "1581 DOS ROM imaj�n�n ismini belirt"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME,    N_("Specify name of 2000 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_DA, "Angiv navn p� 2000-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_DE, "Name der 2000 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_ES, "Especificar nombre imagen 2000 DOS ROM"},
/* fr */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 2000 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del 2000 DOS"},
/* ko */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_NL, "Geef de naam van het 2000 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 2000"},
/* ru */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_RU, "Specify name of 2000 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_SV, "Ange namn p� 2000-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_2000_DOS_ROM_NAME_TR, "2000 DOS ROM imaj ismini belirt"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME,    N_("Specify name of 4000 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_DA, "Angiv navn p� 4000-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_DE, "Name der 4000 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_ES, "Especificar nombre imagen 4000 DOS ROM"},
/* fr */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 4000 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del 4000 DOS"},
/* ko */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_NL, "Geef de naam van het 4000 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 4000"},
/* ru */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_RU, "Specify name of 4000 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_SV, "Ange namn p� 4000-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_4000_DOS_ROM_NAME_TR, "4000 DOS ROM imaj ismini belirt"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_SET_IDLE_METHOD,    N_("Set drive idling method (0: no traps, 1: skip cycles, 2: trap idle)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_IDLE_METHOD_DA, "V�lg tomgangsmetode for diskettedrev (0: ingen traps, 1: spring over cykler, 2: trap ledig)"},
/* de */ {IDCLS_SET_IDLE_METHOD_DE, "Laufwerks idling Methode (0: kein Traps, 1: Zyklen verwerfen, 2: trap idle)"},
/* es */ {IDCLS_SET_IDLE_METHOD_ES, "Seleccionar m�todo tiempo inactivo (0: sin intercepci�n, 1:saltar ciclos, 2:interceptar tiempos inactivos)"},
/* fr */ {IDCLS_SET_IDLE_METHOD_FR, "Sp�cifier la m�thode d'idle (0: pas de traps, 1: sauter des cycles, 2: trap idle)"},
/* hu */ {IDCLS_SET_IDLE_METHOD_HU, "Lemezegys�g �resj�r�si m�dja (0: folytonos emul�ci�, 1: ciklusok kihagy�sa, 2: �res DOS ciklusok kihagy�sa)"},
/* it */ {IDCLS_SET_IDLE_METHOD_IT, "Imposta il metodo per rilevare l'inattivit� del drive (0: non rilevare, 1: salta cicli, 2: rileva inattivit�)"},
/* ko */ {IDCLS_SET_IDLE_METHOD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_IDLE_METHOD_NL, "Stel de drive idlemethode in (0: geen traps, 1: sla cycli over, 2: trap idle)"},
/* pl */ {IDCLS_SET_IDLE_METHOD_PL, "Okre�l metod� bezczynno�ci nap�du (0: no traps, 1: opuszczaj cykle, 2: trap idle)"},
/* ru */ {IDCLS_SET_IDLE_METHOD_RU, "Set drive idling method (0: no traps, 1: skip cycles, 2: trap idle)"},
/* sv */ {IDCLS_SET_IDLE_METHOD_SV, "St�ll in v�ntemetod f�r diskettstation (0: f�nta inge, 1: hoppa cykler, 2: f�nga v�ntan)"},
/* tr */ {IDCLS_SET_IDLE_METHOD_TR, "S�r�c� bo�a vakit ge�irme metodunu ayarlay�n (0: trap yok, 1: cyclelar� atla, 2: trap bo�a vakit ge�irme)"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_ENABLE_DRIVE_RTC_SAVE,    N_("Enable saving of FD2000/4000 RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_DE, "FD2000/4000 RTC Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_ES, "Permitir grabaci�n de datos cuando cambien de  FD2000/4000 RTC."},
/* fr */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_IT, "Attiva il salvataggio dei dati RTC del FD2000/4000 alla modifica."},
/* ko */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_NL, "Opslaan van de FD2000/4000 RTC gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_PL, "Zapisuj dane zegara czasu rzeczywistego FD2000/4000 przy zmianie"},
/* ru */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_DRIVE_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_DISABLE_DRIVE_RTC_SAVE,    N_("Disable saving of FD2000/4000 RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_DE, "FD2000/4000 RTC Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_ES, "Deshabilitar grabaci�n de datos cuando cambien de  FD2000/4000 RTC."},
/* fr */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_IT, "Disattiva il salvataggio dei dati RTC del FD2000/4000 alla modifica."},
/* ko */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_NL, "Opslaan van de FD2000/4000 RTC gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_PL, "Nie zapisuj danych zegara czasu rzeczywistego FD2000/4000 przy zmianie"},
/* ru */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_DRIVE_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_ENABLE_DRIVE_RAM_2000,    N_("Enable 8KB RAM expansion at $2000-$3FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DRIVE_RAM_2000_DA, "Aktiv�r 8kB RAM-udviddelse p� $2000-$3FFF"},
/* de */ {IDCLS_ENABLE_DRIVE_RAM_2000_DE, "8KB RAM Erweiterung bei $2000-3fff aktivieren"},
/* es */ {IDCLS_ENABLE_DRIVE_RAM_2000_ES, "Permitir expansi�n RAM de 8KB en $2000-$3FFF"},
/* fr */ {IDCLS_ENABLE_DRIVE_RAM_2000_FR, "Activer l'exansion de 8KB RAM � $2000-$3FFF"},
/* hu */ {IDCLS_ENABLE_DRIVE_RAM_2000_HU, "8KB RAM kiterjesz�s enged�lyez�se a $2000-$3FFF c�men"},
/* it */ {IDCLS_ENABLE_DRIVE_RAM_2000_IT, "Attiva l'espansione di RAM di 8KB a $2000-$3FFF"},
/* ko */ {IDCLS_ENABLE_DRIVE_RAM_2000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DRIVE_RAM_2000_NL, "8KB RAM uitbreiding op adres $2000-$3FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_DRIVE_RAM_2000_PL, "W��cz rozszerzenie 8KB RAM w $2000-$3FFF"},
/* ru */ {IDCLS_ENABLE_DRIVE_RAM_2000_RU, "Enable 8KB RAM expansion at $2000-$3FFF"},
/* sv */ {IDCLS_ENABLE_DRIVE_RAM_2000_SV, "Aktivera 8KB RAM-expansion p� $2000-$3FFF"},
/* tr */ {IDCLS_ENABLE_DRIVE_RAM_2000_TR, "$2000-$3FFF aras�nda 8KB RAM geni�letmeyi aktif et"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_DISABLE_DRIVE_RAM_2000,    N_("Disable 8KB RAM expansion at $2000-$3FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DRIVE_RAM_2000_DA, "Deaktiv�r 8kB RAM-udviddelse p� $2000-$3FFF"},
/* de */ {IDCLS_DISABLE_DRIVE_RAM_2000_DE, "8KB RAM Erweiterung bei $2000-3fff deaktivieren"},
/* es */ {IDCLS_DISABLE_DRIVE_RAM_2000_ES, "Deshabilitar expansi�n RAM de 8KB en $2000-$3FFF"},
/* fr */ {IDCLS_DISABLE_DRIVE_RAM_2000_FR, "D�sactiver l'exansion de 8KB RAM � $2000-$3FFF"},
/* hu */ {IDCLS_DISABLE_DRIVE_RAM_2000_HU, "8KB RAM kiterjesz�s tilt�sa a $2000-$3FFF c�men"},
/* it */ {IDCLS_DISABLE_DRIVE_RAM_2000_IT, "Disattiva l'espansione di RAM di 8KB a $2000-$3FFF"},
/* ko */ {IDCLS_DISABLE_DRIVE_RAM_2000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DRIVE_RAM_2000_NL, "8KB RAM uitbreiding op adres $2000-$3FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_DRIVE_RAM_2000_PL, "Wy��cz rozszerzenie 8KB RAM w $2000-$3FFF"},
/* ru */ {IDCLS_DISABLE_DRIVE_RAM_2000_RU, "Disable 8KB RAM expansion at $2000-$3FFF"},
/* sv */ {IDCLS_DISABLE_DRIVE_RAM_2000_SV, "Inaktivera 8KB RAM-expansion p� $2000-$3FFF"},
/* tr */ {IDCLS_DISABLE_DRIVE_RAM_2000_TR, "$2000-$3FFF aras�nda 8KB RAM geni�letmeyi pasifle�tir"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_ENABLE_DRIVE_RAM_4000,    N_("Enable 8KB RAM expansion at $4000-$5FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DRIVE_RAM_4000_DA, "Aktiv�r 8kB RAM-udviddelse p� $4000-$5FFF"},
/* de */ {IDCLS_ENABLE_DRIVE_RAM_4000_DE, "8KB RAM Erweiterung bei $4000-5fff aktivieren"},
/* es */ {IDCLS_ENABLE_DRIVE_RAM_4000_ES, "Permitir expansi�n RAM de 8KB en $4000-$5FFF"},
/* fr */ {IDCLS_ENABLE_DRIVE_RAM_4000_FR, "Activer l'exansion de 8KB RAM � $4000-$5FFF"},
/* hu */ {IDCLS_ENABLE_DRIVE_RAM_4000_HU, "8KB RAM kiterjesz�s enged�lyez�se a $4000-$5FFF c�men"},
/* it */ {IDCLS_ENABLE_DRIVE_RAM_4000_IT, "Attiva l'espansione di RAM di 8KB a $4000-$5FFF"},
/* ko */ {IDCLS_ENABLE_DRIVE_RAM_4000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DRIVE_RAM_4000_NL, "8KB RAM uitbreiding op adres $4000-$5FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_DRIVE_RAM_4000_PL, "W��cz rozszerzenie 8KB RAM w $4000-$5FFF"},
/* ru */ {IDCLS_ENABLE_DRIVE_RAM_4000_RU, "Enable 8KB RAM expansion at $4000-$5FFF"},
/* sv */ {IDCLS_ENABLE_DRIVE_RAM_4000_SV, "Aktivera 8KB RAM-expansion p� $4000-$5FFF"},
/* tr */ {IDCLS_ENABLE_DRIVE_RAM_4000_TR, "$4000-$5FFF aras�nda 8KB RAM geni�letmeyi aktif et"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_DISABLE_DRIVE_RAM_4000,    N_("Disable 8KB RAM expansion at $4000-$5FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DRIVE_RAM_4000_DA, "Deaktiv�r 8kB RAM-udviddelse p� $4000-$5FFF"},
/* de */ {IDCLS_DISABLE_DRIVE_RAM_4000_DE, "8KB RAM Erweiterung bei $4000-5fff deaktivieren"},
/* es */ {IDCLS_DISABLE_DRIVE_RAM_4000_ES, "Deshabilitar expansi�n RAM de 8KB en $4000-$5FFF"},
/* fr */ {IDCLS_DISABLE_DRIVE_RAM_4000_FR, "D�sactiver l'exansion de 8KB RAM � $4000-$5FFF"},
/* hu */ {IDCLS_DISABLE_DRIVE_RAM_4000_HU, "8KB RAM kiterjesz�s tilt�sa a $4000-$5FFF c�men"},
/* it */ {IDCLS_DISABLE_DRIVE_RAM_4000_IT, "Disattiva l'espansione di RAM di 8KB a $4000-$5FFF"},
/* ko */ {IDCLS_DISABLE_DRIVE_RAM_4000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DRIVE_RAM_4000_NL, "8KB RAM uitbreiding op adres $4000-$5FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_DRIVE_RAM_4000_PL, "Wy��cz rozszerzenie 8KB RAM w $4000-$5FFF"},
/* ru */ {IDCLS_DISABLE_DRIVE_RAM_4000_RU, "Disable 8KB RAM expansion at $4000-$5FFF"},
/* sv */ {IDCLS_DISABLE_DRIVE_RAM_4000_SV, "Inaktivera 8KB RAM-expansion p� $4000-$5FFF"},
/* tr */ {IDCLS_DISABLE_DRIVE_RAM_4000_TR, "$4000-$5FFF aras�nda 8KB RAM geni�letmeyi pasifle�tir"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_ENABLE_DRIVE_RAM_6000,    N_("Enable 8KB RAM expansion at $6000-$7FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DRIVE_RAM_6000_DA, "Aktiv�r 8kB RAM-udviddelse p� $6000-$7FFF"},
/* de */ {IDCLS_ENABLE_DRIVE_RAM_6000_DE, "8KB RAM Erweiterung bei $6000-7fff aktivieren"},
/* es */ {IDCLS_ENABLE_DRIVE_RAM_6000_ES, "Permitir expansi�n RAM de 8KB en $6000-$7FFF"},
/* fr */ {IDCLS_ENABLE_DRIVE_RAM_6000_FR, "Activer l'exansion de 8KB RAM � $6000-$7FFF"},
/* hu */ {IDCLS_ENABLE_DRIVE_RAM_6000_HU, "8KB RAM kiterjesz�s enged�lyez�se a $6000-$7FFF c�men"},
/* it */ {IDCLS_ENABLE_DRIVE_RAM_6000_IT, "Attiva l'espansione di RAM di 8KB a $6000-$7FFF"},
/* ko */ {IDCLS_ENABLE_DRIVE_RAM_6000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DRIVE_RAM_6000_NL, "8KB RAM uitbreiding op adres $6000-$7FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_DRIVE_RAM_6000_PL, "W��cz rozszerzenie 8KB RAM w $6000-$7FFF"},
/* ru */ {IDCLS_ENABLE_DRIVE_RAM_6000_RU, "Enable 8KB RAM expansion at $6000-$7FFF"},
/* sv */ {IDCLS_ENABLE_DRIVE_RAM_6000_SV, "Aktivera 8KB RAM-expansion p� $6000-$7FFF"},
/* tr */ {IDCLS_ENABLE_DRIVE_RAM_6000_TR, "$6000-$7FFF aras�nda 8KB RAM geni�letmeyi aktif et"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_DISABLE_DRIVE_RAM_6000,    N_("Disable 8KB RAM expansion at $6000-$7FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DRIVE_RAM_6000_DA, "Deaktiv�r 8kB RAM-udviddelse p� $6000-$7FFF"},
/* de */ {IDCLS_DISABLE_DRIVE_RAM_6000_DE, "8KB RAM Erweiterung bei $6000-7fff deaktivieren"},
/* es */ {IDCLS_DISABLE_DRIVE_RAM_6000_ES, "Deshabilitar expansi�n RAM de 8KB en $6000-$7FFF"},
/* fr */ {IDCLS_DISABLE_DRIVE_RAM_6000_FR, "D�sactiver l'exansion de 8KB RAM � $6000-$7FFF"},
/* hu */ {IDCLS_DISABLE_DRIVE_RAM_6000_HU, "8KB RAM kiterjesz�s tilt�sa a $6000-$7FFF c�men"},
/* it */ {IDCLS_DISABLE_DRIVE_RAM_6000_IT, "Disattiva l'espansione di RAM di 8KB a $6000-$7FFF"},
/* ko */ {IDCLS_DISABLE_DRIVE_RAM_6000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DRIVE_RAM_6000_NL, "8KB RAM uitbreiding op adres $6000-$7FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_DRIVE_RAM_6000_PL, "Wy��cz rozszerzenie 8KB RAM w $6000-$7FFF"},
/* ru */ {IDCLS_DISABLE_DRIVE_RAM_6000_RU, "Disable 8KB RAM expansion at $6000-$7FFF"},
/* sv */ {IDCLS_DISABLE_DRIVE_RAM_6000_SV, "Inaktivera 8KB RAM-expansion p� $6000-$7FFF"},
/* tr */ {IDCLS_DISABLE_DRIVE_RAM_6000_TR, "$6000-$7FFF aras�nda 8KB RAM geni�letmeyi pasifle�tir"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_ENABLE_DRIVE_RAM_8000,    N_("Enable 8KB RAM expansion at $8000-$9FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DRIVE_RAM_8000_DA, "Aktiv�r 8kB RAM-udviddelse p� $8000-$9FFF"},
/* de */ {IDCLS_ENABLE_DRIVE_RAM_8000_DE, "8KB RAM Erweiterung bei $8000-9fff aktivieren"},
/* es */ {IDCLS_ENABLE_DRIVE_RAM_8000_ES, "Permitir expansi�n RAM de 8KB en $8000-$9FFF"},
/* fr */ {IDCLS_ENABLE_DRIVE_RAM_8000_FR, "Activer l'exansion de 8KB RAM � $8000-$9FFF"},
/* hu */ {IDCLS_ENABLE_DRIVE_RAM_8000_HU, "8KB RAM kiterjesz�s enged�lyez�se a $8000-$9FFF c�men"},
/* it */ {IDCLS_ENABLE_DRIVE_RAM_8000_IT, "Attiva l'espansione di RAM di 8KB a $8000-$9FFF"},
/* ko */ {IDCLS_ENABLE_DRIVE_RAM_8000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DRIVE_RAM_8000_NL, "8KB RAM uitbreiding op adres $8000-$9FFF inschakelen"},
/* pl */ {IDCLS_ENABLE_DRIVE_RAM_8000_PL, "W��cz rozszerzenie 8KB RAM w $8000-$9FFF"},
/* ru */ {IDCLS_ENABLE_DRIVE_RAM_8000_RU, "Enable 8KB RAM expansion at $8000-$9FFF"},
/* sv */ {IDCLS_ENABLE_DRIVE_RAM_8000_SV, "Aktivera 8KB RAM-expansion p� $8000-$9FFF"},
/* tr */ {IDCLS_ENABLE_DRIVE_RAM_8000_TR, "$8000-$9FFF aras�nda 8KB RAM geni�letmeyi aktif et"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_DISABLE_DRIVE_RAM_8000,    N_("Disable 8KB RAM expansion at $8000-$9FFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DRIVE_RAM_8000_DA, "Deaktiv�r 8kB RAM-udviddelse p� $8000-$9FFF"},
/* de */ {IDCLS_DISABLE_DRIVE_RAM_8000_DE, "8KB RAM Erweiterung bei $8000-9fff deaktivieren"},
/* es */ {IDCLS_DISABLE_DRIVE_RAM_8000_ES, "Deshabilitar expansi�n RAM de 8KB en $8000-$9FFF"},
/* fr */ {IDCLS_DISABLE_DRIVE_RAM_8000_FR, "D�sactiver l'exansion de 8KB RAM � $8000-$9FFF"},
/* hu */ {IDCLS_DISABLE_DRIVE_RAM_8000_HU, "8KB RAM kiterjesz�s tilt�sa a $8000-$9FFF c�men"},
/* it */ {IDCLS_DISABLE_DRIVE_RAM_8000_IT, "Disattiva l'espansione di RAM di 8KB a $8000-$9FFF"},
/* ko */ {IDCLS_DISABLE_DRIVE_RAM_8000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DRIVE_RAM_8000_NL, "8KB RAM uitbreiding op adres $8000-$9FFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_DRIVE_RAM_8000_PL, "Wy��cz rozszerzenie 8KB RAM w $8000-$9FFF"},
/* ru */ {IDCLS_DISABLE_DRIVE_RAM_8000_RU, "Disable 8KB RAM expansion at $8000-$9FFF"},
/* sv */ {IDCLS_DISABLE_DRIVE_RAM_8000_SV, "Inaktivera 8KB RAM-expansion p� $8000-$9FFF"},
/* tr */ {IDCLS_DISABLE_DRIVE_RAM_8000_TR, "$8000-$9FFF aras�nda 8KB RAM geni�letmeyi pasifle�tir"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_ENABLE_DRIVE_RAM_A000,    N_("Enable 8KB RAM expansion at $A000-$BFFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DRIVE_RAM_A000_DA, "Aktiv�r 8kB RAM-udviddelse p� $A000-$BFFF"},
/* de */ {IDCLS_ENABLE_DRIVE_RAM_A000_DE, "8KB RAM Erweiterung bei $A000-Bfff aktivieren"},
/* es */ {IDCLS_ENABLE_DRIVE_RAM_A000_ES, "Permitir expansi�n RAM de 8KB en $A000-$BFFF"},
/* fr */ {IDCLS_ENABLE_DRIVE_RAM_A000_FR, "Activer l'exansion de 8KB RAM � $A000-$BFFF"},
/* hu */ {IDCLS_ENABLE_DRIVE_RAM_A000_HU, "8KB RAM kiterjesz�s enged�lyez�se a $A000-$BFFF c�men"},
/* it */ {IDCLS_ENABLE_DRIVE_RAM_A000_IT, "Attiva l'espansione di RAM di 8KB a $A000-$BFFF"},
/* ko */ {IDCLS_ENABLE_DRIVE_RAM_A000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DRIVE_RAM_A000_NL, "8KB RAM uitbreiding op adres $A000-$BFFF inschakelen"},
/* pl */ {IDCLS_ENABLE_DRIVE_RAM_A000_PL, "W��cz rozszerzenie 8KB RAM w $A000-$BFFF"},
/* ru */ {IDCLS_ENABLE_DRIVE_RAM_A000_RU, "Enable 8KB RAM expansion at $A000-$BFFF"},
/* sv */ {IDCLS_ENABLE_DRIVE_RAM_A000_SV, "Aktivera 8KB RAM-expansion p� $A000-$BFFF"},
/* tr */ {IDCLS_ENABLE_DRIVE_RAM_A000_TR, "$A000-$BFFF aras�nda 8KB RAM geni�letmeyi aktif et"},
#endif

/* drive/iec/iec-cmdline-options.c */
/* en */ {IDCLS_DISABLE_DRIVE_RAM_A000,    N_("Disable 8KB RAM expansion at $A000-$BFFF")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DRIVE_RAM_A000_DA, "Deaktiv�r 8kB RAM-udviddelse p� $A000-$BFFF"},
/* de */ {IDCLS_DISABLE_DRIVE_RAM_A000_DE, "8KB RAM Erweiterung bei $A000-Bfff deaktivieren"},
/* es */ {IDCLS_DISABLE_DRIVE_RAM_A000_ES, "Deshabilitar expansi�n RAM de 8KB en $A000-$BFFF"},
/* fr */ {IDCLS_DISABLE_DRIVE_RAM_A000_FR, "D�sactiver l'exansion de 8KB RAM � $A000-$BFFF"},
/* hu */ {IDCLS_DISABLE_DRIVE_RAM_A000_HU, "8KB RAM kiterjesz�s tilt�sa a $A000-$BFFF c�men"},
/* it */ {IDCLS_DISABLE_DRIVE_RAM_A000_IT, "Disattiva l'espansione di RAM di 8KB a $A000-$BFFF"},
/* ko */ {IDCLS_DISABLE_DRIVE_RAM_A000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DRIVE_RAM_A000_NL, "8KB RAM uitbreiding op adres $A000-$BFFF uitschakelen"},
/* pl */ {IDCLS_DISABLE_DRIVE_RAM_A000_PL, "Wy��cz rozszerzenie 8KB RAM w $A000-$BFFF"},
/* ru */ {IDCLS_DISABLE_DRIVE_RAM_A000_RU, "Disable 8KB RAM expansion at $A000-$BFFF"},
/* sv */ {IDCLS_DISABLE_DRIVE_RAM_A000_SV, "Inaktivera 8KB RAM-expansion p� $A000-$BFFF"},
/* tr */ {IDCLS_DISABLE_DRIVE_RAM_A000_TR, "$A000-$BFFF aras�nda 8KB RAM geni�letmeyi pasifle�tir"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_PAR_CABLE_C64EXP_TYPE,    N_("Set parallel cable type (0: none, 1: standard, 2: Dolphin DOS 3, 3: Formel 64)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PAR_CABLE_C64EXP_TYPE_DA, "V�lg typen af parallelkabel (0: ingen, 1: standard, 2: Dolphin DOS 3 3: Formel 64)"},
/* de */ {IDCLS_PAR_CABLE_C64EXP_TYPE_DE, "Parallelkabeltyp (0: Kein, 1: Standard, 2: Dolphin DOS 3, 3: Formel 64)"},
/* es */ {IDCLS_PAR_CABLE_C64EXP_TYPE_ES, "Seleccionar tipo de cable paralelo (0:no, 1:est�ndar, 2:Dolphin DOS 3, 3:Formel 64)"},
/* fr */ {IDCLS_PAR_CABLE_C64EXP_TYPE_FR, "D�finir le type de c�ble parall�le (0: aucun, 1: standard, 2: Dolphin DOS 3, 3: Formel 64)"},
/* hu */ {IDCLS_PAR_CABLE_C64EXP_TYPE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PAR_CABLE_C64EXP_TYPE_IT, "Imposta il tipo di cavo parallelo (0: none, 1: standard, 2: Dolphin DOS 3, 3: Formel 64)"},
/* ko */ {IDCLS_PAR_CABLE_C64EXP_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PAR_CABLE_C64EXP_TYPE_NL, "Stel parallelle kabelsoort in (0: geen, 1: standaard, 2: Dolphin DOS 3, 3: Formel 64)"},
/* pl */ {IDCLS_PAR_CABLE_C64EXP_TYPE_PL, "Okre�l typ ��cza r�wnoleg�ego (0: brak, 1: zwyk�e, 2: Dolphin DOS 3, 3: Formel 64)"},
/* ru */ {IDCLS_PAR_CABLE_C64EXP_TYPE_RU, "Set parallel cable type (0: none, 1: standard, 2: Dolphin DOS 3, 3: Formel 64)"},
/* sv */ {IDCLS_PAR_CABLE_C64EXP_TYPE_SV, "V�lj typ av parallellkabel (0: ingen, 1: standard, 2: Dolphin DOS 3, 3: Formel 64)"},
/* tr */ {IDCLS_PAR_CABLE_C64EXP_TYPE_TR, "Paralel kablo tipini belirle (0: yok, 1: standart, 2: Dolphin DOS 3, 3: Formel 64)"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_ENABLE_PROFDOS,    N_("Enable Professional DOS")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_PROFDOS_DA, "Aktiv�r Professional DOS"},
/* de */ {IDCLS_ENABLE_PROFDOS_DE, "Professional DOS aktivieren"},
/* es */ {IDCLS_ENABLE_PROFDOS_ES, "Permitir DOS profesional"},
/* fr */ {IDCLS_ENABLE_PROFDOS_FR, "Activer le DOS Professionnel"},
/* hu */ {IDCLS_ENABLE_PROFDOS_HU, "Professional DOS enged�lyez�se"},
/* it */ {IDCLS_ENABLE_PROFDOS_IT, "Attiva Professional DOS"},
/* ko */ {IDCLS_ENABLE_PROFDOS_KO, "Professional DOS ��밡���ϰ� �ϱ�"},
/* nl */ {IDCLS_ENABLE_PROFDOS_NL, "Activeer Professional DOS"},
/* pl */ {IDCLS_ENABLE_PROFDOS_PL, "W��cz Professional DOS"},
/* ru */ {IDCLS_ENABLE_PROFDOS_RU, "Enable Professional DOS"},
/* sv */ {IDCLS_ENABLE_PROFDOS_SV, "Aktivera Professional DOS"},
/* tr */ {IDCLS_ENABLE_PROFDOS_TR, "Professional DOS'u aktif et"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_DISABLE_PROFDOS,    N_("Disable Professional DOS")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_PROFDOS_DA, "Deaktiv�r Professional DOS"},
/* de */ {IDCLS_DISABLE_PROFDOS_DE, "Professional DOS deaktivieren"},
/* es */ {IDCLS_DISABLE_PROFDOS_ES, "Deshabilitar Professional DOS"},
/* fr */ {IDCLS_DISABLE_PROFDOS_FR, "D�sactiver le DOS Professionnel"},
/* hu */ {IDCLS_DISABLE_PROFDOS_HU, "Professional DOS tilt�sa"},
/* it */ {IDCLS_DISABLE_PROFDOS_IT, "Disattiva Professional DOS"},
/* ko */ {IDCLS_DISABLE_PROFDOS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_PROFDOS_NL, "Professional DOS uitschakelen"},
/* pl */ {IDCLS_DISABLE_PROFDOS_PL, "Wy��cz Professional DOS"},
/* ru */ {IDCLS_DISABLE_PROFDOS_RU, "Disable Professional DOS"},
/* sv */ {IDCLS_DISABLE_PROFDOS_SV, "Inaktivera Professional DOS"},
/* tr */ {IDCLS_DISABLE_PROFDOS_TR, "Professional DOS'u pasifle�tir"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME,    N_("Specify name of Professional DOS 1571 ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_DA, "Angiv navn p� Professional DOS 1571-ROM-image"},
/* de */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_DE, "Name von Professional DOS 1571 Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_ES, "Especificar nombre imagen ROM Professional DOS 1571"},
/* fr */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_FR, "Sp�cifier le nom du nouveau ROM Professional DOS 1571"},
/* hu */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_HU, "Adja meg a Professional DOS 1571 ROM k�pm�st"},
/* it */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_IT, "Specifica il nome immagine della ROM del Professional DOS 1571"},
/* ko */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_NL, "Geef de naam van het Professional DOS 1571 ROM bestand"},
/* pl */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Professional DOS 1571"},
/* ru */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_RU, "Specify name of Professional DOS 1571 ROM image"},
/* sv */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_SV, "Ange namn p� Professional DOS 1571-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_PROFDOS_1571_ROM_NAME_TR, "Professional DOS 1571 ROM imaj ismini belirt"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_ENABLE_SUPERCARD,    N_("Enable SuperCard+")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SUPERCARD_DA, "Aktiv�r SuperCard+"},
/* de */ {IDCLS_ENABLE_SUPERCARD_DE, "SuperCard+ aktivieren"},
/* es */ {IDCLS_ENABLE_SUPERCARD_ES, "Permitir SuperCard+"},
/* fr */ {IDCLS_ENABLE_SUPERCARD_FR, "Activer SuperCard+"},
/* hu */ {IDCLS_ENABLE_SUPERCARD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SUPERCARD_IT, "Attiva SuperCard+"},
/* ko */ {IDCLS_ENABLE_SUPERCARD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SUPERCARD_NL, "Activeer SuperCard+"},
/* pl */ {IDCLS_ENABLE_SUPERCARD_PL, "W��cz SuperCard+"},
/* ru */ {IDCLS_ENABLE_SUPERCARD_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SUPERCARD_SV, "Aktivera SuperCard+"},
/* tr */ {IDCLS_ENABLE_SUPERCARD_TR, "SuperCard+'� aktif et"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_DISABLE_SUPERCARD,    N_("Disable SuperCard+")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SUPERCARD_DA, "Deaktiv�r SuperCard+"},
/* de */ {IDCLS_DISABLE_SUPERCARD_DE, "SuperCard+ deaktivieren"},
/* es */ {IDCLS_DISABLE_SUPERCARD_ES, "Deshabilitar SuperCard+"},
/* fr */ {IDCLS_DISABLE_SUPERCARD_FR, "D�sactiver SuperCard+"},
/* hu */ {IDCLS_DISABLE_SUPERCARD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SUPERCARD_IT, "Disattiva SuperCard+"},
/* ko */ {IDCLS_DISABLE_SUPERCARD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SUPERCARD_NL, "SuperCard+ uitschakelen"},
/* pl */ {IDCLS_DISABLE_SUPERCARD_PL, "Wy��cz SuperCard+"},
/* ru */ {IDCLS_DISABLE_SUPERCARD_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SUPERCARD_SV, "Inaktivera SuperCard+"},
/* tr */ {IDCLS_DISABLE_SUPERCARD_TR, "SuperCard+'� pasifle�tir"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME,    N_("Specify name of SuperCard+ ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_DA, "Angiv navn p� SuperCard+ ROM-image"},
/* de */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_DE, "Name von SuperCard+ ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_ES, "Especificar nombre de Imagen ROM SuperCard+"},
/* fr */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_FR, "Sp�cifier le nom de l'image ROM SuperCard+"},
/* hu */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_IT, "Specifica il nome immagine della ROM del SuperCard+"},
/* ko */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_NL, "Geef de naam van het SuperCard+ ROM bestand"},
/* pl */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_PL, "Okre�l nazw� obrazu ROM SuperCard+"},
/* ru */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_SV, "Ange namn p� SuperCard+-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_SUPERCARD_ROM_NAME_TR, "SuperCard+ ROM imaj�n�n ismini belirt"},
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_ENABLE_STARDOS,    N_("Enable StarDOS")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_STARDOS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_STARDOS_DE, "StarDOS aktivieren"},
/* es */ {IDCLS_ENABLE_STARDOS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_STARDOS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_STARDOS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_STARDOS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_STARDOS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_STARDOS_NL, "Activeer StarDOS"},
/* pl */ {IDCLS_ENABLE_STARDOS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_STARDOS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_STARDOS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_STARDOS_TR, ""},  /* fuzzy */
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_DISABLE_STARDOS,    N_("Disable StarDOS")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_STARDOS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_STARDOS_DE, "StarDOS deaktivieren"},
/* es */ {IDCLS_DISABLE_STARDOS_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_STARDOS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_STARDOS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_STARDOS_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_STARDOS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_STARDOS_NL, "StarDOS uitschakelen"},
/* pl */ {IDCLS_DISABLE_STARDOS_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_STARDOS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_STARDOS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_STARDOS_TR, ""},  /* fuzzy */
#endif

/* drive/iec/c64exp/c64exp-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_STARDOS_ROM_NAME,    N_("Specify name of StarDOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_DE, "Name der StarDOS DOS ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_NL, "Geef de naam van het StarDOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_STARDOS_ROM_NAME_TR, ""},  /* fuzzy */
#endif

/* drive/iec/plus4exp/plus4exp-cmdline-options.c */
/* en */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE,    N_("Set parallel cable type (0: none, 1: standard)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_DA, "V�lg typen af parallelkabel parallellkabel (0: ingen, 1: standard)"},
/* de */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_DE, "Parallelkabeltyp (0: kein, 1: Standard)"},
/* es */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_ES, "Seleccionar tipo de cable paralelo (0:no, 1:standard)"},
/* fr */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_FR, "D�finir le type de c�ble parall�le (0: aucun, 1: standard)"},
/* hu */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_HU, "Adja meg a p�rhuzamos k�bel t�pus�t (0: nincs, 1: standard)"},
/* it */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_IT, "Imposta il tipo di cavo parallelo (0: nessuno, 1: standard)"},
/* ko */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_NL, "Stel parallelle kabelsoort in (0: geen, 1: standaard)"},
/* pl */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_PL, "Ustaw typ kabla portu r�wnoleg�ego (0: brak, 1: typowy)"},
/* ru */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_RU, "Set parallel cable type (0: none, 1: standard)"},
/* sv */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_SV, "V�lj typ av parallellkabel (0: ingen, 1: standard)"},
/* tr */ {IDCLS_PAR_CABLE_PLUS4EXP_TYPE_TR, "Paralel kablo tipini ayarlay�n (0: yok, 1: standart)"},
#endif

/* drive/iec128dcr/iec128dcr-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME,    N_("Specify name of 1571CR DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_DA, "Angiv navn p� 1571CR-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_DE, "Name der 1571CR DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_ES, "Especificar nombre imagen DOS ROM 1571CR"},
/* fr */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1571CR DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_HU, "Adja meg az 1571CR DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1571CR"},
/* ko */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_NL, "Geef de naam van het 1571CR DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1571CR"},
/* ru */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_RU, "Specify name of 1571CR DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_SV, "Ange namn p� 1571CR-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1571CR_DOS_ROM_NAME_TR, "1571CR DOS ROM imaj ismini belirt"},
#endif

/* drive/ieee/ieee-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME,    N_("Specify name of 2031 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_DA, "Angiv navn p� 2031-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_DE, "Name der 2031 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_ES, "Especificar nombre imagen DOS ROM 2031"},
/* fr */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 2031 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_HU, "Adja meg a 2031 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 2031"},
/* ko */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_NL, "Geef de naam van het 2031 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 2031"},
/* ru */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_RU, "Specify name of 2031 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_SV, "Ange namn p� 2031-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_2031_DOS_ROM_NAME_TR, "2031 DOS ROM imaj ismini belirt"},
#endif

/* drive/ieee/ieee-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME,    N_("Specify name of 2040 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_DA, "Angiv navn p� 2040-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_DE, "Name der 2040 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_ES, "Especificar nombre imagen DOS ROM 2040"},
/* fr */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 2040 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_HU, "Adja meg a 2040 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 2040"},
/* ko */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_NL, "Geef de naam van het 2040 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 2040"},
/* ru */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_RU, "Specify name of 2040 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_SV, "Ange namn p� 2040-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_2040_DOS_ROM_NAME_TR, "2040 DOS ROM imaj ismini belirt"},
#endif

/* drive/ieee/ieee-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME,    N_("Specify name of 3040 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_DA, "Angiv navn p� 3040-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_DE, "Name der 3040 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_ES, "Especificar nombre imagen DOS ROM 3040"},
/* fr */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 3040 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_HU, "Adja meg a 3040 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 3040"},
/* ko */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_NL, "Geef de naam van het 3040 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 3040"},
/* ru */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_RU, "Specify name of 3040 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_SV, "Ange namn p� 3040-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_3040_DOS_ROM_NAME_TR, "3040 DOS ROM imaj ismini belirt"},
#endif

/* drive/ieee/ieee-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME,    N_("Specify name of 4040 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_DA, "Angiv navn p� 4040-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_DE, "Name der 4040 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_ES, "Especificar nombre imagen DOS ROM 4040"},
/* fr */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 4040 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_HU, "Adja meg a 4040 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 4040"},
/* ko */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_NL, "Geef de naam van het 4040 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 4040"},
/* ru */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_RU, "Specify name of 4040 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_SV, "Ange namn p� 4040-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_4040_DOS_ROM_NAME_TR, "4040 DOS ROM imaj ismini belirt"},
#endif

/* drive/ieee/ieee-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME,    N_("Specify name of 1001/8050/8250 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_DA, "Angiv navn p� 1001/8050/8250-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_DE, "Name der 1001/8040/8205 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_ES, "Especificar nombre imagen DOS ROM 1001/8050/8250"},
/* fr */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1001/8050/8250 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_HU, "Adja meg az 1001/8050/8250 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1001/8050/8250"},
/* ko */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_NL, "Geef de naam van het 1001/8050/8250 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1001/8050/8250"},
/* ru */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_RU, "Specify name of 1001/8050/8250 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_SV, "Ange namn p� 1001/8050/8250-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1001_DOS_ROM_NAME_TR, "1001/8050/8250 DOS ROM imaj ismini belirt"},
#endif

/* drive/tcbm/tcbm-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME,    N_("Specify name of 1551 DOS ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_DA, "Angiv navn p� 1551-DOS-ROM-image"},
/* de */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_DE, "Name der 1551 DOS ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_ES, "Especificar nombre imagen DOS ROM 1551"},
/* fr */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_FR, "Sp�cifier le nom de l'image 1551 DOS ROM"},
/* hu */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_HU, "Adja meg az 1551 DOS ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_IT, "Specifica il nome immagine della ROM del DOS del 1551"},
/* ko */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_NL, "Geef de naam van het 1551 DOS ROM bestand"},
/* pl */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_PL, "Okre�l nazw� obrazu ROM DOS-a 1551"},
/* ru */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_RU, "Specify name of 1551 DOS ROM image"},
/* sv */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_SV, "Ange namn p� 1551-DOS-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_1551_DOS_ROM_NAME_TR, "1551 DOS ROM imaj ismini belirt"},
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8,    N_("Use <name> as directory for file system device #8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_DA, "Brug <navn> som katalog for filsystembaseret drev #8"},
/* de */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_DE, "Benutze <Name> f�r Verzeichnis beim Verzeichniszugriff f�r Ger�t #8"},
/* es */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_ES, "Usar <nombre> como directorio fichero sistema perif�rico #8"},
/* fr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_FR, "Utiliser le r�pertoire <nom> comme syst�me de fichiers pour le lecteur #8"},
/* hu */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_HU, "<n�v> k�nyvt�r haszn�lata az #8-as egys�g f�jlrendszer�nek"},
/* it */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_IT, "Usa <nome> come directory per il file system della periferica #8"},
/* ko */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_NL, "Gebruik <naam> als directory voor bestandssysteemapparaat #8"},
/* pl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_PL, "Uzyj <nazwa> jako katalog urz�dzenia systemu plik�w #8"},
/* ru */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_RU, "Use <name> as directory for file system device #8"},
/* sv */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_SV, "Ange <namn> som katalog f�r filsystemsbaserad enhet 8"},
/* tr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_8_TR, "<isim>'i ayg�t #8'in dosya sistemi dizini olarak kullan"},
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9,    N_("Use <name> as directory for file system device #9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_DA, "Brug <navn> som katalog for filsystembaseret drev #9"},
/* de */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_DE, "Benutze <Name> f�r Verzeichnis beim Verzeichniszugriff f�r Ger�t #9"},
/* es */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_ES, "Usar <nombre> como directorio fichero sistema perif�rico #9"},
/* fr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_FR, "Utiliser le r�pertoire <nom> comme syst�me de fichiers pour le lecteur #9"},
/* hu */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_HU, "<n�v> k�nyvt�r haszn�lata az #9-es egys�g f�jlrendszer�nek"},
/* it */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_IT, "Usa <nome> come directory per il file system della periferica #9"},
/* ko */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_NL, "Gebruik <naam> als directory voor bestandssysteemapparaat #9"},
/* pl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_PL, "Uzyj <nazwa> jako katalog urz�dzenia systemu plik�w #9"},
/* ru */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_RU, "Use <name> as directory for file system device #9"},
/* sv */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_SV, "Ange <namn> som katalog f�r filsystemsbaserad enhet 9"},
/* tr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_9_TR, "<isim>'i ayg�t #9'un dosya sistemi dizini olarak kullan"},
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10,    N_("Use <name> as directory for file system device #10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_DA, "Brug <navn> som katalog for filsystembaseret drev #10"},
/* de */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_DE, "Benutze <Name> f�r Verzeichnis beim Verzeichniszugriff f�r Ger�t #10"},
/* es */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_ES, "Usar <nombre> como directorio fichero sistema perif�rico #10"},
/* fr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_FR, "Utiliser le r�pertoire <nom> comme syst�me de fichiers pour le lecteur #10"},
/* hu */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_HU, "<n�v> k�nyvt�r haszn�lata az #10-es egys�g f�jlrendszer�nek"},
/* it */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_IT, "Usa <nome> come directory per il file system della periferica #10"},
/* ko */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_NL, "Gebruik <naam> als directory voor bestandssysteemapparaat #10"},
/* pl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_PL, "Uzyj <nazwa> jako katalog urz�dzenia systemu plik�w #10"},
/* ru */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_RU, "Use <name> as directory for file system device #10"},
/* sv */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_SV, "Ange <namn> som katalog f�r filsystemsbaserad enhet 10"},
/* tr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_10_TR, "<isim>'i ayg�t #10'un dosya sistemi dizini olarak kullan"},
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11,    N_("Use <name> as directory for file system device #11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_DA, "Brug <navn> som katalog for filsystembaseret drev #11"},
/* de */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_DE, "Benutze <Name> f�r Verzeichnis beim Verzeichniszugriff f�r Ger�t #11"},
/* es */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_ES, "Usar <nombre> como directorio fichero sistema perif�rico #10"},
/* fr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_FR, "Utiliser le r�pertoire <nom> comme syst�me de fichiers pour le lecteur #11"},
/* hu */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_HU, "<n�v> k�nyvt�r haszn�lata az #11-es egys�g f�jlrendszer�nek"},
/* it */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_IT, "Usa <nome> come directory per il file system della periferica #11"},
/* ko */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_NL, "Gebruik <naam> als directory voor bestandssysteemapparaat #11"},
/* pl */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_PL, "Uzyj <nazwa> jako katalog urz�dzenia systemu plik�w #11"},
/* ru */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_RU, "Use <name> as directory for file system device #11"},
/* sv */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_SV, "Ange <namn> som katalog f�r filsystemsbaserad enhet 11"},
/* tr */ {IDCLS_USE_AS_DIRECTORY_FSDEVICE_11_TR, "<isim>'i ayg�t #11'in dosya sistemi dizini olarak kullan"},
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00,    N_("Enable on-read support for P00 files on drive 8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 8 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 8 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_PL, "W��cz obs�ug� plik�w P00 przy odczycie z nap�du 8"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_8_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00,    N_("Disable on-read support for P00 files on drive 8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 8 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 8 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_PL, "Wy��cz obs�ug� plik�w P00 przy odczycie z nap�du 8"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_8_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00,    N_("Enable on-read support for P00 files on drive 9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 9 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 9 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_PL, "W��cz obs�ug� plik�w P00 przy odczycie z nap�du 9"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_9_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00,    N_("Disable on-read support for P00 files on drive 9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 9 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 9 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_PL, "Wy��cz obs�ug� plik�w P00 przy odczycie z nap�du 9"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_9_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00,    N_("Enable on-read support for P00 files on drive 10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 10 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 10 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_PL, "W��cz obs�ug� plik�w P00 przy odczycie z nap�du 10"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_10_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00,    N_("Disable on-read support for P00 files on drive 10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 10 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 10 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_PL, "Wy��cz obs�ug� plik�w P00 przy odczycie z nap�du 10"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_10_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00,    N_("Enable on-read support for P00 files on drive 11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 11 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 11 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_PL, "W��cz obs�ug� plik�w P00 przy odczycie z nap�du 11"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_11_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00,    N_("Disable on-read support for P00 files on drive 11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_DE, "On-read Unterst�tzung f�r P00 Dateien auf Laufwerk 11 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_NL, "Ondersteuning voor het lezen van P00 bestanden voor drive 11 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_PL, "Wy��cz obs�ug� plik�w P00 przy odczycie z nap�du 11"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_11_CONVERT_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00,    N_("Enable saving of P00 files on drive 8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 8 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 8 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_PL, "W��cz zapis plik�w P00 w nap�dzie 8"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_8_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00,    N_("Disable saving of P00 files on drive 8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 8 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 8 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_PL, "Wy��cz zapis plik�w P00 w nap�dzie 8"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_8_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00,    N_("Enable saving of P00 files on drive 9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 9 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 9 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_PL, "W��cz zapis plik�w P00 w nap�dzie 9"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_9_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00,    N_("Disable saving of P00 files on drive 9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 9 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 9 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_PL, "Wy��cz zapis plik�w P00 w nap�dzie 9"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_9_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00,    N_("Enable saving of P00 files on drive 10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 10 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 10 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_PL, "W��cz zapis plik�w P00 w nap�dzie 10"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_10_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00,    N_("Disable saving of P00 files on drive 10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 10 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 10 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_PL, "Wy��cz zapis plik�w P00 w nap�dzie 10"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_10_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00,    N_("Enable saving of P00 files on drive 11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 11 aktivieren"},
/* es */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 11 inschakelen"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_PL, "W��cz zapis plik�w P00 w nap�dzie 11"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_11_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00,    N_("Disable saving of P00 files on drive 11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_DE, "Speichern von P00 Dateien auf Laufwerk 11 deaktivieren"},
/* es */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_NL, "Opslaan van P00 bestanden voor drive 11 uitschakelen"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_PL, "Wy��cz zapis plik�w P00 w nap�dzie 11"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_11_SAVE_P00_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM,    N_("Hide CBM files (only show P00 files) for drive 8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_DE, "Laufwerk 8 CBM Dateien ausblenden (nur P00 Dateien zeigen)"},
/* es */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_NL, "Verberg CBM bestanden (toon alleen P00 bestanden) voor drive 8"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_PL, "Ukryj pliki CBM (pokazuj tylko pliki P00) dla nap�du 8"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_8_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM,    N_("Do not hide CBM files (show all files) for drive 8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_DE, "Laufwerk 8 alle Dateien zeigen (CBM Dateien nicht ausblenden)"},
/* es */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_NL, "Verberg CBM bestanden niet (toon alle bestanden) voor drive 8"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_PL, "Nie ukrywaj plik�w CBM (pokazuj wszystkie pliki) dla nap�du 8"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_8_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM,    N_("Hide CBM files (only show P00 files) for drive 9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_DE, "Laufwerk 9 CBM Dateien ausblenden (nur P00 Dateien zeigen)"},
/* es */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_NL, "Verberg CBM bestanden (toon alleen P00 bestanden) voor drive 9"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_PL, "Ukryj pliki CBM (pokazuj tylko pliki P00) dla nap�du 9"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_9_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM,    N_("Do not hide CBM files (show all files) for drive 9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_DE, "Laufwerk 9 alle Dateien zeigen (CBM Dateien nicht ausblenden)"},
/* es */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_NL, "Verberg CBM bestanden niet (toon alle bestanden) voor drive 9"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_PL, "Nie ukrywaj plik�w CBM (pokazuj wszystkie pliki) dla nap�du 9"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_9_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM,    N_("Hide CBM files (only show P00 files) for drive 10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_DE, "Laufwerk 10 CBM Dateien ausblenden (nur P00 Dateien zeigen)"},
/* es */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_NL, "Verberg CBM bestanden (toon alleen P00 bestanden) voor drive 10"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_PL, "Ukryj pliki CBM (pokazuj tylko pliki P00) dla nap�du 10"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_10_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM,    N_("Do not hide CBM files (show all files) for drive 10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_DE, "Laufwerk 10 alle Dateien zeigen (CBM Dateien nicht ausblenden)"},
/* es */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_NL, "Verberg CBM bestanden niet (toon alle bestanden) voor drive 10"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_PL, "Nie ukrywaj plik�w CBM (pokazuj wszystkie pliki) dla nap�du 10"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_10_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM,    N_("Hide CBM files (only show P00 files) for drive 11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_DE, "Laufwerk 11 CBM Dateien ausblenden (nur P00 Dateien zeigen)"},
/* es */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_NL, "Verberg CBM bestanden (toon alleen P00 bestanden) voor drive 11"},
/* pl */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_PL, "Ukryj pliki CBM (pokazuj tylko pliki P00) dla nap�du 11"},
/* ru */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_FSDEVICE_11_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* fsdevice/fsdevice-cmdline-options.c */
/* en */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM,    N_("Do not hide CBM files (show all files) for drive 11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_DE, "Laufwerk 11 alle Dateien zeigen (CBM Dateien nicht ausblenden)"},
/* es */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_NL, "Verberg CBM bestanden niet (toon alle bestanden) voor drive 11"},
/* pl */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_PL, "Nie ukrywaj plik�w CBM (pokazuj wszystkie pliki) dla nap�du 11"},
/* ru */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_FSDEVICE_11_HIDE_CBM_TR, ""},  /* fuzzy */
#endif

/* gfxoutputdrv/ffmpegdrv.c */
/* en */ {IDCLS_SET_AUDIO_STREAM_BITRATE,    N_("Set bitrate for audio stream in media file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_AUDIO_STREAM_BITRATE_DA, "Angiv bitrate for lydstr�m i mediefil"},
/* de */ {IDCLS_SET_AUDIO_STREAM_BITRATE_DE, "Bitrate f�r Audio Stream f�r Mediendatei setzen"},
/* es */ {IDCLS_SET_AUDIO_STREAM_BITRATE_ES, "Seleccionar velocidad muestreo para flujo audio en fichero media"},
/* fr */ {IDCLS_SET_AUDIO_STREAM_BITRATE_FR, "R�gler le bitrate audio du fichier m�dia"},
/* hu */ {IDCLS_SET_AUDIO_STREAM_BITRATE_HU, "Adja meg az audi� bitr�t�t a m�dia f�jlhoz"},
/* it */ {IDCLS_SET_AUDIO_STREAM_BITRATE_IT, "Imposta il bitrate del flusso audio nel file multimediale"},
/* ko */ {IDCLS_SET_AUDIO_STREAM_BITRATE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_AUDIO_STREAM_BITRATE_NL, "Zet de bitrate voor het audiogedeelte van het mediabestand"},
/* pl */ {IDCLS_SET_AUDIO_STREAM_BITRATE_PL, "Okre�l szybko�� transmisji strumienia audio w pliku multimedi�w"},
/* ru */ {IDCLS_SET_AUDIO_STREAM_BITRATE_RU, "Set bitrate for audio stream in media file"},
/* sv */ {IDCLS_SET_AUDIO_STREAM_BITRATE_SV, "Ange bithastighet f�r ljudstr�m i mediafil"},
/* tr */ {IDCLS_SET_AUDIO_STREAM_BITRATE_TR, "Ses ak��� i�in ortam dosyas�ndaki bith�z�'n� ayarla"},
#endif

/* gfxoutputdrv/ffmpegdrv.c */
/* en */ {IDCLS_SET_VIDEO_STREAM_BITRATE,    N_("Set bitrate for video stream in media file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_VIDEO_STREAM_BITRATE_DA, "Angiv bitrate for videostr�m i mediefil"},
/* de */ {IDCLS_SET_VIDEO_STREAM_BITRATE_DE, "Bitrate f�r Video Stream f�r Mediendatei setzen"},
/* es */ {IDCLS_SET_VIDEO_STREAM_BITRATE_ES, "Seleccionar velocidad muestreo para flujo v�deo en fichero media"},
/* fr */ {IDCLS_SET_VIDEO_STREAM_BITRATE_FR, "R�gler le bitrate vid�o du fichier m�dia"},
/* hu */ {IDCLS_SET_VIDEO_STREAM_BITRATE_HU, "Adja meg az vide� bitr�t�t a m�dia f�jlhoz"},
/* it */ {IDCLS_SET_VIDEO_STREAM_BITRATE_IT, "Imposta il bitrate per il flusso video nel file multimediale"},
/* ko */ {IDCLS_SET_VIDEO_STREAM_BITRATE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_VIDEO_STREAM_BITRATE_NL, "Zet de bitrate voor het videogedeelte van het mediabestand"},
/* pl */ {IDCLS_SET_VIDEO_STREAM_BITRATE_PL, "Okre�l szybko�� transmisji strumienia wideo w pliku multimedi�w"},
/* ru */ {IDCLS_SET_VIDEO_STREAM_BITRATE_RU, "Set bitrate for video stream in media file"},
/* sv */ {IDCLS_SET_VIDEO_STREAM_BITRATE_SV, "Ange bithastighet f�r videostr�m i mediafil"},
/* tr */ {IDCLS_SET_VIDEO_STREAM_BITRATE_TR, "G�r�nt� ak��� i�in ortam dosyas�ndaki bith�z�'n� ayarla"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_PET_MODEL,    N_("Specify PET model to emulate. (2001/3008/3016/3032/3032B/4016/4032/4032B/8032/8096/8296/SuperPET)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PET_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_PET_MODEL_DE, "PET model f�r Emulation w�hlen. (2001/3008/3016/3032/3032B/4016/4032/4032B/8032/8096/8296/SuperPET)"},
/* es */ {IDCLS_SPECIFY_PET_MODEL_ES, "Especificar modelo PET a emular. (2001/3008/3016/3032/3032B/4016/4032/4032B/8032/8096/8296/SuperPET)"},
/* fr */ {IDCLS_SPECIFY_PET_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_PET_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_PET_MODEL_IT, "Specifica il modello PET da emulare. (2001/3008/3016/3032/3032B/4016/4032/4032B/8032/8096/8296/SuperPET)"},
/* ko */ {IDCLS_SPECIFY_PET_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PET_MODEL_NL, "Geef PET model om te emuleren. (2001/3008/3016/3032/3032B/4016/4032/4032B/8032/8096/8296/SuperPET)"},
/* pl */ {IDCLS_SPECIFY_PET_MODEL_PL, "Wybierz emulowany model PET. (2001/3008/3016/3032/3032B/4016/4032/4032B/8032/8096/8296/SuperPET)"},
/* ru */ {IDCLS_SPECIFY_PET_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_PET_MODEL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_PET_MODEL_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_EDITOR_ROM_NAME,    N_("Specify name of Editor ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_DA, "Angiv navn p� Editor-ROM-image"},
/* de */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_DE, "Name f�r Editor ROM Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_ES, "Especificar nombre imagen editor ROM"},
/* fr */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_FR, "Sp�cifier le nom de l�image ROM Editor"},
/* hu */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_HU, "Adja meg a szerkeszt� ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_IT, "Specifica il nome immagine della Editor ROM"},
/* ko */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_NL, "Geef naam van het Editor ROM bestand"},
/* pl */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Editor"},
/* ru */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_RU, "Specify name of Editor ROM image"},
/* sv */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_SV, "Ange namn p� Editor-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_EDITOR_ROM_NAME_TR, "Editor ROM imaj�n�n ismini belirt"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME,    N_("Specify 4K extension ROM name at $9***")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_DA, "Angiv navn p� 4K-udviddelses-ROM p� $9***"},
/* de */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_DE, "4K Erweiterungs ROM Dateiname bei $9*** w�hlen"},
/* es */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_ES, "Especificar nombre extensi�n ROM 4KB en $9***"},
/* fr */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_FR, "Sp�cifier le nom de l'extension ROM 4K � $9***"},
/* hu */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_HU, "Adja meg a $9*** c�m� 4K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_IT, "Specifica il nome della ROM di estensione di 4k a $9***"},
/* ko */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_NL, "Geef naam van het 4K uitbreiding ROM bestand op adres $9***"},
/* pl */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_PL, "Okre�l nazw� rozszerzenia 4K ROM w $9***"},
/* ru */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_RU, "Specify 4K extension ROM name at $9***"},
/* sv */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_SV, "Ange namn p� 4K-ut�knings-ROM p� $9***"},
/* tr */ {IDCLS_SPECIFY_4K_ROM_9XXX_NAME_TR, "$9*** adresindeki 4K uzant�s� ROM ismini belirt"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME,    N_("Specify 4K extension ROM name at $A***")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_DA, "Angiv navn p� 4K-udviddelses-ROM p� $A***"},
/* de */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_DE, "4K Erweiterungs ROM Dateiname bei $A*** w�hlen"},
/* es */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_ES, "Especificar nombre extensi�n ROM 4KB en $A***"},
/* fr */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_FR, "Sp�cifier le nom de l'extension ROM 4K � $A***"},
/* hu */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_HU, "Adja meg a $A*** c�m� 4K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_IT, "Specifica il nome della ROM di estensione di 4k a $A***"},
/* ko */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_NL, "Geef naam van het 4K uitbreiding ROM bestand op adres $A***"},
/* pl */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_PL, "Okre�l nazw� rozszerzenia 4K ROM w $A***"},
/* ru */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_RU, "Specify 4K extension ROM name at $A***"},
/* sv */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_SV, "Ange namn p� 4K-ut�knings-ROM p� $A***"},
/* tr */ {IDCLS_SPECIFY_4K_ROM_AXXX_NAME_TR, "$A*** adresindeki 4K uzant�s� ROM ismini belirt"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME,    N_("Specify 4K extension ROM name at $B***")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_DA, "Angiv navn p� 4K-udviddelses-ROM p� $B***"},
/* de */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_DE, "4K Erweiterungs ROM Dateiname bei $B*** w�hlen"},
/* es */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_ES, "Especificar nombre extensi�n ROM 4KB en $B***"},
/* fr */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_FR, "Sp�cifier le nom de l'extension ROM 4K � $B***"},
/* hu */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_HU, "Adja meg a $B*** c�m� 4K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_IT, "Specifica il nome della ROM di estensione di 4k a $B***"},
/* ko */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_NL, "Geef naam van het 4K uitbreiding ROM bestand op adres $B***"},
/* pl */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_PL, "Okre�l nazw� rozszerzenia 4K ROM w $B***"},
/* ru */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_RU, "Specify 4K extension ROM name at $B***"},
/* sv */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_SV, "Ange namn p� 4K-ut�knings-ROM p� $B***"},
/* tr */ {IDCLS_SPECIFY_4K_ROM_BXXX_NAME_TR, "$B*** adresindeki 4K uzant�s� ROM ismini belirt"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000,    N_("Enable PET8296 4K RAM mapping at $9***")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_DA, "Aktiv�r PET8296 4K-RAM-mapping p� $9***"},
/* de */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_DE, "PET8296 4K RAM Zuordnung bei $9*** aktivieren"},
/* es */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_ES, "Permitir mapeado 4KB de RAM PET8296 en $9***"},
/* fr */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_FR, "Activer l'extension PET8296 4K � $9***"},
/* hu */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_HU, "PET8296 4K RAM enged�lyez�se a $9*** c�men"},
/* it */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_IT, "Attiva la mappatura della RAM di 4K del PET8296 a $9***"},
/* ko */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_NL, "PET8296 4K RAM op adres $9*** inschakelen"},
/* pl */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_PL, "W��cz mapowanie 4K RAM PET8296 w $9***"},
/* ru */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_RU, "Enable PET8296 4K RAM mapping at $9***"},
/* sv */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_SV, "Aktivera PET8296 4K-RAM-mappning p� $9***"},
/* tr */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_9000_TR, "$9*** adresindeki PET8296 4K RAM e�le�tirmesini aktif et"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000,    N_("Disable PET8296 4K RAM mapping at $9***")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_DA, "Deaktiv�r PET8296 4K-RAM-mapping p� $9***"},
/* de */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_DE, "PET8296 4K RAM Zuordnung bei $9*** deaktivieren"},
/* es */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_ES, "Deshabilitar mapeado 4KB de RAM PET8296 en $9***"},
/* fr */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_FR, "D�sactiver l'extension PET8296 4K � $9***"},
/* hu */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_HU, "PET8296 4K RAM tilt�sa a $9*** c�men"},
/* it */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_IT, "Disattiva la mappatura della RAM di 4K del PET8296 a $9***"},
/* ko */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_NL, "PET8296 4K RAM op adres $9*** uitschakelen"},
/* pl */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_PL, "Wy��cz mapowanie 4K RAM PET8296 w $9***"},
/* ru */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_RU, "Disable PET8296 4K RAM mapping at $9***"},
/* sv */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_SV, "Inaktivera PET8296 4K-RAM-mappning p� $9***"},
/* tr */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_9000_TR, "$9*** adresindeki PET8296 4K RAM e�le�tirmesini pasifle�tir"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000,    N_("Enable PET8296 4K RAM mapping at $A***")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_DA, "Aktiv�r PET8296 4K-RAM-mapping p� $A***"},
/* de */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_DE, "PET8296 4K RAM Zuordnung bei $A*** aktivieren"},
/* es */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_ES, "Permitir mapeado 4KB de RAM PET8296 en $A***"},
/* fr */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_FR, "Activer l'extension PET8296 4K � $A***"},
/* hu */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_HU, "PET8296 4K RAM enged�lyez�se a $A*** c�men"},
/* it */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_IT, "Attiva la mappatura della RAM di 4K del PET8296 a $A***"},
/* ko */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_NL, "PET8296 4K RAM op adres $A*** inschakelen"},
/* pl */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_PL, "W��cz mapowanie 4K RAM PET8296 w $A***"},
/* ru */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_RU, "Enable PET8296 4K RAM mapping at $A***"},
/* sv */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_SV, "Aktivera PET8296 4K-RAM-mappning p� $A***"},
/* tr */ {IDCLS_PET8296_ENABLE_4K_RAM_AT_A000_TR, "$A*** adresindeki PET8296 4K RAM e�le�tirmesini aktif et"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000,    N_("Disable PET8296 4K RAM mapping at $A***")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_DA, "Deaktiv�r PET8296 4K-RAM-mapping p� $A***"},
/* de */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_DE, "PET8296 4K RAM Zuordnung bei $A*** deaktivieren"},
/* es */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_ES, "Deshabilitar mapeado 4KB de RAM PET8296 en $A***"},
/* fr */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_FR, "D�sactiver l'extension PET8296 4K � $A***"},
/* hu */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_HU, "PET8296 4K RAM tilt�sa a $A*** c�men"},
/* it */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_IT, "Disattiva la mappatura della RAM di 4K del PET8296 a $A***"},
/* ko */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_NL, "PET8296 4K RAM op adres $A*** uitschakelen"},
/* pl */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_PL, "Wy��cz mapowanie 4K RAM PET8296 w $A***"},
/* ru */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_RU, "Disable PET8296 4K RAM mapping at $A***"},
/* sv */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_SV, "Inaktivera PET8296 4K-RAM-mappning p� $A***"},
/* tr */ {IDCLS_PET8296_DISABLE_4K_RAM_AT_A000_TR, "$A*** adresindeki PET8296 4K RAM e�le�tirmesini pasifle�tir"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_ENABLE_SUPERPET_IO,    N_("Enable SuperPET I/O")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SUPERPET_IO_DA, "Aktiv�r SuperPET-I/O"},
/* de */ {IDCLS_ENABLE_SUPERPET_IO_DE, "SuperPET I/O aktivieren"},
/* es */ {IDCLS_ENABLE_SUPERPET_IO_ES, "Permitir entrada/salida SuperPET"},
/* fr */ {IDCLS_ENABLE_SUPERPET_IO_FR, "Activer les E/S SuperPET"},
/* hu */ {IDCLS_ENABLE_SUPERPET_IO_HU, "SuperPET I/O enged�lyez�se"},
/* it */ {IDCLS_ENABLE_SUPERPET_IO_IT, "Attiva l'I/O del SuperPET"},
/* ko */ {IDCLS_ENABLE_SUPERPET_IO_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SUPERPET_IO_NL, "SuperPET I/O inschakelen"},
/* pl */ {IDCLS_ENABLE_SUPERPET_IO_PL, "W��cz we/wy SuperPET"},
/* ru */ {IDCLS_ENABLE_SUPERPET_IO_RU, "Enable SuperPET I/O"},
/* sv */ {IDCLS_ENABLE_SUPERPET_IO_SV, "Aktivera SuperPET-I/O"},
/* tr */ {IDCLS_ENABLE_SUPERPET_IO_TR, "SuperPET G/�'� aktif et"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_DISABLE_SUPERPET_IO,    N_("Disable SuperPET I/O")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SUPERPET_IO_DA, "Deaktiv�r SuperPET-I/O"},
/* de */ {IDCLS_DISABLE_SUPERPET_IO_DE, "SuperPET I/O deaktivieren"},
/* es */ {IDCLS_DISABLE_SUPERPET_IO_ES, "Deshabilitar entrada/salida SuperPET"},
/* fr */ {IDCLS_DISABLE_SUPERPET_IO_FR, "D�sactiver les E/S SuperPET"},
/* hu */ {IDCLS_DISABLE_SUPERPET_IO_HU, "SuperPET I/O tilt�sa"},
/* it */ {IDCLS_DISABLE_SUPERPET_IO_IT, "Disattiva l'I/O del SuperPET"},
/* ko */ {IDCLS_DISABLE_SUPERPET_IO_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SUPERPET_IO_NL, "SuperPET I/O uitschakelen"},
/* pl */ {IDCLS_DISABLE_SUPERPET_IO_PL, "Wy��cz we/wy SuperPET"},
/* ru */ {IDCLS_DISABLE_SUPERPET_IO_RU, "Disable SuperPET I/O"},
/* sv */ {IDCLS_DISABLE_SUPERPET_IO_SV, "Inaktivera SuperPET-I/O"},
/* tr */ {IDCLS_DISABLE_SUPERPET_IO_TR, "SuperPET G/�'� pasifle�tir"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES,    N_("Enable ROM 1 Kernal patches")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_DA, "Aktiv�r ROM 1 kerne�ndringer"},
/* de */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_DE, "ROM 1 Kernal patches aktivieren"},
/* es */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_ES, "Permitir parches ROM 1 Kernal"},
/* fr */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_FR, "Activer les patches ROM 1 Kernal"},
/* hu */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_HU, "ROM 1 Kernal foltoz�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_IT, "Attiva le patch del Kernal della ROM 1"},
/* ko */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_NL, "ROM 1 Kernalverbeteringen inschakelen"},
/* pl */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_PL, "W��cz �atki Kernala ROM 1"},
/* ru */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_RU, "Enable ROM 1 Kernal patches"},
/* sv */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_SV, "Aktivera ROM 1-Kernalpatchar"},
/* tr */ {IDCLS_ENABLE_ROM_1_KERNAL_PATCHES_TR, "ROM 1 Kernal yamalar�n� aktif et"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES,    N_("Disable ROM 1 Kernal patches")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_DA, "Deaktiv�r ROM 1 kerne�ndringer"},
/* de */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_DE, "ROM 1 Kernal patches deaktivieren"},
/* es */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_ES, "Deshabilitar parches ROM 1 Kernal"},
/* fr */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_FR, "D�sactiver les patches ROM 1 Kernal"},
/* hu */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_HU, "ROM 1 Kernal foltoz�s tilt�sa"},
/* it */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_IT, "Disattiva le patch del Kernal della ROM 1"},
/* ko */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_NL, "ROM 1 Kernalverbeteringen uitschakelen"},
/* pl */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_PL, "Wy��cz �atki Kernala ROM 1"},
/* ru */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_RU, "Disable ROM 1 Kernal patches"},
/* sv */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_SV, "Inaktivera ROM 1-Kernalpatchar"},
/* tr */ {IDCLS_DISABLE_ROM_1_KERNAL_PATCHES_TR, "ROM 1 Kernal yamalar�n� pasifle�tir"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET,    N_("Switch upper/lower case charset")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_DA, "Skift mellem store og sm� bogstaver"},
/* de */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_DE, "Wechsel Gro�-/Kleinschreibung Zeichensatz"},
/* es */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_ES, "Intercambiar may�sculas/min�scula"},
/* fr */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_FR, "Inverser le charset majuscule et minuscule"},
/* hu */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_HU, "V�lt�s nagy-/kisbet�s karakterk�szletre"},
/* it */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_IT, "Scambia il set di caratteri maiuscolo/minuscolo"},
/* ko */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_NL, "Schakel tussen grote/kleine letters"},
/* pl */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_PL, "Prze��cz zestaw wielkich/ma�ych znak�w"},
/* ru */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_RU, "�������� �������/������ �������"},
/* sv */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_SV, "V�xla sm�/stora bokst�ver i teckengeneratorn"},
/* tr */ {IDCLS_SWITCH_UPPER_LOWER_CHARSET_TR, "B�y�k/k���k harf karakter seti de�i�tir"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET,    N_("Do not switch upper/lower case charset")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_DA, "Skift ikke mellem store og sm� bogstaver"},
/* de */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_DE, "Kein Wechsel Gro�-/Kleinschreibung Zeichensatz"},
/* es */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_ES, "No intercambiar may�sculas/min�sculas"},
/* fr */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_FR, "Ne pas inverser le charset majuscule et minuscule"},
/* hu */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_HU, "Ne v�ltson a nagy-/kisbet�s karakterk�szletre"},
/* it */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_IT, "Non scambiare il set di caratteri maiuscolo/minuscolo"},
/* ko */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_NL, "Schakel niet tussen grote/kleine letters"},
/* pl */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_PL, "Nie prze��czaj zestawu wielkich/ma�ych znak�w"},
/* ru */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_RU, "�� �������� �������/������ �������"},
/* sv */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_SV, "V�xla inte sm�/stora bokst�ver i teckengeneratorn"},
/* tr */ {IDCLS_NO_SWITCH_UPPER_LOWER_CHARSET_TR, "B�y�k/k���k harf karakter seti de�i�tirme"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_EOI_BLANKS_SCREEN,    N_("EOI blanks screen")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_EOI_BLANKS_SCREEN_DA, "EOI sletter sk�rmen"},
/* de */ {IDCLS_EOI_BLANKS_SCREEN_DE, "EOI l�scht Bildschirm"},
/* es */ {IDCLS_EOI_BLANKS_SCREEN_ES, "EOI pantalla en blanco"},
/* fr */ {IDCLS_EOI_BLANKS_SCREEN_FR, "EOI vide l'�cran"},
/* hu */ {IDCLS_EOI_BLANKS_SCREEN_HU, "EOI t�rli a k�perny�t"},
/* it */ {IDCLS_EOI_BLANKS_SCREEN_IT, "EOI oscura lo schermo"},
/* ko */ {IDCLS_EOI_BLANKS_SCREEN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_EOI_BLANKS_SCREEN_NL, "EOI maakt het scherm leeg"},
/* pl */ {IDCLS_EOI_BLANKS_SCREEN_PL, "Koniec przerwania czy�ci ekran"},
/* ru */ {IDCLS_EOI_BLANKS_SCREEN_RU, "EOI blanks screen"},
/* sv */ {IDCLS_EOI_BLANKS_SCREEN_SV, "EOI t�mmer sk�rmen"},
/* tr */ {IDCLS_EOI_BLANKS_SCREEN_TR, "EOI ekran� bo�alt�r"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN,    N_("EOI does not blank screen")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_DA, "EOI sletter ikke sk�rmen"},
/* de */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_DE, "EIO l�scht Bildschirm nicht"},
/* es */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_ES, "EOI pantalla no en blanco"},
/* fr */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_FR, "EOI ne vide pas l'�cran"},
/* hu */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_HU, "EOI nem t�rli a k�perny�t"},
/* it */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_IT, "EOI non oscura lo schermo"},
/* ko */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_NL, "EOI maakt het scherm niet leeg"},
/* pl */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_PL, "Koniec przerwania nie czy�ci ekranu"},
/* ru */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_RU, "EOI does not blank screen"},
/* sv */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_SV, "EOI t�mmer inte sk�rmen"},
/* tr */ {IDCLS_EOI_DOES_NOT_BLANK_SCREEN_TR, "EOI ekran� bo�altmaz"},
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SET_CPU_SWITCH_TO_6502,    N_("Set SuperPET CPU switch to '6502'")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_CPU_SWITCH_TO_6502_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_CPU_SWITCH_TO_6502_DE, "Setze SuperPET CPU Schalter auf '6502'"},
/* es */ {IDCLS_SET_CPU_SWITCH_TO_6502_ES, "Ajustar interruptor SuperPET CPU"},
/* fr */ {IDCLS_SET_CPU_SWITCH_TO_6502_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_CPU_SWITCH_TO_6502_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_CPU_SWITCH_TO_6502_IT, "Imposta pulsante CPU SuperPET a '6502'"},
/* ko */ {IDCLS_SET_CPU_SWITCH_TO_6502_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_CPU_SWITCH_TO_6502_NL, "Zet SuperPET CPU schakelaar naar '6502'"},
/* pl */ {IDCLS_SET_CPU_SWITCH_TO_6502_PL, "Ustaw prze��cznik CPU SuperPET na '6502\""},
/* ru */ {IDCLS_SET_CPU_SWITCH_TO_6502_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_CPU_SWITCH_TO_6502_SV, "S�tt SuperPET-processoromkopplaren till \"6502\""},
/* tr */ {IDCLS_SET_CPU_SWITCH_TO_6502_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SET_CPU_SWITCH_TO_6809,    N_("Set SuperPET CPU switch to '6809'")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_CPU_SWITCH_TO_6809_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_CPU_SWITCH_TO_6809_DE, "Setze SuperPET CPU Schalter auf '6809'"},
/* es */ {IDCLS_SET_CPU_SWITCH_TO_6809_ES, "Ajustar interruptor SuperPET CPU para '6809'"},
/* fr */ {IDCLS_SET_CPU_SWITCH_TO_6809_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_CPU_SWITCH_TO_6809_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_CPU_SWITCH_TO_6809_IT, "Imposta pulsante CPU SuperPET a '6809'"},
/* ko */ {IDCLS_SET_CPU_SWITCH_TO_6809_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_CPU_SWITCH_TO_6809_NL, "Zet SuperPET CPU schakelaar naar '6809'"},
/* pl */ {IDCLS_SET_CPU_SWITCH_TO_6809_PL, "Ustaw prze��cznik CPU SuperPET na '6809\""},
/* ru */ {IDCLS_SET_CPU_SWITCH_TO_6809_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_CPU_SWITCH_TO_6809_SV, "S�tt SuperPET-processoromkopplaren till \"6809\""},
/* tr */ {IDCLS_SET_CPU_SWITCH_TO_6809_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SET_CPU_SWITCH_TO_PROG,    N_("Set SuperPET CPU switch to 'Prog'")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_CPU_SWITCH_TO_PROG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_CPU_SWITCH_TO_PROG_DE, "Setze SuperPET CPU Schalter auf 'Prog'"},
/* es */ {IDCLS_SET_CPU_SWITCH_TO_PROG_ES, "Ajustar interruptor SuperPET CPU para 'Prog'"},
/* fr */ {IDCLS_SET_CPU_SWITCH_TO_PROG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_CPU_SWITCH_TO_PROG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_CPU_SWITCH_TO_PROG_IT, "Imposta pulsante CPU SuperPET a 'Prog'"},
/* ko */ {IDCLS_SET_CPU_SWITCH_TO_PROG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_CPU_SWITCH_TO_PROG_NL, "Zet SuperPET CPU schakelaar naar 'Prog'"},
/* pl */ {IDCLS_SET_CPU_SWITCH_TO_PROG_PL, "Ustaw prze��cznik CPU SuperPET na 'Prog\""},
/* ru */ {IDCLS_SET_CPU_SWITCH_TO_PROG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_CPU_SWITCH_TO_PROG_SV, "S�tt SuperPET-processoromkopplaren till \"Prog\""},
/* tr */ {IDCLS_SET_CPU_SWITCH_TO_PROG_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_6809_ROM_AT_A000,    N_("Specify 4K to 24K ROM file name at $A000 for 6809")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_6809_ROM_AT_A000_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_6809_ROM_AT_A000_DE, "4K-24K Erweiterungs ROM Dateiname f�r $A000 f�r 6809 w�hlen"},
/* es */ {IDCLS_SPECIFY_6809_ROM_AT_A000_ES, "Especificar nombre ROM 4K a 24K  en $A000 para 6809"},
/* fr */ {IDCLS_SPECIFY_6809_ROM_AT_A000_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_6809_ROM_AT_A000_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_6809_ROM_AT_A000_IT, "Specifica il nome della ROM da 4K a 24K a $A000 per il 6809"},
/* ko */ {IDCLS_SPECIFY_6809_ROM_AT_A000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_6809_ROM_AT_A000_NL, "Geef de naam van het bestand voor de 4K tot 24K ROM op $A000 voor de 6809"},
/* pl */ {IDCLS_SPECIFY_6809_ROM_AT_A000_PL, "Okre�l nazw� pliku ROM-u 4K do 24K w $A000 dla 6809"},
/* ru */ {IDCLS_SPECIFY_6809_ROM_AT_A000_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_6809_ROM_AT_A000_SV, "Ange namn f�r 4-24K-ut�knings-ROM p� $A000 f�r 6809"},
/* tr */ {IDCLS_SPECIFY_6809_ROM_AT_A000_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_6809_ROM_AT_B000,    N_("Specify 4K to 20K ROM file name at $B000 for 6809")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_6809_ROM_AT_B000_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_6809_ROM_AT_B000_DE, "4K-20K Erweiterungs ROM Dateiname f�r $B000 f�r 6809 w�hlen"},
/* es */ {IDCLS_SPECIFY_6809_ROM_AT_B000_ES, "Especificar nombre ROM 4K a 20K  en $B000 para 6809"},
/* fr */ {IDCLS_SPECIFY_6809_ROM_AT_B000_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_6809_ROM_AT_B000_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_6809_ROM_AT_B000_IT, "Specifica il nome della ROM da 4K a 20K a $B000 per il 6809"},
/* ko */ {IDCLS_SPECIFY_6809_ROM_AT_B000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_6809_ROM_AT_B000_NL, "Geef de naam van het bestand voor de 4K tot 20K ROM op $B000 voor de 6809"},
/* pl */ {IDCLS_SPECIFY_6809_ROM_AT_B000_PL, "Okre�l nazw� pliku ROM-u 4K do 20K w $B000 dla 6809"},
/* ru */ {IDCLS_SPECIFY_6809_ROM_AT_B000_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_6809_ROM_AT_B000_SV, "Ange namn f�r 4-20K-ut�knings-ROM p� $B000 f�r 6809"},
/* tr */ {IDCLS_SPECIFY_6809_ROM_AT_B000_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_6809_ROM_AT_C000,    N_("Specify 4K to 16K ROM file name at $C000 for 6809")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_6809_ROM_AT_C000_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_6809_ROM_AT_C000_DE, "4K-16K Erweiterungs ROM Dateiname f�r $C000 f�r 6809 w�hlen"},
/* es */ {IDCLS_SPECIFY_6809_ROM_AT_C000_ES, "Especificar nombre ROM 4K a 16K  en $C000 para 6809"},
/* fr */ {IDCLS_SPECIFY_6809_ROM_AT_C000_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_6809_ROM_AT_C000_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_6809_ROM_AT_C000_IT, "Specifica il nome della ROM da 4K a 16K a $C000 per il 6809"},
/* ko */ {IDCLS_SPECIFY_6809_ROM_AT_C000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_6809_ROM_AT_C000_NL, "Geef de naam van het bestand voor de 4K tot 16K ROM op $C000 voor de 6809"},
/* pl */ {IDCLS_SPECIFY_6809_ROM_AT_C000_PL, "Okre�l nazw� pliku ROM-u 4K do 16K w $C000 dla 6809"},
/* ru */ {IDCLS_SPECIFY_6809_ROM_AT_C000_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_6809_ROM_AT_C000_SV, "Ange namn f�r 4-16K-ut�knings-ROM p� $C000 f�r 6809"},
/* tr */ {IDCLS_SPECIFY_6809_ROM_AT_C000_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_6809_ROM_AT_D000,    N_("Specify 4K to 12K ROM file name at $D000 for 6809")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_6809_ROM_AT_D000_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_6809_ROM_AT_D000_DE, "4K-12K Erweiterungs ROM Dateiname f�r $D000 f�r 6809 w�hlen"},
/* es */ {IDCLS_SPECIFY_6809_ROM_AT_D000_ES, "Especificar nombre ROM 4K a 12K  en $D000 para 6809"},
/* fr */ {IDCLS_SPECIFY_6809_ROM_AT_D000_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_6809_ROM_AT_D000_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_6809_ROM_AT_D000_IT, "Specifica il nome della ROM da 4K a 12K a $D000 per il 6809"},
/* ko */ {IDCLS_SPECIFY_6809_ROM_AT_D000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_6809_ROM_AT_D000_NL, "Geef de naam van het bestand voor de 4K tot 12K ROM op $D000 voor de 6809"},
/* pl */ {IDCLS_SPECIFY_6809_ROM_AT_D000_PL, "Okre�l nazw� pliku ROM-u 4K do 12K w $D000 dla 6809"},
/* ru */ {IDCLS_SPECIFY_6809_ROM_AT_D000_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_6809_ROM_AT_D000_SV, "Ange namn f�r 4-12K-ut�knings-ROM p� $D000 f�r 6809"},
/* tr */ {IDCLS_SPECIFY_6809_ROM_AT_D000_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_6809_ROM_AT_E000,    N_("Specify 2K or 8K ROM file name at $E000 for 6809")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_6809_ROM_AT_E000_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_6809_ROM_AT_E000_DE, "4K-8K Erweiterungs ROM Dateiname f�r $E000 f�r 6809 w�hlen"},
/* es */ {IDCLS_SPECIFY_6809_ROM_AT_E000_ES, "Especificar nombre ROM 4K a 8K  en $E000 para 6809"},
/* fr */ {IDCLS_SPECIFY_6809_ROM_AT_E000_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_6809_ROM_AT_E000_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_6809_ROM_AT_E000_IT, "Specifica il nome della ROM da 2K a 8K a $E000 per il 6809"},
/* ko */ {IDCLS_SPECIFY_6809_ROM_AT_E000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_6809_ROM_AT_E000_NL, "Geef de naam van het bestand voor de 2K of 8K ROM op $E000 voor de 6809"},
/* pl */ {IDCLS_SPECIFY_6809_ROM_AT_E000_PL, "Okre�l nazw� pliku ROM-u 2K lub 8K w $E000 dla 6809"},
/* ru */ {IDCLS_SPECIFY_6809_ROM_AT_E000_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_6809_ROM_AT_E000_SV, "Ange namn f�r 2/8K-ut�knings-ROM p� $E000 f�r 6809"},
/* tr */ {IDCLS_SPECIFY_6809_ROM_AT_E000_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_6809_ROM_AT_F000,    N_("Specify 4K ROM file name at $F000 for 6809")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_6809_ROM_AT_F000_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_6809_ROM_AT_F000_DE, "4K Erweiterungs ROM Dateiname f�r $F000 f�r 6809 w�hlen"},
/* es */ {IDCLS_SPECIFY_6809_ROM_AT_F000_ES, "Especificar nombre ROM 4K en $F000 para 6809"},
/* fr */ {IDCLS_SPECIFY_6809_ROM_AT_F000_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_6809_ROM_AT_F000_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_6809_ROM_AT_F000_IT, "Specifica il nome della ROM da 4K a $F000 per il 6809"},
/* ko */ {IDCLS_SPECIFY_6809_ROM_AT_F000_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_6809_ROM_AT_F000_NL, "Geef de naam van het bestand voor de 4K ROM op $F000 voor de 6809"},
/* pl */ {IDCLS_SPECIFY_6809_ROM_AT_F000_PL, "Okre�l nazw� pliku ROM-u 4K w $F000 dla 6809"},
/* ru */ {IDCLS_SPECIFY_6809_ROM_AT_F000_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_6809_ROM_AT_F000_SV, "Ange namn f�r 4K-ut�knings-ROM p� $F000 f�r 6809"},
/* tr */ {IDCLS_SPECIFY_6809_ROM_AT_F000_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET4032_COLOUR_RGBI,    N_("RGBI colour extension to PET 4032")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET4032_COLOUR_RGBI_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PET4032_COLOUR_RGBI_DE, "RGBI Farberweiterung f�r PET 4032"},
/* es */ {IDCLS_PET4032_COLOUR_RGBI_ES, "Extension color RGBI para PET 4032"},
/* fr */ {IDCLS_PET4032_COLOUR_RGBI_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PET4032_COLOUR_RGBI_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PET4032_COLOUR_RGBI_IT, "Estensione colore RGBI per PET 4032"},
/* ko */ {IDCLS_PET4032_COLOUR_RGBI_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET4032_COLOUR_RGBI_NL, "RGBI kleur uitbreiding voor de PET 4032"},
/* pl */ {IDCLS_PET4032_COLOUR_RGBI_PL, "Rozszerzenie barw RGBI do PET 4032"},
/* ru */ {IDCLS_PET4032_COLOUR_RGBI_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PET4032_COLOUR_RGBI_SV, "RGBI-f�rgut�kning f�r PET 4032"},
/* tr */ {IDCLS_PET4032_COLOUR_RGBI_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET4032_COLOUR_ANALOG,    N_("Analog colour extension to PET 4032")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET4032_COLOUR_ANALOG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PET4032_COLOUR_ANALOG_DE, "Analog Farberweiterung f�r PET 4032"},
/* es */ {IDCLS_PET4032_COLOUR_ANALOG_ES, "Extension anal�gica de color para PET 4032"},
/* fr */ {IDCLS_PET4032_COLOUR_ANALOG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PET4032_COLOUR_ANALOG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PET4032_COLOUR_ANALOG_IT, "Estensione colore analogica per PET 4032"},
/* ko */ {IDCLS_PET4032_COLOUR_ANALOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET4032_COLOUR_ANALOG_NL, "Analoge kleur uitbreiding voor de PET 4032"},
/* pl */ {IDCLS_PET4032_COLOUR_ANALOG_PL, "Rozszerzenie analogowych barw do PET 4032"},
/* ru */ {IDCLS_PET4032_COLOUR_ANALOG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PET4032_COLOUR_ANALOG_SV, "Analog f�rgut�kning f�r PET 4032"},
/* tr */ {IDCLS_PET4032_COLOUR_ANALOG_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_P_COLOUR_0_255,    N_("<Colour 0-255>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_COLOUR_0_255_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_COLOUR_0_255_DE, "<Farbe 0-255>"},
/* es */ {IDCLS_P_COLOUR_0_255_ES, "<Color 0-255>"},
/* fr */ {IDCLS_P_COLOUR_0_255_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_COLOUR_0_255_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_COLOUR_0_255_IT, "<Colore 0-255>"},
/* ko */ {IDCLS_P_COLOUR_0_255_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_COLOUR_0_255_NL, "<Kleur 0-255>"},
/* pl */ {IDCLS_P_COLOUR_0_255_PL, "<Kolor 0-255>"},
/* ru */ {IDCLS_P_COLOUR_0_255_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_COLOUR_0_255_SV, "<F�rg 0-255>"},
/* tr */ {IDCLS_P_COLOUR_0_255_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET4032_COLOUR_BACKGROUND,    N_("Analog colour background on PET 4032")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET4032_COLOUR_BACKGROUND_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PET4032_COLOUR_BACKGROUND_DE, "Analog Hintergrundfarbe f�r PET 4032"},
/* es */ {IDCLS_PET4032_COLOUR_BACKGROUND_ES, "Color del fondo anal�gico para PET 4032"},
/* fr */ {IDCLS_PET4032_COLOUR_BACKGROUND_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PET4032_COLOUR_BACKGROUND_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PET4032_COLOUR_BACKGROUND_IT, "Coloro sfondo analogico su PET 4032"},
/* ko */ {IDCLS_PET4032_COLOUR_BACKGROUND_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET4032_COLOUR_BACKGROUND_NL, "Analoge kleuren achtergrond voor de PET 4032"},
/* pl */ {IDCLS_PET4032_COLOUR_BACKGROUND_PL, "Analogowy kolor t�a w PET 4032"},
/* ru */ {IDCLS_PET4032_COLOUR_BACKGROUND_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PET4032_COLOUR_BACKGROUND_SV, "Analog f�rgbakgrund p� PET 4032"},
/* tr */ {IDCLS_PET4032_COLOUR_BACKGROUND_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET_RAM_SIZE,    N_("PET RAM size (4/8/16/32/96/128)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET_RAM_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PET_RAM_SIZE_DE, "PET RAM Gr��e (4/8/16/32/96/128)"},
/* es */ {IDCLS_PET_RAM_SIZE_ES, "Tama�o de la RAM en PET  (4/8/16/32/96/128)"},
/* fr */ {IDCLS_PET_RAM_SIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PET_RAM_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PET_RAM_SIZE_IT, "Dimensione RAM PET (4/8/16/32/96/128)"},
/* ko */ {IDCLS_PET_RAM_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET_RAM_SIZE_NL, "PET RAM grootte (4/8/16/32/96/128)"},
/* pl */ {IDCLS_PET_RAM_SIZE_PL, "Wielko�� RAM-u PET (4/8/16/32/96/128)"},
/* ru */ {IDCLS_PET_RAM_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PET_RAM_SIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PET_RAM_SIZE_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_PET_IO_SIZE,    N_("PET I/O size (256/2048)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET_IO_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PET_IO_SIZE_DE, "PET I/O Gr��e (256/2048)"},
/* es */ {IDCLS_PET_IO_SIZE_ES, "Tama�o PET I/O (256/2048)"},
/* fr */ {IDCLS_PET_IO_SIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PET_IO_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PET_IO_SIZE_IT, "Dimensione I/O PET (256/2048)"},
/* ko */ {IDCLS_PET_IO_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET_IO_SIZE_NL, "PET I/O grootte (256/2048)"},
/* pl */ {IDCLS_PET_IO_SIZE_PL, "Rozmiar we/wy PET (256/2048)"},
/* ru */ {IDCLS_PET_IO_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PET_IO_SIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PET_IO_SIZE_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_ENABLE_CRTC,    N_("Enable CRTC")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_CRTC_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_CRTC_DE, "CRTC aktivieren"},
/* es */ {IDCLS_ENABLE_CRTC_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_CRTC_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_CRTC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_CRTC_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_CRTC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_CRTC_NL, "CRTC inschakelen"},
/* pl */ {IDCLS_ENABLE_CRTC_PL, "W��cz CRTC"},
/* ru */ {IDCLS_ENABLE_CRTC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_CRTC_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_CRTC_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_DISABLE_CRTC,    N_("Disable CRTC")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_CRTC_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_CRTC_DE, "CRTC deaktivieren"},
/* es */ {IDCLS_DISABLE_CRTC_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_CRTC_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_CRTC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_CRTC_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_CRTC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_CRTC_NL, "CRTC uitschakelen"},
/* pl */ {IDCLS_DISABLE_CRTC_PL, "Wy��cz CRTC"},
/* ru */ {IDCLS_DISABLE_CRTC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_CRTC_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_CRTC_TR, ""},  /* fuzzy */
#endif

/* pet/pet-cmdline-options.c */
/* en */ {IDCLS_SET_VIDEO_SIZE,    N_("Set video size (0: Automatic, 40: 40 Columns, 80: 80 Columns)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_VIDEO_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_VIDEO_SIZE_DE, "Video Gr��e (0: Automatisch, 40: 40 Spalten, 80: 80 Spalten)"},
/* es */ {IDCLS_SET_VIDEO_SIZE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_VIDEO_SIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_VIDEO_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_VIDEO_SIZE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_VIDEO_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_VIDEO_SIZE_NL, "Stel video grootte in (0: Automatisch, 40: 40 Kolommen, 80: 80 Kolommen)"},
/* pl */ {IDCLS_SET_VIDEO_SIZE_PL, "Okre�l wielko�� obrazu (0: Automatyczna, 40: 40 kolumn, 80: 80 kolumn)"},
/* ru */ {IDCLS_SET_VIDEO_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_VIDEO_SIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_VIDEO_SIZE_TR, ""},  /* fuzzy */
#endif

/* pet/petpia1.c */
/* en */ {IDCLS_ENABLE_USERPORT_DIAG_PIN,    N_("Enable userport diagnostic pin")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_DA, "Aktiv�r diagnostik p� brugerporten"},
/* de */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_DE, "Userport Diagnose Pin aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_ES, "Permitir pin puerto diagnostico"},
/* fr */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_FR, "Activer la pin de diagnostique userport"},
/* hu */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_HU, "Userport diagnosztikai l�b enged�lyez�se"},
/* it */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_IT, "Attiva pin diagnostico su userport"},
/* ko */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_NL, "Userport diagnostic pin inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_PL, "W��cz pin diagnostyczny userportu"},
/* ru */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_RU, "Enable userport diagnostic pin"},
/* sv */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_SV, "Aktivera diagnostik p� anv�ndarporten"},
/* tr */ {IDCLS_ENABLE_USERPORT_DIAG_PIN_TR, "Userport diyagnostik pinini aktif et"},
#endif

/* pet/petpia1.c */
/* en */ {IDCLS_DISABLE_USERPORT_DIAG_PIN,    N_("Disable userport diagnostic pin")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_DA, "Deaktiv�r diagnostik p� brugerporten"},
/* de */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_DE, "Userport Diagnose Pin deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_ES, "Deshabilitar pin puerto diagnostico"},
/* fr */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_FR, "D�sactiver la pin de diagnostique userport"},
/* hu */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_HU, "Userport diagnosztikai l�b tilt�sa"},
/* it */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_IT, "Disattiva pin diagnostico su userport"},
/* ko */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_NL, "Userport diagnostic pin uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_PL, "Wy��cz pin diagnostyczny userportu"},
/* ru */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_RU, "Disable userport diagnostic pin"},
/* sv */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_SV, "Inaktivera diagnostik p� anv�ndarporten"},
/* tr */ {IDCLS_DISABLE_USERPORT_DIAG_PIN_TR, "Userport diyagnostik pinini pasifle�tir"},
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME,    N_("Specify name of Function low ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_DA, "Angiv navn p� image for lav funktions-ROM"},
/* de */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_DE, "Namen f�r Funktions ROM Datei (unterer Bereich) w�hlen"},
/* es */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_ES, "Especificar nombre imagen ROM funci�n baja"},
/* fr */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_FR, "Sp�cifier le nom de l'image basse ROM Fonction"},
/* hu */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_HU, "Adja meg az als� Function ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_IT, "Specifica il nome immagine della Function ROM bassa"},
/* ko */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_NL, "Geef de naam van het Function low ROM bestand"},
/* pl */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Function low"},
/* ru */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_RU, "Specify name of Function low ROM image"},
/* sv */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_SV, "Ange namn p� ROM-avbildning f�r l�gt funktions-ROM"},
/* tr */ {IDCLS_SPECIFY_FUNCTION_LOW_ROM_NAME_TR, "Function low ROM imaj�n�n ismini belirt"},
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME,    N_("Specify name of Function high ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_DA, "Angiv navn p� image for h�j funktions-ROM"},
/* de */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_DE, "Namen f�r Funktions ROM Datei (oberer Bereich) w�hlen"},
/* es */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_ES, "Especificar nombre imagen ROM funci�n alta"},
/* fr */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_FR, "Sp�cifier le nom de l'image haute ROM Fonction"},
/* hu */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_HU, "Adja meg a fels� Function ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_IT, "Specifica il nome immagine della Function ROM alta"},
/* ko */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_NL, "Geef de naam van het Function high ROM bestand"},
/* pl */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Function high"},
/* ru */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_RU, "Specify name of Function high ROM image"},
/* sv */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_SV, "Ange namn p� ROM-avbildning f�r h�gt funktions-ROM"},
/* tr */ {IDCLS_SPECIFY_FUNCTION_HIGH_ROM_NAME_TR, "Function high ROM imaj�n�n ismini belirt"},
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME,    N_("Specify name of Cartridge 1 low ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_DA, "Angiv navn p� image for lav cartridge 1 ROM"},
/* de */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_DE, "Name f�r Erweiterungsmodul 1 ROM Datei (unterer Bereich) w�hlen"},
/* es */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_ES, "Especificar nombre imagen ROM cartucho 1 bajo"},
/* fr */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_FR, "Sp�cifier le nom de l'image basse ROM Cartouche 1"},
/* hu */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_HU, "Adja meg az als� Cartridge 1 ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_IT, "Specifica il nome immagine della ROM Cartridge 1 bassa"},
/* ko */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_NL, "Geef de naam van het Cartridge 1 low ROM bestand"},
/* pl */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Cartridge 1 low"},
/* ru */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_RU, "Specify name of Cartridge 1 low ROM image"},
/* sv */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_SV, "Ange namn p� ROM-avbildning f�r l�gt insticksmodul 1-ROM"},
/* tr */ {IDCLS_SPECIFY_CART_1_LOW_ROM_NAME_TR, "Cartridge 1 low ROM imaj�n�n ismini belirt"},
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME,    N_("Specify name of Cartridge 1 high ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_DA, "Angiv navn p� image for h�j cartridge 1 ROM"},
/* de */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_DE, "Name f�r Erweiterungsmodul 1 ROM Datei (oberer Bereich) w�hlen"},
/* es */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_ES, "Especificar nombre imagen ROM cartucho 1 alto"},
/* fr */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_FR, "Sp�cifier le nom de l'image haute ROM Cartouche 1"},
/* hu */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_HU, "Adja meg a fels� Cartridge 1 ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_IT, "Specifica il nome immagine della ROM Cartridge 1 alta"},
/* ko */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_NL, "Geef de naam van het Cartridge 1 high ROM bestand"},
/* pl */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Cartridge 1 high"},
/* ru */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_RU, "Specify name of Cartridge 1 high ROM image"},
/* sv */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_SV, "Ange namn p� ROM-avbildning f�r h�gt insticksmodul 1-ROM"},
/* tr */ {IDCLS_SPECIFY_CART_1_HIGH_ROM_NAME_TR, "Cartridge 1 high ROM imaj�n�n ismini belirt"},
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME,    N_("Specify name of Cartridge 2 low ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_DA, "Angiv navn p� image for lav cartridge 2 ROM"},
/* de */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_DE, "Name f�r Erweiterungsmodul 2 ROM Datei (unterer Bereich) w�hlen"},
/* es */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_ES, "Especificar nombre imagen ROM cartucho 2 bajo"},
/* fr */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_FR, "Sp�cifier le nom de l'image basse ROM Cartouche 2"},
/* hu */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_HU, "Adja meg az als� Cartridge 2 ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_IT, "Specifica il nome immagine della ROM Cartridge 2 bassa"},
/* ko */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_NL, "Geef de naam van het Cartridge 2 low ROM bestand"},
/* pl */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Cartridge 2 low"},
/* ru */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_RU, "Specify name of Cartridge 2 low ROM image"},
/* sv */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_SV, "Ange namn p� ROM-avbildning f�r l�gt insticksmodul 2-ROM"},
/* tr */ {IDCLS_SPECIFY_CART_2_LOW_ROM_NAME_TR, "Cartridge 2 low ROM imaj�n�n ismini belirt"},
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME,    N_("Specify name of Cartridge 2 high ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_DA, "Angiv navn p� image for h�j cartridge 1 ROM"},
/* de */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_DE, "Name f�r Erweiterungsmodul 2 ROM Datei (oberer Bereich) w�hlen"},
/* es */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_ES, "Especificar nombre imagen ROM cartucho 2 alto"},
/* fr */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_FR, "Sp�cifier le nom de l'image haute ROM Cartouche 2"},
/* hu */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_HU, "Adja meg a fels� Cartridge 2 ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_IT, "Specifica il nome immagine della ROM Cartridge 2 alta"},
/* ko */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_NL, "Geef de naam van het Cartridge 2 high ROM bestand"},
/* pl */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_PL, "Okre�l nazw� obrazu ROM Cartridge 2 high"},
/* ru */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_RU, "Specify name of Cartridge 2 high ROM image"},
/* sv */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_SV, "Ange namn p� ROM-avbildning f�r h�gt insticksmodul 2-ROM"},
/* tr */ {IDCLS_SPECIFY_CART_2_HIGH_ROM_NAME_TR, "Cartridge 2 high ROM imaj�n�n ismini belirt"},
#endif

/* plus4/plus4-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_RAM_INSTALLED,    N_("Specify size of RAM installed in kb (16/32/64)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_RAM_INSTALLED_DA, "Angiv st�rrelse p� installeret RAM i kB (16/32/64)"},
/* de */ {IDCLS_SPECIFY_RAM_INSTALLED_DE, "Gr��e des emulierten RAM Speichers in kb (16/32/64) spezifizieren"},
/* es */ {IDCLS_SPECIFY_RAM_INSTALLED_ES, "Especificar tama�o RAM instalada en KB (16/32/64)"},
/* fr */ {IDCLS_SPECIFY_RAM_INSTALLED_FR, "Sp�cifier la taille du RAM install� (16/32/64)"},
/* hu */ {IDCLS_SPECIFY_RAM_INSTALLED_HU, "Adja meg a telep�tett RAM m�ret�t kb-ban (16/32/64)"},
/* it */ {IDCLS_SPECIFY_RAM_INSTALLED_IT, "Specifica la dimensione della RAM installata in kb (16/32/64)"},
/* ko */ {IDCLS_SPECIFY_RAM_INSTALLED_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_RAM_INSTALLED_NL, "Geef de hoeveelheid RAM in kb (16/32/64)"},
/* pl */ {IDCLS_SPECIFY_RAM_INSTALLED_PL, "Okre�l ilo�� zainstalowanego RAM-u w kb (16/32/64)"},
/* ru */ {IDCLS_SPECIFY_RAM_INSTALLED_RU, "Specify size of RAM installed in kb (16/32/64)"},
/* sv */ {IDCLS_SPECIFY_RAM_INSTALLED_SV, "Ange storlek p� installerat RAM i kb (16/32/64)"},
/* tr */ {IDCLS_SPECIFY_RAM_INSTALLED_TR, "Kurulmu� olan RAM boyutunu kb cinsinden belirt (16/32/64)"},
#endif

/* viciisc/vicii-cmdline-options.c */
/* en */ {IDCLS_SET_VICII_MODEL,    N_("Set VIC-II model (6569/6569r1/8565/6567/8562/6567r56a/6572)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_VICII_MODEL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_VICII_MODEL_DE, "W�hle VIC-II Modell (6569/6569r1/8565/6567/8562/6567r56a/6572)"},
/* es */ {IDCLS_SET_VICII_MODEL_ES, "Seleccionar modelo VIC-II (6569/6569r1/8565/6567/8562/6567r56a/6572)"},
/* fr */ {IDCLS_SET_VICII_MODEL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_VICII_MODEL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_VICII_MODEL_IT, "Imposta modello VIC-II (6569/6569r1/8565/6567/8562/6567r56a/6572)"},
/* ko */ {IDCLS_SET_VICII_MODEL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_VICII_MODEL_NL, "Zet VIC-II model (6569/6569r1/8565/6567/8562/6567r56a/6572)"},
/* pl */ {IDCLS_SET_VICII_MODEL_PL, "Ustaw model VIC-II (6569/6569r1/8565/6567/8562/6567r56a/6572)"},
/* ru */ {IDCLS_SET_VICII_MODEL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_VICII_MODEL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_VICII_MODEL_TR, ""},  /* fuzzy */
#endif

/* printerdrv/driver-select.c */
/* en */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME,    N_("Specify name of printer driver for device #4. (ascii/mps803/nl10/raw)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_DE, "Name f�r Druckertreiber f�r Ger�t #4 w�hlen. (ascii/mps803/nl10/raw)"},
/* es */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_ES, "Especificar nombre controlador impresora perif�rico #4. (ascii/mps803/nl10/raw)"},
/* fr */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_IT, "Specifica il nome del driver di stampa per la periferica #4. (ascii/mps803/nl10/raw)"},
/* ko */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_NL, "Geef de naam van het stuurprogramma voor apparaat #4. (ascii/mps803/nl10/raw)"},
/* pl */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_PL, "Okre�l nazw� sterownika drukarki urz�dzenia #4. (ascii/mps803/nl10/raw)"},
/* ru */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_PRT_DRIVER_4_NAME_TR, ""},  /* fuzzy */
#endif

/* printerdrv/driver-select.c */
/* en */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME,    N_("Specify name of printer driver for device #5. (ascii/mps803/nl10/raw)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_DE, "Name f�r Druckertreiber f�r Ger�t #5 w�hlen. (ascii/mps803/nl10/raw)"},
/* es */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_ES, "Especificar nombre controlador impresora perif�rico #5. (ascii/mps803/nl10/raw)"},
/* fr */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_IT, "Specifica il nome del driver di stampa per la periferica #5. (ascii/mps803/nl10/raw)"},
/* ko */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_NL, "Geef de naam van het stuurprogramma voor apparaat #5. (ascii/mps803/nl10/raw)"},
/* pl */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_PL, "Okre�l nazw� sterownika drukarki urz�dzenia #5. (ascii/mps803/nl10/raw)"},
/* ru */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_PRT_DRIVER_5_NAME_TR, ""},  /* fuzzy */
#endif

/* printerdrv/driver-select.c */
/* en */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME,    N_("Specify name of printer driver for device #6. (1520/raw)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_DE, "Name f�r Druckertreiber f�r Ger�t #6 w�hlen. (1520/raw)"},
/* es */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_ES, "Especificar nombre controlador impresora perif�rico #6. (ascii/mps803/nl10/raw)"},
/* fr */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_IT, "Specifica il nome del driver di stampa per la periferica #4. (1520/raw)"},
/* ko */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_NL, "Geef de naam van het stuurprogramma voor apparaat #6. (1520/raw)"},
/* pl */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_PL, "Okre�l nazw� sterownika drukarki urz�dzenia #6. (1520/raw)"},
/* ru */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_PRT_DRIVER_6_NAME_TR, ""},  /* fuzzy */
#endif

/* printerdrv/driver-select.c */
/* en */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME,    N_("Specify name of printer driver for the userport printer. (ascii/nl10/raw)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_DE, "Name f�r Userport Druckertreiber w�hlen. (ascii/nl10/raw)"},
/* es */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_ES, "Especificar nombre controlador impresi�n para puerto impresora. (ascii/nl10/raw)"},
/* fr */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_IT, "Specifica il nome del driver di stampa per la stampante su userport. (ascii/nl10/raw)"},
/* ko */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_NL, "Geef de naam van het stuurprogramma voor de userport printer. (ascii/nl10/raw)"},
/* pl */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_PL, "Okre�l nazw� sterownika drukarki dla drukarki w userporcie. (ascii/nl10/raw)"},
/* ru */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_PRT_DRIVER_USR_NAME_TR, ""},  /* fuzzy */
#endif

/* printerdrv/interface-serial.c */
/* en */ {IDCLS_SET_DEVICE_TYPE_4,    N_("Set device type for device #4 (0: None, 1: Filesystem, 2: Real)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DEVICE_TYPE_4_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_DEVICE_TYPE_4_DE, "Ger�tetyp f�r Ger�t #4 (0: Kein, 1: Dateisystem, 2: Real) setzen"},
/* es */ {IDCLS_SET_DEVICE_TYPE_4_ES, "Seleccionar tipo para el perif�rico #4 (0:Ninguno 1: Filesystem, 2:Real)"},
/* fr */ {IDCLS_SET_DEVICE_TYPE_4_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_DEVICE_TYPE_4_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_DEVICE_TYPE_4_IT, "Specifica il tipo di periferica #4 (0: Nessuna, 1: Filesystem, 2: Reale)"},
/* ko */ {IDCLS_SET_DEVICE_TYPE_4_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DEVICE_TYPE_4_NL, "Stel apparaatsoort invoor apparaat #4 (0: Geen, 1: Bestandssysteem, 2: Echt)"},
/* pl */ {IDCLS_SET_DEVICE_TYPE_4_PL, "Okre�l typ urz�dzenia #4 (0: Brak, 1: System plik�w, 2: Rzeczywiste)"},
/* ru */ {IDCLS_SET_DEVICE_TYPE_4_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_DEVICE_TYPE_4_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_DEVICE_TYPE_4_TR, ""},  /* fuzzy */
#endif

/* printerdrv/interface-serial.c */
/* en */ {IDCLS_SET_DEVICE_TYPE_5,    N_("Set device type for device #5 (0: None, 1: Filesystem, 2: Real)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DEVICE_TYPE_5_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_DEVICE_TYPE_5_DE, "Ger�tetyp f�r Ger�t #5 (0: Kein, 1: Dateisystem, 2: Real) setzen"},
/* es */ {IDCLS_SET_DEVICE_TYPE_5_ES, "Seleccionar tipo para el perif�rico #5 (0:Ninguno 1: Filesystem, 2:Real)"},
/* fr */ {IDCLS_SET_DEVICE_TYPE_5_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_DEVICE_TYPE_5_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_DEVICE_TYPE_5_IT, "Specifica il tipo di periferica #5 (0: Nessuna, 1: Filesystem, 2: Reale)"},
/* ko */ {IDCLS_SET_DEVICE_TYPE_5_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DEVICE_TYPE_5_NL, "Stel apparaatsoort in voor apparaat #5 (0: Geen, 1: Bestandssysteem, 2: Echt)"},
/* pl */ {IDCLS_SET_DEVICE_TYPE_5_PL, "Okre�l typ urz�dzenia #5 (0: Brak, 1: System plik�w, 2: Rzeczywiste)"},
/* ru */ {IDCLS_SET_DEVICE_TYPE_5_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_DEVICE_TYPE_5_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_DEVICE_TYPE_5_TR, ""},  /* fuzzy */
#endif

/* printerdrv/interface-serial.c */
/* en */ {IDCLS_SET_DEVICE_TYPE_6,    N_("Set device type for device #6 (0: None, 1: Filesystem, 2: Real)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DEVICE_TYPE_6_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_DEVICE_TYPE_6_DE, "Ger�tetyp f�r Ger�t #6 (0: Kein, 1: Dateisystem, 2: Real) setzen"},
/* es */ {IDCLS_SET_DEVICE_TYPE_6_ES, "Seleccionar tipo para el perif�rico #6 (0:Ninguno 1: Filesystem, 2:Real)"},
/* fr */ {IDCLS_SET_DEVICE_TYPE_6_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_DEVICE_TYPE_6_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_DEVICE_TYPE_6_IT, "Specifica il tipo di periferica #6 (0: Nessuna, 1: Filesystem, 2: Reale)"},
/* ko */ {IDCLS_SET_DEVICE_TYPE_6_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DEVICE_TYPE_6_NL, "Stel apparaatsoort in voor apparaat #6 (0: Geen, 1: Bestandssysteem, 2: Echt)"},
/* pl */ {IDCLS_SET_DEVICE_TYPE_6_PL, "Okre�l typ urz�dzenia #6 (0: Brak, 1: System plik�w, 2: Rzeczywiste)"},
/* ru */ {IDCLS_SET_DEVICE_TYPE_6_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_DEVICE_TYPE_6_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_DEVICE_TYPE_6_TR, ""},  /* fuzzy */
#endif

/* printerdrv/interface-serial.c */
/* en */ {IDCLS_SET_DEVICE_TYPE_7,    N_("Set device type for device #7 (0: None, 2: Real)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_DEVICE_TYPE_7_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_DEVICE_TYPE_7_DE, "Ger�tetyp f�r Ger�t #7 (0: Kein, 2: Real) setzen"},
/* es */ {IDCLS_SET_DEVICE_TYPE_7_ES, "Seleccionar tipo para el perif�rico #7 (0:Ninguno 1: Filesystem, 2:Real)"},
/* fr */ {IDCLS_SET_DEVICE_TYPE_7_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_DEVICE_TYPE_7_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_DEVICE_TYPE_7_IT, "Specifica il tipo di periferica #7 (0: Nessuna, 1: Filesystem, 2: Reale)"},
/* ko */ {IDCLS_SET_DEVICE_TYPE_7_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_DEVICE_TYPE_7_NL, "Stel apparaatsoort in voor apparaat #7 (0: Geen, 2: Echt)"},
/* pl */ {IDCLS_SET_DEVICE_TYPE_7_PL, "Okre�l typ urz�dzenia #7 (0: Brak, 2: Rzeczywiste)"},
/* ru */ {IDCLS_SET_DEVICE_TYPE_7_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_DEVICE_TYPE_7_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_DEVICE_TYPE_7_TR, ""},  /* fuzzy */
#endif

/* printerdrv/interface-userport.c */
/* en */ {IDCLS_ENABLE_USERPORT_PRINTER,    N_("Enable the userport printer emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_PRINTER_DA, "Aktiv�r emulering af printer p� brugerporten"},
/* de */ {IDCLS_ENABLE_USERPORT_PRINTER_DE, "Userport Drucker Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_PRINTER_ES, "Permitir emulaci�n puerto impresora"},
/* fr */ {IDCLS_ENABLE_USERPORT_PRINTER_FR, "Acviver l'�mulation de l'imprimante userport"},
/* hu */ {IDCLS_ENABLE_USERPORT_PRINTER_HU, "Userport nyomtat� emul�ci�j�nak enged�lyez�se"},
/* it */ {IDCLS_ENABLE_USERPORT_PRINTER_IT, "Attiva l'emulazione della stampante su userport"},
/* ko */ {IDCLS_ENABLE_USERPORT_PRINTER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_PRINTER_NL, "Userport printeremulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_PRINTER_PL, "W��cz emulacj� drukarki w userporcie"},
/* ru */ {IDCLS_ENABLE_USERPORT_PRINTER_RU, "Enable the userport printer emulation"},
/* sv */ {IDCLS_ENABLE_USERPORT_PRINTER_SV, "Aktivera emulering av skrivare p� anv�ndarporten"},
/* tr */ {IDCLS_ENABLE_USERPORT_PRINTER_TR, "Userport yaz�c� em�lasyonunu aktif et"},
#endif

/* printerdrv/interface-userport.c */
/* en */ {IDCLS_DISABLE_USERPORT_PRINTER,    N_("Disable the userport printer emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_PRINTER_DA, "Deaktiv�r emulering af printer p� brugerporten"},
/* de */ {IDCLS_DISABLE_USERPORT_PRINTER_DE, "Userport Drucker Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_PRINTER_ES, "Deshabilitar emulaci�n puerto impresora"},
/* fr */ {IDCLS_DISABLE_USERPORT_PRINTER_FR, "D�sactiver l'�mulation de l'imprimante userport"},
/* hu */ {IDCLS_DISABLE_USERPORT_PRINTER_HU, "Userport nyomtat� emul�ci�j�nak tilt�sa"},
/* it */ {IDCLS_DISABLE_USERPORT_PRINTER_IT, "Disattiva l'emulazione della stampante su userport"},
/* ko */ {IDCLS_DISABLE_USERPORT_PRINTER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_PRINTER_NL, "Userport printeremulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_PRINTER_PL, "Wy��cz emulacj� drukarki w userporcie"},
/* ru */ {IDCLS_DISABLE_USERPORT_PRINTER_RU, "Disable the userport printer emulation"},
/* sv */ {IDCLS_DISABLE_USERPORT_PRINTER_SV, "Inaktivera emulering av skrivare p� anv�ndarporten"},
/* tr */ {IDCLS_DISABLE_USERPORT_PRINTER_TR, "Userport yaz�c� em�lasyonunu pasifle�tir"},
#endif

/* printerdrv/output-text.c */
/* en */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME,    N_("Specify name of printer text device or dump file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_DA, "Angiv navn p� printer-tekst-enhed eller dump-fil"},
/* de */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_DE, "Name f�r Druckerausgabe Textger�t oder Dump Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_ES, "Especificar nombre del perif�rico para imprimir texto o fichero de volcado"},
/* fr */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_FR, "Sp�cifier le nom de l'imprimante texte ou \"dump file\""},
/* hu */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_HU, "Adja meg a sz�vegnyomtat� eszk�z nev�t, vagy a kimeneti f�jlt"},
/* it */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_IT, "Specifica il nome del dispositivo testuale di stampa o salva su file"},
/* ko */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_NL, "Geef de naam van het printer tekst apparaat of het dumpbestand"},
/* pl */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_PL, "Okre�l nazw� urz�dzenia tekstowego drukarki lub pliku zrzutu"},
/* ru */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_RU, "Specify name of printer text device or dump file"},
/* sv */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_SV, "Ange namn p� textenhet f�r utskrift eller dumpfil"},
/* tr */ {IDCLS_SPECIFY_TEXT_DEVICE_DUMP_NAME_TR, "Metin ayg�t� yaz�c�s� ya da d�k�m dosyas�n�n ismini belirt"},
#endif

/* printerdrv/output-text.c */
/* en */ {IDCLS_SPECIFY_TEXT_DEVICE_4,    N_("Specify printer text output device for printer #4")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TEXT_DEVICE_4_DA, "Angiv printer tekst-uddata enhed for printer #4"},
/* de */ {IDCLS_SPECIFY_TEXT_DEVICE_4_DE, "Textausgabe Ger�t f�r Drucker #4 w�hlen"},
/* es */ {IDCLS_SPECIFY_TEXT_DEVICE_4_ES, "Especificar perif�rico salida impresi�n texto impresora #4"},
/* fr */ {IDCLS_SPECIFY_TEXT_DEVICE_4_FR, "Sp�cifier le p�riph�rique de sortie texte pour l'imprimante 4"},
/* hu */ {IDCLS_SPECIFY_TEXT_DEVICE_4_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_TEXT_DEVICE_4_IT, "Specifica il dispositivo di uscita testuale per la stampante #4"},
/* ko */ {IDCLS_SPECIFY_TEXT_DEVICE_4_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TEXT_DEVICE_4_NL, "Geef het printer tekst uitvoer apparaat voor printer #4"},
/* pl */ {IDCLS_SPECIFY_TEXT_DEVICE_4_PL, "Okre�l urz�dzenie wyj�cia tekstowego drukarki #4"},
/* ru */ {IDCLS_SPECIFY_TEXT_DEVICE_4_RU, "Specify printer text output device for printer #4"},
/* sv */ {IDCLS_SPECIFY_TEXT_DEVICE_4_SV, "Ange skrivartextutenhet f�r skrivare 4"},
/* tr */ {IDCLS_SPECIFY_TEXT_DEVICE_4_TR, "Yaz�c� #4 i�in metin ��kt� ayg�t� yaz�c�s� belirt"},
#endif

/* printerdrv/output-text.c */
/* en */ {IDCLS_SPECIFY_TEXT_DEVICE_5,    N_("Specify printer text output device for printer #5")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TEXT_DEVICE_5_DA, "Angiv printer tekst-uddata enhed for printer #5"},
/* de */ {IDCLS_SPECIFY_TEXT_DEVICE_5_DE, "Textausgabe Ger�t f�r Drucker #5 w�hlen"},
/* es */ {IDCLS_SPECIFY_TEXT_DEVICE_5_ES, "Especificar perif�rico salida impresi�n texto impresora #5"},
/* fr */ {IDCLS_SPECIFY_TEXT_DEVICE_5_FR, "Sp�cifier le p�riph�rique de sortie texte pour l'imprimante 5"},
/* hu */ {IDCLS_SPECIFY_TEXT_DEVICE_5_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_TEXT_DEVICE_5_IT, "Specifica il dispositivo di uscita testuale per la stampante #5"},
/* ko */ {IDCLS_SPECIFY_TEXT_DEVICE_5_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TEXT_DEVICE_5_NL, "Geef het printer tekst uitvoer apparaat voor printer #5"},
/* pl */ {IDCLS_SPECIFY_TEXT_DEVICE_5_PL, "Okre�l urz�dzenie wyj�cia tekstowego drukarki #5"},
/* ru */ {IDCLS_SPECIFY_TEXT_DEVICE_5_RU, "Specify printer text output device for printer #5"},
/* sv */ {IDCLS_SPECIFY_TEXT_DEVICE_5_SV, "Ange skrivartextutenhet f�r skrivare 5"},
/* tr */ {IDCLS_SPECIFY_TEXT_DEVICE_5_TR, "Yaz�c� #5 i�in metin ��kt� ayg�t� yaz�c�s� belirt"},
#endif

/* printerdrv/output-text.c */
/* en */ {IDCLS_SPECIFY_TEXT_DEVICE_6,    N_("Specify printer text output device for printer #6")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TEXT_DEVICE_6_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_TEXT_DEVICE_6_DE, "Textausgabe Ger�t f�r Drucker #6 w�hlen"},
/* es */ {IDCLS_SPECIFY_TEXT_DEVICE_6_ES, "Especificar perif�rico salida impresi�n texto impresora #6"},
/* fr */ {IDCLS_SPECIFY_TEXT_DEVICE_6_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_TEXT_DEVICE_6_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_TEXT_DEVICE_6_IT, "Specifica il dispositivo di uscita testuale per la stampante #6"},
/* ko */ {IDCLS_SPECIFY_TEXT_DEVICE_6_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TEXT_DEVICE_6_NL, "Geef het printer tekst uitvoer apparaat voor printer #6"},
/* pl */ {IDCLS_SPECIFY_TEXT_DEVICE_6_PL, "Okre�l urz�dzenie wyj�cia tekstowego drukarki #6"},
/* ru */ {IDCLS_SPECIFY_TEXT_DEVICE_6_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_TEXT_DEVICE_6_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_TEXT_DEVICE_6_TR, ""},  /* fuzzy */
#endif

/* printerdrv/output-text.c */
/* en */ {IDCLS_SPECIFY_TEXT_USERPORT,    N_("Specify printer text output device for userport printer")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TEXT_USERPORT_DA, "Angiv printer tekst-uddata enhed for brugerports-printer"},
/* de */ {IDCLS_SPECIFY_TEXT_USERPORT_DE, "Textausgabe Ger�t f�r Userport Drucker w�hlen"},
/* es */ {IDCLS_SPECIFY_TEXT_USERPORT_ES, "Especificar perif�rico de salida para imprimir texto impresora puerto usuario"},
/* fr */ {IDCLS_SPECIFY_TEXT_USERPORT_FR, "Sp�cifier le p�riph�rique de sortie text pour l'imprimante userport"},
/* hu */ {IDCLS_SPECIFY_TEXT_USERPORT_HU, "Adja meg a sz�vegnyomtat� eszk�zt a userport nyomtat�hoz"},
/* it */ {IDCLS_SPECIFY_TEXT_USERPORT_IT, "Specifica il nome del dispositivo di output testuale di stampa per la stampante su userport"},
/* ko */ {IDCLS_SPECIFY_TEXT_USERPORT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TEXT_USERPORT_NL, "Geef het printer tekst uitvoer apparaat voor de userport printer"},
/* pl */ {IDCLS_SPECIFY_TEXT_USERPORT_PL, "Okre�l urz�dzenie wyj�cia tekstu dla drukarki w userporcie"},
/* ru */ {IDCLS_SPECIFY_TEXT_USERPORT_RU, "Specify printer text output device for userport printer"},
/* sv */ {IDCLS_SPECIFY_TEXT_USERPORT_SV, "Ange skrivartextutenhet f�r anv�ndarportsskrivare"},
/* tr */ {IDCLS_SPECIFY_TEXT_USERPORT_TR, "Userport yaz�c�s� i�in metin ��kt� ayg�t� yaz�c�s� belirt"},
#endif

/* raster/raster-cmdline-options.c */
/* en */ {IDCLS_ENABLE_VIDEO_CACHE,    N_("Enable the video cache")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_VIDEO_CACHE_DA, "Aktiv�r videocache"},
/* de */ {IDCLS_ENABLE_VIDEO_CACHE_DE, "Video Cache aktivieren"},
/* es */ {IDCLS_ENABLE_VIDEO_CACHE_ES, "Permitir cach� de video"},
/* fr */ {IDCLS_ENABLE_VIDEO_CACHE_FR, "Activer le cache vid�o"},
/* hu */ {IDCLS_ENABLE_VIDEO_CACHE_HU, "Vide� gyors�t�t�r enged�lyez�se"},
/* it */ {IDCLS_ENABLE_VIDEO_CACHE_IT, "Attiva la cache video"},
/* ko */ {IDCLS_ENABLE_VIDEO_CACHE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_VIDEO_CACHE_NL, "Videocache inschakelen"},
/* pl */ {IDCLS_ENABLE_VIDEO_CACHE_PL, "W��cz cache wideo"},
/* ru */ {IDCLS_ENABLE_VIDEO_CACHE_RU, "Enable the video cache"},
/* sv */ {IDCLS_ENABLE_VIDEO_CACHE_SV, "Aktivera videocache"},
/* tr */ {IDCLS_ENABLE_VIDEO_CACHE_TR, "G�r�nt� �nbelle�ini aktif et"},
#endif

/* raster/raster-cmdline-options.c */
/* en */ {IDCLS_DISABLE_VIDEO_CACHE,    N_("Disable the video cache")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_VIDEO_CACHE_DA, "Deaktiv�r videocache"},
/* de */ {IDCLS_DISABLE_VIDEO_CACHE_DE, "Video Cache deaktivieren"},
/* es */ {IDCLS_DISABLE_VIDEO_CACHE_ES, "Deshabilitar cach� de v�deo"},
/* fr */ {IDCLS_DISABLE_VIDEO_CACHE_FR, "D�sactiver le cache vid�o"},
/* hu */ {IDCLS_DISABLE_VIDEO_CACHE_HU, "Vide� gyors�t�t�r tilt�sa"},
/* it */ {IDCLS_DISABLE_VIDEO_CACHE_IT, "Disattiva la cache video"},
/* ko */ {IDCLS_DISABLE_VIDEO_CACHE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_VIDEO_CACHE_NL, "Videocache uitschakelen"},
/* pl */ {IDCLS_DISABLE_VIDEO_CACHE_PL, "Wy��cz cache wideo"},
/* ru */ {IDCLS_DISABLE_VIDEO_CACHE_RU, "Disable the video cache"},
/* sv */ {IDCLS_DISABLE_VIDEO_CACHE_SV, "Inaktivera videocache"},
/* tr */ {IDCLS_DISABLE_VIDEO_CACHE_TR, "G�r�nt� �nbelle�ini pasifle�tir"},
#endif

#if defined(HAVE_RS232DEV) || defined(HAVE_RS232NET)
/* rs232drv/rs232drv.c */
/* en */ {IDCLS_SPECIFY_RS232_1_NAME,    N_("Specify name of first RS232 device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_RS232_1_NAME_DA, "Angiv navn p� f�rste RS232-enhed"},
/* de */ {IDCLS_SPECIFY_RS232_1_NAME_DE, "Name f�r erstes RS232 Ger�t w�hlen"},
/* es */ {IDCLS_SPECIFY_RS232_1_NAME_ES, "Especificar el nombre del primer perif�rico RS232"},
/* fr */ {IDCLS_SPECIFY_RS232_1_NAME_FR, "Sp�cifier le nom du 1er p�riph�rique RS232"},
/* hu */ {IDCLS_SPECIFY_RS232_1_NAME_HU, "Adja meg az els� RS232-es eszk�z nev�t"},
/* it */ {IDCLS_SPECIFY_RS232_1_NAME_IT, "Specifica il nome della prima RS232"},
/* ko */ {IDCLS_SPECIFY_RS232_1_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_RS232_1_NAME_NL, "Geef de naam van het eerste RS232 apparaat"},
/* pl */ {IDCLS_SPECIFY_RS232_1_NAME_PL, "Okre�l nazw� pierwszego urz�dzenia RS232"},
/* ru */ {IDCLS_SPECIFY_RS232_1_NAME_RU, "Specify name of first RS232 device"},
/* sv */ {IDCLS_SPECIFY_RS232_1_NAME_SV, "Ange namn p� f�rsta RS232-enheten"},
/* tr */ {IDCLS_SPECIFY_RS232_1_NAME_TR, "�lk RS232 ayg�t�n�n ismini belirt"},
#endif

/* rs232drv/rs232drv.c */
/* en */ {IDCLS_SPECIFY_RS232_2_NAME,    N_("Specify name of second RS232 device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_RS232_2_NAME_DA, "Angiv navn p� anden RS232-enhed"},
/* de */ {IDCLS_SPECIFY_RS232_2_NAME_DE, "Name f�r zweites RS232 Ger�t w�hlen"},
/* es */ {IDCLS_SPECIFY_RS232_2_NAME_ES, "Especificar el nombre del segundo perif�rico RS232"},
/* fr */ {IDCLS_SPECIFY_RS232_2_NAME_FR, "Sp�cifier le nom du 2e p�riph�rique RS232"},
/* hu */ {IDCLS_SPECIFY_RS232_2_NAME_HU, "Adja meg a m�sodik RS232-es eszk�z nev�t"},
/* it */ {IDCLS_SPECIFY_RS232_2_NAME_IT, "Specifica il nome della seconda RS232"},
/* ko */ {IDCLS_SPECIFY_RS232_2_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_RS232_2_NAME_NL, "Geef de naam van het tweede RS232 apparaat"},
/* pl */ {IDCLS_SPECIFY_RS232_2_NAME_PL, "Okre�l nazw� drugiego urz�dzenia RS232"},
/* ru */ {IDCLS_SPECIFY_RS232_2_NAME_RU, "Specify name of second RS232 device"},
/* sv */ {IDCLS_SPECIFY_RS232_2_NAME_SV, "Ange namn p� andra RS232-enheten"},
/* tr */ {IDCLS_SPECIFY_RS232_2_NAME_TR, "�kinci RS232 ayg�t�n�n ismini belirt"},
#endif

/* rs232drv/rs232drv.c */
/* en */ {IDCLS_SPECIFY_RS232_3_NAME,    N_("Specify name of third RS232 device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_RS232_3_NAME_DA, "Angiv navn p� tredje RS232-enhed"},
/* de */ {IDCLS_SPECIFY_RS232_3_NAME_DE, "Name f�r drittes RS232 Ger�t w�hlen"},
/* es */ {IDCLS_SPECIFY_RS232_3_NAME_ES, "Especificar el nombre del tercer perif�rico RS232"},
/* fr */ {IDCLS_SPECIFY_RS232_3_NAME_FR, "Sp�cifier le nom du 3e p�riph�rique RS232"},
/* hu */ {IDCLS_SPECIFY_RS232_3_NAME_HU, "Adja meg a harmadik RS232-es eszk�z nev�t"},
/* it */ {IDCLS_SPECIFY_RS232_3_NAME_IT, "Specifica il nome della terza RS232"},
/* ko */ {IDCLS_SPECIFY_RS232_3_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_RS232_3_NAME_NL, "Geef de naam van het derde RS232 apparaat"},
/* pl */ {IDCLS_SPECIFY_RS232_3_NAME_PL, "Okre�l nazw� trzeciego urz�dzenia RS232"},
/* ru */ {IDCLS_SPECIFY_RS232_3_NAME_RU, "Specify name of third RS232 device"},
/* sv */ {IDCLS_SPECIFY_RS232_3_NAME_SV, "Ange namn p� tredje RS232-enheten"},
/* tr */ {IDCLS_SPECIFY_RS232_3_NAME_TR, "���nc� RS232 ayg�t�n�n ismini belirt"},
#endif

/* rs232drv/rs232drv.c */
/* en */ {IDCLS_SPECIFY_RS232_4_NAME,    N_("Specify name of fourth RS232 device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_RS232_4_NAME_DA, "Angiv navn p� fjerde RS232-enhed"},
/* de */ {IDCLS_SPECIFY_RS232_4_NAME_DE, "Name f�r viertes RS232 Ger�t w�hlen"},
/* es */ {IDCLS_SPECIFY_RS232_4_NAME_ES, "Especificar el nombre del cuarto perif�rico RS232"},
/* fr */ {IDCLS_SPECIFY_RS232_4_NAME_FR, "Sp�cifier le nom du 4e p�riph�rique RS232"},
/* hu */ {IDCLS_SPECIFY_RS232_4_NAME_HU, "Adja meg a negyedik RS232-es eszk�z nev�t"},
/* it */ {IDCLS_SPECIFY_RS232_4_NAME_IT, "Specifica il nome della quarta RS232"},
/* ko */ {IDCLS_SPECIFY_RS232_4_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_RS232_4_NAME_NL, "Geef de naam van het vierde RS232 apparaat"},
/* pl */ {IDCLS_SPECIFY_RS232_4_NAME_PL, "Okre�l nazw� czwartego urz�dzenia RS232"},
/* ru */ {IDCLS_SPECIFY_RS232_4_NAME_RU, "Specify name of fourth RS232 device"},
/* sv */ {IDCLS_SPECIFY_RS232_4_NAME_SV, "Ange namn p� fj�rde RS232-enheten"},
/* tr */ {IDCLS_SPECIFY_RS232_4_NAME_TR, "D�rd�nc� RS232 ayg�t�n�n ismini belirt"},
#endif
#endif

/* rs232drv/rsuser.c */
/* en */ {IDCLS_ENABLE_RS232_USERPORT,    N_("Enable RS232 userport emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_RS232_USERPORT_DA, "Aktiv�r RS232-emulering p� brugerporten"},
/* de */ {IDCLS_ENABLE_RS232_USERPORT_DE, "RS232 Userport Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_RS232_USERPORT_ES, "Permitir Emulaci�n puerto RS232"},
/* fr */ {IDCLS_ENABLE_RS232_USERPORT_FR, "Activer l'�mulation de p�riph�rique RS232 userport"},
/* hu */ {IDCLS_ENABLE_RS232_USERPORT_HU, "RS232 userport emul�ci� enged�lyez�se"},
/* it */ {IDCLS_ENABLE_RS232_USERPORT_IT, "Attiva l'emulazione della RS232 su userport"},
/* ko */ {IDCLS_ENABLE_RS232_USERPORT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_RS232_USERPORT_NL, "RS232 userportemulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_RS232_USERPORT_PL, "W��cz emulacj� userportu RS232"},
/* ru */ {IDCLS_ENABLE_RS232_USERPORT_RU, "Enable RS232 userport emulation"},
/* sv */ {IDCLS_ENABLE_RS232_USERPORT_SV, "Aktivera RS232-emulering p� anv�ndarporten"},
/* tr */ {IDCLS_ENABLE_RS232_USERPORT_TR, "RS232 userport em�lasyonunu aktif et"},
#endif

/* rs232drv/rsuser.c */
/* en */ {IDCLS_DISABLE_RS232_USERPORT,    N_("Disable RS232 userport emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_RS232_USERPORT_DA, "Deaktiv�r RS232-emulering p� brugerporten"},
/* de */ {IDCLS_DISABLE_RS232_USERPORT_DE, "RS232 Userport Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_RS232_USERPORT_ES, "Deshabilitar Emulaci�n puerto RS232"},
/* fr */ {IDCLS_DISABLE_RS232_USERPORT_FR, "D�sactiver l'�mulation de p�riph�rique RS232 userport"},
/* hu */ {IDCLS_DISABLE_RS232_USERPORT_HU, "RS232 userport emul�ci� tilt�sa"},
/* it */ {IDCLS_DISABLE_RS232_USERPORT_IT, "Disattiva l'emulazione della RS232 su userport"},
/* ko */ {IDCLS_DISABLE_RS232_USERPORT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_RS232_USERPORT_NL, "RS232 userportemulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_RS232_USERPORT_PL, "Wy��cz emulacj� userportu RS232"},
/* ru */ {IDCLS_DISABLE_RS232_USERPORT_RU, "Disable RS232 userport emulation"},
/* sv */ {IDCLS_DISABLE_RS232_USERPORT_SV, "Inaktivera RS232-emulering p� anv�ndarporten"},
/* tr */ {IDCLS_DISABLE_RS232_USERPORT_TR, "RS232 userport em�lasyonunu pasifle�tir"},
#endif

/* rs232drv/rsuser.c */
/* en */ {IDCLS_P_BAUD,    N_("<baud>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_BAUD_DA, "<baud>"},
/* de */ {IDCLS_P_BAUD_DE, "<Baud>"},
/* es */ {IDCLS_P_BAUD_ES, "<baudios>"},
/* fr */ {IDCLS_P_BAUD_FR, "<baud>"},
/* hu */ {IDCLS_P_BAUD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_BAUD_IT, "<baud>"},
/* ko */ {IDCLS_P_BAUD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_BAUD_NL, "<baud>"},
/* pl */ {IDCLS_P_BAUD_PL, "<bod>"},
/* ru */ {IDCLS_P_BAUD_RU, "<baud>"},
/* sv */ {IDCLS_P_BAUD_SV, "<baud>"},
/* tr */ {IDCLS_P_BAUD_TR, "<baud>"},
#endif

/* rs232drv/rsuser.c */
/* en */ {IDCLS_SET_BAUD_RS232_USERPORT,    N_("Set the baud rate of the RS232 userport emulation.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_BAUD_RS232_USERPORT_DA, "Angiv baudhastighet for RS232-emuleringen p� brugerporten."},
/* de */ {IDCLS_SET_BAUD_RS232_USERPORT_DE, "Baudrate f�r RS232 Userport Emulation setzen"},
/* es */ {IDCLS_SET_BAUD_RS232_USERPORT_ES, "Seleccionar velocidad (baudios) para Emulaci�n puerto RS232"},
/* fr */ {IDCLS_SET_BAUD_RS232_USERPORT_FR, "Sp�cifiez la vitesse en baud du p�riph�rique RS232 userport"},
/* hu */ {IDCLS_SET_BAUD_RS232_USERPORT_HU, "Bitr�ta megad�sa az RS232 userport emul�ci�hoz."},
/* it */ {IDCLS_SET_BAUD_RS232_USERPORT_IT, "Imposta la velocit� della RS232 su userport (in baud)"},
/* ko */ {IDCLS_SET_BAUD_RS232_USERPORT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_BAUD_RS232_USERPORT_NL, "Stel de baud rate in van de RS232 userport emulatie."},
/* pl */ {IDCLS_SET_BAUD_RS232_USERPORT_PL, "Okre�l pr�dko�� transmisji emulacji userportu RS232."},
/* ru */ {IDCLS_SET_BAUD_RS232_USERPORT_RU, "Set the baud rate of the RS232 userport emulation."},
/* sv */ {IDCLS_SET_BAUD_RS232_USERPORT_SV, "Ange baudhastighet f�r RS232-emuleringen p� anv�ndarporten."},
/* tr */ {IDCLS_SET_BAUD_RS232_USERPORT_TR, "RS232 userport em�lasyonunun baud rate'ini ayarla."},
#endif

/* rs232drv/rsuser.c */
/* en */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT,    N_("Specify VICE RS232 device for userport")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_DA, "Angiv VICE RS232-enhed for brugerporten"},
/* de */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_DE, "VICE RS232 Ger�t f�r Userport w�hlen"},
/* es */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_ES, "Especificar perif�rico VICE RS232 para puerto usuario"},
/* fr */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_FR, "Sp�cifier un p�riph�rique VICE RS232 pour le userport"},
/* hu */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_HU, "VICE RS232-es userport eszk�z megad�sa"},
/* it */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_IT, "Specifica il dispositivo RS232 di VICE per userport"},
/* ko */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_NL, "Geef VICE RS232 apparaat voor userport"},
/* pl */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_PL, "Okre�l urz�dzenie VICE RS232 w userporcie"},
/* ru */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_RU, "Specify VICE RS232 device for userport"},
/* sv */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_SV, "Ange VICE RS232-enhet f�r anv�ndarporten"},
/* tr */ {IDCLS_SPECIFY_RS232_DEVICE_USERPORT_TR, "Userport i�in VICE RS232 ayg�t�n� belirt"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_4,    N_("Enable IEC device emulation for device #4")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_4_DA, "Aktiv�r IEC-enhedsemulering for enhed #4"},
/* de */ {IDCLS_ENABLE_IEC_4_DE, "IEC Ger�te Emulation f�r Ger�t #4 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_4_ES, "Permitir emulaci�n IEC para perif�rico #4 "},
/* fr */ {IDCLS_ENABLE_IEC_4_FR, "Activer l'�mulation IEC pour le p�riph�rique #4"},
/* hu */ {IDCLS_ENABLE_IEC_4_HU, "IEC eszk�z #4 emul�ci�j�nak enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEC_4_IT, "Attiva emulazione IEC per la periferica #4"},
/* ko */ {IDCLS_ENABLE_IEC_4_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_4_NL, "IEC apparaat emulatie voor apparaat #4 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_4_PL, "W��cz emulacj� IEC urz�dzenia #4"},
/* ru */ {IDCLS_ENABLE_IEC_4_RU, "Enable IEC device emulation for device #4"},
/* sv */ {IDCLS_ENABLE_IEC_4_SV, "Aktivera IEC-enhetsemulering f�r enhet 4"},
/* tr */ {IDCLS_ENABLE_IEC_4_TR, "Ayg�t #4 i�in IEC ayg�t em�lasyonunu aktif et"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_4,    N_("Disable IEC device emulation for device #4")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_4_DA, "Deaktiv�r IEC-enhedsemulering for enhed #4"},
/* de */ {IDCLS_DISABLE_IEC_4_DE, "IEC Ger�te Emulation f�r Ger�t #4 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_4_ES, "Deshabilitar emulaci�n IEC para perif�rico #4 "},
/* fr */ {IDCLS_DISABLE_IEC_4_FR, "D�sactiver l'�mulation IEC pour le p�riph�rique #4"},
/* hu */ {IDCLS_DISABLE_IEC_4_HU, "IEC eszk�z #4 emul�ci�j�nak tilt�sa"},
/* it */ {IDCLS_DISABLE_IEC_4_IT, "Disattiva emulazione IEC per la periferica #4"},
/* ko */ {IDCLS_DISABLE_IEC_4_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_4_NL, "IEC apparaat emulatie voor apparaat #4 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_4_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #4"},
/* ru */ {IDCLS_DISABLE_IEC_4_RU, "Disable IEC device emulation for device #4"},
/* sv */ {IDCLS_DISABLE_IEC_4_SV, "Inaktivera IEC-enhetsemulering f�r enhet 4"},
/* tr */ {IDCLS_DISABLE_IEC_4_TR, "Ayg�t #4 i�in IEC ayg�t em�lasyonunu pasifle�tir"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_5,    N_("Enable IEC device emulation for device #5")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_5_DA, "Aktiv�r IEC-enhedsemulering for enhed #5"},
/* de */ {IDCLS_ENABLE_IEC_5_DE, "IEC Ger�te Emulation f�r Ger�t #5 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_5_ES, "Permitir emulaci�n IEC para perif�rico #5"},
/* fr */ {IDCLS_ENABLE_IEC_5_FR, "Activer l'�mulation IEC pour le p�riph�rique #5"},
/* hu */ {IDCLS_ENABLE_IEC_5_HU, "IEC eszk�z #5 emul�ci�j�nak enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEC_5_IT, "Attiva emulazione IEC per la periferica #5"},
/* ko */ {IDCLS_ENABLE_IEC_5_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_5_NL, "IEC apparaat emulatie voor apparaat #5 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_5_PL, "W��cz emulacj� IEC urz�dzenia #5"},
/* ru */ {IDCLS_ENABLE_IEC_5_RU, "Enable IEC device emulation for device #5"},
/* sv */ {IDCLS_ENABLE_IEC_5_SV, "Aktivera IEC-enhetsemulering f�r enhet 5"},
/* tr */ {IDCLS_ENABLE_IEC_5_TR, "Ayg�t #5 i�in IEC ayg�t em�lasyonunu aktif et"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_5,    N_("Disable IEC device emulation for device #5")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_5_DA, "Deaktiv�r IEC-enhedsemulering for enhed #5"},
/* de */ {IDCLS_DISABLE_IEC_5_DE, "IEC Ger�te Emulation f�r Ger�t #5 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_5_ES, "Deshabilitar emulaci�n IEC para perif�rico #5"},
/* fr */ {IDCLS_DISABLE_IEC_5_FR, "D�sactiver l'�mulation IEC pour le p�riph�rique #5"},
/* hu */ {IDCLS_DISABLE_IEC_5_HU, "IEC eszk�z #5 emul�ci�j�nak tilt�sa"},
/* it */ {IDCLS_DISABLE_IEC_5_IT, "Disattiva emulazione IEC per la periferica #5"},
/* ko */ {IDCLS_DISABLE_IEC_5_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_5_NL, "IEC apparaat emulatie voor apparaat #5 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_5_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #5"},
/* ru */ {IDCLS_DISABLE_IEC_5_RU, "Disable IEC device emulation for device #5"},
/* sv */ {IDCLS_DISABLE_IEC_5_SV, "Inaktivera IEC-enhetsemulering f�r enhet 5"},
/* tr */ {IDCLS_DISABLE_IEC_5_TR, "Ayg�t #5 i�in IEC ayg�t em�lasyonunu pasifle�tir"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_6,    N_("Enable IEC device emulation for device #6")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_6_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_IEC_6_DE, "IEC Ger�te Emulation f�r Ger�t #6 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_6_ES, "Permitir emulaci�n IEC para perif�rico #6"},
/* fr */ {IDCLS_ENABLE_IEC_6_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_IEC_6_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_IEC_6_IT, "Attiva emulazione IEC per la periferica #6"},
/* ko */ {IDCLS_ENABLE_IEC_6_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_6_NL, "IEC apparaat emulatie voor apparaat #6 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_6_PL, "W��cz emulacj� IEC urz�dzenia #6"},
/* ru */ {IDCLS_ENABLE_IEC_6_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_IEC_6_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_IEC_6_TR, ""},  /* fuzzy */
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_6,    N_("Disable IEC device emulation for device #6")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_6_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_IEC_6_DE, "IEC Ger�te Emulation f�r Ger�t #6 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_6_ES, "Deshabilitar emulaci�n IEC para perif�rico #6"},
/* fr */ {IDCLS_DISABLE_IEC_6_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_IEC_6_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_IEC_6_IT, "Disattiva emulazione IEC per la periferica #6"},
/* ko */ {IDCLS_DISABLE_IEC_6_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_6_NL, "IEC apparaat emulatie voor apparaat #6 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_6_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #6"},
/* ru */ {IDCLS_DISABLE_IEC_6_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_IEC_6_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_IEC_6_TR, ""},  /* fuzzy */
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_7,    N_("Enable IEC device emulation for device #7")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_7_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_IEC_7_DE, "IEC Ger�te Emulation f�r Ger�t #7 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_7_ES, "Permitir emulaci�n IEC para perif�rico #7"},
/* fr */ {IDCLS_ENABLE_IEC_7_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_IEC_7_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_IEC_7_IT, "Attiva emulazione IEC per la periferica #7"},
/* ko */ {IDCLS_ENABLE_IEC_7_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_7_NL, "IEC apparaat emulatie voor apparaat #7 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_7_PL, "W��cz emulacj� IEC urz�dzenia #7"},
/* ru */ {IDCLS_ENABLE_IEC_7_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_IEC_7_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_IEC_7_TR, ""},  /* fuzzy */
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_7,    N_("Disable IEC device emulation for device #7")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_7_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_IEC_7_DE, "IEC Ger�te Emulation f�r Ger�t #7 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_7_ES, "Deshabilitar emulaci�n IEC para perif�rico #7"},
/* fr */ {IDCLS_DISABLE_IEC_7_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_IEC_7_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_IEC_7_IT, "Disattiva emulazione IEC per la periferica #7"},
/* ko */ {IDCLS_DISABLE_IEC_7_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_7_NL, "IEC apparaat emulatie voor apparaat #7 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_7_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #7"},
/* ru */ {IDCLS_DISABLE_IEC_7_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_IEC_7_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_IEC_7_TR, ""},  /* fuzzy */
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_8,    N_("Enable IEC device emulation for device #8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_8_DA, "Aktiv�r IEC-enhedsemulering for enhed #8"},
/* de */ {IDCLS_ENABLE_IEC_8_DE, "IEC Ger�te Emulation f�r Ger�t #8 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_8_ES, "Permitir emulaci�n IEC para perif�rico #8"},
/* fr */ {IDCLS_ENABLE_IEC_8_FR, "Activer l'�mulation IEC pour le lecteur #8"},
/* hu */ {IDCLS_ENABLE_IEC_8_HU, "IEC eszk�z #8 emul�ci�j�nak enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEC_8_IT, "Attiva emulazione IEC per la periferica #8"},
/* ko */ {IDCLS_ENABLE_IEC_8_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_8_NL, "IEC apparaat emulatie voor apparaat #8 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_8_PL, "W��cz emulacj� IEC urz�dzenia #8"},
/* ru */ {IDCLS_ENABLE_IEC_8_RU, "Enable IEC device emulation for device #8"},
/* sv */ {IDCLS_ENABLE_IEC_8_SV, "Aktivera IEC-enhetsemulering f�r enhet 8"},
/* tr */ {IDCLS_ENABLE_IEC_8_TR, "Ayg�t #8 i�in IEC ayg�t em�lasyonunu aktif et"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_8,    N_("Disable IEC device emulation for device #8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_8_DA, "Deaktiv�r IEC-enhedsemulering for enhed #8"},
/* de */ {IDCLS_DISABLE_IEC_8_DE, "IEC Ger�te Emulation f�r Ger�t #8 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_8_ES, "Deshabilitar emulaci�n IEC para perif�rico #8"},
/* fr */ {IDCLS_DISABLE_IEC_8_FR, "D�sactiver l'�mulation IEC pour le lecteur #8"},
/* hu */ {IDCLS_DISABLE_IEC_8_HU, "IEC eszk�z #8 emul�ci�j�nak tilt�sa"},
/* it */ {IDCLS_DISABLE_IEC_8_IT, "Disattiva emulazione IEC per la periferica #8"},
/* ko */ {IDCLS_DISABLE_IEC_8_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_8_NL, "IEC apparaat emulatie voor apparaat #8 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_8_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #8"},
/* ru */ {IDCLS_DISABLE_IEC_8_RU, "Disable IEC device emulation for device #8"},
/* sv */ {IDCLS_DISABLE_IEC_8_SV, "Inaktivera IEC-enhetsemulering f�r enhet 8"},
/* tr */ {IDCLS_DISABLE_IEC_8_TR, "Ayg�t #8 i�in IEC ayg�t em�lasyonunu pasifle�tir"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_9,    N_("Enable IEC device emulation for device #9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_9_DA, "Aktiv�r IEC-enhedsemulering for enhed #9"},
/* de */ {IDCLS_ENABLE_IEC_9_DE, "IEC Ger�te Emulation f�r Ger�t #9 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_9_ES, "Permitir emulaci�n IEC para perif�rico #9"},
/* fr */ {IDCLS_ENABLE_IEC_9_FR, "Activer l'�mulation IEC pour le lecteur #9"},
/* hu */ {IDCLS_ENABLE_IEC_9_HU, "IEC eszk�z #9 emul�ci�j�nak enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEC_9_IT, "Attiva emulazione IEC per la periferica #9"},
/* ko */ {IDCLS_ENABLE_IEC_9_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_9_NL, "IEC apparaat emulatie voor apparaat #9 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_9_PL, "W��cz emulacj� IEC urz�dzenia #9"},
/* ru */ {IDCLS_ENABLE_IEC_9_RU, "Enable IEC device emulation for device #9"},
/* sv */ {IDCLS_ENABLE_IEC_9_SV, "Aktivera IEC-enhetsemulering f�r enhet 9"},
/* tr */ {IDCLS_ENABLE_IEC_9_TR, "Ayg�t #9 i�in IEC ayg�t em�lasyonunu aktif et"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_9,    N_("Disable IEC device emulation for device #9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_9_DA, "Deaktiv�r IEC-enhedsemulering for enhed #9"},
/* de */ {IDCLS_DISABLE_IEC_9_DE, "IEC Ger�te Emulation f�r Ger�t #9 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_9_ES, "Deshabilitar emulaci�n IEC para perif�rico #9"},
/* fr */ {IDCLS_DISABLE_IEC_9_FR, "D�sactiver l'�mulation IEC pour le lecteur #9"},
/* hu */ {IDCLS_DISABLE_IEC_9_HU, "IEC eszk�z #9 emul�ci�j�nak tilt�sa"},
/* it */ {IDCLS_DISABLE_IEC_9_IT, "Disattiva emulazione IEC per la periferica #9"},
/* ko */ {IDCLS_DISABLE_IEC_9_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_9_NL, "IEC apparaat emulatie voor apparaat #9 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_9_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #9"},
/* ru */ {IDCLS_DISABLE_IEC_9_RU, "Disable IEC device emulation for device #9"},
/* sv */ {IDCLS_DISABLE_IEC_9_SV, "Inaktivera IEC-enhetsemulering f�r enhet 9"},
/* tr */ {IDCLS_DISABLE_IEC_9_TR, "Ayg�t #9 i�in IEC ayg�t em�lasyonunu pasifle�tir"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_10,    N_("Enable IEC device emulation for device #10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_10_DA, "Aktiv�r IEC-enhedsemulering for enhed #10"},
/* de */ {IDCLS_ENABLE_IEC_10_DE, "IEC Ger�te Emulation f�r Ger�t #10 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_10_ES, "Permitir emulaci�n IEC para perif�rico #10"},
/* fr */ {IDCLS_ENABLE_IEC_10_FR, "Activer l'�mulation IEC pour le lecteur #10"},
/* hu */ {IDCLS_ENABLE_IEC_10_HU, "IEC eszk�z #10 emul�ci�j�nak enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEC_10_IT, "Attiva emulazione IEC per la periferica #10"},
/* ko */ {IDCLS_ENABLE_IEC_10_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_10_NL, "IEC apparaat emulatie voor apparaat #10 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_10_PL, "W��cz emulacj� IEC urz�dzenia #10"},
/* ru */ {IDCLS_ENABLE_IEC_10_RU, "Enable IEC device emulation for device #10"},
/* sv */ {IDCLS_ENABLE_IEC_10_SV, "Aktivera IEC-enhetsemulering f�r enhet 10"},
/* tr */ {IDCLS_ENABLE_IEC_10_TR, "Ayg�t #10 i�in IEC ayg�t em�lasyonunu aktif et"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_10,    N_("Disable IEC device emulation for device #10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_10_DA, "Deaktiv�r IEC-enhedsemulering for enhed #10"},
/* de */ {IDCLS_DISABLE_IEC_10_DE, "IEC Ger�te Emulation f�r Ger�t #10 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_10_ES, "Deshabilitar emulaci�n IEC para perif�rico #10"},
/* fr */ {IDCLS_DISABLE_IEC_10_FR, "D�sactiver l'�mulation IEC pour le lecteur #10"},
/* hu */ {IDCLS_DISABLE_IEC_10_HU, "IEC eszk�z #10 emul�ci�j�nak tilt�sa"},
/* it */ {IDCLS_DISABLE_IEC_10_IT, "Disattiva emulazione IEC per la periferica #10"},
/* ko */ {IDCLS_DISABLE_IEC_10_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_10_NL, "IEC apparaat emulatie voor apparaat #10 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_10_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #10"},
/* ru */ {IDCLS_DISABLE_IEC_10_RU, "Disable IEC device emulation for device #10"},
/* sv */ {IDCLS_DISABLE_IEC_10_SV, "Inaktivera IEC-enhetsemulering f�r enhet 10"},
/* tr */ {IDCLS_DISABLE_IEC_10_TR, "Ayg�t #10 i�in IEC ayg�t em�lasyonunu pasifle�tir"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_ENABLE_IEC_11,    N_("Enable IEC device emulation for device #11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IEC_11_DA, "Aktiv�r IEC-enhedsemulering for enhed #11"},
/* de */ {IDCLS_ENABLE_IEC_11_DE, "IEC Ger�te Emulation f�r Ger�t #11 aktivieren"},
/* es */ {IDCLS_ENABLE_IEC_11_ES, "Permitir emulaci�n IEC para perif�rico #11"},
/* fr */ {IDCLS_ENABLE_IEC_11_FR, "Activer l'�mulation IEC pour le lecteur #11"},
/* hu */ {IDCLS_ENABLE_IEC_11_HU, "IEC eszk�z #11 emul�ci�j�nak enged�lyez�se"},
/* it */ {IDCLS_ENABLE_IEC_11_IT, "Attiva emulazione IEC per la periferica #11"},
/* ko */ {IDCLS_ENABLE_IEC_11_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IEC_11_NL, "IEC apparaat emulatie voor apparaat #11 inschakelen"},
/* pl */ {IDCLS_ENABLE_IEC_11_PL, "W��cz emulacj� IEC urz�dzenia #11"},
/* ru */ {IDCLS_ENABLE_IEC_11_RU, "Enable IEC device emulation for device #11"},
/* sv */ {IDCLS_ENABLE_IEC_11_SV, "Aktivera IEC-enhetsemulering f�r enhet 11"},
/* tr */ {IDCLS_ENABLE_IEC_11_TR, "Ayg�t #11 i�in IEC ayg�t em�lasyonunu aktif et"},
#endif

/* serial/serial-iec-device.c */
/* en */ {IDCLS_DISABLE_IEC_11,    N_("Disable IEC device emulation for device #11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IEC_11_DA, "Deaktiv�r IEC-enhedsemulering for enhed #11"},
/* de */ {IDCLS_DISABLE_IEC_11_DE, "IEC Ger�te Emulation f�r Ger�t #11 deaktivieren"},
/* es */ {IDCLS_DISABLE_IEC_11_ES, "Deshabilitar emulaci�n IEC para perif�rico #11"},
/* fr */ {IDCLS_DISABLE_IEC_11_FR, "D�sactiver l'�mulation IEC pour le lecteur #11"},
/* hu */ {IDCLS_DISABLE_IEC_11_HU, "IEC eszk�z #11 emul�ci�j�nak tilt�sa"},
/* it */ {IDCLS_DISABLE_IEC_11_IT, "Disattiva emulazione IEC per la periferica #11"},
/* ko */ {IDCLS_DISABLE_IEC_11_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IEC_11_NL, "IEC apparaat emulatie voor apparaat #11 uitschakelen"},
/* pl */ {IDCLS_DISABLE_IEC_11_PL, "Wy��cz emulacj� urz�dzenia IEC dla urz�dzenia #11"},
/* ru */ {IDCLS_DISABLE_IEC_11_RU, "Disable IEC device emulation for device #11"},
/* sv */ {IDCLS_DISABLE_IEC_11_SV, "Inaktivera IEC-enhetsemulering f�r enhet 11"},
/* tr */ {IDCLS_DISABLE_IEC_11_TR, "Ayg�t #11 i�in IEC ayg�t em�lasyonunu pasifle�tir"},
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_ENABLE_SIDCART,    N_("Enable the SID cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SIDCART_DA, "Aktiv�r SID-cartridget"},
/* de */ {IDCLS_ENABLE_SIDCART_DE, "SID Modul aktivieren"},
/* es */ {IDCLS_ENABLE_SIDCART_ES, "Permitir cartucho SID"},
/* fr */ {IDCLS_ENABLE_SIDCART_FR, "Activer la cartouche SID"},
/* hu */ {IDCLS_ENABLE_SIDCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SIDCART_IT, "Attiva cartuccia SID"},
/* ko */ {IDCLS_ENABLE_SIDCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SIDCART_NL, "SID cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_SIDCART_PL, "W��cz kartrid� SID"},
/* ru */ {IDCLS_ENABLE_SIDCART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SIDCART_SV, "Aktivera SID-insticksmodul"},
/* tr */ {IDCLS_ENABLE_SIDCART_TR, "SID kartu�unu aktif et"},
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_DISABLE_SIDCART,    N_("Disable the SID cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SIDCART_DA, "Deaktiv�r SID-cartridge"},
/* de */ {IDCLS_DISABLE_SIDCART_DE, "SID Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_SIDCART_ES, "Deshabilitar cartucho SID"},
/* fr */ {IDCLS_DISABLE_SIDCART_FR, "D�sactiver la cartouche SID"},
/* hu */ {IDCLS_DISABLE_SIDCART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SIDCART_IT, "Disattiva la cartuccia SID"},
/* ko */ {IDCLS_DISABLE_SIDCART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SIDCART_NL, "SID cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_SIDCART_PL, "Wy��cz kartrid� SID"},
/* ru */ {IDCLS_DISABLE_SIDCART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SIDCART_SV, "Inaktivera SID-insticksmodul"},
/* tr */ {IDCLS_DISABLE_SIDCART_TR, "SID kartu�unu pasifle�tir"},
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_PET_SIDCART_ADDRESS,    N_("SID cartridge address (0x8F00/0xE900)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET_SIDCART_ADDRESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PET_SIDCART_ADDRESS_DE, "SID Modul Adresse (0x8F00/0xE900)"},
/* es */ {IDCLS_PET_SIDCART_ADDRESS_ES, "Direcci�n del cartucho SID (0x8F00/0xE900)"},
/* fr */ {IDCLS_PET_SIDCART_ADDRESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PET_SIDCART_ADDRESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PET_SIDCART_ADDRESS_IT, "Indirizzo cartuccia SID (0x8F00/0xE900)"},
/* ko */ {IDCLS_PET_SIDCART_ADDRESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET_SIDCART_ADDRESS_NL, "SID cartridge adres (0x8F00/0xE900)"},
/* pl */ {IDCLS_PET_SIDCART_ADDRESS_PL, "Adres kartrid�a SID (0x8F00/0xE900)"},
/* ru */ {IDCLS_PET_SIDCART_ADDRESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PET_SIDCART_ADDRESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PET_SIDCART_ADDRESS_TR, ""},  /* fuzzy */
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_PLUS4_SIDCART_ADDRESS,    N_("SID cartridge address (0xFD40/0xFE80)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PLUS4_SIDCART_ADDRESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PLUS4_SIDCART_ADDRESS_DE, "SID Modul Adresse (0xFD40/0xFE80)"},
/* es */ {IDCLS_PLUS4_SIDCART_ADDRESS_ES, "Direcci�n del cartucho SID (0xFD40/0xFE80)"},
/* fr */ {IDCLS_PLUS4_SIDCART_ADDRESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PLUS4_SIDCART_ADDRESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PLUS4_SIDCART_ADDRESS_IT, "Indirizzo cartuccia SID (0xFD40/0xFE80)"},
/* ko */ {IDCLS_PLUS4_SIDCART_ADDRESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PLUS4_SIDCART_ADDRESS_NL, "SID cartridge adres (0xFD40/0xFE80)"},
/* pl */ {IDCLS_PLUS4_SIDCART_ADDRESS_PL, "Adres kartrid�a SID (0xFD40/0xFE80)"},
/* ru */ {IDCLS_PLUS4_SIDCART_ADDRESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PLUS4_SIDCART_ADDRESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PLUS4_SIDCART_ADDRESS_TR, ""},  /* fuzzy */
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_VIC20_SIDCART_ADDRESS,    N_("SID cartridge address (0x9800/0x9C00)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_VIC20_SIDCART_ADDRESS_DA, ""},  /* fuzzy */
/* de */ {IDCLS_VIC20_SIDCART_ADDRESS_DE, "SID Module Adresse (0x9800/0x9C00)"},
/* es */ {IDCLS_VIC20_SIDCART_ADDRESS_ES, "Direcci�n del cartucho SID (0x9800/0x9C00)"},
/* fr */ {IDCLS_VIC20_SIDCART_ADDRESS_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_VIC20_SIDCART_ADDRESS_HU, ""},  /* fuzzy */
/* it */ {IDCLS_VIC20_SIDCART_ADDRESS_IT, "Indirizzo cartuccia SID (0x9800/0x9C00)"},
/* ko */ {IDCLS_VIC20_SIDCART_ADDRESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_VIC20_SIDCART_ADDRESS_NL, "SID cartridge adres (0x9800/0x9C00)"},
/* pl */ {IDCLS_VIC20_SIDCART_ADDRESS_PL, "Adres kartrid�a SID (0x9800/0x9C00)"},
/* ru */ {IDCLS_VIC20_SIDCART_ADDRESS_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_VIC20_SIDCART_ADDRESS_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_VIC20_SIDCART_ADDRESS_TR, ""},  /* fuzzy */
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_PET_SIDCART_CLOCK,    N_("SID cartridge clock (0: C64 clock, 1: PET clock)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PET_SIDCART_CLOCK_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PET_SIDCART_CLOCK_DE, "SID Module Takt (0: C64 Takt, 1: PET Takt)"},
/* es */ {IDCLS_PET_SIDCART_CLOCK_ES, "Reloj del cartucho SID (0: Reloj C64, 1: Reloj PET)"},
/* fr */ {IDCLS_PET_SIDCART_CLOCK_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PET_SIDCART_CLOCK_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PET_SIDCART_CLOCK_IT, "Clock cartuccia SID (0: clock C64 , 1: clock PET)"},
/* ko */ {IDCLS_PET_SIDCART_CLOCK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PET_SIDCART_CLOCK_NL, "SID cartridge klok (0: C64 klok, 1: PET klok)"},
/* pl */ {IDCLS_PET_SIDCART_CLOCK_PL, "Zegar kartrid�a SID (0: Zegar C64, 1: Zegar PET)"},
/* ru */ {IDCLS_PET_SIDCART_CLOCK_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PET_SIDCART_CLOCK_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PET_SIDCART_CLOCK_TR, ""},  /* fuzzy */
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_PLUS4_SIDCART_CLOCK,    N_("SID cartridge clock (0: C64 clock, 1: PLUS4 clock)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PLUS4_SIDCART_CLOCK_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PLUS4_SIDCART_CLOCK_DE, "SID Modul Takt (0: C64 Takt, 1: PLUS4 Takt)"},
/* es */ {IDCLS_PLUS4_SIDCART_CLOCK_ES, "Reloj del cartucho SID (0: Reloj C64, 1: Reloj PLUS4)"},
/* fr */ {IDCLS_PLUS4_SIDCART_CLOCK_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PLUS4_SIDCART_CLOCK_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PLUS4_SIDCART_CLOCK_IT, "Clock cartuccia SID (0: clock C64 , 1: clock PLUS4)"},
/* ko */ {IDCLS_PLUS4_SIDCART_CLOCK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PLUS4_SIDCART_CLOCK_NL, "SID cartridge klok (0: C64 klok, 1: PLUS4 klok)"},
/* pl */ {IDCLS_PLUS4_SIDCART_CLOCK_PL, "Zegar kartrid�a SID (0: Zegar C64, 1: Zegar PLUS4)"},
/* ru */ {IDCLS_PLUS4_SIDCART_CLOCK_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PLUS4_SIDCART_CLOCK_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PLUS4_SIDCART_CLOCK_TR, ""},  /* fuzzy */
#endif

/* sid/sid-cmdline-options.c */
/* en */ {IDCLS_VIC20_SIDCART_CLOCK,    N_("SID cartridge clock (0: C64 clock, 1: VIC20 clock)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_VIC20_SIDCART_CLOCK_DA, ""},  /* fuzzy */
/* de */ {IDCLS_VIC20_SIDCART_CLOCK_DE, "SID Modul Takt (0: C64 Takt, 1: VIC20 Takt)"},
/* es */ {IDCLS_VIC20_SIDCART_CLOCK_ES, "Reloj del cartucho SID (0: Reloj C64, 1: Reloj VIC20)"},
/* fr */ {IDCLS_VIC20_SIDCART_CLOCK_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_VIC20_SIDCART_CLOCK_HU, ""},  /* fuzzy */
/* it */ {IDCLS_VIC20_SIDCART_CLOCK_IT, "Clock cartuccia SID (0: clock C64 , 1: clock VIC20)"},
/* ko */ {IDCLS_VIC20_SIDCART_CLOCK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_VIC20_SIDCART_CLOCK_NL, "SID cartridge klok (0: C64 klok, 1: VIC20 klok)"},
/* pl */ {IDCLS_VIC20_SIDCART_CLOCK_PL, "Zegar kartrid�a SID (0: Zegar C64, 1: Zegar VIC20)"},
/* ru */ {IDCLS_VIC20_SIDCART_CLOCK_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_VIC20_SIDCART_CLOCK_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_VIC20_SIDCART_CLOCK_TR, ""},  /* fuzzy */
#endif

/* vdc/vdc-cmdline-options.c, crtc/crtc-cmdline-options.c */
/* en */ {IDCLS_ENABLE_STRETCH_VERTICAL,    N_("Enable additional vertical stretching.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_STRETCH_VERTICAL_DA, "Aktiv�r yderligere vertikal udstr�kning"},
/* de */ {IDCLS_ENABLE_STRETCH_VERTICAL_DE, "Aktiviere zus�tzliche Vertikalstreckung."},
/* es */ {IDCLS_ENABLE_STRETCH_VERTICAL_ES, "Permitir extensi�n vertical adicional"},
/* fr */ {IDCLS_ENABLE_STRETCH_VERTICAL_FR, "Activer l'ajout d'�tirement vertical."},
/* hu */ {IDCLS_ENABLE_STRETCH_VERTICAL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_STRETCH_VERTICAL_IT, "Attiva allungamento verticale aggiuntivo."},
/* ko */ {IDCLS_ENABLE_STRETCH_VERTICAL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_STRETCH_VERTICAL_NL, "Additionele verticale rekking inschakelen."},
/* pl */ {IDCLS_ENABLE_STRETCH_VERTICAL_PL, "W��cz dodatkowe rozci�ganie w pionie"},
/* ru */ {IDCLS_ENABLE_STRETCH_VERTICAL_RU, "Enable additional vertical stretching."},
/* sv */ {IDCLS_ENABLE_STRETCH_VERTICAL_SV, "Aktivera ytterligare vertikal utdragning."},
/* tr */ {IDCLS_ENABLE_STRETCH_VERTICAL_TR, "Ek dikey uzatmay� aktif et."},
#endif

/* vdc/vdc-cmdline-options.c, crtc/crtc-cmdline-options.c */
/* en */ {IDCLS_DISABLE_STRETCH_VERTICAL,    N_("Disable additional vertical stretching.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_STRETCH_VERTICAL_DA, "Deaktiv�r yderligere vertikal udstr�kning"},
/* de */ {IDCLS_DISABLE_STRETCH_VERTICAL_DE, "Deaktiviere zus�tzliche Vertikalstreckung."},
/* es */ {IDCLS_DISABLE_STRETCH_VERTICAL_ES, "Inhabilitar extensi�n vertical adicional"},
/* fr */ {IDCLS_DISABLE_STRETCH_VERTICAL_FR, "D�sactiver l'ajout d'�tirement vertical."},
/* hu */ {IDCLS_DISABLE_STRETCH_VERTICAL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_STRETCH_VERTICAL_IT, "Disattiva allungamento verticale aggiuntivo."},
/* ko */ {IDCLS_DISABLE_STRETCH_VERTICAL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_STRETCH_VERTICAL_NL, "Additionele verticale rekking uitschakelen."},
/* pl */ {IDCLS_DISABLE_STRETCH_VERTICAL_PL, "Wy��cz dodatkowe rozci�ganie w pionie"},
/* ru */ {IDCLS_DISABLE_STRETCH_VERTICAL_RU, "Disable additional vertical stretching."},
/* sv */ {IDCLS_DISABLE_STRETCH_VERTICAL_SV, "Inaktivera ytterligare vertikal utdragning."},
/* tr */ {IDCLS_DISABLE_STRETCH_VERTICAL_TR, "Ek dikey uzatmay� pasifle�tir."},
#endif

/* vdc/vdc-cmdline-options.c */
/* en */ {IDCLS_SET_VDC_MEMORY_16KB,    N_("Set the VDC memory size to 16KB")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_VDC_MEMORY_16KB_DA, "S�t VDC-hukommelsesst�rrelse til 16KB"},
/* de */ {IDCLS_SET_VDC_MEMORY_16KB_DE, "VDC Speichgr��e auf 16KB setzen"},
/* es */ {IDCLS_SET_VDC_MEMORY_16KB_ES, "Seleccionar tama�o memoria VDC en 16KB"},
/* fr */ {IDCLS_SET_VDC_MEMORY_16KB_FR, "R�gler la taille de la m�moire VDC � 16KO"},
/* hu */ {IDCLS_SET_VDC_MEMORY_16KB_HU, "VDC mem�ria m�ret be�ll�t�sa 16KB-ra"},
/* it */ {IDCLS_SET_VDC_MEMORY_16KB_IT, "Imposta la dimensione della memoria del VDC a 16KB"},
/* ko */ {IDCLS_SET_VDC_MEMORY_16KB_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_VDC_MEMORY_16KB_NL, "Stel de VDC geheugengrootte in op 16KB"},
/* pl */ {IDCLS_SET_VDC_MEMORY_16KB_PL, "Ustaw rozmiar pami�ci VDC na 16 KB"},
/* ru */ {IDCLS_SET_VDC_MEMORY_16KB_RU, "Set the VDC memory size to 16KB"},
/* sv */ {IDCLS_SET_VDC_MEMORY_16KB_SV, "S�tt VDC-minnesstorlek till 16KB"},
/* tr */ {IDCLS_SET_VDC_MEMORY_16KB_TR, "VDC bellek boyutunu 16KB'a ayarla"},
#endif

/* vdc/vdc-cmdline-options.c */
/* en */ {IDCLS_SET_VDC_MEMORY_64KB,    N_("Set the VDC memory size to 64KB")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_VDC_MEMORY_64KB_DA, "S�t VDC-hukommelsesst�rrelse til 64KB"},
/* de */ {IDCLS_SET_VDC_MEMORY_64KB_DE, "VDC Speichgr��e auf 64KB setzen"},
/* es */ {IDCLS_SET_VDC_MEMORY_64KB_ES, "Seleccionar tama�o memoria VDC en 64KB"},
/* fr */ {IDCLS_SET_VDC_MEMORY_64KB_FR, "R�gler la taille de la m�moire VDC � 64KO"},
/* hu */ {IDCLS_SET_VDC_MEMORY_64KB_HU, "VDC mem�ria m�ret be�ll�t�sa 64KB-ra"},
/* it */ {IDCLS_SET_VDC_MEMORY_64KB_IT, "Imposta la dimensione della memoria del VDC a 64KB"},
/* ko */ {IDCLS_SET_VDC_MEMORY_64KB_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_VDC_MEMORY_64KB_NL, "Stel de VDC geheugengrootte in op 64KB"},
/* pl */ {IDCLS_SET_VDC_MEMORY_64KB_PL, "Ustaw rozmiar pami�ci VDC na 64 KB"},
/* ru */ {IDCLS_SET_VDC_MEMORY_64KB_RU, "Set the VDC memory size to 64KB"},
/* sv */ {IDCLS_SET_VDC_MEMORY_64KB_SV, "S�tt VDC-minnesstorlek till 64KB"},
/* tr */ {IDCLS_SET_VDC_MEMORY_64KB_TR, "VDC bellek boyutunu 64KB'a ayarla"},
#endif

/* vdc/vdc-cmdline-options.c */
/* en */ {IDCLS_SET_VDC_REVISION,    N_("Set VDC revision (0..2)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_VDC_REVISION_DA, "Angiv VDC-revision (0..2)"},
/* de */ {IDCLS_SET_VDC_REVISION_DE, "VDC Revision setzen (0..2)"},
/* es */ {IDCLS_SET_VDC_REVISION_ES, "Poner revisi�n VDC (0..2)"},
/* fr */ {IDCLS_SET_VDC_REVISION_FR, "R�gler la r�vision VDC (0..2)"},
/* hu */ {IDCLS_SET_VDC_REVISION_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_VDC_REVISION_IT, "Imposta la revisione del VDC (0..2)"},
/* ko */ {IDCLS_SET_VDC_REVISION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_VDC_REVISION_NL, "Stel de VDC revisie in (0..2)"},
/* pl */ {IDCLS_SET_VDC_REVISION_PL, "Okre�l wersj� VDC (0..2)"},
/* ru */ {IDCLS_SET_VDC_REVISION_RU, "Set VDC revision (0..2)"},
/* sv */ {IDCLS_SET_VDC_REVISION_SV, "Ange VDC-revision (0..2)"},
/* tr */ {IDCLS_SET_VDC_REVISION_TR, "VDC revizyonunu ayarla (0..2)"},
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_P_SPEC,    N_("<spec>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_SPEC_DA, "<spec>"},
/* de */ {IDCLS_P_SPEC_DE, "<Spec>"},
/* es */ {IDCLS_P_SPEC_ES, "<especificaciones>"},
/* fr */ {IDCLS_P_SPEC_FR, "<spec>"},
/* hu */ {IDCLS_P_SPEC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_SPEC_IT, "<spec>"},
/* ko */ {IDCLS_P_SPEC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_SPEC_NL, "<spec>"},
/* pl */ {IDCLS_P_SPEC_PL, "<spec>"},
/* ru */ {IDCLS_P_SPEC_RU, "<spec>"},
/* sv */ {IDCLS_P_SPEC_SV, "<spec>"},
/* tr */ {IDCLS_P_SPEC_TR, "<�art>"},
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_SPECIFY_MEMORY_CONFIG,    N_("Specify memory configuration. (none/3k/8k/16k/24k/all) / (0/1/2/3/5) / (04/20/40/60/a0)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_MEMORY_CONFIG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_MEMORY_CONFIG_DE, "Speicher Konfiguration w�hlen. (none/3k/8k/16k/24k/all) / (0/1/2/3/5) / (04/20/40/60/a0)"},
/* es */ {IDCLS_SPECIFY_MEMORY_CONFIG_ES, "Especificar configuraci�n de memoria. (none/3k/8k/16k/24k/all) / (0/1/2/3/5) / (04/20/40/60/a0)"},
/* fr */ {IDCLS_SPECIFY_MEMORY_CONFIG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_MEMORY_CONFIG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_MEMORY_CONFIG_IT, "Specifica la configurazione della memoria. (nessuna/3k/8k/16k/24k/tutte) / (0/1/2/3/5) / (04/20/40/60/a0)"},
/* ko */ {IDCLS_SPECIFY_MEMORY_CONFIG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_MEMORY_CONFIG_NL, "Geef geheugen configuratie. (geen/3k/8k/16k/24k/allemaal) / (0/1/2/3/5) / (04/20/40/60/a0)"},
/* pl */ {IDCLS_SPECIFY_MEMORY_CONFIG_PL, "Okre�l konfiguracj� pami�ci. (none/3k/8k/16k/24k/all) / (0/1/2/3/5) / (04/20/40/60/a0)"},
/* ru */ {IDCLS_SPECIFY_MEMORY_CONFIG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_MEMORY_CONFIG_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_MEMORY_CONFIG_TR, ""},  /* fuzzy */
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_ENABLE_VIC1112_IEEE488,    N_("Enable VIC-1112 IEEE488 interface")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_VIC1112_IEEE488_DA, "Aktiv�r VIC-1112-IEEE488-interface"},
/* de */ {IDCLS_ENABLE_VIC1112_IEEE488_DE, "VIC-1112 IEEE488 Schnittstelle aktivieren"},
/* es */ {IDCLS_ENABLE_VIC1112_IEEE488_ES, "Permitir interface VIC-1112 IEEE488"},
/* fr */ {IDCLS_ENABLE_VIC1112_IEEE488_FR, "Activer l'interface VIC-1112 IEEE488"},
/* hu */ {IDCLS_ENABLE_VIC1112_IEEE488_HU, "VIC-1112 IEEE488 interf�sz enged�lyez�se"},
/* it */ {IDCLS_ENABLE_VIC1112_IEEE488_IT, "Attiva interfaccia IEEE488 VIC-1112"},
/* ko */ {IDCLS_ENABLE_VIC1112_IEEE488_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_VIC1112_IEEE488_NL, "VIC-1112 IEEE488 interface inschakelen"},
/* pl */ {IDCLS_ENABLE_VIC1112_IEEE488_PL, "W��cz interfejs IEEE488 VIC-1112"},
/* ru */ {IDCLS_ENABLE_VIC1112_IEEE488_RU, "Enable VIC-1112 IEEE488 interface"},
/* sv */ {IDCLS_ENABLE_VIC1112_IEEE488_SV, "Aktivera VIC-1112-IEEE488-gr�nssnitt"},
/* tr */ {IDCLS_ENABLE_VIC1112_IEEE488_TR, "VIC-1112 IEEE488 arabirimini aktif et"},
#endif

/* vic20/vic20-cmdline-options.c */
/* en */ {IDCLS_DISABLE_VIC1112_IEEE488,    N_("Disable VIC-1112 IEEE488 interface")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_VIC1112_IEEE488_DA, "Deaktiv�r VIC-1112-IEEE488-interface"},
/* de */ {IDCLS_DISABLE_VIC1112_IEEE488_DE, "VIC-1112 IEEE488 Schnittstelle deaktivieren"},
/* es */ {IDCLS_DISABLE_VIC1112_IEEE488_ES, "Deshabilitar interface VIC-1112 IEEE488"},
/* fr */ {IDCLS_DISABLE_VIC1112_IEEE488_FR, "D�sactiver l'interface VIC-1112 IEEE488"},
/* hu */ {IDCLS_DISABLE_VIC1112_IEEE488_HU, "VIC-1112 IEEE488 interf�sz tilt�sa"},
/* it */ {IDCLS_DISABLE_VIC1112_IEEE488_IT, "Disattiva interfaccia IEEE488 VIC-1112"},
/* ko */ {IDCLS_DISABLE_VIC1112_IEEE488_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_VIC1112_IEEE488_NL, "VIC-1112 IEEE488 interface uitschakelen"},
/* pl */ {IDCLS_DISABLE_VIC1112_IEEE488_PL, "Wy��cz interfejs IEEE488 VIC-1112"},
/* ru */ {IDCLS_DISABLE_VIC1112_IEEE488_RU, "Disable VIC-1112 IEEE488 interface"},
/* sv */ {IDCLS_DISABLE_VIC1112_IEEE488_SV, "Inaktivera VIC-1112-IEEE488-gr�nssnitt"},
/* tr */ {IDCLS_DISABLE_VIC1112_IEEE488_TR, "VIC-1112 IEEE488 arabirimini pasifle�tir"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME,    N_("Specify 4/8/16K extension ROM name at $2000")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_DA, "Angiv navn for 4/8/16k-udviddelses-ROM p� $2000"},
/* de */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_DE, "4/8/16K Erweiterungs ROM Dateiname f�r $2000 w�hlen"},
/* es */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_ES, "Especificar nombre ROM extendida de 4/8/16KB en $2000"},
/* fr */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_FR, "Sp�cifier le nom de l'extension ROM 4/8/16K � $2000"},
/* hu */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_HU, "Adja meg a $2000 c�m� 4/8/16K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_IT, "Specifica il nome della ROM di estensione di 4/8/16K a $2000"},
/* ko */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_NL, "Geef de naam van het bestand voor de 4/8/16K ROM op $2000"},
/* pl */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_PL, "Okre�l nazw� ROM rozszerzenia 4/8/16K w $2000"},
/* ru */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_RU, "Specify 4/8/16K extension ROM name at $2000"},
/* sv */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_SV, "Ange namn f�r 4/8/16K-ut�knings-ROM p� $2000"},
/* tr */ {IDCLS_SPECIFY_EXT_ROM_2000_NAME_TR, "$2000 adresindeki 4/8/16K uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME,    N_("Specify 4/8/16K extension ROM name at $4000")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_DA, "Angiv navn for 4/8/16k-udviddelses-ROM p� $4000"},
/* de */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_DE, "4/8/16K Erweiterungs ROM Dateiname f�r $4000 w�hlen"},
/* es */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_ES, "Especificar nombre ROM extendida de 4/8/16KB en $4000"},
/* fr */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_FR, "Sp�cifier le nom de l'extension ROM 4/8/16K � $4000"},
/* hu */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_HU, "Adja meg a $4000 c�m� 4/8/16K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_IT, "Specifica il nome della ROM di estensione di 4/8/16K a $4000"},
/* ko */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_NL, "Geef de naam van het bestand voor de 4/8/16K ROM op $4000"},
/* pl */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_PL, "Okre�l nazw� ROM rozszerzenia 4/8/16K w $4000"},
/* ru */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_RU, "Specify 4/8/16K extension ROM name at $4000"},
/* sv */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_SV, "Ange namn f�r 4/8/16K-ut�knings-ROM p� $4000"},
/* tr */ {IDCLS_SPECIFY_EXT_ROM_4000_NAME_TR, "$4000 adresindeki 4/8/16K uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME,    N_("Specify 4/8/16K extension ROM name at $6000")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_DA, "Angiv navn for 4/8/16k-udviddelses-ROM p� $6000"},
/* de */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_DE, "4/8/16K Erweiterungs ROM Dateiname f�r $6000 w�hlen"},
/* es */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_ES, "Especificar nombre ROM extendida de 4/8/16KB en $6000"},
/* fr */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_FR, "Sp�cifier le nom de l'extension ROM 4/8/16K � $6000"},
/* hu */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_HU, "Adja meg a $6000 c�m� 4/8/16K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_IT, "Specifica il nome della ROM di estensione di 4/8/16K a $6000"},
/* ko */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_NL, "Geef de naam van het bestand voor de 4/8/16K ROM op $6000"},
/* pl */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_PL, "Okre�l nazw� ROM rozszerzenia 4/8/16K w $6000"},
/* ru */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_RU, "Specify 4/8/16K extension ROM name at $6000"},
/* sv */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_SV, "Ange namn f�r 4/8/16K-ut�knings-ROM p� $6000"},
/* tr */ {IDCLS_SPECIFY_EXT_ROM_6000_NAME_TR, "$6000 adresindeki 4/8/16K uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME,    N_("Specify 4/8K extension ROM name at $A000")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_DA, "Angiv navn for 4/8k-udviddelses-ROM p� $A000"},
/* de */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_DE, "4/8/16K Erweiterungs ROM Dateiname f�r $A000 w�hlen"},
/* es */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_ES, "Especificar nombre ROM extendida de 4/8KB en $A000"},
/* fr */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_FR, "Sp�cifier le nom de l'extension ROM 4/8K � $A000"},
/* hu */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_HU, "Adja meg a $A000 c�m� 4/8K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_IT, "Specifica il nome della ROM di estensione di 4/8K a $A000"},
/* ko */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_NL, "Geef de naam van het bestand voor de 4/8K ROM op $A000"},
/* pl */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_PL, "Okre�l nazw� ROM rozszerzenia 4/8/16K w $A000"},
/* ru */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_RU, "Specify 4/8K extension ROM name at $A000"},
/* sv */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_SV, "Ange namn f�r 4/8K-ut�knings-ROM p� $A000"},
/* tr */ {IDCLS_SPECIFY_EXT_ROM_A000_NAME_TR, "$A000 adresindeki 4/8K uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME,    N_("Specify 4K extension ROM name at $B000")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_DA, "Angiv navn for 4k-udviddelses-ROM p� $B000"},
/* de */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_DE, "4/8/16K Erweiterungs ROM Dateiname f�r $B000 w�hlen"},
/* es */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_ES, "Especificar nombre ROM extendida de 4KB en $B000"},
/* fr */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_FR, "Sp�cifier le nom de l'extension ROM 4K � $B000"},
/* hu */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_HU, "Adja meg a $B000 c�m� 4K ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_IT, "Specifica il nome della ROM di estensione di 4 a $B000"},
/* ko */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_NL, "Geef de naam van het bestand voor de 4K ROM op $B000"},
/* pl */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_PL, "Okre�l nazw� ROM rozszerzenia 4/8/16K w $B000"},
/* ru */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_RU, "Specify 4K extension ROM name at $B000"},
/* sv */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_SV, "Ange namn f�r 4K-ut�knings-ROM p� $B000"},
/* tr */ {IDCLS_SPECIFY_EXT_ROM_B000_NAME_TR, "$B000 adresindeki 4K uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/behrbonz.c */
/* en */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME,    N_("Specify Behr Bonz extension ROM name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_DE, "Behr Bonz Erweiterungs ROM Dateiname w�hlen"},
/* es */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_NL, "Geef de naam van het bestand voor de Behr Bonz uitbreidings ROM"},
/* pl */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_BEHRBONZ_ROM_NAME_TR, ""},  /* fuzzy */
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_GENERIC_ROM_NAME,    N_("Specify generic extension ROM name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_DA, "Angiv navn p� standard-udviddelses-ROM"},
/* de */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_DE, "Generisches Erweiterungs ROM w�hlen"},
/* es */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_ES, "Especificar nombre ROM extendida generica"},
/* fr */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_FR, "Sp�cifier le nom de l'extension ROM g�n�rique"},
/* hu */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_HU, "Adja meg az �ltal�nos ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_IT, "Specifica il nome dell'estensione ROM generica"},
/* ko */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_NL, "Geef de naam van het bestand voor de algemene ROM"},
/* pl */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_PL, "Okre�l nazw� typowego ROM-u rozszerze�"},
/* ru */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_RU, "Specify generic extension ROM name"},
/* sv */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_SV, "Ange namn p� generiskt ut�knings-ROM"},
/* tr */ {IDCLS_SPECIFY_GENERIC_ROM_NAME_TR, "Jenerik uzant� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME,    N_("Specify Mega-Cart extension ROM name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_DA, "Angiv navn p� MegaCart-udviddelses-ROM"},
/* de */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_DE, "Mega-Cart Erweiterungs ROM w�hlen"},
/* es */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_ES, "Especificar nombre ROM extendida Mega Cart"},
/* fr */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_FR, "Sp�cifier le nom de l'extension ROM Mega-Cart"},
/* hu */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_HU, "Adja meg a Mega-Cart ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_IT, "Specifica il nome dell'estensione ROM Mega-Cart"},
/* ko */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_NL, "Geef de naam van het bestand voor de Mega-Cart ROM"},
/* pl */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_PL, "Okre�l nazw� ROM rozszerzenia Mega-Cart"},
/* ru */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_RU, "Specify Mega-Cart extension ROM name"},
/* sv */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_SV, "Ange namn p� Mega-Cart-ut�knings-ROM"},
/* tr */ {IDCLS_SPECIFY_MEGA_CART_ROM_NAME_TR, "Mega-Cart uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME,    N_("Specify Final Expansion extension ROM name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_DA, "Angiv navn p� Final Expansion udviddelses-ROM"},
/* de */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_DE, "Name f�r Final Expansion Erweiterungs ROM w�hlen"},
/* es */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_ES, "Especificar nombre ROM extendida Final Expansion"},
/* fr */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_FR, "Sp�cifier le nom de l'extension ROM Final Expansion"},
/* hu */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_HU, "Adja meg a Final Expansion ROM kiterjeszt�s nev�t"},
/* it */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_IT, "Specifica il nome dell'estensione ROM Final Expansion"},
/* ko */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_NL, "Geef de naam van het bestand voor de Final Expansion ROM"},
/* pl */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_PL, "Okre�l nazw� rozszerzenia ROM Final Expansion"},
/* ru */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_RU, "Specify Final Expansion extension ROM name"},
/* sv */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_SV, "Ange namn p� Final Expansion ut�knings-ROM"},
/* tr */ {IDCLS_SPECIFY_FINAL_EXPANSION_ROM_NAME_TR, "Final Expansion uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME,    N_("Specify Vic Flash Plugin extension ROM name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_DA, "Angiv navn p� Vic Flash Plugin udviddelses-ROM"},
/* de */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_DE, "Name f�r Vic Flash Plugin Erweiterungs ROM w�hlen"},
/* es */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_ES, "Especificar nombre ROM extendida Vic Flash Plugin"},
/* fr */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_FR, "Sp�cifier le nom de l'extension ROM Vic Flash Plugin"},
/* hu */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_IT, "Specifica il nome dell'estensione ROM Vic Flash Plugin"},
/* ko */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_NL, "Geef de naam van het bestand voor de Vic Flash Plugin ROM"},
/* pl */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_PL, "Okre�l nazw� rozszerzenia ROM Vic Flash Plugin"},
/* ru */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_RU, "Specify Vic Flash Plugin extension ROM name"},
/* sv */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_SV, "Ange namn p� Vic Flash-insticksmodulut�knings-ROM"},
/* tr */ {IDCLS_SPECIFY_VIC_FP_ROM_NAME_TR, "Vic Flash Plugin uzant�s� ROM ismini belirt"},
#endif

/* vic20/cart/vic20cart.c */
/* en */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME,    N_("Specify UltiMem extension ROM name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_DE, "UltiMem Erweiterungs ROM w�hlen"},
/* es */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_NL, "Geef de naam van het bestand voor de UltiMem ROM"},
/* pl */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_VIC_UM_ROM_NAME_TR, ""},  /* fuzzy */
#endif

/* vic20/cart/finalexpansion.c */
/* en */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK,    N_("Enable Final Expansion write back to ROM file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_DA, "Aktiv�r Final Expansion tilbageskrivning til ROM-fil"},
/* de */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_DE, "Final Expansion ROM Schreibzugriff aktivieren"},
/* es */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_ES, "Permitir grabaci�n en fichero ROM Final Expansion"},
/* fr */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_FR, "Activer la r��criture du fichier ROM Final Expansion"},
/* hu */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_HU, "Final Expansion ROM f�jlba vissza�r�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_IT, "Attiva write back per Final Expansion su file ROM"},
/* ko */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_NL, "Terugschrijven naar ROM bestand voor Final Expansion inschakelen"},
/* pl */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_PL, "W��cz zapis do pliku ROM Final Expansion"},
/* ru */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_RU, "Enable Final Expansion write back to ROM file"},
/* sv */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_SV, "Aktivera �terskrivning till ROM-fil f�r Final Expansion"},
/* tr */ {IDCLS_ENABLE_FINALEXPANSION_WRITEBACK_TR, "Final Expansion ROM dosyas�na geri yazmay� aktif et"},
#endif

/* vic20/cart/finalexpansion.c */
/* en */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK,    N_("Disable Final Expansion write back to ROM file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_DA, "Deaktiv�r Final Expansion tilbageskrivning til ROM-fil"},
/* de */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_DE, "Final Expansion ROM Schreibzugriff deaktivieren"},
/* es */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_ES, "Deshabilitar grabaci�n en fichero ROM Final Expansion"},
/* fr */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_FR, "D�sactiver la r��criture du fichier ROM Final Expansion"},
/* hu */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_HU, "Final Expansion ROM f�jlba vissza�r�s tilt�sa"},
/* it */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_IT, "Disattiva write back per Final Expansion su file ROM"},
/* ko */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_NL, "Deactiveer terug schrijven naar ROM bestand voor Final Expansion"},
/* pl */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_PL, "Wy��cz zapis do pliku ROM Final Expansion"},
/* ru */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_RU, "Disable Final Expansion write back to ROM file"},
/* sv */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_SV, "Inaktivera �terskrivning till ROM-fil f�r Final Expansion"},
/* tr */ {IDCLS_DISABLE_FINALEXPANSION_WRITEBACK_TR, "Final Expansion ROM dosyas�na geri yazmay� pasifle�tir"},
#endif

/* vic20/cart/megacart.c */
/* en */ {IDCLS_SET_MEGACART_NVRAM_NAME,    N_("Set Mega-Cart NvRAM filename")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_MEGACART_NVRAM_NAME_DA, "V�lg Mega-Cart NvRAM filnavn"},
/* de */ {IDCLS_SET_MEGACART_NVRAM_NAME_DE, "Mega-Cart NvRAM Imagename w�hlen"},
/* es */ {IDCLS_SET_MEGACART_NVRAM_NAME_ES, "Seleccionar nombre fichero  Mega-Cart NvRAM"},
/* fr */ {IDCLS_SET_MEGACART_NVRAM_NAME_FR, "Nom du fichier NvRAM Mega-Cart"},
/* hu */ {IDCLS_SET_MEGACART_NVRAM_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_MEGACART_NVRAM_NAME_IT, "Imposta nome file NvRAM Mega-Cart"},
/* ko */ {IDCLS_SET_MEGACART_NVRAM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_MEGACART_NVRAM_NAME_NL, "Zet Mega-Cart NvRAM bestandsnaam"},
/* pl */ {IDCLS_SET_MEGACART_NVRAM_NAME_PL, "Okre�l nazw� pliku NvRAM Mega-Cart"},
/* ru */ {IDCLS_SET_MEGACART_NVRAM_NAME_RU, "Set Mega-Cart NvRAM filename"},
/* sv */ {IDCLS_SET_MEGACART_NVRAM_NAME_SV, "V�lj  Mega-Cart NvRAM-filnamn"},
/* tr */ {IDCLS_SET_MEGACART_NVRAM_NAME_TR, "Mega-Cart NvRAM dosyaismini gir"},
#endif

/* vic20/cart/megacart.c */
/* en */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE,    N_("Enable Mega-Cart NvRAM writeback")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_DA, "Aktiv�r Mega-Cart NvRAM tilbageskrivning"},
/* de */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_DE, "Mega-Cart NvRAM R�ckschreiben aktivieren"},
/* es */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_ES, "Permitir respuesta Mega-Cart NvRAM"},
/* fr */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_FR, "Permettre la r��criture de l'image Mega-Cart"},
/* hu */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_IT, "Write back NvRAM Mega-Cart"},
/* ko */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_NL, "Mega-Cart NvRAM terugschrijven inschakelem"},
/* pl */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_PL, "W��cz zapis do NvRAM Mega-Cart"},
/* ru */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_RU, "Enable Mega-Cart NvRAM writeback"},
/* sv */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_SV, "Aktivera Mega-Cart NvRAM-�terskrivning"},
/* tr */ {IDCLS_ENABLE_MEGACART_NVRAM_WRITE_TR, "Mega-Cart NvRAM geri yazmay� aktif et"},
#endif

/* vic20/cart/megacart.c */
/* en */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE,    N_("Disable Mega-Cart NvRAM writeback")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_DA, "Deaktiv�r Mega-Cart NvRAM tilbageskrivning"},
/* de */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_DE, "Mega-Cart NvRAM R�ckschreiben deaktivieren"},
/* es */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_ES, "Deshabilitar grabaci�n en Mega-Cart NvRAM"},
/* fr */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_FR, "Interdire la r��criture NvRAM Mega-Cart"},
/* hu */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_IT, "Disattiva write back su NvRAM Mega-Cart"},
/* ko */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_NL, "Mega-Cart NvRAM terugschrijven uitschakelen"},
/* pl */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_PL, "Wy��cz zapis do NvRAM Mega-Cart"},
/* ru */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_RU, "Disable Mega-Cart NvRAM writeback"},
/* sv */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_SV, "Inaktivera Mega-Cart NvRAM-�terskrivning"},
/* tr */ {IDCLS_DISABLE_MEGACART_NVRAM_WRITE_TR, "Mega-Cart NvRAM geri yazmay� pasifle�tir"},
#endif

/* vic20/cart/vic-fp.c */
/* en */ {IDCLS_ENABLE_VICFP_ROM_WRITE,    N_("Enable Vic Flash Plugin write back to ROM file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_VICFP_ROM_WRITE_DA, "Aktiv�r Vic Flash Plugin tilbageskrivning til ROM-fil"},
/* de */ {IDCLS_ENABLE_VICFP_ROM_WRITE_DE, "Vic Flash Plugin R�ckschreiben auf ROM Datei aktivieren"},
/* es */ {IDCLS_ENABLE_VICFP_ROM_WRITE_ES, "Permitir grabaci�n en ROM Vic Flash Plugin"},
/* fr */ {IDCLS_ENABLE_VICFP_ROM_WRITE_FR, "Activer la r��criture du fichier ROM Vic Flash Plugin"},
/* hu */ {IDCLS_ENABLE_VICFP_ROM_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_VICFP_ROM_WRITE_IT, "Attiva write back per Vic Flash Plugin su file ROM"},
/* ko */ {IDCLS_ENABLE_VICFP_ROM_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_VICFP_ROM_WRITE_NL, "Terugschrijven naar ROM bestand voor Vic Flash Plugin inschakelen"},
/* pl */ {IDCLS_ENABLE_VICFP_ROM_WRITE_PL, "W��cz zapis do pliku ROM Vic Flash Plugin"},
/* ru */ {IDCLS_ENABLE_VICFP_ROM_WRITE_RU, "Enable Vic Flash Plugin write back to ROM file"},
/* sv */ {IDCLS_ENABLE_VICFP_ROM_WRITE_SV, "Aktivera �terskrivning till ROM-fil f�r Vic Flash-insticksmodul"},
/* tr */ {IDCLS_ENABLE_VICFP_ROM_WRITE_TR, "Flash Plugin ROM dosyas�na geri yazmay� aktif et"},
#endif

/* vic20/cart/vic-fp.c */
/* en */ {IDCLS_DISABLE_VICFP_ROM_WRITE,    N_("Disable Vic Flash Plugin write back to ROM file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_VICFP_ROM_WRITE_DA, "Deaktiv�r Vic Flash Plugin tilbageskrivning til ROM-fil"},
/* de */ {IDCLS_DISABLE_VICFP_ROM_WRITE_DE, "Vic Flash Plugin R�ckschreiben auf ROM Datei deaktivieren"},
/* es */ {IDCLS_DISABLE_VICFP_ROM_WRITE_ES, "Deshabilitar grabaci�n en ROM Vic Flash Plugin"},
/* fr */ {IDCLS_DISABLE_VICFP_ROM_WRITE_FR, "D�sactiver la r��criture du fichier ROM Vic Flash Plugin"},
/* hu */ {IDCLS_DISABLE_VICFP_ROM_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_VICFP_ROM_WRITE_IT, "Disattiva write back per Vic Flash Plugin su file ROM"},
/* ko */ {IDCLS_DISABLE_VICFP_ROM_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_VICFP_ROM_WRITE_NL, "Terugschrijven naar ROM bestand voor Vic Flash Plugin uitschakelen"},
/* pl */ {IDCLS_DISABLE_VICFP_ROM_WRITE_PL, "Wy��cz zapis do pliku ROM Vic Flash Plugin"},
/* ru */ {IDCLS_DISABLE_VICFP_ROM_WRITE_RU, "Disable Vic Flash Plugin write back to ROM file"},
/* sv */ {IDCLS_DISABLE_VICFP_ROM_WRITE_SV, "Inaktivera �terskrivning till ROM-fil f�r Vic Flash-insticksmodul"},
/* tr */ {IDCLS_DISABLE_VICFP_ROM_WRITE_TR, "Flash Plugin ROM dosyas�na geri yazmay� pasifle�tir"},
#endif

/* vic20/cart/ultimem.c */
/* en */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE,    N_("Enable UltiMem write back to ROM file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_DE, "UltiMem ROM Schreibzugriff aktivieren"},
/* es */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_NL, "Terugschrijven naar ROM bestand voor UltiMem inschakelen"},
/* pl */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_VIC_UM_ROM_WRITE_TR, ""},  /* fuzzy */
#endif

/* vic20/cart/ultimem.c */
/* en */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE,    N_("Disable UltiMem write back to ROM file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_DE, "UltiMem ROM Schreibzugriff deaktivieren"},
/* es */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_NL, "Terugschrijven naar ROM bestand voor UltiMem uitschakelen"},
/* pl */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_VIC_UM_ROM_WRITE_TR, ""},  /* fuzzy */
#endif

/* vic20/cart/ioramcart.c */
/* en */ {IDCLS_ENABLE_IO2_RAM,    N_("Enable I/O-2 RAM")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IO2_RAM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_IO2_RAM_DE, "I/O-2 RAM aktivieren"},
/* es */ {IDCLS_ENABLE_IO2_RAM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_IO2_RAM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_IO2_RAM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_IO2_RAM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_IO2_RAM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IO2_RAM_NL, "I/O-2 RAM inschakelen"},
/* pl */ {IDCLS_ENABLE_IO2_RAM_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_IO2_RAM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_IO2_RAM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_IO2_RAM_TR, ""},  /* fuzzy */
#endif

/* vic20/cart/ioramcart.c */
/* en */ {IDCLS_DISABLE_IO2_RAM,    N_("Disable I/O-2 RAM")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IO2_RAM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_IO2_RAM_DE, "I/O-2 RAM deaktivieren"},
/* es */ {IDCLS_DISABLE_IO2_RAM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_IO2_RAM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_IO2_RAM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_IO2_RAM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_IO2_RAM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IO2_RAM_NL, "I/O-2 RAM uitschakelen"},
/* pl */ {IDCLS_DISABLE_IO2_RAM_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_IO2_RAM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_IO2_RAM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_IO2_RAM_TR, ""},  /* fuzzy */
#endif

/* vic20/cart/ioramcart.c */
/* en */ {IDCLS_ENABLE_IO3_RAM,    N_("Enable I/O-3 RAM")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_IO3_RAM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_IO3_RAM_DE, "I/O-3 RAM aktivieren"},
/* es */ {IDCLS_ENABLE_IO3_RAM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_IO3_RAM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_IO3_RAM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_IO3_RAM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_IO3_RAM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_IO3_RAM_NL, "I/O-3 RAM inschakelen"},
/* pl */ {IDCLS_ENABLE_IO3_RAM_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_IO3_RAM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_IO3_RAM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_IO3_RAM_TR, ""},  /* fuzzy */
#endif

/* vic20/cart/ioramcart.c */
/* en */ {IDCLS_DISABLE_IO3_RAM,    N_("Disable I/O-3 RAM")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_IO3_RAM_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_IO3_RAM_DE, "I/O-3 RAM deaktivieren"},
/* es */ {IDCLS_DISABLE_IO3_RAM_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_IO3_RAM_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_IO3_RAM_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_IO3_RAM_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_IO3_RAM_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_IO3_RAM_NL, "I/O-3 RAM uitschakelen"},
/* pl */ {IDCLS_DISABLE_IO3_RAM_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_IO3_RAM_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_IO3_RAM_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_IO3_RAM_TR, ""},  /* fuzzy */
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_SET_BORDER_MODE,    N_("Set border display mode (0: normal, 1: full, 2: debug, 3: none)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_BORDER_MODE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_BORDER_MODE_DE, "Rahmen Darstellung Modus (0: Normal, 1: Voll, 2: Debug, 3: kein)"},
/* es */ {IDCLS_SET_BORDER_MODE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_BORDER_MODE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_BORDER_MODE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_BORDER_MODE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_BORDER_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_BORDER_MODE_NL, ""},  /* fuzzy */
/* pl */ {IDCLS_SET_BORDER_MODE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SET_BORDER_MODE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_BORDER_MODE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_BORDER_MODE_TR, ""},  /* fuzzy */
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_ENABLE_SPRITE_BACKGROUND,    N_("Enable sprite-background collision registers")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SPRITE_BACKGROUND_DA, "Aktiv�r sprite-til-baggrunds-kollisionsregistre"},
/* de */ {IDCLS_ENABLE_SPRITE_BACKGROUND_DE, "Sprite-Hintergrund Kollisionen aktivieren"},
/* es */ {IDCLS_ENABLE_SPRITE_BACKGROUND_ES, "Habilitar registros colisi�n sprite-fondo"},
/* fr */ {IDCLS_ENABLE_SPRITE_BACKGROUND_FR, "Activer les registres de collisions de sprite avec arri�re-plan"},
/* hu */ {IDCLS_ENABLE_SPRITE_BACKGROUND_HU, "Sprite-h�tt�r �tk�z�si regiszterek enged�lyez�se"},
/* it */ {IDCLS_ENABLE_SPRITE_BACKGROUND_IT, "Attiva registri di collisione sprite-sfondo"},
/* ko */ {IDCLS_ENABLE_SPRITE_BACKGROUND_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SPRITE_BACKGROUND_NL, "Sprite-achtergrond botsing registers inschakelen"},
/* pl */ {IDCLS_ENABLE_SPRITE_BACKGROUND_PL, "W��cz rejestry kolizji duszk�w z t�em"},
/* ru */ {IDCLS_ENABLE_SPRITE_BACKGROUND_RU, "Enable sprite-background collision registers"},
/* sv */ {IDCLS_ENABLE_SPRITE_BACKGROUND_SV, "Aktivera sprite-till-bakgrund-kollisionsregister"},
/* tr */ {IDCLS_ENABLE_SPRITE_BACKGROUND_TR, "Yarat�k-arka plan �arp��ma registerlar�n� aktif et"},
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_DISABLE_SPRITE_BACKGROUND,    N_("Disable sprite-background collision registers")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SPRITE_BACKGROUND_DA, "Deaktiv�r sprite-til-baggrunds-kollisionsregistre"},
/* de */ {IDCLS_DISABLE_SPRITE_BACKGROUND_DE, "Sprite-Hintergrund Kollisionen deaktivieren"},
/* es */ {IDCLS_DISABLE_SPRITE_BACKGROUND_ES, "Deshabilitar registros colisi�n sprite-fondo"},
/* fr */ {IDCLS_DISABLE_SPRITE_BACKGROUND_FR, "D�sactiver les registres de collisions de sprite avec arri�re-plan"},
/* hu */ {IDCLS_DISABLE_SPRITE_BACKGROUND_HU, "Sprite-h�tt�r �tk�z�si regiszterek tilt�sa"},
/* it */ {IDCLS_DISABLE_SPRITE_BACKGROUND_IT, "Disattiva registri di collisione sprite-sfondo"},
/* ko */ {IDCLS_DISABLE_SPRITE_BACKGROUND_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SPRITE_BACKGROUND_NL, "Sprite-achtergrond botsing registers uitschakelen"},
/* pl */ {IDCLS_DISABLE_SPRITE_BACKGROUND_PL, "Wy��cz rejestry kolizji duszk�w z t�em"},
/* ru */ {IDCLS_DISABLE_SPRITE_BACKGROUND_RU, "Disable sprite-background collision registers"},
/* sv */ {IDCLS_DISABLE_SPRITE_BACKGROUND_SV, "Inaktivera sprite-till-bakgrund-kollisionsregister"},
/* tr */ {IDCLS_DISABLE_SPRITE_BACKGROUND_TR, "Yarat�k-arka plan �arp��ma registerlar�n� pasifle�tir"},
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_ENABLE_SPRITE_SPRITE,    N_("Enable sprite-sprite collision registers")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SPRITE_SPRITE_DA, "Aktiv�r sprite-til-sprite-kollisionsregistre"},
/* de */ {IDCLS_ENABLE_SPRITE_SPRITE_DE, "Sprite-Sprite Kollisionen aktivieren"},
/* es */ {IDCLS_ENABLE_SPRITE_SPRITE_ES, "Habilitar registros colisi�n sprite-sprite"},
/* fr */ {IDCLS_ENABLE_SPRITE_SPRITE_FR, "Activer les registres de collisions de sprite avec sprite"},
/* hu */ {IDCLS_ENABLE_SPRITE_SPRITE_HU, "Sprite-sprite �tk�z�si regiszterek enged�lyez�se"},
/* it */ {IDCLS_ENABLE_SPRITE_SPRITE_IT, "Attiva registri di collisione sprite-sprite"},
/* ko */ {IDCLS_ENABLE_SPRITE_SPRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SPRITE_SPRITE_NL, "Sprite-sprite botsing registers inschakelen"},
/* pl */ {IDCLS_ENABLE_SPRITE_SPRITE_PL, "W��cz rejestry kolizji duszk�w"},
/* ru */ {IDCLS_ENABLE_SPRITE_SPRITE_RU, "Enable sprite-sprite collision registers"},
/* sv */ {IDCLS_ENABLE_SPRITE_SPRITE_SV, "Aktivera sprite-till-sprite-kollisionsregister"},
/* tr */ {IDCLS_ENABLE_SPRITE_SPRITE_TR, "Yarat�k-yarat�k �arp��ma registerlar�n� aktif et"},
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_DISABLE_SPRITE_SPRITE,    N_("Disable sprite-sprite collision registers")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SPRITE_SPRITE_DA, "Deaktiv�r sprite-til-sprite-kollisionsregistre"},
/* de */ {IDCLS_DISABLE_SPRITE_SPRITE_DE, "Sprite-Sprite Kollisionen deaktivieren"},
/* es */ {IDCLS_DISABLE_SPRITE_SPRITE_ES, "Deshabilitar registros colisi�n sprite-sprite"},
/* fr */ {IDCLS_DISABLE_SPRITE_SPRITE_FR, "D�sactiver les registres de collisions de sprite avec sprite"},
/* hu */ {IDCLS_DISABLE_SPRITE_SPRITE_HU, "Sprite-sprite �tk�z�si regiszterek tilt�sa"},
/* it */ {IDCLS_DISABLE_SPRITE_SPRITE_IT, "Disattiva registri di collisione sprite-sprite"},
/* ko */ {IDCLS_DISABLE_SPRITE_SPRITE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SPRITE_SPRITE_NL, "Sprite-sprite botsing registers uitschakelen"},
/* pl */ {IDCLS_DISABLE_SPRITE_SPRITE_PL, "Wy��cz rejestry kolizji duszk�w"},
/* ru */ {IDCLS_DISABLE_SPRITE_SPRITE_RU, "Disable sprite-sprite collision registers"},
/* sv */ {IDCLS_DISABLE_SPRITE_SPRITE_SV, "Inaktivera sprite-till-sprite-kollisionsregister"},
/* tr */ {IDCLS_DISABLE_SPRITE_SPRITE_TR, "Yarat�k-yarat�k �arp��ma registerlar�n� pasifle�tir"},
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_ENABLE_VSPBUG,    N_("Enable VSP bug emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_VSPBUG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_VSPBUG_DE, "VSP Fehler Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_VSPBUG_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_VSPBUG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_VSPBUG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_VSPBUG_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_VSPBUG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_VSPBUG_NL, "VSP bug emulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_VSPBUG_PL, "W��cz emulacj� bl�du VSP"},
/* ru */ {IDCLS_ENABLE_VSPBUG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_VSPBUG_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_VSPBUG_TR, ""},  /* fuzzy */
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_DISABLE_VSPBUG,    N_("Disable VSP bug emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_VSPBUG_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_VSPBUG_DE, "VSP Fehler Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_VSPBUG_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_VSPBUG_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_VSPBUG_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_VSPBUG_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_VSPBUG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_VSPBUG_NL, "VSP bug emulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_VSPBUG_PL, "Wy��cz emulacj� b��du VSP"},
/* ru */ {IDCLS_DISABLE_VSPBUG_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_VSPBUG_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_VSPBUG_TR, ""},  /* fuzzy */
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_USE_NEW_LUMINANCES,    N_("Use new luminances")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_NEW_LUMINANCES_DA, "Brug nye lysstyrker"},
/* de */ {IDCLS_USE_NEW_LUMINANCES_DE, "Neue Helligkeitsemulation"},
/* es */ {IDCLS_USE_NEW_LUMINANCES_ES, "Usar luminancias nuevas"},
/* fr */ {IDCLS_USE_NEW_LUMINANCES_FR, "Utiliser les nouvelles luminescences"},
/* hu */ {IDCLS_USE_NEW_LUMINANCES_HU, "Az �j f�nyer�ket haszn�lja"},
/* it */ {IDCLS_USE_NEW_LUMINANCES_IT, "Usa nuove luminanze"},
/* ko */ {IDCLS_USE_NEW_LUMINANCES_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_NEW_LUMINANCES_NL, "Gebruik nieuwe luminantie"},
/* pl */ {IDCLS_USE_NEW_LUMINANCES_PL, "U�yj nowego typu jaskrawo�ci"},
/* ru */ {IDCLS_USE_NEW_LUMINANCES_RU, "Use new luminances"},
/* sv */ {IDCLS_USE_NEW_LUMINANCES_SV, "Anv�nd nya ljusstyrkor"},
/* tr */ {IDCLS_USE_NEW_LUMINANCES_TR, "Yeni parlakl�klar� kullan"},
#endif

/* vicii/vicii-cmdline-options.c */
/* en */ {IDCLS_USE_OLD_LUMINANCES,    N_("Use old luminances")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_OLD_LUMINANCES_DA, "Brug gamle lysstyrker"},
/* de */ {IDCLS_USE_OLD_LUMINANCES_DE, "Alte Helligkeitsemulation"},
/* es */ {IDCLS_USE_OLD_LUMINANCES_ES, "Usar luminancias antiguas"},
/* fr */ {IDCLS_USE_OLD_LUMINANCES_FR, "Utiliser les anciennes luminescences"},
/* hu */ {IDCLS_USE_OLD_LUMINANCES_HU, "A r�gi f�nyer�ket haszn�lja"},
/* it */ {IDCLS_USE_OLD_LUMINANCES_IT, "Usa vecchie luminanze"},
/* ko */ {IDCLS_USE_OLD_LUMINANCES_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_OLD_LUMINANCES_NL, "Gebruik oude luminantie"},
/* pl */ {IDCLS_USE_OLD_LUMINANCES_PL, "U�yj starego typu jaskrawo�ci"},
/* ru */ {IDCLS_USE_OLD_LUMINANCES_RU, "Use old luminances"},
/* sv */ {IDCLS_USE_OLD_LUMINANCES_SV, "Anv�nd gamla ljusstyrkor"},
/* tr */ {IDCLS_USE_OLD_LUMINANCES_TR, "Eski parlakl�klar� kullan"},
#endif

/* monitor.c */
/* en */ {IDCLS_EXECUTE_MONITOR_FROM_FILE,    N_("Execute monitor commands from file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_DA, "Udf�r monitorkommandoer fra fil"},
/* de */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_DE, "Monitor Kommandos aus Datei ausf�hren"},
/* es */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_ES, "Ejecutar comandos del monitor desde fichero"},
/* fr */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_FR, "Ex�cuter des commandes moniteur depuis un fichier"},
/* hu */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_HU, "Monitorprogram parancsok futtat�sa f�jlb�l"},
/* it */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_IT, "Esegui i comandi del monitor da un file"},
/* ko */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_NL, "Uitvoeren van monitor commando's uit bestand"},
/* pl */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_PL, "Wykonaj polecenia monitora z pliku"},
/* ru */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_RU, "Execute monitor commands from file"},
/* sv */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_SV, "Exekvera monitorkommandon fr�n fil"},
/* tr */ {IDCLS_EXECUTE_MONITOR_FROM_FILE_TR, "Dosyadan monit�r komutlar� �al��t�r"},
#endif

/* monitor.c */
/* en */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE,    N_("Write monitor output also to file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_DE, "Monitor Ausgabe auch auf Datei schreiben"},
/* es */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_ES, "Grabar salida del monitor tambien en fichero"},
/* fr */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_IT, "Scrivi anche su file l'output del monitor"},
/* ko */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_NL, "Schrijf uitvoer van de monitor ook naar een bestand"},
/* pl */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_PL, "Zapisuj wyj�cie monitora r�wnie� do pliku"},
/* ru */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_SV, "Skriv monitorutdata �ven till fil"},
/* tr */ {IDCLS_WRITE_MONITOR_LOG_TO_FILE_TR, ""},  /* fuzzy */
#endif

/* monitor.c */
/* en */ {IDCLS_SET_INITIAL_BREAKPOINT,    N_("Set an initial breakpoint for the monitor")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_INITIAL_BREAKPOINT_DA, "S�t et initielt breakpoint for monitoren"},
/* de */ {IDCLS_SET_INITIAL_BREAKPOINT_DE, "Setze initialen Breakpoint f�r Monitor"},
/* es */ {IDCLS_SET_INITIAL_BREAKPOINT_ES, "Seleccionar un punto inicial de ruptura para el monitor"},
/* fr */ {IDCLS_SET_INITIAL_BREAKPOINT_FR, "R�gler un point d�arr�t initial pour le moniteur"},
/* hu */ {IDCLS_SET_INITIAL_BREAKPOINT_HU, "Kezdeti t�r�spont megad�sa a monitorprogramnak"},
/* it */ {IDCLS_SET_INITIAL_BREAKPOINT_IT, "Imposta un breakpoint iniziale per il monitor"},
/* ko */ {IDCLS_SET_INITIAL_BREAKPOINT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_INITIAL_BREAKPOINT_NL, "Stel een initieel breekpunt in voor de monitor"},
/* pl */ {IDCLS_SET_INITIAL_BREAKPOINT_PL, "Okre�l pocz�tkowy punkt wstrzymania w monitorze"},
/* ru */ {IDCLS_SET_INITIAL_BREAKPOINT_RU, "Set an initial breakpoint for the monitor"},
/* sv */ {IDCLS_SET_INITIAL_BREAKPOINT_SV, "S�tt en ursprunglig brytpunkt f�r monitorn"},
/* tr */ {IDCLS_SET_INITIAL_BREAKPOINT_TR, "Monit�r i�in dahili bir kesme noktas� ayarla"},
#endif

/* monitor.c */
/* en */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN,    N_("Keep the monitor open")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_DE, "Monitor g�ffnet halten"},
/* es */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_NL, "Laat de monitor geopend blijven"},
/* pl */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_PL, "Nie zamykaj monitora"},
/* ru */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_KEEP_MONITOR_OPEN_TR, ""},  /* fuzzy */
#endif

/* monitor.c */
/* en */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN,    N_("Do not keep the monitor open")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_DE, "Monitor nicht g�ffnet halten"},
/* es */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_NL, "Laat de monitor niet geopend blijven"},
/* pl */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_PL, "Zamykaj monitor"},
/* ru */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_KEEP_MONITOR_OPEN_TR, ""},  /* fuzzy */
#endif

/* monitor_network.c */
/* en */ {IDCLS_ENABLE_REMOTE_MONITOR,    N_("Enable remote monitor")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_REMOTE_MONITOR_DA, "Aktiv�r fjern-monitor"},
/* de */ {IDCLS_ENABLE_REMOTE_MONITOR_DE, "Monitor Fernsteuerung aktivieren"},
/* es */ {IDCLS_ENABLE_REMOTE_MONITOR_ES, "Permitir monitor remoto"},
/* fr */ {IDCLS_ENABLE_REMOTE_MONITOR_FR, "Activer le moniteur distant"},
/* hu */ {IDCLS_ENABLE_REMOTE_MONITOR_HU, "T�voli monitor enged�lyez�se"},
/* it */ {IDCLS_ENABLE_REMOTE_MONITOR_IT, "Attiva monitor remoto"},
/* ko */ {IDCLS_ENABLE_REMOTE_MONITOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_REMOTE_MONITOR_NL, "Monitor afstandsbediening inschakelen"},
/* pl */ {IDCLS_ENABLE_REMOTE_MONITOR_PL, "W��cz zdalny monitor"},
/* ru */ {IDCLS_ENABLE_REMOTE_MONITOR_RU, "Enable remote monitor"},
/* sv */ {IDCLS_ENABLE_REMOTE_MONITOR_SV, "Aktivera fj�rrmonitor"},
/* tr */ {IDCLS_ENABLE_REMOTE_MONITOR_TR, "Uzak monit�r� aktif et"},
#endif

/* monitor_network.c */
/* en */ {IDCLS_DISABLE_REMOTE_MONITOR,    N_("Disable remote monitor")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_REMOTE_MONITOR_DA, "Deaktiv�r fjern-monitor"},
/* de */ {IDCLS_DISABLE_REMOTE_MONITOR_DE, "Monitor Fernsteuerung deaktivieren"},
/* es */ {IDCLS_DISABLE_REMOTE_MONITOR_ES, "Deshabilitar monitor remoto"},
/* fr */ {IDCLS_DISABLE_REMOTE_MONITOR_FR, "D�sactiver le moniteur distant"},
/* hu */ {IDCLS_DISABLE_REMOTE_MONITOR_HU, "T�voli monitor tilt�sa"},
/* it */ {IDCLS_DISABLE_REMOTE_MONITOR_IT, "Disattiva monitor remoto"},
/* ko */ {IDCLS_DISABLE_REMOTE_MONITOR_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_REMOTE_MONITOR_NL, "Monitor afstandsbediening uitschakelen"},
/* pl */ {IDCLS_DISABLE_REMOTE_MONITOR_PL, "Wy��cz zdalny monitor"},
/* ru */ {IDCLS_DISABLE_REMOTE_MONITOR_RU, "Disable remote monitor"},
/* sv */ {IDCLS_DISABLE_REMOTE_MONITOR_SV, "Inaktivera fj�rrmonitor"},
/* tr */ {IDCLS_DISABLE_REMOTE_MONITOR_TR, "Uzak monit�r� pasifle�tir"},
#endif

/* monitor_network.c */
/* en */ {IDCLS_REMOTE_MONITOR_ADDRESS,    N_("The local address the remote monitor should bind to")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_REMOTE_MONITOR_ADDRESS_DA, "Lokal adresse fjern-monitoren skal binde til"},
/* de */ {IDCLS_REMOTE_MONITOR_ADDRESS_DE, "Lokale Adresse f�r die Monitorfernsteuerung"},
/* es */ {IDCLS_REMOTE_MONITOR_ADDRESS_ES, "Direcci�n del monitor remoto al que se debe unir"},
/* fr */ {IDCLS_REMOTE_MONITOR_ADDRESS_FR, "L'adresse locale � laquelle le moniteur distant devrait se brancher"},
/* hu */ {IDCLS_REMOTE_MONITOR_ADDRESS_HU, "A helyi c�m, amelyet a monitorprogram lefoglal"},
/* it */ {IDCLS_REMOTE_MONITOR_ADDRESS_IT, "Indirizzo locale a cui il monitor remoto dovrebbe collegarsi"},
/* ko */ {IDCLS_REMOTE_MONITOR_ADDRESS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_REMOTE_MONITOR_ADDRESS_NL, "Lokaal adres waar de afstandsbediening voor de monitor aan gebonden moet worden"},
/* pl */ {IDCLS_REMOTE_MONITOR_ADDRESS_PL, "Lokalny adres, z kt�rym ma si� po��czy� zdalny monitor"},
/* ru */ {IDCLS_REMOTE_MONITOR_ADDRESS_RU, "The local address the remote monitor should bind to"},
/* sv */ {IDCLS_REMOTE_MONITOR_ADDRESS_SV, "Lokal adress f�r fj�rrmonitor att ansluta till"},
/* tr */ {IDCLS_REMOTE_MONITOR_ADDRESS_TR, "Uzak monit�r�n ba�lanmas� gereken lokal adres"},
#endif

/* fliplist.c */
/* en */ {IDCLS_SPECIFY_FLIP_LIST_NAME,    N_("Specify name of the flip list file image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_FLIP_LIST_NAME_DA, "Angiv navn p� bladreliste"},
/* de */ {IDCLS_SPECIFY_FLIP_LIST_NAME_DE, "Namen f�r Fliplist Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_FLIP_LIST_NAME_ES, "Especificar nombre fichero lista de intercambio imagenes"},
/* fr */ {IDCLS_SPECIFY_FLIP_LIST_NAME_FR, "Sp�cifier le nom de l'image du fichier de groupement de disques"},
/* hu */ {IDCLS_SPECIFY_FLIP_LIST_NAME_HU, "Adja meg a lemezlista f�jl nev�t"},
/* it */ {IDCLS_SPECIFY_FLIP_LIST_NAME_IT, "Specifica il nome immagine del file della flip list"},
/* ko */ {IDCLS_SPECIFY_FLIP_LIST_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_FLIP_LIST_NAME_NL, "Geef de naam van het fliplijstbestand"},
/* pl */ {IDCLS_SPECIFY_FLIP_LIST_NAME_PL, "Okre�l nazw� pliku obrazu listy podmiany no�nik�w"},
/* ru */ {IDCLS_SPECIFY_FLIP_LIST_NAME_RU, "Specify name of the flip list file image"},
/* sv */ {IDCLS_SPECIFY_FLIP_LIST_NAME_SV, "Ange namn p� vallistefilavbildningen"},
/* tr */ {IDCLS_SPECIFY_FLIP_LIST_NAME_TR, "S�ralama listesi dosya imaj� ismi belirt"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS,    N_("Show a list of the available options and exit normally")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_DA, "Vis en liste over tilg�ngelige parametre og afslut"},
/* de */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_DE, "Liste von verf�gbaren Optionen zeigen und beenden"},
/* es */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_ES, "Muestra lista de las opciones disponibles al salir normalmente"},
/* fr */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_FR, "Montrer une liste des options disponibles et terminer normalement"},
/* hu */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_HU, "Kilist�zza a lehets�ges opci�kat �s kil�p"},
/* it */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_IT, "Mostra un elenco delle opzioni disponibili ed esce"},
/* ko */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_NL, "Toon een lijst van de beschikbare opties en sluit normaal af"},
/* pl */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_PL, "Poka� list� dost�pnych polece� i normalnie wyjd�"},
/* ru */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_RU, "Show a list of the available options and exit normally"},
/* sv */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_SV, "Visa lista �ver tillg�ngliga flaggor och avsluta normalt"},
/* tr */ {IDCLS_SHOW_COMMAND_LINE_OPTIONS_TR, "Mevcut se�eneklerin listesini g�ster ve normal ��k"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_SHOW_COMPILETIME_FEATURES,    N_("Show a list of the available compile-time options and their configuration.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SHOW_COMPILETIME_FEATURES_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SHOW_COMPILETIME_FEATURES_DE, "Liste von verf�gbaren kompilierten Optionen und deren Konfiguration zeigen."},
/* es */ {IDCLS_SHOW_COMPILETIME_FEATURES_ES, "Muestra lista de las opciones disponibles en tiempo de compilaci�n y su configuraci�n."},
/* fr */ {IDCLS_SHOW_COMPILETIME_FEATURES_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SHOW_COMPILETIME_FEATURES_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SHOW_COMPILETIME_FEATURES_IT, "Mostra un elenco delle opzioni di compilazione disponibili e la loro configurazione."},
/* ko */ {IDCLS_SHOW_COMPILETIME_FEATURES_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SHOW_COMPILETIME_FEATURES_NL, "Toon een lijst van de beschikbare 'compile-time' opties en de bijbehorende configuratie."},
/* pl */ {IDCLS_SHOW_COMPILETIME_FEATURES_PL, "Poka� list� dost�pnych opcji kompilacji i ich konfiguracj�."},
/* ru */ {IDCLS_SHOW_COMPILETIME_FEATURES_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SHOW_COMPILETIME_FEATURES_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SHOW_COMPILETIME_FEATURES_TR, ""},  /* fuzzy */
#endif

#if (!defined  __OS2__ && !defined __BEOS__)
/* initcmdline.c */
/* en */ {IDCLS_CONSOLE_MODE,    N_("Console mode (for music playback)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_CONSOLE_MODE_DA, "Konsoltilstand (for musikafspilning)"},
/* de */ {IDCLS_CONSOLE_MODE_DE, "Konsolenmodus (f�r Musikwiedergabe)"},
/* es */ {IDCLS_CONSOLE_MODE_ES, "Modo consola (para reproducci�n m�sica)"},
/* fr */ {IDCLS_CONSOLE_MODE_FR, "Mode console (pour l'�coute de musique)"},
/* hu */ {IDCLS_CONSOLE_MODE_HU, "Konzol m�d (zene lej�tsz�shoz)"},
/* it */ {IDCLS_CONSOLE_MODE_IT, "Modalit� console (per la riproduzione musicale)"},
/* ko */ {IDCLS_CONSOLE_MODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_CONSOLE_MODE_NL, "Consolemodus (voor afspelen van muziek)"},
/* pl */ {IDCLS_CONSOLE_MODE_PL, "Tryb konsolowy (do odtwarzania muzyki)"},
/* ru */ {IDCLS_CONSOLE_MODE_RU, "Console mode (for music playback)"},
/* sv */ {IDCLS_CONSOLE_MODE_SV, "Konsoll�ge (f�r musikspelning)"},
/* tr */ {IDCLS_CONSOLE_MODE_TR, "Konsol modu (m�zik �almak i�in)"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_ALLOW_CORE_DUMPS,    N_("Allow production of core dumps")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ALLOW_CORE_DUMPS_DA, "Tillad generering af core-dumps"},
/* de */ {IDCLS_ALLOW_CORE_DUMPS_DE, "Core Dumps erm�glichen"},
/* es */ {IDCLS_ALLOW_CORE_DUMPS_ES, "Permitir producci�n volcados de nucleo"},
/* fr */ {IDCLS_ALLOW_CORE_DUMPS_FR, "Permettre la production de \"core dumps\""},
/* hu */ {IDCLS_ALLOW_CORE_DUMPS_HU, "Core dump k�sz�t�s enged�lyez�se"},
/* it */ {IDCLS_ALLOW_CORE_DUMPS_IT, "Consente la produzione di core dump"},
/* ko */ {IDCLS_ALLOW_CORE_DUMPS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ALLOW_CORE_DUMPS_NL, "Maken van core dumps toestaan"},
/* pl */ {IDCLS_ALLOW_CORE_DUMPS_PL, "Pozw�l tworzy� zrzuty rdzenia"},
/* ru */ {IDCLS_ALLOW_CORE_DUMPS_RU, "Allow production of core dumps"},
/* sv */ {IDCLS_ALLOW_CORE_DUMPS_SV, "Till�t skapa minnesutskrift"},
/* tr */ {IDCLS_ALLOW_CORE_DUMPS_TR, "Bellek durumunun kay�tlar�n�n �retilmesine izin ver"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_DONT_ALLOW_CORE_DUMPS,    N_("Do not produce core dumps")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DONT_ALLOW_CORE_DUMPS_DA, "Lav ikke core-dumps"},
/* de */ {IDCLS_DONT_ALLOW_CORE_DUMPS_DE, "Core Dumps verhindern"},
/* es */ {IDCLS_DONT_ALLOW_CORE_DUMPS_ES, "No permitir producci�n volcados de nucleo"},
/* fr */ {IDCLS_DONT_ALLOW_CORE_DUMPS_FR, "Ne pas produire de \"core dumps\""},
/* hu */ {IDCLS_DONT_ALLOW_CORE_DUMPS_HU, "Core dump k�sz�t�s tilt�sa"},
/* it */ {IDCLS_DONT_ALLOW_CORE_DUMPS_IT, "Non produce core dump"},
/* ko */ {IDCLS_DONT_ALLOW_CORE_DUMPS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DONT_ALLOW_CORE_DUMPS_NL, "Maken van core dumps niet toestaan"},
/* pl */ {IDCLS_DONT_ALLOW_CORE_DUMPS_PL, "Nie tw�rz zrzut�w rdzenia"},
/* ru */ {IDCLS_DONT_ALLOW_CORE_DUMPS_RU, "Do not produce core dumps"},
/* sv */ {IDCLS_DONT_ALLOW_CORE_DUMPS_SV, "Skapa inte minnesutskrift"},
/* tr */ {IDCLS_DONT_ALLOW_CORE_DUMPS_TR, "Bellek durumunun kay�tlar�n� �retme"},
#endif

#else

/* initcmdline.c */
/* en */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER,    N_("Don't call exception handler")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_DA, "Kald ikke exception-handler"},
/* de */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_DE, "Ausnahmebehandlung vermeiden"},
/* es */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_ES, "No llamar al manipulador de excepciones"},
/* fr */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_FR, "Ne pas utiliser l'assistant d'exception"},
/* hu */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_HU, "Ne h�vja a kiv�tel kezel�t"},
/* it */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_IT, "Richiama il gestore delle eccezioni"},
/* ko */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_NL, "Geen gebruik maken van de exception handler"},
/* pl */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_PL, "Nie zajmuj si� wyj�tkami"},
/* ru */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_RU, "Don't call exception handler"},
/* sv */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_SV, "Anropa inte undantagshanterare"},
/* tr */ {IDCLS_DONT_CALL_EXCEPTION_HANDLER_TR, "Kural d��� i�leyiciyi �a��rma"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_CALL_EXCEPTION_HANDLER,    N_("Call exception handler (default)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_CALL_EXCEPTION_HANDLER_DA, "Kald exception-handler (standard)"},
/* de */ {IDCLS_CALL_EXCEPTION_HANDLER_DE, "Ausnahmebehandlung aktivieren (Default)"},
/* es */ {IDCLS_CALL_EXCEPTION_HANDLER_ES, "Llamar al manipulador de excepciones (por defecto)"},
/* fr */ {IDCLS_CALL_EXCEPTION_HANDLER_FR, "Utiliser l'assistant d'exception (par d�faut)"},
/* hu */ {IDCLS_CALL_EXCEPTION_HANDLER_HU, "Kiv�tel kezel� h�v�sa (alap�rtelmez�s)"},
/* it */ {IDCLS_CALL_EXCEPTION_HANDLER_IT, "Richiama il gestore delle eccezioni (predefinito)"},
/* ko */ {IDCLS_CALL_EXCEPTION_HANDLER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_CALL_EXCEPTION_HANDLER_NL, "Gebruik maken van de exception handler (standaard)"},
/* pl */ {IDCLS_CALL_EXCEPTION_HANDLER_PL, "Zajmij si� wyj�tkami (domy�lnie)"},
/* ru */ {IDCLS_CALL_EXCEPTION_HANDLER_RU, "Call exception handler (default)"},
/* sv */ {IDCLS_CALL_EXCEPTION_HANDLER_SV, "Anropa undantagshanterare (standard)"},
/* tr */ {IDCLS_CALL_EXCEPTION_HANDLER_TR, "Kural d��� i�leyiciyi �a��r (varsay�lan)"},
#endif
#endif

/* initcmdline.c */
/* en */ {IDCLS_RESTORE_DEFAULT_SETTINGS,    N_("Restore default settings")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_RESTORE_DEFAULT_SETTINGS_DA, "Gendan standardindstillinger"},
/* de */ {IDCLS_RESTORE_DEFAULT_SETTINGS_DE, "Standard Einstellungen wiederherstellen"},
/* es */ {IDCLS_RESTORE_DEFAULT_SETTINGS_ES, "Restaurar valores por defecto"},
/* fr */ {IDCLS_RESTORE_DEFAULT_SETTINGS_FR, "R�tablir les param�tres par d�faut"},
/* hu */ {IDCLS_RESTORE_DEFAULT_SETTINGS_HU, "Alap�rtelmez�s vissza�ll�t�sa"},
/* it */ {IDCLS_RESTORE_DEFAULT_SETTINGS_IT, "Ripristina impostazioni predefinite"},
/* ko */ {IDCLS_RESTORE_DEFAULT_SETTINGS_KO, "����Ʈ ���� ������Ű��"},
/* nl */ {IDCLS_RESTORE_DEFAULT_SETTINGS_NL, "Herstel standaard instellingen"},
/* pl */ {IDCLS_RESTORE_DEFAULT_SETTINGS_PL, "Przywr�� domy�lne ustawienia"},
/* ru */ {IDCLS_RESTORE_DEFAULT_SETTINGS_RU, "������������ ��������� �� ���������"},
/* sv */ {IDCLS_RESTORE_DEFAULT_SETTINGS_SV, "�terst�ll f�rvalda inst�llningar"},
/* tr */ {IDCLS_RESTORE_DEFAULT_SETTINGS_TR, "Varsay�lan ayarlar� geri y�kle"},
#endif

/* initcmdline.c, c64/cart/mmcreplay.c */
/* en */ {IDCLS_P_FILE,    N_("<filename>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_FILE_DA, "<filnavn>"},
/* de */ {IDCLS_P_FILE_DE, "<Dateiname>"},
/* es */ {IDCLS_P_FILE_ES, "<Nombre fichero>"},
/* fr */ {IDCLS_P_FILE_FR, "<nom de fichier>"},
/* hu */ {IDCLS_P_FILE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_FILE_IT, "<nome file>"},
/* ko */ {IDCLS_P_FILE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_FILE_NL, "<bestandsnaam>"},
/* pl */ {IDCLS_P_FILE_PL, "<filename>"},
/* ru */ {IDCLS_P_FILE_RU, "<��� �����>"},
/* sv */ {IDCLS_P_FILE_SV, "<filnamn>"},
/* tr */ {IDCLS_P_FILE_TR, "<dosyaismi>"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_SPECIFY_CONFIG_FILE,    N_("Specify config file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_CONFIG_FILE_DA, "Angiv konfigurationsfil"},
/* de */ {IDCLS_SPECIFY_CONFIG_FILE_DE, "Konfigurationsdateiname definieren"},
/* es */ {IDCLS_SPECIFY_CONFIG_FILE_ES, "Especificar fichero de configuraci�n"},
/* fr */ {IDCLS_SPECIFY_CONFIG_FILE_FR, "Sp�cifier le fichier de configuration"},
/* hu */ {IDCLS_SPECIFY_CONFIG_FILE_HU, "Adja meg a konfigur�ci�s f�jl nev�t"},
/* it */ {IDCLS_SPECIFY_CONFIG_FILE_IT, "Specifica il nome del file di configurazione"},
/* ko */ {IDCLS_SPECIFY_CONFIG_FILE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_CONFIG_FILE_NL, "Geef configuratie bestandsnaam"},
/* pl */ {IDCLS_SPECIFY_CONFIG_FILE_PL, "Okre�l plik konfiguracji"},
/* ru */ {IDCLS_SPECIFY_CONFIG_FILE_RU, "Specify config file"},
/* sv */ {IDCLS_SPECIFY_CONFIG_FILE_SV, "Ange inst�llningsfil"},
/* tr */ {IDCLS_SPECIFY_CONFIG_FILE_TR, "Konfig�rasyon dosyas�n� belirt"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_SPECIFY_DUMPCONFIG_FILE,    N_("Dump all resources to specified config file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_DE, "Exportiere s�mtliche Resourcen in angegebene Datei"},
/* es */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_NL, "Sla alle huidige instellingen op naar opgegeven configuratiebestand"},
/* pl */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_DUMPCONFIG_FILE_TR, ""},  /* fuzzy */
#endif

/* initcmdline.c */
/* en */ {IDCLS_LIMIT_CYCLES,    N_("Specify number of cycles to run before quitting with an error.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_LIMIT_CYCLES_DA, ""},  /* fuzzy */
/* de */ {IDCLS_LIMIT_CYCLES_DE, "Definiere die Zyklenanzahl, welche vor dem Beenden der Emulation noch\nausgef�hrt wird."},
/* es */ {IDCLS_LIMIT_CYCLES_ES, "Especificar n�mero de ciclos a ejecutar antes de salir con un error"},
/* fr */ {IDCLS_LIMIT_CYCLES_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_LIMIT_CYCLES_HU, ""},  /* fuzzy */
/* it */ {IDCLS_LIMIT_CYCLES_IT, "Specifica il numero di cicli da eseguire prima di uscire con un errore."},
/* ko */ {IDCLS_LIMIT_CYCLES_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_LIMIT_CYCLES_NL, "Geef het aantal uit te voeren cycli voor het afsluiten met een fout."},
/* pl */ {IDCLS_LIMIT_CYCLES_PL, "Ustal, ile cykli pu�ci� przed zatrzymaniem i wyrzuceniem b��du."},
/* ru */ {IDCLS_LIMIT_CYCLES_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_LIMIT_CYCLES_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_LIMIT_CYCLES_TR, ""},  /* fuzzy */
#endif

/* initcmdline.c */
/* en */ {IDCLS_ATTACH_AND_AUTOSTART,    N_("Attach and autostart tape/disk image <name>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_AND_AUTOSTART_DA, "Tilslut og autostart b�nd-/disk-image <navn>"},
/* de */ {IDCLS_ATTACH_AND_AUTOSTART_DE, "Einlegen und Autostart Disk/Band Imagedatei <Name>"},
/* es */ {IDCLS_ATTACH_AND_AUTOSTART_ES, "Insertar y autoarrancar imagen de cinta/disco <nombre>"},
/* fr */ {IDCLS_ATTACH_AND_AUTOSTART_FR, "Ins�rer et autocharger l'image de disque/datassette <nom>"},
/* hu */ {IDCLS_ATTACH_AND_AUTOSTART_HU, "<n�v> lemez/szalag k�pm�s csatol�sa �s automatikus elind�t�sa"},
/* it */ {IDCLS_ATTACH_AND_AUTOSTART_IT, "Seleziona ed avvia l'immagine di una cassetta/disco <nome>"},
/* ko */ {IDCLS_ATTACH_AND_AUTOSTART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_AND_AUTOSTART_NL, "Koppel en autostart tape/diskbestand <naam>"},
/* pl */ {IDCLS_ATTACH_AND_AUTOSTART_PL, "Zamontuj i automatycznie uruchom obraz ta�my lub dysku <nazwa>"},
/* ru */ {IDCLS_ATTACH_AND_AUTOSTART_RU, "Attach and autostart tape/disk image <name>"},
/* sv */ {IDCLS_ATTACH_AND_AUTOSTART_SV, "Anslut och starta band-/diskettavbildning <namn>"},
/* tr */ {IDCLS_ATTACH_AND_AUTOSTART_TR, "Teyp/Disk imaj� <isim> yerle�tir ve otomatik ba�lat"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_ATTACH_AND_AUTOLOAD,    N_("Attach and autoload tape/disk image <name>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_AND_AUTOLOAD_DA, "Tilslut og l�s b�nd-/disk-image <navn>"},
/* de */ {IDCLS_ATTACH_AND_AUTOLOAD_DE, "Einlegen und Autoload Disk/Band Imagedatei <Name>"},
/* es */ {IDCLS_ATTACH_AND_AUTOLOAD_ES, "Insertar y autocargar imagen de cinta/disco <nombre>"},
/* fr */ {IDCLS_ATTACH_AND_AUTOLOAD_FR, "Ins�rer et charger l'image de disque/datassette <nom>"},
/* hu */ {IDCLS_ATTACH_AND_AUTOLOAD_HU, "<n�v> lemez/szalag k�pm�s csatol�sa �s automatikus bet�lt�se"},
/* it */ {IDCLS_ATTACH_AND_AUTOLOAD_IT, "Seleziona e carica l'immagine di una cassetta/disco <nome>"},
/* ko */ {IDCLS_ATTACH_AND_AUTOLOAD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_AND_AUTOLOAD_NL, "Koppel en autolaad tape-/diskbestand <naam>"},
/* pl */ {IDCLS_ATTACH_AND_AUTOLOAD_PL, "Zamontuj i automatycznie wczytaj obraz ta�my lub dysku <nazwa>"},
/* ru */ {IDCLS_ATTACH_AND_AUTOLOAD_RU, "Attach and autoload tape/disk image <name>"},
/* sv */ {IDCLS_ATTACH_AND_AUTOLOAD_SV, "Anslut och l�s in band-/diskettavbildning <namn>"},
/* tr */ {IDCLS_ATTACH_AND_AUTOLOAD_TR, "Teyp/Disk imaj� <isim> yerle�tir ve otomatik y�kle"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_ATTACH_AS_TAPE,    N_("Attach <name> as a tape image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_AS_TAPE_DA, "Tilslut <navn> som b�nd-image"},
/* de */ {IDCLS_ATTACH_AS_TAPE_DE, "Imagedatei <Name> einlegen"},
/* es */ {IDCLS_ATTACH_AS_TAPE_ES, "Insertar <nombre> como imagen de cinta"},
/* fr */ {IDCLS_ATTACH_AS_TAPE_FR, "Ins�rer <nom> comme image de datassette"},
/* hu */ {IDCLS_ATTACH_AS_TAPE_HU, "<n�v> szalag k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_AS_TAPE_IT, "Seleziona <nome> come un'immagine di una cassetta"},
/* ko */ {IDCLS_ATTACH_AS_TAPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_AS_TAPE_NL, "Koppel <naam> als een tapebestand"},
/* pl */ {IDCLS_ATTACH_AS_TAPE_PL, "Zamontuj <nazwa> jako obraz ta�my"},
/* ru */ {IDCLS_ATTACH_AS_TAPE_RU, "Attach <name> as a tape image"},
/* sv */ {IDCLS_ATTACH_AS_TAPE_SV, "Anslut <namn> som bandavbildning"},
/* tr */ {IDCLS_ATTACH_AS_TAPE_TR, "Teyp imaj� olarak <isim> yerle�tir"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_ATTACH_AS_DISK_8,    N_("Attach <name> as a disk image in drive #8")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_AS_DISK_8_DA, "Tilslut <navn> som disk-image i enhed #8"},
/* de */ {IDCLS_ATTACH_AS_DISK_8_DE, "Imagedatei <Name> im Laufwerk #8 einlegen"},
/* es */ {IDCLS_ATTACH_AS_DISK_8_ES, "Insertar <nombre> como imagen disco en unidad disco #8"},
/* fr */ {IDCLS_ATTACH_AS_DISK_8_FR, "Ins�rer <nom> comme image de disque dans le lecteur #8"},
/* hu */ {IDCLS_ATTACH_AS_DISK_8_HU, "<n�v> lemezk�pm�s csatol�sa #8-as egys�gk�nt"},
/* it */ {IDCLS_ATTACH_AS_DISK_8_IT, "Seleziona <nome> come un'immagine di un disco nel drive #8"},
/* ko */ {IDCLS_ATTACH_AS_DISK_8_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_AS_DISK_8_NL, "Koppel <naam> aan als een schijfbestand in drive #8"},
/* pl */ {IDCLS_ATTACH_AS_DISK_8_PL, "Zamontuj <nazwa> jako obraz dyskietki w stacji #8"},
/* ru */ {IDCLS_ATTACH_AS_DISK_8_RU, "Attach <name> as a disk image in drive #8"},
/* sv */ {IDCLS_ATTACH_AS_DISK_8_SV, "Anslut <namn> som diskettavbildning i enhet 8"},
/* tr */ {IDCLS_ATTACH_AS_DISK_8_TR, "S�r�c� #8 disk imaj� olarak <isim> yerle�tir"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_ATTACH_AS_DISK_9,    N_("Attach <name> as a disk image in drive #9")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_AS_DISK_9_DA, "Tilslut <navn> som disk-image i enhed #9"},
/* de */ {IDCLS_ATTACH_AS_DISK_9_DE, "Imagedatei <Name> im Laufwerk #9 einlegen"},
/* es */ {IDCLS_ATTACH_AS_DISK_9_ES, "Insertar <nombre> como imagen disco en unidad disco #9"},
/* fr */ {IDCLS_ATTACH_AS_DISK_9_FR, "Ins�rer <nom> comme image de disque dans le lecteur #9"},
/* hu */ {IDCLS_ATTACH_AS_DISK_9_HU, "<n�v> lemezk�pm�s csatol�sa #9-es egys�gk�nt"},
/* it */ {IDCLS_ATTACH_AS_DISK_9_IT, "Seleziona <nome> come un'immagine di un disco nel drive #9"},
/* ko */ {IDCLS_ATTACH_AS_DISK_9_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_AS_DISK_9_NL, "Koppel <naam> aan als een schijfbestand in drive #9"},
/* pl */ {IDCLS_ATTACH_AS_DISK_9_PL, "Zamontuj <nazwa> jako obraz dyskietki w stacji #9"},
/* ru */ {IDCLS_ATTACH_AS_DISK_9_RU, "Attach <name> as a disk image in drive #9"},
/* sv */ {IDCLS_ATTACH_AS_DISK_9_SV, "Anslut <namn> som diskettavbildning i enhet 9"},
/* tr */ {IDCLS_ATTACH_AS_DISK_9_TR, "S�r�c� #9 disk imaj� olarak <isim> yerle�tir"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_ATTACH_AS_DISK_10,    N_("Attach <name> as a disk image in drive #10")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_AS_DISK_10_DA, "Tilslut <navn> som disk-image i enhed #10"},
/* de */ {IDCLS_ATTACH_AS_DISK_10_DE, "Imagedatei <Name> im Laufwerk #10 einlegen"},
/* es */ {IDCLS_ATTACH_AS_DISK_10_ES, "Insertar <nombre> como imagen disco en unidad disco #10"},
/* fr */ {IDCLS_ATTACH_AS_DISK_10_FR, "Ins�rer <nom> comme image de disque dans le lecteur #10"},
/* hu */ {IDCLS_ATTACH_AS_DISK_10_HU, "<n�v> lemezk�pm�s csatol�sa #10-es egys�gk�nt"},
/* it */ {IDCLS_ATTACH_AS_DISK_10_IT, "Seleziona <nome> come un'immagine di un disco nel drive #10"},
/* ko */ {IDCLS_ATTACH_AS_DISK_10_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_AS_DISK_10_NL, "Koppel <naam> aan als een schijfbestand in drive #10"},
/* pl */ {IDCLS_ATTACH_AS_DISK_10_PL, "Zamontuj <nazwa> jako obraz dyskietki w stacji #10"},
/* ru */ {IDCLS_ATTACH_AS_DISK_10_RU, "Attach <name> as a disk image in drive #10"},
/* sv */ {IDCLS_ATTACH_AS_DISK_10_SV, "Anslut <namn> som diskettavbildning i enhet 10"},
/* tr */ {IDCLS_ATTACH_AS_DISK_10_TR, "S�r�c� #10 disk imaj� olarak <isim> yerle�tir"},
#endif

/* initcmdline.c */
/* en */ {IDCLS_ATTACH_AS_DISK_11,    N_("Attach <name> as a disk image in drive #11")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_AS_DISK_11_DA, "Tilslut <navn> som disk-image i enhed #11"},
/* de */ {IDCLS_ATTACH_AS_DISK_11_DE, "Imagedatei <Name> im Laufwerk #11 einlegen"},
/* es */ {IDCLS_ATTACH_AS_DISK_11_ES, "Insertar <nombre> como imagen disco en unidad disco #11"},
/* fr */ {IDCLS_ATTACH_AS_DISK_11_FR, "Ins�rer <nom> comme image de disque dans le lecteur #11"},
/* hu */ {IDCLS_ATTACH_AS_DISK_11_HU, "<n�v> lemezk�pm�s csatol�sa #11-es egys�gk�nt"},
/* it */ {IDCLS_ATTACH_AS_DISK_11_IT, "Seleziona <nome> come un'immagine di un disco nel drive #11"},
/* ko */ {IDCLS_ATTACH_AS_DISK_11_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_AS_DISK_11_NL, "Koppel <naam> aan als een schijfbestand in drive #11"},
/* pl */ {IDCLS_ATTACH_AS_DISK_11_PL, "Zamontuj <nazwa> jako obraz dyskietki w stacji #11"},
/* ru */ {IDCLS_ATTACH_AS_DISK_11_RU, "Attach <name> as a disk image in drive #11"},
/* sv */ {IDCLS_ATTACH_AS_DISK_11_SV, "Anslut <namn> som diskettavbildning i enhet 11"},
/* tr */ {IDCLS_ATTACH_AS_DISK_11_TR, "S�r�c� #11 disk imaj� olarak <isim> yerle�tir"},
#endif

/* kbdbuf.c */
/* en */ {IDCLS_P_STRING,    N_("<string>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_STRING_DA, "<streng>"},
/* de */ {IDCLS_P_STRING_DE, "<String>"},
/* es */ {IDCLS_P_STRING_ES, "<cadena>"},
/* fr */ {IDCLS_P_STRING_FR, "<chaine>"},
/* hu */ {IDCLS_P_STRING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_STRING_IT, "<stringa>"},
/* ko */ {IDCLS_P_STRING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_STRING_NL, "<tekenreeks>"},
/* pl */ {IDCLS_P_STRING_PL, "<string>"},
/* ru */ {IDCLS_P_STRING_RU, "<string>"},
/* sv */ {IDCLS_P_STRING_SV, "<str�ng>"},
/* tr */ {IDCLS_P_STRING_TR, "<yaz�>"},
#endif

/* kbdbuf.c */
/* en */ {IDCLS_PUT_STRING_INTO_KEYBUF,    N_("Put the specified string into the keyboard buffer.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PUT_STRING_INTO_KEYBUF_DA, "Inds�t den angivne streng i tastatur-bufferen."},
/* de */ {IDCLS_PUT_STRING_INTO_KEYBUF_DE, "Definierte Eingabe in Tastaturpuffer bereitstellen."},
/* es */ {IDCLS_PUT_STRING_INTO_KEYBUF_ES, "Introduce la cadena indicada en el b�fer de teclado."},
/* fr */ {IDCLS_PUT_STRING_INTO_KEYBUF_FR, "Placer la cha�ne sp�cifi�e dans le tampon clavier."},
/* hu */ {IDCLS_PUT_STRING_INTO_KEYBUF_HU, "A megadott sztring elhelyez�se a billenty�zet pufferben."},
/* it */ {IDCLS_PUT_STRING_INTO_KEYBUF_IT, "Metti la stringa specificata nel buffer di tastiera."},
/* ko */ {IDCLS_PUT_STRING_INTO_KEYBUF_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PUT_STRING_INTO_KEYBUF_NL, "Plaats de opgegeven tekenreeks in de toetsenbordbuffer."},
/* pl */ {IDCLS_PUT_STRING_INTO_KEYBUF_PL, "Umie�� dany ci�g znak�w w buforze klawiatury"},
/* ru */ {IDCLS_PUT_STRING_INTO_KEYBUF_RU, "Put the specified string into the keyboard buffer."},
/* sv */ {IDCLS_PUT_STRING_INTO_KEYBUF_SV, "L�gg den angivna str�ngen i tangentbordsbufferten."},
/* tr */ {IDCLS_PUT_STRING_INTO_KEYBUF_TR, "Klavye arabelle�ine belirtilen yaz�y� koy."},
#endif

/* autostart.c */
/* en */ {IDCLS_SET_KEYBUF_DELAY,    N_("Set additional keyboard buffer delay (0: use default)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_KEYBUF_DELAY_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_KEYBUF_DELAY_DE, "Setze zus�tzliche Tastaturbuffer Verz�gerung (0: benutze Standard)"},
/* es */ {IDCLS_SET_KEYBUF_DELAY_ES, "Seleccionar retardo adicional buffer de teclado (0: Por defecto)"},
/* fr */ {IDCLS_SET_KEYBUF_DELAY_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_KEYBUF_DELAY_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_KEYBUF_DELAY_IT, "Imposta il ritardo supplementare del buffer di tastiera (0: usa predefinito)"},
/* ko */ {IDCLS_SET_KEYBUF_DELAY_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_KEYBUF_DELAY_NL, "Stel extra toetsenbord buffer vertraging in (0: gebruik de standaard waarde)"},
/* pl */ {IDCLS_SET_KEYBUF_DELAY_PL, "Okre�l dodatkowe op�nienie bufora klawiatury (0: domy�lne)"},
/* ru */ {IDCLS_SET_KEYBUF_DELAY_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_KEYBUF_DELAY_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_KEYBUF_DELAY_TR, ""},  /* fuzzy */
#endif

/* log.c */
/* en */ {IDCLS_SPECIFY_LOG_FILE_NAME,    N_("Specify log file name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_LOG_FILE_NAME_DA, "Angiv navn p� logfil"},
/* de */ {IDCLS_SPECIFY_LOG_FILE_NAME_DE, "Logdateiname w�hlen"},
/* es */ {IDCLS_SPECIFY_LOG_FILE_NAME_ES, "Especificar nombre fichero registro"},
/* fr */ {IDCLS_SPECIFY_LOG_FILE_NAME_FR, "Sp�cifier le nom du fichier log"},
/* hu */ {IDCLS_SPECIFY_LOG_FILE_NAME_HU, "Adja meg a napl�f�jl nev�t"},
/* it */ {IDCLS_SPECIFY_LOG_FILE_NAME_IT, "Specifica il nome del file di log"},
/* ko */ {IDCLS_SPECIFY_LOG_FILE_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_LOG_FILE_NAME_NL, "Geef de naam van het logbestand"},
/* pl */ {IDCLS_SPECIFY_LOG_FILE_NAME_PL, "Okre�l nazw� pliku z logiem"},
/* ru */ {IDCLS_SPECIFY_LOG_FILE_NAME_RU, "Specify log file name"},
/* sv */ {IDCLS_SPECIFY_LOG_FILE_NAME_SV, "Ange namn p� loggfil"},
/* tr */ {IDCLS_SPECIFY_LOG_FILE_NAME_TR, "Log dosyas� ismini belirt"},
#endif

/* log.c */
/* en */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT,    N_("Enable verbose log output.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_DA, "Aktiv�r omst�ndeligt log-output"},
/* de */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_DE, "Ausf�hrliche Diagnose aktivieren."},
/* es */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_ES, "Permitir salida escrita registro."},
/* fr */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_FR, "Activer la journalisation verbeuse"},
/* hu */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_IT, "Attiva output dei log verboso."},
/* ko */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_NL, "Uitgebreide log uitvoer inschakelen."},
/* pl */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_PL, "W��cz szczeg�owy zapis do loga"},
/* ru */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_RU, "Enable verbose log output."},
/* sv */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_SV, "Aktivera pratsam loggutdata."},
/* tr */ {IDCLS_ENABLE_VERBOSE_LOG_OUTPUT_TR, "Verbose log ��kt�s�n� aktif et."},
#endif

/* log.c */
/* en */ {IDCLS_DISABLE_LOG_OUTPUT,    N_("Disable verbose log output.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_LOG_OUTPUT_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_LOG_OUTPUT_DE, "Ausf�hrliche Diagnose deaktivieren."},
/* es */ {IDCLS_DISABLE_LOG_OUTPUT_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_LOG_OUTPUT_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_LOG_OUTPUT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_LOG_OUTPUT_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_LOG_OUTPUT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_LOG_OUTPUT_NL, ""},  /* fuzzy */
/* pl */ {IDCLS_DISABLE_LOG_OUTPUT_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_LOG_OUTPUT_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_LOG_OUTPUT_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_LOG_OUTPUT_TR, ""},  /* fuzzy */
#endif

/* mouse.c */
/* en */ {IDCLS_ENABLE_MOUSE_GRAB,    N_("Enable mouse grab")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_MOUSE_GRAB_DA, "Aktiv�r overtagelse af mus"},
/* de */ {IDCLS_ENABLE_MOUSE_GRAB_DE, "Maus aktivieren"},
/* es */ {IDCLS_ENABLE_MOUSE_GRAB_ES, "Permitir captura del rat�n"},
/* fr */ {IDCLS_ENABLE_MOUSE_GRAB_FR, "Saisir la souris"},
/* hu */ {IDCLS_ENABLE_MOUSE_GRAB_HU, "Eg�r elkap�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_MOUSE_GRAB_IT, "Attiva cattura mouse"},
/* ko */ {IDCLS_ENABLE_MOUSE_GRAB_KO, "���콺 �׷� �����ϰ� �ϱ�"},
/* nl */ {IDCLS_ENABLE_MOUSE_GRAB_NL, "Gebruiken van de muis inschakelen"},
/* pl */ {IDCLS_ENABLE_MOUSE_GRAB_PL, "W��cz przechwytywanie myszy"},
/* ru */ {IDCLS_ENABLE_MOUSE_GRAB_RU, "Enable mouse grab"},
/* sv */ {IDCLS_ENABLE_MOUSE_GRAB_SV, "Aktivera f�ngande av mus"},
/* tr */ {IDCLS_ENABLE_MOUSE_GRAB_TR, "Mouse yakalamay� aktif et"},
#endif

/* mouse.c */
/* en */ {IDCLS_DISABLE_MOUSE_GRAB,    N_("Disable mouse grab")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_MOUSE_GRAB_DA, "Deaktiv�r overtagelse af mus"},
/* de */ {IDCLS_DISABLE_MOUSE_GRAB_DE, "Maus deaktivieren"},
/* es */ {IDCLS_DISABLE_MOUSE_GRAB_ES, "Deshabilitar captura de rat�n"},
/* fr */ {IDCLS_DISABLE_MOUSE_GRAB_FR, "Ne pas saisir la souris"},
/* hu */ {IDCLS_DISABLE_MOUSE_GRAB_HU, "Eg�r elkap�s tilt�sa"},
/* it */ {IDCLS_DISABLE_MOUSE_GRAB_IT, "Disattiva cattura mouse"},
/* ko */ {IDCLS_DISABLE_MOUSE_GRAB_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_MOUSE_GRAB_NL, "Gebruiken van de muis uitschakelen"},
/* pl */ {IDCLS_DISABLE_MOUSE_GRAB_PL, "Wy��cz przechwytywanie myszy"},
/* ru */ {IDCLS_DISABLE_MOUSE_GRAB_RU, "Disable mouse grab"},
/* sv */ {IDCLS_DISABLE_MOUSE_GRAB_SV, "Inaktivera f�ngande av mus"},
/* tr */ {IDCLS_DISABLE_MOUSE_GRAB_TR, "Mouse yakalamay� pasifle�tir"},
#endif

/* mouse.c */
/* en */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE,    N_("Enable saving of smart mouse RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_DE, "Smart Mouse RTC Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_ES, "Permitir grabar datos smart mouse RTC cuando cambien."},
/* fr */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_IT, "Attiva il salvataggio dei dati RTC dello smart mouse alla modifica."},
/* ko */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_NL, "Opslaan van de smart mouse RTC gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_PL, "Zapisuj dane zegara czasu rzeczywistego Smart Mouse przy zmianie"},
/* ru */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_SMART_MOUSE_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* mouse.c */
/* en */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE,    N_("Disable saving of smart mouse RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_DE, "Smart Mouse RTC Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_ES, "Deshabilitar grabar datos Smart Mouse RTC cuand cambien."},
/* fr */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_IT, "Disattiva il salvataggio dei dati RTC dello smart mouse alla modifica."},
/* ko */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_NL, "Opslaan van de smart mouse RTC gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_PL, "Nie zapisuj danych zegara czasu rzeczywistego Smart Mouse przy zmianie"},
/* ru */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_SMART_MOUSE_RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* ps2mouse.c */
/* en */ {IDCLS_ENABLE_PS2MOUSE,    N_("Enable PS/2 mouse on userport")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_PS2MOUSE_DA, "Aktiv�r PS/2-mus p� brugerporten"},
/* de */ {IDCLS_ENABLE_PS2MOUSE_DE, "PS/2 Userport Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_PS2MOUSE_ES, "Permitir rat�n PS/2 en puerto usuario"},
/* fr */ {IDCLS_ENABLE_PS2MOUSE_FR, "Activer souris PS/2 sur port utilisateur"},
/* hu */ {IDCLS_ENABLE_PS2MOUSE_HU, "PS/2 eg�r enged�lyez�se a userporton"},
/* it */ {IDCLS_ENABLE_PS2MOUSE_IT, "Attiva mouse PS/2 su userport"},
/* ko */ {IDCLS_ENABLE_PS2MOUSE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_PS2MOUSE_NL, "Emulatie van een PS/2 muis op de userport inschakelen"},
/* pl */ {IDCLS_ENABLE_PS2MOUSE_PL, "W��cz mysz PS/2 w userporcie"},
/* ru */ {IDCLS_ENABLE_PS2MOUSE_RU, "Enable PS/2 mouse on userport"},
/* sv */ {IDCLS_ENABLE_PS2MOUSE_SV, "Aktivera PS/2-mus p� anv�ndarport"},
/* tr */ {IDCLS_ENABLE_PS2MOUSE_TR, "Userport �zerinde PS/2 mouse'u aktif et"},
#endif

/* ps2mouse.c */
/* en */ {IDCLS_DISABLE_PS2MOUSE,    N_("Disable PS/2 mouse on userport")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_PS2MOUSE_DA, "Deaktiv�r PS/2-mus p� brugerporten"},
/* de */ {IDCLS_DISABLE_PS2MOUSE_DE, "PS/2 Userport Emulation deaktivieren\""},
/* es */ {IDCLS_DISABLE_PS2MOUSE_ES, "Deshabilitar rat�n PS/2 en puerto usuario"},
/* fr */ {IDCLS_DISABLE_PS2MOUSE_FR, "D�sactiver la souris PS/2 sur port utilisateur"},
/* hu */ {IDCLS_DISABLE_PS2MOUSE_HU, "PS/2 eg�r tilt�sa a userporton"},
/* it */ {IDCLS_DISABLE_PS2MOUSE_IT, "Disattiva mouse PS/2 su userport"},
/* ko */ {IDCLS_DISABLE_PS2MOUSE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_PS2MOUSE_NL, "Emulatie van een PS/2 muis op de userport uitschakelen"},
/* pl */ {IDCLS_DISABLE_PS2MOUSE_PL, "Wy��cz mysz PS/2 w userporcie"},
/* ru */ {IDCLS_DISABLE_PS2MOUSE_RU, "Disable PS/2 mouse on userport"},
/* sv */ {IDCLS_DISABLE_PS2MOUSE_SV, "Inaktivera PS/2-mus p� anv�ndarport"},
/* tr */ {IDCLS_DISABLE_PS2MOUSE_TR, "Userport �zerinde PS/2 mouse'u pasifle�tir"},
#endif

/* ram.c */
/* en */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE,    N_("Set the value for the very first RAM address after powerup")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_DA, "Angiv v�rdien for den allerf�rste RAM adresse efter power-up"},
/* de */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_DE, "Wert f�r erstes Byte im RAM nach Kaltstart setzen"},
/* es */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_ES, "Seleccionar el valor para la primera direcci�n RAM despu�s del encendido"},
/* fr */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_FR, "Sp�cifier la valeur de la premi�re adresse RAM apr�s la mise sous tension"},
/* hu */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_HU, "Adja meg a legels� RAM c�m �rt�k�t bekapcsol�s ut�n"},
/* it */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_IT, "Imposta il valore del primissimo indirizzo della RAM dopo l'accensione"},
/* ko */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_NL, "Stel de waarde in voor het allereerste RAM adres na koude start"},
/* pl */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_PL, "Okre�l warto�� pierwszego adresu RAM po uruchomieniu"},
/* ru */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_RU, "Set the value for the very first RAM address after powerup"},
/* sv */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_SV, "Ange v�rdet p� den allra f�rsta RAM-adressen efter str�mp�slag"},
/* tr */ {IDCLS_SET_FIRST_RAM_ADDRESS_VALUE_TR, "G�� verildi�inde ba�lang��taki RAM adreslerine atanacak de�eri belirle"},
#endif

/* ram.c */
/* en */ {IDCLS_P_NUM_OF_BYTES,    N_("<num of bytes>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_NUM_OF_BYTES_DA, "<antal bytes>"},
/* de */ {IDCLS_P_NUM_OF_BYTES_DE, "<Anzahl an Bytes>"},
/* es */ {IDCLS_P_NUM_OF_BYTES_ES, "<n�mero de bytes>"},
/* fr */ {IDCLS_P_NUM_OF_BYTES_FR, "<nb. d'octets>"},
/* hu */ {IDCLS_P_NUM_OF_BYTES_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_NUM_OF_BYTES_IT, "<numero di byte>"},
/* ko */ {IDCLS_P_NUM_OF_BYTES_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_NUM_OF_BYTES_NL, "<aantal bytes>"},
/* pl */ {IDCLS_P_NUM_OF_BYTES_PL, "<num of bytes>"},
/* ru */ {IDCLS_P_NUM_OF_BYTES_RU, "<num of bytes>"},
/* sv */ {IDCLS_P_NUM_OF_BYTES_SV, "<antal byte>"},
/* tr */ {IDCLS_P_NUM_OF_BYTES_TR, "<byte say�s�>"},
#endif

/* ram.c */
/* en */ {IDCLS_LENGTH_BLOCK_SAME_VALUE,    N_("Length of memory block initialized with the same value")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_DA, "L�ngde p� hukommelsesblok som initialiseres med samme v�rdi"},
/* de */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_DE, "L�nge des Speicherblocks der mit dem gleichen Wert initialisiert ist"},
/* es */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_ES, "Longitud del bloque de memoria inicializado con el mismo valor"},
/* fr */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_FR, "Longeur du premier bloc m�moire initialis� avec la m�me valeur"},
/* hu */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_HU, "Azonos �rt�kkel felt�lt�tt mem�ria blokkoknak a hossza"},
/* it */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_IT, "Lunghezza del blocco di memoria inizializzato con lo stesso valore"},
/* ko */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_NL, "Geheugenblokgrootte die dezelfde waarde krijgt bij initialisatie"},
/* pl */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_PL, "D�ugo�� bloku pami�ci zainicjowanego z t� sam� warto�ci�"},
/* ru */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_RU, "Length of memory block initialized with the same value"},
/* sv */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_SV, "L�ngd p� minnesblock som initierats med samma v�rde"},
/* tr */ {IDCLS_LENGTH_BLOCK_SAME_VALUE_TR, "Ayn� de�erle balang�� ayarlar� yap�lan bellek blo�u uzunlu�u"},
#endif

/* ram.c */
/* en */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN,    N_("Length of memory block initialized with the same pattern")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_DA, "L�ngde p� hukommelsesblok som initialiseres med samme m�nster"},
/* de */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_DE, "L�nge des Speicherblocks der mit dem gleichen Muster initialisiert ist"},
/* es */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_ES, "Longitud bloque memoria inicializado con el mismo patr�n"},
/* fr */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_FR, "Longeur du premier bloc m�moire initialis� avec le m�me pattern"},
/* hu */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_HU, "Azonos mint�val felt�lt�tt mem�ria blokkoknak a hossza"},
/* it */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_IT, "Lunghezza del blocco di memoria inizializzato con lo stesso pattern"},
/* ko */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_NL, "Geheugenblokgrootte met hetzelfde patroon bij initialisatie"},
/* pl */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_PL, "D�ugo�� bloku pami�ci zainicjowanego z tym samym wzorcem"},
/* ru */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_RU, "Length of memory block initialized with the same pattern"},
/* sv */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_SV, "L�ngd p� minnesblock som initierats med samma m�nster"},
/* tr */ {IDCLS_LENGTH_BLOCK_SAME_PATTERN_TR, "Ayn� desenle balang�� ayarlar� yap�lan bellek blo�u uzunlu�u"},
#endif

/* romset.c */
/* en */ {IDCLS_PB_FILE,    N_("<File>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PB_FILE_DA, "<Fil>"},
/* de */ {IDCLS_PB_FILE_DE, "<Datei>"},
/* es */ {IDCLS_PB_FILE_ES, "<Archivo>"},
/* fr */ {IDCLS_PB_FILE_FR, "<Fichier>"},
/* hu */ {IDCLS_PB_FILE_HU, "<F�jl>"},
/* it */ {IDCLS_PB_FILE_IT, "<File>"},
/* ko */ {IDCLS_PB_FILE_KO, "<����>"},
/* nl */ {IDCLS_PB_FILE_NL, "<Bestand>"},
/* pl */ {IDCLS_PB_FILE_PL, "<Plik>"},
/* ru */ {IDCLS_PB_FILE_RU, "<����>"},
/* sv */ {IDCLS_PB_FILE_SV, "<Arkiv>"},
/* tr */ {IDCLS_PB_FILE_TR, "<Dosya>"},
#endif

/* romset.c */
/* en */ {IDCLS_LOAD_ROMSET_FILE,    N_("load the given romset file")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_LOAD_ROMSET_FILE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_LOAD_ROMSET_FILE_DE, "Lade angegebene ROM Satz Datei!"},
/* es */ {IDCLS_LOAD_ROMSET_FILE_ES, "Cargar el fichero romset dado"},
/* fr */ {IDCLS_LOAD_ROMSET_FILE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_LOAD_ROMSET_FILE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_LOAD_ROMSET_FILE_IT, "carica il file del ROM set specificato"},
/* ko */ {IDCLS_LOAD_ROMSET_FILE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_LOAD_ROMSET_FILE_NL, "Laad het opgegeven romsetbestand"},
/* pl */ {IDCLS_LOAD_ROMSET_FILE_PL, "Wczytaj dany plik zestawu ROM-�w"},
/* ru */ {IDCLS_LOAD_ROMSET_FILE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_LOAD_ROMSET_FILE_SV, "l�s in angiven romset-fil"},
/* tr */ {IDCLS_LOAD_ROMSET_FILE_TR, ""},  /* fuzzy */
#endif

/* romset.c */
/* en */ {IDCLS_LOAD_ROMSET_ARCHIVE,    N_("load the given romset archive")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_LOAD_ROMSET_ARCHIVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_LOAD_ROMSET_ARCHIVE_DE, "Lade angegebenes ROM Satz Archiv!"},
/* es */ {IDCLS_LOAD_ROMSET_ARCHIVE_ES, "Cargar el archivo romset dado"},
/* fr */ {IDCLS_LOAD_ROMSET_ARCHIVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_LOAD_ROMSET_ARCHIVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_LOAD_ROMSET_ARCHIVE_IT, "carica l'archivio del ROM set specificato"},
/* ko */ {IDCLS_LOAD_ROMSET_ARCHIVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_LOAD_ROMSET_ARCHIVE_NL, "Laad het opgegeven romsetarchief"},
/* pl */ {IDCLS_LOAD_ROMSET_ARCHIVE_PL, "Wczytaj dane archiwum zestawu ROM-�w"},
/* ru */ {IDCLS_LOAD_ROMSET_ARCHIVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_LOAD_ROMSET_ARCHIVE_SV, "l�s in givet romset-arkiv"},
/* tr */ {IDCLS_LOAD_ROMSET_ARCHIVE_TR, ""},  /* fuzzy */
#endif

/* romset.c */
/* en */ {IDCLS_P_ITEM_NUMBER,    N_("<Item number>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_ITEM_NUMBER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_ITEM_NUMBER_DE, "<Titel Nummer>"},
/* es */ {IDCLS_P_ITEM_NUMBER_ES, "<N�mero �tem>"},
/* fr */ {IDCLS_P_ITEM_NUMBER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_ITEM_NUMBER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_ITEM_NUMBER_IT, "<Numero voce>"},
/* ko */ {IDCLS_P_ITEM_NUMBER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_ITEM_NUMBER_NL, "<Item nummer>"},
/* pl */ {IDCLS_P_ITEM_NUMBER_PL, "<Liczba elementu>"},
/* ru */ {IDCLS_P_ITEM_NUMBER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_ITEM_NUMBER_SV, "<Postnummer>"},
/* tr */ {IDCLS_P_ITEM_NUMBER_TR, ""},  /* fuzzy */
#endif

/* romset.c */
/* en */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE,    N_("select the given item from the current romset archive")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_DE, "Auswahl des aktuellen ROM Satz Archivs ausw�hlen"},
/* es */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_ES, "Seleccionar del archivo romset actual el �tem dado"},
/* fr */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_IT, "seleziona la voce specificata dall'archivio del ROM set attuale"},
/* ko */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_NL, "selecteer het opgegeven item van het huidige romsetarchief"},
/* pl */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_PL, "Wybierz dany element z obecnego zestawu ROM-�w."},
/* ru */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_SV, "v�lj given post fr�n aktuellt romset-arkiv"},
/* tr */ {IDCLS_SELECT_ITEM_FROM_ROMSET_ARCHIVE_TR, ""},  /* fuzzy */
#endif

/* sampler/sampler.c */
/* en */ {IDCLS_P_GAIN,    N_("<Sampler gain>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_GAIN_DA, ""},  /* fuzzy */
/* de */ {IDCLS_P_GAIN_DE, "<Sampler Gain>"},
/* es */ {IDCLS_P_GAIN_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_P_GAIN_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_P_GAIN_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_GAIN_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_P_GAIN_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_GAIN_NL, "<Sampler toename>"},
/* pl */ {IDCLS_P_GAIN_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_P_GAIN_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_P_GAIN_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_P_GAIN_TR, ""},  /* fuzzy */
#endif

/* sampler/sampler.c */
/* en */ {IDCLS_SAMPLER_GAIN_IN_PERCENT,    N_("Specify sampler gain in percent (1%-200%)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_DE, "Sampler Gain in Prozent (1% - 200%)"},
/* es */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_NL, "Geef sampler versterking in procent (1% - 200%)"},
/* pl */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SAMPLER_GAIN_IN_PERCENT_TR, ""},  /* fuzzy */
#endif

/* sysfile.c */
/* en */ {IDCLS_P_PATH,    N_("<Path>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_PATH_DA, "<Sti>"},
/* de */ {IDCLS_P_PATH_DE, "<Pfad>"},
/* es */ {IDCLS_P_PATH_ES, "<Camino>"},
/* fr */ {IDCLS_P_PATH_FR, "<Emplacement>"},
/* hu */ {IDCLS_P_PATH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_PATH_IT, "<Percorso>"},
/* ko */ {IDCLS_P_PATH_KO, "<��>"},
/* nl */ {IDCLS_P_PATH_NL, "<Pad>"},
/* pl */ {IDCLS_P_PATH_PL, "<�cie�ka>"},
/* ru */ {IDCLS_P_PATH_RU, "<����>"},
/* sv */ {IDCLS_P_PATH_SV, "<S�kv�g>"},
/* tr */ {IDCLS_P_PATH_TR, "<Yol>"},
#endif

/* sysfile.c */
/* en */ {IDCLS_DEFINE_SYSTEM_FILES_PATH,    N_("Define search path to locate system files")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_DA, "Angiv sti til systemfiler"},
/* de */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_DE, "Suchpfad f�r Systemdateien w�hlen"},
/* es */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_ES, "Definir camino de b�squeda para los ficheros locales de sistema"},
/* fr */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_FR, "D�finir le chemin de recherche pour trouver les fichiers syst�mes"},
/* hu */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_HU, "Keres�si �tvonal megad�sa a rendszerf�jlok megtal�l�s�ra"},
/* it */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_IT, "Definisci il path di ricerca per cercare i file di sistema"},
/* ko */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_NL, "Geef het zoek pad waar de systeem bestanden te vinden zijn"},
/* pl */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_PL, "Definiuj �cie�k� wyszukiwania plik�w systemowych"},
/* ru */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_RU, "Define search path to locate system files"},
/* sv */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_SV, "Ange s�kv�g f�r att hitta systemfiler"},
/* tr */ {IDCLS_DEFINE_SYSTEM_FILES_PATH_TR, "Sistem dosyalar�n�n konumunu belirlemek i�in arama yolu tan�mlay�n"},
#endif

/* traps.c */
/* en */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION,    N_("Enable general mechanisms for fast disk/tape emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_DA, "Aktiv�r generelle mekanismer for hurtig disk-/b�ndemulering"},
/* de */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_DE, "Allgemeine Mechanismen f�r schnelle Disk/Band Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_ES, "Permitir mecanismos generales para emulaci�n r�pida de cinta/disco"},
/* fr */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_FR, "Activer les m�chanismes g�n�raux pour l'�mulation disque/datassette rapide"},
/* hu */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_HU, "A lemez/szalag emul�ci�t gyors�t� mechanizmusok enged�lyez�se"},
/* it */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_IT, "Attiva meccanismo generale per l'emulazione veloce del disco/cassetta"},
/* ko */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_NL, "Algemene methoden voor snelle disk/tape emulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_PL, "W��cz mechanizm szybkiej emulacji dysku i ta�my"},
/* ru */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_RU, "Enable general mechanisms for fast disk/tape emulation"},
/* sv */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_SV, "Aktivera generella mekanismer f�r snabb disk-/bandemulering"},
/* tr */ {IDCLS_ENABLE_TRAPS_FAST_EMULATION_TR, "H�zl� disk/teyp em�lasyonu i�in genel mekanizmay� aktif et"},
#endif

/* traps.c */
/* en */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION,    N_("Disable general mechanisms for fast disk/tape emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_DA, "Deaktiv�r generelle mekanismer for hurtig disk-/b�ndemulering"},
/* de */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_DE, "Allgemeine Mechanismen f�r schnelle Disk/Band Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_ES, "Deshabilitar mecanismos generales para emulaci�n r�pida de cinta/disco"},
/* fr */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_FR, "D�sactiver les m�chanismes g�n�raux pour l'�mulation disque/datassette rapide"},
/* hu */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_HU, "A lemez/szalag emul�ci�t gyors�t� mechanizmusok tilt�sa"},
/* it */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_IT, "Disattiva meccanismo generale per l'emulazione veloce del disco/cassetta"},
/* ko */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_NL, "Algemene methoden voor snelle disk/tape emulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_PL, "Wy��cz mechanizm szybkiej emulacji dysku i ta�my"},
/* ru */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_RU, "Disable general mechanisms for fast disk/tape emulation"},
/* sv */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_SV, "Inaktivera generella mekanismer f�r snabb disk-/bandemulering"},
/* tr */ {IDCLS_DISABLE_TRAPS_FAST_EMULATION_TR, "H�zl� disk/teyp em�lasyonu i�in genel mekanizmay� pasifle�tir"},
#endif

/* translate.c */
/* en */ {IDCLS_P_ISO_LANGUAGE_CODE,    N_("<iso language code>")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_P_ISO_LANGUAGE_CODE_DA, "<iso-sprogkode>"},
/* de */ {IDCLS_P_ISO_LANGUAGE_CODE_DE, "<iso Sprachcode>"},
/* es */ {IDCLS_P_ISO_LANGUAGE_CODE_ES, "<c�digo ISO idioma>"},
/* fr */ {IDCLS_P_ISO_LANGUAGE_CODE_FR, "<code language ISO>"},
/* hu */ {IDCLS_P_ISO_LANGUAGE_CODE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_P_ISO_LANGUAGE_CODE_IT, "<codice iso lingua>"},
/* ko */ {IDCLS_P_ISO_LANGUAGE_CODE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_P_ISO_LANGUAGE_CODE_NL, "<iso taalcode>"},
/* pl */ {IDCLS_P_ISO_LANGUAGE_CODE_PL, "<Kod j�zykowy iso>"},
/* ru */ {IDCLS_P_ISO_LANGUAGE_CODE_RU, "<iso language code>"},
/* sv */ {IDCLS_P_ISO_LANGUAGE_CODE_SV, "<iso-spr�kkod>"},
/* tr */ {IDCLS_P_ISO_LANGUAGE_CODE_TR, "<iso dil kodu>"},
#endif

/* c64/plus256k.c */
/* en */ {IDCLS_SPECIFY_PLUS256K_NAME,    N_("Specify name of PLUS256K image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PLUS256K_NAME_DA, "Angiv navn p� PLUS256K-image"},
/* de */ {IDCLS_SPECIFY_PLUS256K_NAME_DE, "Name der PLUS256K Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_PLUS256K_NAME_ES, "Especificar nombre imagen RAM PLUS256K"},
/* fr */ {IDCLS_SPECIFY_PLUS256K_NAME_FR, "Sp�cifier le nom de l'image PLUS256K RAM"},
/* hu */ {IDCLS_SPECIFY_PLUS256K_NAME_HU, "Adja meg a PLUS256K-s k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_PLUS256K_NAME_IT, "Specifica il nome immagine PLUS256K"},
/* ko */ {IDCLS_SPECIFY_PLUS256K_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PLUS256K_NAME_NL, "Geef de naam van het PLUS256K bestand"},
/* pl */ {IDCLS_SPECIFY_PLUS256K_NAME_PL, "Okre�l nazw� obrazu PLUS256K"},
/* ru */ {IDCLS_SPECIFY_PLUS256K_NAME_RU, "Specify name of PLUS256K image"},
/* sv */ {IDCLS_SPECIFY_PLUS256K_NAME_SV, "Ange namn p� PLUS256K-avbildning"},
/* tr */ {IDCLS_SPECIFY_PLUS256K_NAME_TR, "PLUS256K imaj�n�n ismini belirt"},
#endif

/* c64/plus60k.c */
/* en */ {IDCLS_SPECIFY_PLUS60K_NAME,    N_("Specify name of PLUS60K image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_PLUS60K_NAME_DA, "Angiv navn p� PLUS60K-image"},
/* de */ {IDCLS_SPECIFY_PLUS60K_NAME_DE, "Name der PLUS60K Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_PLUS60K_NAME_ES, "Especificar nombre imagen PLUS60K"},
/* fr */ {IDCLS_SPECIFY_PLUS60K_NAME_FR, "Sp�cifier le nom de l'image PLUS60K RAM"},
/* hu */ {IDCLS_SPECIFY_PLUS60K_NAME_HU, "Adja meg a nev�t a PLUS60K k�pm�snak"},
/* it */ {IDCLS_SPECIFY_PLUS60K_NAME_IT, "Specifica il nome immagine PLUS60K"},
/* ko */ {IDCLS_SPECIFY_PLUS60K_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_PLUS60K_NAME_NL, "Geef de naam van het PLUS60K bestand"},
/* pl */ {IDCLS_SPECIFY_PLUS60K_NAME_PL, "Okre�l nazw� obrazu PLUS60K"},
/* ru */ {IDCLS_SPECIFY_PLUS60K_NAME_RU, "Specify name of PLUS60K image"},
/* sv */ {IDCLS_SPECIFY_PLUS60K_NAME_SV, "Ange namn p� plUS60K-avbildning"},
/* tr */ {IDCLS_SPECIFY_PLUS60K_NAME_TR, "PLUS60K imaj�n�n ismini belirt"},
#endif

/* c64/plus60k.c */
/* en */ {IDCLS_PLUS60K_BASE,    N_("Base address of the PLUS60K expansion. (0xD040/0xD100)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_PLUS60K_BASE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_PLUS60K_BASE_DE, "Basis Adresse f�r PLUS60K Erweiterung. (0xD040/0xD100)"},
/* es */ {IDCLS_PLUS60K_BASE_ES, "Direcci�n base de la expansi�n PLUS60K. (0xD040/0xD100)"},
/* fr */ {IDCLS_PLUS60K_BASE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_PLUS60K_BASE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_PLUS60K_BASE_IT, "Indirizzo base espansione PLUS60K. (0xD040/0xD100)"},
/* ko */ {IDCLS_PLUS60K_BASE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_PLUS60K_BASE_NL, "Basisadres van de PLUS60K geheugenuitbreiding. (0xD040/0xD100)"},
/* pl */ {IDCLS_PLUS60K_BASE_PL, "Adres bazowy rozszerzenia PLUS60K. (0xD040/0xD100)"},
/* ru */ {IDCLS_PLUS60K_BASE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_PLUS60K_BASE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_PLUS60K_BASE_TR, ""},  /* fuzzy */
#endif

/* c64/c64_256k.c */
/* en */ {IDCLS_SPECIFY_C64_256K_NAME,    N_("Specify name of 256K image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_C64_256K_NAME_DA, "Angiv navn p� 256k-image"},
/* de */ {IDCLS_SPECIFY_C64_256K_NAME_DE, "Name der 256K Imagedatei w�hlen"},
/* es */ {IDCLS_SPECIFY_C64_256K_NAME_ES, "Especificar nombre imagen 256K"},
/* fr */ {IDCLS_SPECIFY_C64_256K_NAME_FR, "Sp�cifier le nom de l'image 256K"},
/* hu */ {IDCLS_SPECIFY_C64_256K_NAME_HU, "Adja meg a 256K-s k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_C64_256K_NAME_IT, "Specifica il nome immagine 256K"},
/* ko */ {IDCLS_SPECIFY_C64_256K_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_C64_256K_NAME_NL, "Geef de naam van het 256K bestand"},
/* pl */ {IDCLS_SPECIFY_C64_256K_NAME_PL, "Okre�l nazw� obrazu 256K"},
/* ru */ {IDCLS_SPECIFY_C64_256K_NAME_RU, "Specify name of 256K image"},
/* sv */ {IDCLS_SPECIFY_C64_256K_NAME_SV, "Ange namn p� 256K-avbildning"},
/* tr */ {IDCLS_SPECIFY_C64_256K_NAME_TR, "256K imaj�n�n ismini belirt"},
#endif

/* c64/c64_256k.c */
/* en */ {IDCLS_C64_256K_BASE,    N_("Base address of the 256K expansion. (0xDE00/0xDE80/0xDF00/0xDF80)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_C64_256K_BASE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_C64_256K_BASE_DE, "Basis Adresse f�r 256K RAM Erweiterung. (0xDE00/0xDE80/0xDF00/0xDF80)"},
/* es */ {IDCLS_C64_256K_BASE_ES, "Direcci�n base de la expansi�n 256K. (0xDE00/0xDE80/0xDF00/0xDF80)"},
/* fr */ {IDCLS_C64_256K_BASE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_C64_256K_BASE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_C64_256K_BASE_IT, "Indirizzo base dell'espansione 256K. (0xDE00/0xDE80/0xDF00/0xDF80)"},
/* ko */ {IDCLS_C64_256K_BASE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_C64_256K_BASE_NL, "Basisadres van de 256K geheugenuitbreiding. (0xDE00/0xDE80/0xDF00/0xDF80)"},
/* pl */ {IDCLS_C64_256K_BASE_PL, "Adres bazowy rozszerzenia 256K. (0xDE00/0xDE80/0xDF00/0xDF80)"},
/* ru */ {IDCLS_C64_256K_BASE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_C64_256K_BASE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_C64_256K_BASE_TR, ""},  /* fuzzy */
#endif

/* c64/c64-memory-hacks.c */
/* en */ {IDCLS_SET_C64_MEMORY_HACK,    N_("Set the 'memory expansion hack' device (0: None, 1: C64 256K, 2: +60K, 3: +256K)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_C64_MEMORY_HACK_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_C64_MEMORY_HACK_DE, "Speichererweiterungshack Ger�t (0: kein, 1: C64 256K, 2: +60K, 3: +256K)"},
/* es */ {IDCLS_SET_C64_MEMORY_HACK_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_C64_MEMORY_HACK_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_C64_MEMORY_HACK_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_C64_MEMORY_HACK_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_C64_MEMORY_HACK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_C64_MEMORY_HACK_NL, "Stel het 'geheugen uitbreidingen hack' apparaat in (0: Geen, 1: C64 256K, 2: +60K, 3: +256K)"},
/* pl */ {IDCLS_SET_C64_MEMORY_HACK_PL, "Ustaw urz�dzenie 'hacka' rozszerzenia pami�ci (0: Brak, 1: 256K C64, 2: +60K, 3: +256K)"},
/* ru */ {IDCLS_SET_C64_MEMORY_HACK_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_C64_MEMORY_HACK_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_C64_MEMORY_HACK_TR, ""},  /* fuzzy */
#endif

/* plus4/plus4memhacks.c */
/* en */ {IDCLS_SET_PLUS4_MEMORY_HACK,    N_("Set the 'memory expansion hack' device (0: None, 1: CSORY 256K, 2: HANNES 256K, 3: HANNES 1024K, 4: HANNES 4096K)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_PLUS4_MEMORY_HACK_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_PLUS4_MEMORY_HACK_DE, "Speicher Erweiterungshack Ger�t (0: Kein, 1: CSORY 256K, 2: HANNES 256K, 3: HANNES 1024K, 4: HANNES 4096K)"},
/* es */ {IDCLS_SET_PLUS4_MEMORY_HACK_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_PLUS4_MEMORY_HACK_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_PLUS4_MEMORY_HACK_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_PLUS4_MEMORY_HACK_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_PLUS4_MEMORY_HACK_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_PLUS4_MEMORY_HACK_NL, "Stel het 'geheugen uitbreidingen hack' apparaat in (0: Geen, 1: CSORY 256K, 2: HANNES 256K, 3: HANNES 1024K, 4: HANNES 4096K)"},
/* pl */ {IDCLS_SET_PLUS4_MEMORY_HACK_PL, "Ustaw urz�dzenie 'hacka' rozszerzenia pami�ci (0: Brak, 1: 256K CSORY, 2: 256K HANNES, 3: 1024K HANNES, 4: 4096K HANNES)"},
/* ru */ {IDCLS_SET_PLUS4_MEMORY_HACK_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_PLUS4_MEMORY_HACK_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_PLUS4_MEMORY_HACK_TR, ""},  /* fuzzy */
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_STB_CART,    N_("Attach raw Structured Basic cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_STB_CART_DA, "Tilslut r� Strucured BASIC-cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_STB_CART_DE, "Erweiterungsmodul Structured Basic (raw) Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_STB_CART_ES, "Insertar imagen cartucho Structured Basic"},
/* fr */ {IDCLS_ATTACH_RAW_STB_CART_FR, "Ins�rer une cartouche Raw Structured Basic"},
/* hu */ {IDCLS_ATTACH_RAW_STB_CART_HU, "Structured Basic cartridge k�pm�s csatol�sa"},
/* it */ {IDCLS_ATTACH_RAW_STB_CART_IT, "Seleziona immagine cartuccia Structured Basic"},
/* ko */ {IDCLS_ATTACH_RAW_STB_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_STB_CART_NL, "Koppel binair Structured Basic cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_STB_CART_PL, "Zamontuj surowy obraz kartrid�a Structured Basic"},
/* ru */ {IDCLS_ATTACH_RAW_STB_CART_RU, "Attach raw Structured Basic cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_STB_CART_SV, "Anslut r� Strucured Basic-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_STB_CART_TR, "D�z yap�land�r�lm�� Basic kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_SE5_CART,    N_("Attach raw 16kB Super Explode V5 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_SE5_CART_DA, "Tilslut r�t 16kB Super Explode V5 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_SE5_CART_DE, "16kB Super Explode V5 Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_SE5_CART_ES, "Insertar imagen cartucho Super Explode V5 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_SE5_CART_FR, "Attacher une image de cartouche 16 ko Super Explode V5"},
/* hu */ {IDCLS_ATTACH_RAW_SE5_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_SE5_CART_IT, "Seleziona immagine cartuccia Super Explode V5 di 16kB"},
/* ko */ {IDCLS_ATTACH_RAW_SE5_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_SE5_CART_NL, "Koppel binair 16kB Super Snapshot V5 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_SE5_CART_PL, "Zamontuj surowy obraz kartrid�a 16kB Super Explode V5"},
/* ru */ {IDCLS_ATTACH_RAW_SE5_CART_RU, "Attach raw 16kB Super Explode V5 cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_SE5_CART_SV, "Anslut r� 16kB Super Explode V5-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_SE5_CART_TR, "D�z 16kB Super Explode V5 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART,    N_("Attach raw 64kB Super Games cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_DA, "Tilslut r�t 64kB Super Games cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_DE, "64kB Super Games Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_ES, "Insertar imagen cartucho Super Games 64KB"},
/* fr */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_FR, "Attacher une image de cartouche 64 ko Super Games"},
/* hu */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_IT, "Seleziona immagine cartuccia Super Games di 64kB"},
/* ko */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_NL, "Koppel binair 64kB Super Games cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_PL, "Zamontuj surowy obraz kartrid�a 64kB Super Games"},
/* ru */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_RU, "Attach raw 64kB Super Games cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_SV, "Anslut r� 64kB-Super Games-insticksmodulfil"},
/* tr */ {IDCLS_ATTACH_RAW_SUPER_GAMES_CART_TR, "D�z 64kB Super Games kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART,    N_("Attach raw Silverrock 128 cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_DA, "Tilslut r�t Silverrock 128 cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_DE, "Silverrock 128 Erweiterungsmodul (raw) Image einlegen"},
/* es */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_ES, "Insertar imagen cartucho Silverrock 128"},
/* fr */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_FR, "Attacher une image de cartouche RAW Silverrock 128"},
/* hu */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_IT, "Seleziona immagine cartuccia Silverrock 128"},
/* ko */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_NL, "Koppel binair Silverrock 128 cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_PL, "Zamontuj surowy obraz kartrid�a Silverrock 128"},
/* ru */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_SV, "Anslut r� Silverrock 128-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_SILVERROCK_128_CART_TR, "D�z Silverrock 128 kartu� imaj� yerle�tir"},
#endif

/* c64/cart/c64cart.c */
/* en */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART,    N_("Attach raw 16kB Simons Basic cartridge image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_DA, "Tilslut r�t 16kB Simons Basic cartridge image"},
/* de */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_DE, "16kB Simons Basic Image (raw) einlegen"},
/* es */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_ES, "Insertar imagen cartucho Simons Basic 16KB"},
/* fr */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_FR, "Attacher une image de cartouche 16 ko Simons Basic"},
/* hu */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_IT, "Seleziona immagine cartuccia Simons Basic di 16kB"},
/* ko */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_NL, "Koppel binair 16kB Simons Basic cartridge bestand"},
/* pl */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_PL, "Zamontuj surowy obraz kartrid�a 16kB Simons Basic"},
/* ru */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_RU, "Attach raw 16kB Simons Basic cartridge image"},
/* sv */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_SV, "Anslut r� 16kB Simons Basic-insticksmodulavbildning"},
/* tr */ {IDCLS_ATTACH_RAW_SIMONS_BASIC_CART_TR, "D�z 16kB Simons Basic kartu� imaj� yerle�tir"},
#endif

/* c64dtv/c64dtvblitter.c */
/* en */ {IDCLS_SPECIFY_DTV_REVISION,    N_("Specify DTV Revision (2: DTV2, 3: DTV3)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_DTV_REVISION_DA, "Angiv DTV-revision (2: DTV2, 3: DTV3)"},
/* de */ {IDCLS_SPECIFY_DTV_REVISION_DE, "DTV Revision w�hlen (2: DTV2, 3: DTV3)"},
/* es */ {IDCLS_SPECIFY_DTV_REVISION_ES, "Especificar revisi�n DTV (2: DTV2, 3: DTV3)"},
/* fr */ {IDCLS_SPECIFY_DTV_REVISION_FR, "Sp�cifier la r�vision DTV (2: DTV2, 3: DTV3)"},
/* hu */ {IDCLS_SPECIFY_DTV_REVISION_HU, "Adja meg a DTV verzi�j�t (2: DTV2, 3: DTV3)"},
/* it */ {IDCLS_SPECIFY_DTV_REVISION_IT, "Specifica la revisione DTV (2: DTV2, 3: DTV3)"},
/* ko */ {IDCLS_SPECIFY_DTV_REVISION_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_DTV_REVISION_NL, "Geef de DTV revisie (2: DTV2, 3: DTV3)"},
/* pl */ {IDCLS_SPECIFY_DTV_REVISION_PL, "Okre�l wersj� DTV (2: DTV2, 3: DTV3)"},
/* ru */ {IDCLS_SPECIFY_DTV_REVISION_RU, "Specify DTV Revision (2: DTV2, 3: DTV3)"},
/* sv */ {IDCLS_SPECIFY_DTV_REVISION_SV, "Ange DTV-revision (2: DTV2, 3: DTV3)"},
/* tr */ {IDCLS_SPECIFY_DTV_REVISION_TR, "DTV Revizyonunu belirt (2: DTV2, 3: DTV3)"},
#endif

/* c64dtv/c64dtvblitter.c */
/* en */ {IDCLS_ENABLE_DTV_BLITTER_LOG,    N_("Enable DTV blitter logs.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DTV_BLITTER_LOG_DA, "Aktiv�r DTV-blitterlog."},
/* de */ {IDCLS_ENABLE_DTV_BLITTER_LOG_DE, "DTV Blitter Log aktivieren."},
/* es */ {IDCLS_ENABLE_DTV_BLITTER_LOG_ES, "Permitir informes blitter DTV"},
/* fr */ {IDCLS_ENABLE_DTV_BLITTER_LOG_FR, "Activer la journalisation pour DTV blitter"},
/* hu */ {IDCLS_ENABLE_DTV_BLITTER_LOG_HU, "DTV blit napl�k enged�lyez�se."},
/* it */ {IDCLS_ENABLE_DTV_BLITTER_LOG_IT, "Attiva log del blitter DTV."},
/* ko */ {IDCLS_ENABLE_DTV_BLITTER_LOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DTV_BLITTER_LOG_NL, "DTV blitter logs inschakelen."},
/* pl */ {IDCLS_ENABLE_DTV_BLITTER_LOG_PL, "W��cz logi blittera DTV."},
/* ru */ {IDCLS_ENABLE_DTV_BLITTER_LOG_RU, "Enable DTV blitter logs."},
/* sv */ {IDCLS_ENABLE_DTV_BLITTER_LOG_SV, "Aktivera DTV-blitterloggar."},
/* tr */ {IDCLS_ENABLE_DTV_BLITTER_LOG_TR, "DTV blitter loglar�n� aktif et"},
#endif

/* c64dtv/c64dtvblitter.c */
/* en */ {IDCLS_DISABLE_DTV_BLITTER_LOG,    N_("Disable DTV blitter logs.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DTV_BLITTER_LOG_DA, "Deaktiv�r DTV-blitterlog."},
/* de */ {IDCLS_DISABLE_DTV_BLITTER_LOG_DE, "DTV Blitter Log deaktivieren."},
/* es */ {IDCLS_DISABLE_DTV_BLITTER_LOG_ES, "Deshabilitar informes blitter DTV"},
/* fr */ {IDCLS_DISABLE_DTV_BLITTER_LOG_FR, "D�sactiver la journalisation pour DTV blitter"},
/* hu */ {IDCLS_DISABLE_DTV_BLITTER_LOG_HU, "DTV blit napl�k tilt�sa."},
/* it */ {IDCLS_DISABLE_DTV_BLITTER_LOG_IT, "Disattiva log del blitter DTV."},
/* ko */ {IDCLS_DISABLE_DTV_BLITTER_LOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DTV_BLITTER_LOG_NL, "DTV Blitter logs uitschakelen."},
/* pl */ {IDCLS_DISABLE_DTV_BLITTER_LOG_PL, "Wy��cz logi blittera DTV"},
/* ru */ {IDCLS_DISABLE_DTV_BLITTER_LOG_RU, "Disable DTV blitter logs."},
/* sv */ {IDCLS_DISABLE_DTV_BLITTER_LOG_SV, "Inaktivera DTV-blitterloggar."},
/* tr */ {IDCLS_DISABLE_DTV_BLITTER_LOG_TR, "DTV blitter loglar�n� pasifle�tir"},
#endif

/* c64dtv/c64dtvdma.c */
/* en */ {IDCLS_ENABLE_DTV_DMA_LOG,    N_("Enable DTV DMA logs.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DTV_DMA_LOG_DA, "Aktiv�r DTV DMA-log."},
/* de */ {IDCLS_ENABLE_DTV_DMA_LOG_DE, "DTV DMA Logs aktivieren."},
/* es */ {IDCLS_ENABLE_DTV_DMA_LOG_ES, "Permitir informes DTV DMA."},
/* fr */ {IDCLS_ENABLE_DTV_DMA_LOG_FR, "Activer la journalisation DMA DTV."},
/* hu */ {IDCLS_ENABLE_DTV_DMA_LOG_HU, "DTV DMA napl�k enged�lyez�se."},
/* it */ {IDCLS_ENABLE_DTV_DMA_LOG_IT, "Attiva log DMA DTV."},
/* ko */ {IDCLS_ENABLE_DTV_DMA_LOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DTV_DMA_LOG_NL, "DTV DMA logs inschakelen."},
/* pl */ {IDCLS_ENABLE_DTV_DMA_LOG_PL, "W��cz logowanie DTV DMA"},
/* ru */ {IDCLS_ENABLE_DTV_DMA_LOG_RU, "Enable DTV DMA logs."},
/* sv */ {IDCLS_ENABLE_DTV_DMA_LOG_SV, "Aktivera DTV DMA-loggning."},
/* tr */ {IDCLS_ENABLE_DTV_DMA_LOG_TR, "DTV DMA loglar�n� aktif et"},
#endif

/* c64dtv/c64dtvdma.c */
/* en */ {IDCLS_DISABLE_DTV_DMA_LOG,    N_("Disable DTV DMA logs.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DTV_DMA_LOG_DA, "Deaktiv�r DTV DMA-log."},
/* de */ {IDCLS_DISABLE_DTV_DMA_LOG_DE, "DTV DMA Logs deaktivieren."},
/* es */ {IDCLS_DISABLE_DTV_DMA_LOG_ES, "Deshabilitar informes DTV DMA."},
/* fr */ {IDCLS_DISABLE_DTV_DMA_LOG_FR, "D�sactiver la journalisation DTV DMA."},
/* hu */ {IDCLS_DISABLE_DTV_DMA_LOG_HU, "DTV DMA napl�k tilt�sa."},
/* it */ {IDCLS_DISABLE_DTV_DMA_LOG_IT, "Disattiva log DMA DTV."},
/* ko */ {IDCLS_DISABLE_DTV_DMA_LOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DTV_DMA_LOG_NL, "DTV DMA logs uitschakelen."},
/* pl */ {IDCLS_DISABLE_DTV_DMA_LOG_PL, "Wy��cz logowanie DTV DMA"},
/* ru */ {IDCLS_DISABLE_DTV_DMA_LOG_RU, "Disable DTV DMA logs."},
/* sv */ {IDCLS_DISABLE_DTV_DMA_LOG_SV, "Inaktivera DTV DMA-loggning."},
/* tr */ {IDCLS_DISABLE_DTV_DMA_LOG_TR, "DTV DMA loglar�n� pasifle�tir"},
#endif

/* c64dtv/c64dtvflash.c */
/* en */ {IDCLS_SPECIFY_C64DTVROM_NAME,    N_("Specify name of C64DTV ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_C64DTVROM_NAME_DA, "Angiv navn p� C64DTV-ROM-image"},
/* de */ {IDCLS_SPECIFY_C64DTVROM_NAME_DE, "Name von C64DTV ROM Datei w�hlen"},
/* es */ {IDCLS_SPECIFY_C64DTVROM_NAME_ES, "Especificar nombre imagen ROM C64DTV"},
/* fr */ {IDCLS_SPECIFY_C64DTVROM_NAME_FR, "Sp�cifier le nom de l'image ROM C64DTV"},
/* hu */ {IDCLS_SPECIFY_C64DTVROM_NAME_HU, "Adja meg a C64DTV ROM k�pm�s nev�t"},
/* it */ {IDCLS_SPECIFY_C64DTVROM_NAME_IT, "Specifica il nome immagine ROM DTV"},
/* ko */ {IDCLS_SPECIFY_C64DTVROM_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_C64DTVROM_NAME_NL, "Geef de naam van her C64DTV ROM bestand"},
/* pl */ {IDCLS_SPECIFY_C64DTVROM_NAME_PL, "Okre�l nazw� obrazu ROM C64DTV"},
/* ru */ {IDCLS_SPECIFY_C64DTVROM_NAME_RU, "Specify name of C64DTV ROM image"},
/* sv */ {IDCLS_SPECIFY_C64DTVROM_NAME_SV, "Ange namn p� C64DTV-ROM-avbildning"},
/* tr */ {IDCLS_SPECIFY_C64DTVROM_NAME_TR, "C64DTV ROM imaj�n�n ismini belirt"},
#endif

/* c64dtv/c64dtvflash.c */
/* en */ {IDCLS_ENABLE_C64DTVROM_RW,    N_("Enable writes to C64DTV ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_C64DTVROM_RW_DA, "Tillad skrivning til DTV-ROM-image"},
/* de */ {IDCLS_ENABLE_C64DTVROM_RW_DE, "Erlaube Schreibzugriff auf DTV ROM Datei"},
/* es */ {IDCLS_ENABLE_C64DTVROM_RW_ES, "Permitir escritura en la imagen C64DTV ROM"},
/* fr */ {IDCLS_ENABLE_C64DTVROM_RW_FR, "Permetre l'�criture � l'image ROM C64DTV"},
/* hu */ {IDCLS_ENABLE_C64DTVROM_RW_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_C64DTVROM_RW_IT, "Attiva scrittura su immagini ROM C64DTV"},
/* ko */ {IDCLS_ENABLE_C64DTVROM_RW_KO, "C64DTV ROM �̹����� ���� �����ϰ� �ϱ�"},
/* nl */ {IDCLS_ENABLE_C64DTVROM_RW_NL, "Activeer schrijven naar C64DTV ROM-bestand"},
/* pl */ {IDCLS_ENABLE_C64DTVROM_RW_PL, "W��cz zapis do obrazu ROM C64DTV"},
/* ru */ {IDCLS_ENABLE_C64DTVROM_RW_RU, "Enable writes to C64DTV ROM image"},
/* sv */ {IDCLS_ENABLE_C64DTVROM_RW_SV, "Aktivera skrivning till C64DTV-ROM-avbildning"},
/* tr */ {IDCLS_ENABLE_C64DTVROM_RW_TR, "C64DTV ROM imaj�nda yazmalar� aktif et"},
#endif

/* c64dtv/c64dtvflash.c */
/* en */ {IDCLS_DISABLE_C64DTVROM_RW,    N_("Disable writes to C64DTV ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_C64DTVROM_RW_DA, "Forbyd skrivning til C64DTV-ROM-image."},
/* de */ {IDCLS_DISABLE_C64DTVROM_RW_DE, "Schreibzugriff auf C64DTV ROM Image verhindern"},
/* es */ {IDCLS_DISABLE_C64DTVROM_RW_ES, "Deshabilitar grabaci�n en imagen  C64DTV ROM"},
/* fr */ {IDCLS_DISABLE_C64DTVROM_RW_FR, "D�sactiver l'�criture � l'image ROM C64DTV"},
/* hu */ {IDCLS_DISABLE_C64DTVROM_RW_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_C64DTVROM_RW_IT, "Disattiva scrittura sull'immagine ROM C64DTV"},
/* ko */ {IDCLS_DISABLE_C64DTVROM_RW_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_C64DTVROM_RW_NL, "Schrijven naar C64DTV ROM bestand uitschakelen"},
/* pl */ {IDCLS_DISABLE_C64DTVROM_RW_PL, "Wy��cz zapis do obrazu ROM C64DTV"},
/* ru */ {IDCLS_DISABLE_C64DTVROM_RW_RU, "Disable writes to C64DTV ROM image"},
/* sv */ {IDCLS_DISABLE_C64DTVROM_RW_SV, "Inaktivera skrivning till C64DTV-ROM-avbildning"},
/* tr */ {IDCLS_DISABLE_C64DTVROM_RW_TR, "C64DTV ROM imaj�na yazmay� pasifle�tir"},
#endif

/* c64dtv/c64dtvflash.c */
/* en */ {IDCLS_ENABLE_DTV_FLASH_LOG,    N_("Enable DTV flash chip logs.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DTV_FLASH_LOG_DA, "Aktiv�r logs for DTV-flashkreds."},
/* de */ {IDCLS_ENABLE_DTV_FLASH_LOG_DE, "DTV Flashchip Log aktivieren."},
/* es */ {IDCLS_ENABLE_DTV_FLASH_LOG_ES, "Permitir informes chip DTV flash"},
/* fr */ {IDCLS_ENABLE_DTV_FLASH_LOG_FR, "Activer la journalisation pour DTV Flash Chip"},
/* hu */ {IDCLS_ENABLE_DTV_FLASH_LOG_HU, "DTV flash chip napl�k enged�lyez�se."},
/* it */ {IDCLS_ENABLE_DTV_FLASH_LOG_IT, "Attiva log del chip flash DTV."},
/* ko */ {IDCLS_ENABLE_DTV_FLASH_LOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DTV_FLASH_LOG_NL, "DTV flash chip logs inschakelen."},
/* pl */ {IDCLS_ENABLE_DTV_FLASH_LOG_PL, "W��cz logi uk�adu flash DTV."},
/* ru */ {IDCLS_ENABLE_DTV_FLASH_LOG_RU, "Enable DTV flash chip logs."},
/* sv */ {IDCLS_ENABLE_DTV_FLASH_LOG_SV, "Aktivera loggar f�r DTV-flashkrets."},
/* tr */ {IDCLS_ENABLE_DTV_FLASH_LOG_TR, "DTV flash �ip loglar�n� aktif et."},
#endif

/* c64dtv/c64dtvflash.c */
/* en */ {IDCLS_DISABLE_DTV_FLASH_LOG,    N_("Disable DTV flash chip logs.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DTV_FLASH_LOG_DA, "Deaktiv�r logs for DTV-flashkreds."},
/* de */ {IDCLS_DISABLE_DTV_FLASH_LOG_DE, "DTV Flashchip Log deaktivieren."},
/* es */ {IDCLS_DISABLE_DTV_FLASH_LOG_ES, "Inhabilitar informes chip DTV flash"},
/* fr */ {IDCLS_DISABLE_DTV_FLASH_LOG_FR, "D�sactiver la journalisation pour DTV Flash Chip"},
/* hu */ {IDCLS_DISABLE_DTV_FLASH_LOG_HU, "DTV flash chip napl�k tilt�sa."},
/* it */ {IDCLS_DISABLE_DTV_FLASH_LOG_IT, "Disattiva log del chip flash DTV."},
/* ko */ {IDCLS_DISABLE_DTV_FLASH_LOG_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DTV_FLASH_LOG_NL, "DTV flash chip logs uitschakelen."},
/* pl */ {IDCLS_DISABLE_DTV_FLASH_LOG_PL, "Wy��cz logi uk�adu flash DTV"},
/* ru */ {IDCLS_DISABLE_DTV_FLASH_LOG_RU, "Disable DTV flash chip logs."},
/* sv */ {IDCLS_DISABLE_DTV_FLASH_LOG_SV, "Inaktivera loggar f�r DTV-flashkrets."},
/* tr */ {IDCLS_DISABLE_DTV_FLASH_LOG_TR, "DTV flash �ip loglar�n� pasifle�tir."},
#endif

/* c64dtv/flash-trap.c */
/* en */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS,    N_("Use <name> as directory for flash file system device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_DA, "Brug <navn> som katalog for filsystembaseret flashenhed"},
/* de */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_DE, "Benutze <Name> f�r Verzeichnis Ger�t Flash Dateisystem"},
/* es */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_ES, "Usar <nombre> como directorio para perif�rico flash files system"},
/* fr */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_FR, "Utiliser le r�pertoire <nom> comme syst�me de fichiers flash"},
/* hu */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_HU, "<n�v> k�nyvt�r haszn�lata a flash f�jlrendszer eszk�zh�z"},
/* it */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_IT, "Una <nome> come directory per il file system flash"},
/* ko */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_NL, "Gebruik <naam> als directory voor het flash bestandssysteem apparaat"},
/* pl */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_PL, "U�yj <nazwa> jako katalogu urz�dzenia systemu plik�w flash"},
/* ru */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_RU, "Use <name> as directory for flash file system device"},
/* sv */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_SV, "Ange <namn> som katalog f�r filsystemsbaserad flashenhet"},
/* tr */ {IDCLS_USE_AS_DIRECTORY_FLASH_FS_TR, "Flash dosya sistem ayg�t� i�in <isim>'i dizin olarak kullan"},
#endif

/* c64dtv/flash-trap.c */
/* en */ {IDCLS_ENABLE_TRUE_FLASH_FS,    N_("Enable true hardware flash file system")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TRUE_FLASH_FS_DA, "Aktiv�r �gte hardwareemulering af flashfilsystem"},
/* de */ {IDCLS_ENABLE_TRUE_FLASH_FS_DE, "Pr�zises Hardware Flashdateisystem aktivieren"},
/* es */ {IDCLS_ENABLE_TRUE_FLASH_FS_ES, "Permitir flash file system verdadero (hardware)"},
/* fr */ {IDCLS_ENABLE_TRUE_FLASH_FS_FR, "Activer le syst�me de fichier flash mat�riel r�el"},
/* hu */ {IDCLS_ENABLE_TRUE_FLASH_FS_HU, "Igazi hardver flash f�jlrendszer enged�lyez�se"},
/* it */ {IDCLS_ENABLE_TRUE_FLASH_FS_IT, "Attiva emulazione hardware del file system flash"},
/* ko */ {IDCLS_ENABLE_TRUE_FLASH_FS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TRUE_FLASH_FS_NL, "Activeer hardwarmatige flash-bestandssysteem"},
/* pl */ {IDCLS_ENABLE_TRUE_FLASH_FS_PL, "W��cz prawdziwy sprz�towy system plik�w flash"},
/* ru */ {IDCLS_ENABLE_TRUE_FLASH_FS_RU, "Enable true hardware flash file system"},
/* sv */ {IDCLS_ENABLE_TRUE_FLASH_FS_SV, "Aktivera �kta maskinvaru-flashfilsystem"},
/* tr */ {IDCLS_ENABLE_TRUE_FLASH_FS_TR, "Ger�ek donan�m flash dosya sistemini aktif et"},
#endif

/* c64dtv/flash-trap.c */
/* en */ {IDCLS_DISABLE_TRUE_FLASH_FS,    N_("Disable true hardware flash file system")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TRUE_FLASH_FS_DA, "Deaktiv�r �gte hardwareemulering af flashfilsystem"},
/* de */ {IDCLS_DISABLE_TRUE_FLASH_FS_DE, "Pr�zises Hardware Flashdateisystem deaktivieren"},
/* es */ {IDCLS_DISABLE_TRUE_FLASH_FS_ES, "Deshabilitar flash file system verdadero (hardware)"},
/* fr */ {IDCLS_DISABLE_TRUE_FLASH_FS_FR, "D�sactiver le syst�me de fichiers mat�riel r�el"},
/* hu */ {IDCLS_DISABLE_TRUE_FLASH_FS_HU, "Igazi hardver flash f�jlrendszer tilt�sa"},
/* it */ {IDCLS_DISABLE_TRUE_FLASH_FS_IT, "Disattiva emulazione hardware del file system flash"},
/* ko */ {IDCLS_DISABLE_TRUE_FLASH_FS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TRUE_FLASH_FS_NL, "Hardwarematig flash bestandssysteem uitschakelen"},
/* pl */ {IDCLS_DISABLE_TRUE_FLASH_FS_PL, "Wy��cz prawdziwy system plik�w flash"},
/* ru */ {IDCLS_DISABLE_TRUE_FLASH_FS_RU, "Disable true hardware flash file system"},
/* sv */ {IDCLS_DISABLE_TRUE_FLASH_FS_SV, "Inaktivera maskinvaruemelring f�r flashfilsystem"},
/* tr */ {IDCLS_DISABLE_TRUE_FLASH_FS_TR, "Ger�ek donan�m flash dosya sistemini pasifle�tir"},
#endif

#ifdef HAVE_MIDI
/* midi.c */
/* en */ {IDCLS_ENABLE_MIDI_EMU,    N_("Enable MIDI emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_MIDI_EMU_DA, "Aktiv�r MIDI-emulering"},
/* de */ {IDCLS_ENABLE_MIDI_EMU_DE, "MIDI Emulation aktivieren"},
/* es */ {IDCLS_ENABLE_MIDI_EMU_ES, "Habilitar emulaci�n MIDI"},
/* fr */ {IDCLS_ENABLE_MIDI_EMU_FR, "Activer l'�mulation MIDI"},
/* hu */ {IDCLS_ENABLE_MIDI_EMU_HU, "MIDI emul�ci� enged�lyez�se"},
/* it */ {IDCLS_ENABLE_MIDI_EMU_IT, "Attiva emulazione MIDI"},
/* ko */ {IDCLS_ENABLE_MIDI_EMU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_MIDI_EMU_NL, "MIDI emulatie inschakelen"},
/* pl */ {IDCLS_ENABLE_MIDI_EMU_PL, "W��cz emulacj� MIDI"},
/* ru */ {IDCLS_ENABLE_MIDI_EMU_RU, "�������� �������� MIDI"},
/* sv */ {IDCLS_ENABLE_MIDI_EMU_SV, "Aktivera MIDI-emulering"},
/* tr */ {IDCLS_ENABLE_MIDI_EMU_TR, "MIDI em�lasyonunu aktif et"},
#endif

/* midi.c */
/* en */ {IDCLS_DISABLE_MIDI_EMU,    N_("Disable MIDI emulation")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_MIDI_EMU_DA, "Deaktiv�r MIDI-emulering"},
/* de */ {IDCLS_DISABLE_MIDI_EMU_DE, "MIDI Emulation deaktivieren"},
/* es */ {IDCLS_DISABLE_MIDI_EMU_ES, "Deshabilitar emulaci�n MIDI"},
/* fr */ {IDCLS_DISABLE_MIDI_EMU_FR, "D�sactiver l'�mulation MIDI"},
/* hu */ {IDCLS_DISABLE_MIDI_EMU_HU, "MIDI emul�ci� tilt�sa"},
/* it */ {IDCLS_DISABLE_MIDI_EMU_IT, "Disattiva emulazione MIDI"},
/* ko */ {IDCLS_DISABLE_MIDI_EMU_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_MIDI_EMU_NL, "MIDI emulatie uitschakelen"},
/* pl */ {IDCLS_DISABLE_MIDI_EMU_PL, "Wy��cz emulacj� MIDI"},
/* ru */ {IDCLS_DISABLE_MIDI_EMU_RU, "Disable MIDI emulation"},
/* sv */ {IDCLS_DISABLE_MIDI_EMU_SV, "Inaktivera MIDI-emulering"},
/* tr */ {IDCLS_DISABLE_MIDI_EMU_TR, "MIDI em�lasyonunu pasifle�tir"},
#endif

/* c64/cart/c64-midi.c */
/* en */ {IDCLS_SPECIFY_C64_MIDI_TYPE,    N_("MIDI interface type (0: Sequential, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_C64_MIDI_TYPE_DA, "MIDI-interfacetype (0: Sekventiel, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* de */ {IDCLS_SPECIFY_C64_MIDI_TYPE_DE, "MIDI Interface Typ (0: Sequential, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* es */ {IDCLS_SPECIFY_C64_MIDI_TYPE_ES, "Tipo interface MIDI (0: Secuencial, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* fr */ {IDCLS_SPECIFY_C64_MIDI_TYPE_FR, "Type d'interface MIDI (0:S�quentielle, 1:Passport, 2:DATEL, 3:Namesoft, 4:Maplin)"},
/* hu */ {IDCLS_SPECIFY_C64_MIDI_TYPE_HU, "MIDI interf�sz t�pus (0: soros, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* it */ {IDCLS_SPECIFY_C64_MIDI_TYPE_IT, "Tipo interfaccia MIDI (0: Sequential, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* ko */ {IDCLS_SPECIFY_C64_MIDI_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_C64_MIDI_TYPE_NL, "MIDI interface soort (0: Sequential, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* pl */ {IDCLS_SPECIFY_C64_MIDI_TYPE_PL, "Typ interfejsu MIDI (0: Sequential, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* ru */ {IDCLS_SPECIFY_C64_MIDI_TYPE_RU, "MIDI interface type (0: Sequential, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* sv */ {IDCLS_SPECIFY_C64_MIDI_TYPE_SV, "Typ av MIDI-gr�nssnitt (0: sekventiell, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
/* tr */ {IDCLS_SPECIFY_C64_MIDI_TYPE_TR, "MIDI arabirim tipi (0: Sequential, 1: Passport, 2: DATEL, 3: Namesoft, 4: Maplin)"},
#endif
#endif

/* plus4/digiblaster.c */
/* en */ {IDCLS_ENABLE_DIGIBLASTER,    N_("Enable the digiblaster add-on")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DIGIBLASTER_DA, "Aktiv�r digiblaster-tilf�jelse"},
/* de */ {IDCLS_ENABLE_DIGIBLASTER_DE, "Digiblaster add-on aktivieren"},
/* es */ {IDCLS_ENABLE_DIGIBLASTER_ES, "Permitir complementos digiblaster"},
/* fr */ {IDCLS_ENABLE_DIGIBLASTER_FR, "Activer le add-on digiblaster"},
/* hu */ {IDCLS_ENABLE_DIGIBLASTER_HU, "Digiblaster enged�lyez�se"},
/* it */ {IDCLS_ENABLE_DIGIBLASTER_IT, "Attiva l'estensione digiblaster"},
/* ko */ {IDCLS_ENABLE_DIGIBLASTER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DIGIBLASTER_NL, "Digiblaster add-on inschakelen"},
/* pl */ {IDCLS_ENABLE_DIGIBLASTER_PL, "W��cz dodatek digiblaster"},
/* ru */ {IDCLS_ENABLE_DIGIBLASTER_RU, "Enable the digiblaster add-on"},
/* sv */ {IDCLS_ENABLE_DIGIBLASTER_SV, "Aktivera digiblaster-till�gg"},
/* tr */ {IDCLS_ENABLE_DIGIBLASTER_TR, "Digiblaster eklentisini aktif et"},
#endif

/* plus4/digiblaster.c */
/* en */ {IDCLS_DISABLE_DIGIBLASTER,    N_("Disable the digiblaster add-on")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DIGIBLASTER_DA, "Deaktiv�r digiblaster-tilf�jelse"},
/* de */ {IDCLS_DISABLE_DIGIBLASTER_DE, "Digiblaster add-on deaktivieren"},
/* es */ {IDCLS_DISABLE_DIGIBLASTER_ES, "Deshabilitar complementos digiblaster"},
/* fr */ {IDCLS_DISABLE_DIGIBLASTER_FR, "D�sactiver le add-on digiblaster"},
/* hu */ {IDCLS_DISABLE_DIGIBLASTER_HU, "Digiblaster tilt�sa"},
/* it */ {IDCLS_DISABLE_DIGIBLASTER_IT, "Disattiva l'estensione digiblaster"},
/* ko */ {IDCLS_DISABLE_DIGIBLASTER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DIGIBLASTER_NL, "Digiblaster add-on uitschakelen"},
/* pl */ {IDCLS_DISABLE_DIGIBLASTER_PL, "Wy��cz dodatek digiblaster"},
/* ru */ {IDCLS_DISABLE_DIGIBLASTER_RU, "Disable the digiblaster add-on"},
/* sv */ {IDCLS_DISABLE_DIGIBLASTER_SV, "Inaktivera digiblaster-till�gg"},
/* tr */ {IDCLS_DISABLE_DIGIBLASTER_TR, "Digiblaster eklentisini pasifle�tir"},
#endif

/* plus4/plus4speech.c */
/* en */ {IDCLS_ENABLE_PLUS4SPEECH,    N_("Enable the v364 speech add-on")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_PLUS4SPEECH_DA, "Aktiv�r v364 Speech-tilf�jelse"},
/* de */ {IDCLS_ENABLE_PLUS4SPEECH_DE, "v364 Spracherweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_PLUS4SPEECH_ES, "Permitir complementos v364 speech"},
/* fr */ {IDCLS_ENABLE_PLUS4SPEECH_FR, "Activer le add-on V364 Speech"},
/* hu */ {IDCLS_ENABLE_PLUS4SPEECH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_PLUS4SPEECH_IT, "Attiva l'estensione v364 speech"},
/* ko */ {IDCLS_ENABLE_PLUS4SPEECH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_PLUS4SPEECH_NL, "v364 spraak add-on inschakelen"},
/* pl */ {IDCLS_ENABLE_PLUS4SPEECH_PL, "W��cz rozszerzenie mowy v364"},
/* ru */ {IDCLS_ENABLE_PLUS4SPEECH_RU, "Enable the v364 speech add-on"},
/* sv */ {IDCLS_ENABLE_PLUS4SPEECH_SV, "Aktivera v364-r�sttill�gg"},
/* tr */ {IDCLS_ENABLE_PLUS4SPEECH_TR, "V364 speech eklentisini aktif et"},
#endif

/* plus4/plus4speech.c */
/* en */ {IDCLS_DISABLE_PLUS4SPEECH,    N_("Disable the v364 speech add-on")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_PLUS4SPEECH_DA, "Deaktiv�r v364 Speech-tilf�jelse"},
/* de */ {IDCLS_DISABLE_PLUS4SPEECH_DE, "v364 Spracherweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_PLUS4SPEECH_ES, "Deshabilitar complementos v364 speech"},
/* fr */ {IDCLS_DISABLE_PLUS4SPEECH_FR, "D�sactiver le add-on V364 Speech"},
/* hu */ {IDCLS_DISABLE_PLUS4SPEECH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_PLUS4SPEECH_IT, "Disattiva l'estensione v364 speech"},
/* ko */ {IDCLS_DISABLE_PLUS4SPEECH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_PLUS4SPEECH_NL, "v364 spraak add-on uitschakelen"},
/* pl */ {IDCLS_DISABLE_PLUS4SPEECH_PL, "Wy��cz rozszerzenie mowy v364"},
/* ru */ {IDCLS_DISABLE_PLUS4SPEECH_RU, "Disable the v364 speech add-on"},
/* sv */ {IDCLS_DISABLE_PLUS4SPEECH_SV, "Inaktivera v364-r�sttill�gg"},
/* tr */ {IDCLS_DISABLE_PLUS4SPEECH_TR, "V364 speech eklentisini pasifle�tir"},
#endif

/* plus4/plus4speech.c */
/* en */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE,    N_("Attach Speech ROM image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_DA, "Tilslut Speech ROM image"},
/* de */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_DE, "Spracherweiterung ROM Imagedatei einlegen"},
/* es */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_ES, "Insertar imagen ROM Speech"},
/* fr */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_FR, "Attacher une image Speech RO"},
/* hu */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_IT, "Seleziona immagine Speech ROM"},
/* ko */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_NL, "Koppel spraak ROM bestand"},
/* pl */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_PL, "Zamontuj obraz ROM mowy"},
/* ru */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_RU, "Attach Speech ROM image"},
/* sv */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_SV, "Anslut r�st-ROM-avbildning"},
/* tr */ {IDCLS_ATTACH_SPEECH_ROM_IMAGE_TR, "Speech ROM imaj�n� yerle�tir"},
#endif

/* plus4/sidcartjoy.c */
/* en */ {IDCLS_ENABLE_SIDCARTJOY,    N_("Enable SID cartridge joystick")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SIDCARTJOY_DA, "Aktiv�r SID-cartridge joystick"},
/* de */ {IDCLS_ENABLE_SIDCARTJOY_DE, "SIDcart Modul aktivieren"},
/* es */ {IDCLS_ENABLE_SIDCARTJOY_ES, "Permitir joystick cartucho SID"},
/* fr */ {IDCLS_ENABLE_SIDCARTJOY_FR, "Activer Joystick cartouche SID"},
/* hu */ {IDCLS_ENABLE_SIDCARTJOY_HU, "SID cartridge botkorm�ny enged�lyez�se"},
/* it */ {IDCLS_ENABLE_SIDCARTJOY_IT, "Attiva joystick su cartuccia SID"},
/* ko */ {IDCLS_ENABLE_SIDCARTJOY_KO, "SID īƮ���� ���̽�ƽ ����ϱ�"},
/* nl */ {IDCLS_ENABLE_SIDCARTJOY_NL, "SID cartridge joystick inschakelen"},
/* pl */ {IDCLS_ENABLE_SIDCARTJOY_PL, "W��cz joystick kartrid�a SID"},
/* ru */ {IDCLS_ENABLE_SIDCARTJOY_RU, "Enable SID cartridge joystick"},
/* sv */ {IDCLS_ENABLE_SIDCARTJOY_SV, "Aktivera SID-insticksmodul-styrspak"},
/* tr */ {IDCLS_ENABLE_SIDCARTJOY_TR, "SID kartu�u joystick'ini aktif et"},
#endif

/* plus4/sidcartjoy.c */
/* en */ {IDCLS_DISABLE_SIDCARTJOY,    N_("Disable SID cartridge joystick")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SIDCARTJOY_DA, "Deaktiv�r SID-cartridge joystick"},
/* de */ {IDCLS_DISABLE_SIDCARTJOY_DE, "SIDcart Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_SIDCARTJOY_ES, "Deshabilitar joystick cartucho SID"},
/* fr */ {IDCLS_DISABLE_SIDCARTJOY_FR, "D�sactiver Joystick cartouche SID"},
/* hu */ {IDCLS_DISABLE_SIDCARTJOY_HU, "SID cartridge botkorm�ny tilt�sa"},
/* it */ {IDCLS_DISABLE_SIDCARTJOY_IT, "Disattiva joystick su cartuccia SID"},
/* ko */ {IDCLS_DISABLE_SIDCARTJOY_KO, "SID īƮ���� ���̽�ƽ ������� �ʱ�"},
/* nl */ {IDCLS_DISABLE_SIDCARTJOY_NL, "SID cartridge joystick uitschakelen"},
/* pl */ {IDCLS_DISABLE_SIDCARTJOY_PL, "Wy��cz joystick kartrid�a SID"},
/* ru */ {IDCLS_DISABLE_SIDCARTJOY_RU, "Disable SID cartridge joystick"},
/* sv */ {IDCLS_DISABLE_SIDCARTJOY_SV, "Inaktivera SID-insticksmodul-styrspak"},
/* tr */ {IDCLS_DISABLE_SIDCARTJOY_TR, "SID kartu�u joystick'ini pasifle�tir"},
#endif

/* c64/cart/sfx_soundexpander.c */
/* en */ {IDCLS_ENABLE_SFX_SE,    N_("Enable the SFX Sound Expander cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SFX_SE_DA, "Aktiv�r SFX sound Expander cartridget"},
/* de */ {IDCLS_ENABLE_SFX_SE_DE, "SFX Soundexpander Modul aktivieren"},
/* es */ {IDCLS_ENABLE_SFX_SE_ES, "Permitir cartucho SFX Sound Expander"},
/* fr */ {IDCLS_ENABLE_SFX_SE_FR, "Activer la cartouche SFX Sound Expander"},
/* hu */ {IDCLS_ENABLE_SFX_SE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SFX_SE_IT, "Attiva cartuccia SFX Sound Expander"},
/* ko */ {IDCLS_ENABLE_SFX_SE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SFX_SE_NL, "SFX Sound Expander cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_SFX_SE_PL, "W��cz kartrid� SFX Sound Expander"},
/* ru */ {IDCLS_ENABLE_SFX_SE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SFX_SE_SV, "Aktivera SFX Sound Expander-insticksmodul"},
/* tr */ {IDCLS_ENABLE_SFX_SE_TR, "SFX Sound Expander kartu�unu aktif et"},
#endif

/* c64/cart/sfx_soundexpander.c */
/* en */ {IDCLS_DISABLE_SFX_SE,    N_("Disable the SFX Sound Expander cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SFX_SE_DA, "Deaktiv�r SFX Sound Expander cartridge"},
/* de */ {IDCLS_DISABLE_SFX_SE_DE, "SFX Soundexpander Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_SFX_SE_ES, "Deshabilitar cartucho SFX Sound Expander"},
/* fr */ {IDCLS_DISABLE_SFX_SE_FR, "D�sactiver la cartouche SFX Sound Expander"},
/* hu */ {IDCLS_DISABLE_SFX_SE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SFX_SE_IT, "Disattiva cartuccia SFX SFX Sound Expander"},
/* ko */ {IDCLS_DISABLE_SFX_SE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SFX_SE_NL, "SFX Sound Expander cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_SFX_SE_PL, "Wy��cz kartrid� SFX Sound Expander"},
/* ru */ {IDCLS_DISABLE_SFX_SE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SFX_SE_SV, "Inaktivera SFX Sound Expander-insticksmodul"},
/* tr */ {IDCLS_DISABLE_SFX_SE_TR, "SFX Sound Expander kartu�unu pasifle�tir"},
#endif

/* c64/cart/sfx_soundexpander.c */
/* en */ {IDCLS_SET_YM_CHIP_TYPE,    N_("Set YM chip type (3526 / 3812)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_YM_CHIP_TYPE_DA, "V�lg YM chiptype"},
/* de */ {IDCLS_SET_YM_CHIP_TYPE_DE, "YM Chip Typ (3526 / 3812) bestimmen"},
/* es */ {IDCLS_SET_YM_CHIP_TYPE_ES, "Seleccionar tipo chip YM (3526 / 3812)"},
/* fr */ {IDCLS_SET_YM_CHIP_TYPE_FR, "R�gler le type de puce YM (3526  3812)"},
/* hu */ {IDCLS_SET_YM_CHIP_TYPE_HU, "YM csip t�pus megad�sa (3526 / 3812)"},
/* it */ {IDCLS_SET_YM_CHIP_TYPE_IT, "Imposta tipo chip YM (3526 / 3812)"},
/* ko */ {IDCLS_SET_YM_CHIP_TYPE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_YM_CHIP_TYPE_NL, "Stel de YM chip soort in (3526 / 3812)"},
/* pl */ {IDCLS_SET_YM_CHIP_TYPE_PL, "Okre�l typ uk�adu YM (3526 / 3812)"},
/* ru */ {IDCLS_SET_YM_CHIP_TYPE_RU, "Set YM chip type (3526 / 3812)"},
/* sv */ {IDCLS_SET_YM_CHIP_TYPE_SV, "V�lj YM-kretstyp (3526 / 3812)"},
/* tr */ {IDCLS_SET_YM_CHIP_TYPE_TR, "YM �ip tipini ayarla (3526 / 3812)"},
#endif

/* c64/cart/sfx_soundsampler.c */
/* en */ {IDCLS_ENABLE_SFX_SS,    N_("Enable the SFX Sound Sampler cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SFX_SS_DA, "Aktiv�r SFX Sound Sampler cartridge"},
/* de */ {IDCLS_ENABLE_SFX_SS_DE, "SFX Sound Sampler Modul aktivieren"},
/* es */ {IDCLS_ENABLE_SFX_SS_ES, "Permitir cartucho SFX Sound Sampler"},
/* fr */ {IDCLS_ENABLE_SFX_SS_FR, "Activer la cartouche SFX Sound Sampler"},
/* hu */ {IDCLS_ENABLE_SFX_SS_HU, "SFX Sound Sampler enged�lyez�se"},
/* it */ {IDCLS_ENABLE_SFX_SS_IT, "Attiva cartuccia SFX Sound Sampler"},
/* ko */ {IDCLS_ENABLE_SFX_SS_KO, "SFX Sound Sampler īƮ���� �� �۵���Ų��"},
/* nl */ {IDCLS_ENABLE_SFX_SS_NL, "SFX Sound Sampler cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_SFX_SS_PL, "W��cz kartrid� SFX Sound Sampler"},
/* ru */ {IDCLS_ENABLE_SFX_SS_RU, "Enable the SFX Sound Sampler cartridge"},
/* sv */ {IDCLS_ENABLE_SFX_SS_SV, "Aktivera SFX Sound Sampler-insticksmodul"},
/* tr */ {IDCLS_ENABLE_SFX_SS_TR, "SFX Sound Sampler kartu�unu aktif et"},
#endif

/* c64/cart/sfx_soundsampler.c */
/* en */ {IDCLS_DISABLE_SFX_SS,    N_("Disable the SFX Sound Sampler cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SFX_SS_DA, "Deaktiv�r SFX Sound Sampler cartridge"},
/* de */ {IDCLS_DISABLE_SFX_SS_DE, "SFX Sound Sampler Modul  deaktivieren"},
/* es */ {IDCLS_DISABLE_SFX_SS_ES, "Deshabilitar cartucho SFX Sound Sampler"},
/* fr */ {IDCLS_DISABLE_SFX_SS_FR, "D�sactiver la cartouche SFX Sound Sampler"},
/* hu */ {IDCLS_DISABLE_SFX_SS_HU, "SFX Sound Sampler tilt�sa"},
/* it */ {IDCLS_DISABLE_SFX_SS_IT, "Disattiva cartuccia SFX Sound Sampler"},
/* ko */ {IDCLS_DISABLE_SFX_SS_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SFX_SS_NL, "SFX Sound Sampler cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_SFX_SS_PL, "Wy��cz kartrid� SFX Sound Sampler"},
/* ru */ {IDCLS_DISABLE_SFX_SS_RU, "Disable the SFX Sound Sampler cartridge"},
/* sv */ {IDCLS_DISABLE_SFX_SS_SV, "Inaktivera SFX Sound Sampler-insticksmodul"},
/* tr */ {IDCLS_DISABLE_SFX_SS_TR, "SFX Sound Sampler kartu�unu pasifle�tir"},
#endif

/* c64/cart/cpmcart.c */
/* en */ {IDCLS_ENABLE_CPM_CART,    N_("Enable the CP/M cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_CPM_CART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_CPM_CART_DE, "CP/M Modul aktivieren"},
/* es */ {IDCLS_ENABLE_CPM_CART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_CPM_CART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_CPM_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_CPM_CART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_CPM_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_CPM_CART_NL, "CP/M cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_CPM_CART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_CPM_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_CPM_CART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_CPM_CART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/cpmcart.c */
/* en */ {IDCLS_DISABLE_CPM_CART,    N_("Disable the CP/M cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_CPM_CART_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_CPM_CART_DE, "CP/M Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_CPM_CART_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_CPM_CART_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_CPM_CART_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_CPM_CART_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_CPM_CART_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_CPM_CART_NL, "CP/M cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_CPM_CART_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_CPM_CART_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_CPM_CART_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_CPM_CART_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_ENABLE_TURBOMASTER,    N_("Enable the TurboMaster cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_TURBOMASTER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_TURBOMASTER_DE, "TurboMaster Modul aktivieren"},
/* es */ {IDCLS_ENABLE_TURBOMASTER_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_TURBOMASTER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_TURBOMASTER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_TURBOMASTER_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_TURBOMASTER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_TURBOMASTER_NL, "TurboMaster cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_TURBOMASTER_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_TURBOMASTER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_TURBOMASTER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_TURBOMASTER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_DISABLE_TURBOMASTER,    N_("Disable the TurboMaster cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_TURBOMASTER_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_TURBOMASTER_DE, "TurboMaster Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_TURBOMASTER_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_TURBOMASTER_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_TURBOMASTER_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_TURBOMASTER_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_TURBOMASTER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_TURBOMASTER_NL, "TurboMaster cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_TURBOMASTER_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_TURBOMASTER_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_TURBOMASTER_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_TURBOMASTER_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_TURBOMASTER_SWITCH_ROM_1,    N_("Set TurboMaster ROM switch to ROM 1")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_DA, ""},  /* fuzzy */
/* de */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_DE, "TurboMaster ROM Schalter auf ROM 1 setzen"},
/* es */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_HU, ""},  /* fuzzy */
/* it */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_NL, "Schakel TurboMaster ROM schakelaar naar ROM 1"},
/* pl */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_TURBOMASTER_SWITCH_ROM_1_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_TURBOMASTER_SWITCH_ROM_2,    N_("Set TurboMaster ROM switch to ROM 2")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_DA, ""},  /* fuzzy */
/* de */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_DE, "TurboMaster ROM Schalter auf ROM 2 setzen"},
/* es */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_HU, ""},  /* fuzzy */
/* it */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_NL, "Schakel TurboMaster ROM schakelaar naar ROM 2"},
/* pl */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_TURBOMASTER_SWITCH_ROM_2_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT,    N_("Set TurboMaster speed control switch to software")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_DA, ""},  /* fuzzy */
/* de */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_DE, "TurboMaster Geschwindigkeits Kontrollschalter auf Software setzen"},
/* es */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_HU, ""},  /* fuzzy */
/* it */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_NL, "Schakel TurboMaster snelheidscontrole schakelaar naar software"},
/* pl */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_TURBOMASTER_SWITCH_SPEED_SOFT_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL,    N_("Set TurboMaster speed control switch to manual")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_DA, ""},  /* fuzzy */
/* de */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_DE, "TurboMaster Geschwindigkeits Kontrollschalter auf Manuell setzen"},
/* es */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_HU, ""},  /* fuzzy */
/* it */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_NL, "Schakel TurboMaster snelheidscontrole schakelaar naar handmatig"},
/* pl */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_TURBOMASTER_SWITCH_SPEED_MANUAL_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ,    N_("Set TurboMaster clock speed switch to 4 Mhz")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_DA, ""},  /* fuzzy */
/* de */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_DE, "TurboMaster Taktgeschwindigkeitsschalter auf 4Mhz setzen"},
/* es */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_HU, ""},  /* fuzzy */
/* it */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_NL, "Schakel TurboMaster klok snelheid schakelaar naar 4 Mhz"},
/* pl */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_TURBOMASTER_SWITCH_4_MHZ_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ,    N_("Set TurboMaster clock speed switch to 1 Mhz")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_DA, ""},  /* fuzzy */
/* de */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_DE, "TurboMaster Taktgeschwindigkeitsschalter auf 1Mhz setzen"},
/* es */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_HU, ""},  /* fuzzy */
/* it */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_NL, "Schakel TurboMaster klok snelheid schakelaar naar 1 Mhz"},
/* pl */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_TURBOMASTER_SWITCH_1_MHZ_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME,    N_("Specify TurboMaster ROM 1 filename")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_DE, "TurboMaster ROM 1 w�hlen"},
/* es */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_NL, "Geef de naam van het TurboMaster ROM 1 bestand"},
/* pl */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_TURBOMASTER_ROM1_NAME_TR, ""},  /* fuzzy */
#endif

/* c64/cart/turbomaster.c */
/* en */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME,    N_("Specify TurboMaster ROM 2 filename")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_DE, "TurboMaster ROM 2 w�hlen"},
/* es */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_NL, "Geef de naam van het TurboMaster ROM 2 bestand"},
/* pl */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SPECIFY_TURBOMASTER_ROM2_NAME_TR, ""},  /* fuzzy */
#endif

/* c64/cart/easyflash.c */
/* en */ {IDCLS_ENABLE_EASYFLASH_JUMPER,    N_("Enable EasyFlash jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_EASYFLASH_JUMPER_DA, "Aktiv�r EasyFlash-jumper"},
/* de */ {IDCLS_ENABLE_EASYFLASH_JUMPER_DE, "EasyFlash Jumper aktivieren"},
/* es */ {IDCLS_ENABLE_EASYFLASH_JUMPER_ES, "Permitir puente EasyFlash"},
/* fr */ {IDCLS_ENABLE_EASYFLASH_JUMPER_FR, "Activer le jumper EasyFlash"},
/* hu */ {IDCLS_ENABLE_EASYFLASH_JUMPER_HU, "EasyFlash Jumper enged�lyez�se"},
/* it */ {IDCLS_ENABLE_EASYFLASH_JUMPER_IT, "Attiva ponticello EasyFlash"},
/* ko */ {IDCLS_ENABLE_EASYFLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_EASYFLASH_JUMPER_NL, "EasyFlash jumper inschakelen"},
/* pl */ {IDCLS_ENABLE_EASYFLASH_JUMPER_PL, "W��cz prze��cznik EasyFlash"},
/* ru */ {IDCLS_ENABLE_EASYFLASH_JUMPER_RU, "Enable EasyFlash jumper"},
/* sv */ {IDCLS_ENABLE_EASYFLASH_JUMPER_SV, "Aktivera EasyFlash-bygel"},
/* tr */ {IDCLS_ENABLE_EASYFLASH_JUMPER_TR, "EasyFlash jumper'� aktif et"},
#endif

/* c64/cart/easyflash.c */
/* en */ {IDCLS_DISABLE_EASYFLASH_JUMPER,    N_("Disable EasyFlash jumper")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_EASYFLASH_JUMPER_DA, "Deaktiv�r EasyFlash-jumper"},
/* de */ {IDCLS_DISABLE_EASYFLASH_JUMPER_DE, "EasyFlash Jumer deaktivieren"},
/* es */ {IDCLS_DISABLE_EASYFLASH_JUMPER_ES, "Deshabilitar puente EasyFlash"},
/* fr */ {IDCLS_DISABLE_EASYFLASH_JUMPER_FR, "D�sactiver le jumper EasyFlash"},
/* hu */ {IDCLS_DISABLE_EASYFLASH_JUMPER_HU, "EasyFlash Jumper tilt�sa"},
/* it */ {IDCLS_DISABLE_EASYFLASH_JUMPER_IT, "Disattiva ponticello EasyFlash"},
/* ko */ {IDCLS_DISABLE_EASYFLASH_JUMPER_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_EASYFLASH_JUMPER_NL, "EasyFlash jumper uitschakelen"},
/* pl */ {IDCLS_DISABLE_EASYFLASH_JUMPER_PL, "Wy��cz prze��cznik EasyFlash"},
/* ru */ {IDCLS_DISABLE_EASYFLASH_JUMPER_RU, "Disable EasyFlash jumper"},
/* sv */ {IDCLS_DISABLE_EASYFLASH_JUMPER_SV, "Inaktivera EasyFlash-bygel"},
/* tr */ {IDCLS_DISABLE_EASYFLASH_JUMPER_TR, "EasyFlash jumper'� pasifle�tir"},
#endif

/* c64/cart/easyflash.c */
/* en */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING,    N_("Enable writing to EasyFlash .crt image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_DA, "Tillad skrivning til EasyFlash CRT-image"},
/* de */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_DE, "Schreibzugriff auf EasyFlash CRT Image erlauben"},
/* es */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_ES, "Permitir grabar imagen .crt EasyFlash"},
/* fr */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_FR, "Activer l'�criture pour les images EasyFlash .crt"},
/* hu */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_HU, "EasyFlash .crt k�pm�sba �r�s enged�lyez�se"},
/* it */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_IT, "Attiva scrittura sull'immagine .crt EasyFlash"},
/* ko */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_NL, "Schrijven naar het EasyFlash .crt bestand inschakelen"},
/* pl */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_PL, "W��cz zapis do obrazu .crt EasyFlash"},
/* ru */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_RU, "Enable writing to EasyFlash .crt image"},
/* sv */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_SV, "Aktivera skrivning till EasyFlash-.crt-avbildning."},
/* tr */ {IDCLS_ENABLE_EASYFLASH_CRT_WRITING_TR, "EasyFlash .crt imaj�na yazmay� aktif et"},
#endif

/* c64/cart/easyflash.c */
/* en */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING,    N_("Disable writing to EasyFlash .crt image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_DA, "Forbyd skrivning til EasyFlash CRT-image"},
/* de */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_DE, "Schreibzugriff auf EasyFlash ROM Image verhindern"},
/* es */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_ES, "Deshabilitar grabar imagen .crt EasyFlash"},
/* fr */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_FR, "D�sactiver l'�criture pour les images EasyFlash .crt"},
/* hu */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_HU, "EasyFlash .crt k�pm�sba �r�s tilt�sa"},
/* it */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_IT, "Disattiva scrittura sull'immagine .crt EasyFlash"},
/* ko */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_NL, "Dchrijven naar het EasyFlash .crt bestand uitschakelen"},
/* pl */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_PL, "Wy��cz zapis do obrazu .crt EasyFlash"},
/* ru */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_RU, "Disable writing to EasyFlash .crt image"},
/* sv */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_SV, "Inaktivera skrivning till EasyFlash-.crt-avbildning."},
/* tr */ {IDCLS_DISABLE_EASYFLASH_CRT_WRITING_TR, "EasyFlash .crt imaj�na yazmay� pasifle�tir"},
#endif

/* c64/cart/easyflash.c */
/* en */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE,    N_("Enable EasyFlash .crt image optimize on write")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_DE, "EasyFlash .crt Image beim Speichern optimieren"},
/* es */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_NL, "Optimalizeren van het schrijven naar het EasyFlash .crt bestand inschakelen"},
/* pl */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_PL, "W��cz optymalizacj� zapisu do obrazu .crt EasyFlash"},
/* ru */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_EASYFLASH_CRT_OPTIMIZE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/easyflash.c */
/* en */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE,    N_("Disable writing to EasyFlash .crt image")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_DA, "Forbyd skrivning til EasyFlash CRT-image"},
/* de */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_DE, "Schreibzugriff auf EasyFlash ROM Image verhindern"},
/* es */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_ES, "Deshabilitar grabar imagen .crt EasyFlash"},
/* fr */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_FR, "D�sactiver l'�criture pour les images EasyFlash .crt"},
/* hu */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_HU, "EasyFlash .crt k�pm�sba �r�s tilt�sa"},
/* it */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_IT, "Disattiva scrittura sull'immagine .crt EasyFlash"},
/* ko */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_NL, "Dchrijven naar het EasyFlash .crt bestand uitschakelen"},
/* pl */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_PL, "Wy��cz zapis do obrazu .crt EasyFlash"},
/* ru */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_RU, "Disable writing to EasyFlash .crt image"},
/* sv */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_SV, "Inaktivera skrivning till EasyFlash-.crt-avbildning."},
/* tr */ {IDCLS_DISABLE_EASYFLASH_CRT_OPTIMIZE_TR, "EasyFlash .crt imaj�na yazmay� pasifle�tir"},
#endif

/* userport/userport_digimax.c */
/* en */ {IDCLS_ENABLE_USERPORT_DIGIMAX,    N_("Enable the userport DigiMAX device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_USERPORT_DIGIMAX_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_USERPORT_DIGIMAX_DE, "Userport DigiMAX Ger�t aktivieren"},
/* es */ {IDCLS_ENABLE_USERPORT_DIGIMAX_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_USERPORT_DIGIMAX_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_USERPORT_DIGIMAX_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_USERPORT_DIGIMAX_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_USERPORT_DIGIMAX_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_USERPORT_DIGIMAX_NL, "Userport DigiMAX apparaat inschakelen"},
/* pl */ {IDCLS_ENABLE_USERPORT_DIGIMAX_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_USERPORT_DIGIMAX_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_USERPORT_DIGIMAX_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_USERPORT_DIGIMAX_TR, ""},  /* fuzzy */
#endif

/* userport/userport_digimax.c */
/* en */ {IDCLS_DISABLE_USERPORT_DIGIMAX,    N_("Disable the userport DigiMAX device")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_USERPORT_DIGIMAX_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_USERPORT_DIGIMAX_DE, "Userport DigiMAX Ger�t deaktivieren"},
/* es */ {IDCLS_DISABLE_USERPORT_DIGIMAX_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_USERPORT_DIGIMAX_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_USERPORT_DIGIMAX_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_USERPORT_DIGIMAX_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_USERPORT_DIGIMAX_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_USERPORT_DIGIMAX_NL, "Userport DigiMAX apparaat uitschakelen"},
/* pl */ {IDCLS_DISABLE_USERPORT_DIGIMAX_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_USERPORT_DIGIMAX_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_USERPORT_DIGIMAX_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_USERPORT_DIGIMAX_TR, ""},  /* fuzzy */
#endif

/* c64/cart/shortbus_digimax.c */
/* en */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX,    N_("Enable the Short Bus DigiMAX expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_DE, "Shortbus DigiMAX Erweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_NL, "Short Bus DigiMAX uitbreiding inschakelen"},
/* pl */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_SHORTBUS_DIGIMAX_TR, ""},  /* fuzzy */
#endif

/* c64/cart/shortbus_digimax.c */
/* en */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX,    N_("Disable the Short Bus DigiMAX expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_DE, "Shortbus DigiMAX Erweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_NL, "Short Bus DigiMAX uitbreiding uitschakelen"},
/* pl */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_SHORTBUS_DIGIMAX_TR, ""},  /* fuzzy */
#endif

/* c64/cart/shortbus_etfe.c */
/* en */ {IDCLS_ENABLE_SHORTBUS_ETFE,    N_("Enable the Short Bus ETFE expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SHORTBUS_ETFE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_SHORTBUS_ETFE_DE, "Short Bus ETFE Erweiterung aktivieren"},
/* es */ {IDCLS_ENABLE_SHORTBUS_ETFE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_ENABLE_SHORTBUS_ETFE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_SHORTBUS_ETFE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SHORTBUS_ETFE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_ENABLE_SHORTBUS_ETFE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SHORTBUS_ETFE_NL, "Short Bus ETFE uitbreiding inschakelen"},
/* pl */ {IDCLS_ENABLE_SHORTBUS_ETFE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_ENABLE_SHORTBUS_ETFE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SHORTBUS_ETFE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_SHORTBUS_ETFE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/shortbus_etfe.c */
/* en */ {IDCLS_DISABLE_SHORTBUS_ETFE,    N_("Disable the Short Bus ETFE expansion")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SHORTBUS_ETFE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_SHORTBUS_ETFE_DE, "Short Bus ETFE Erweiterung deaktivieren"},
/* es */ {IDCLS_DISABLE_SHORTBUS_ETFE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_DISABLE_SHORTBUS_ETFE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_SHORTBUS_ETFE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SHORTBUS_ETFE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_DISABLE_SHORTBUS_ETFE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SHORTBUS_ETFE_NL, "Short Bus ETFE uitbreiding uitschakelen"},
/* pl */ {IDCLS_DISABLE_SHORTBUS_ETFE_PL, ""},  /* fuzzy */
/* ru */ {IDCLS_DISABLE_SHORTBUS_ETFE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SHORTBUS_ETFE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_SHORTBUS_ETFE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/digimax.c */
/* en */ {IDCLS_ENABLE_DIGIMAX,    N_("Enable the DigiMAX cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DIGIMAX_DA, "Aktiv�r DigiMAX cartridge"},
/* de */ {IDCLS_ENABLE_DIGIMAX_DE, "DigiMAX Cartridge aktivieren"},
/* es */ {IDCLS_ENABLE_DIGIMAX_ES, "Permitir cartucho DigMAX"},
/* fr */ {IDCLS_ENABLE_DIGIMAX_FR, "Activer la cartouche DigiMAX"},
/* hu */ {IDCLS_ENABLE_DIGIMAX_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_DIGIMAX_IT, "Attiva la cartuccia DigiMAX"},
/* ko */ {IDCLS_ENABLE_DIGIMAX_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DIGIMAX_NL, "DigiMAX cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_DIGIMAX_PL, "W��cz kartrid� DigiMAX"},
/* ru */ {IDCLS_ENABLE_DIGIMAX_RU, "Enable the DigiMAX cartridge"},
/* sv */ {IDCLS_ENABLE_DIGIMAX_SV, "Aktivera DigiMAX-insticksmodul"},
/* tr */ {IDCLS_ENABLE_DIGIMAX_TR, "DigiMAX kartu�unu aktif et"},
#endif

/* c64/cart/digimax.c */
/* en */ {IDCLS_DISABLE_DIGIMAX,    N_("Disable the DigiMAX cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DIGIMAX_DA, "Deaktiv�r DigiMAX cartridge"},
/* de */ {IDCLS_DISABLE_DIGIMAX_DE, "DigiMAX Cartridge deaktivieren"},
/* es */ {IDCLS_DISABLE_DIGIMAX_ES, "Deshabilitar cartucho DigMAX"},
/* fr */ {IDCLS_DISABLE_DIGIMAX_FR, "D�sactiver la cartouche DigiMAX"},
/* hu */ {IDCLS_DISABLE_DIGIMAX_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_DIGIMAX_IT, "Disattiva la cartuccia DigiMAX"},
/* ko */ {IDCLS_DISABLE_DIGIMAX_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DIGIMAX_NL, "DigiMAX cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_DIGIMAX_PL, "Wy��cz kartrid� DigiMAX"},
/* ru */ {IDCLS_DISABLE_DIGIMAX_RU, "Disable the DigiMAX cartridge"},
/* sv */ {IDCLS_DISABLE_DIGIMAX_SV, "Inaktivera DigiMAX-insticksmodul"},
/* tr */ {IDCLS_DISABLE_DIGIMAX_TR, "DigiMAX kartu�unu pasifle�tir"},
#endif

/* c64/cart/ds12c887rtc.c */
/* en */ {IDCLS_ENABLE_DS12C887RTC,    N_("Enable the DS12C887 RTC cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DS12C887RTC_DA, "Aktiv�r DS12C887 RTC-cartridge"},
/* de */ {IDCLS_ENABLE_DS12C887RTC_DE, "DS12C887 RTC Modul aktivieren"},
/* es */ {IDCLS_ENABLE_DS12C887RTC_ES, "Permitir cartucho DS12C887 RTC"},
/* fr */ {IDCLS_ENABLE_DS12C887RTC_FR, "Activer la cartouche RTC DS12C887"},
/* hu */ {IDCLS_ENABLE_DS12C887RTC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_DS12C887RTC_IT, "Attiva la cartuccia DS12C887 RTC"},
/* ko */ {IDCLS_ENABLE_DS12C887RTC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DS12C887RTC_NL, "DS12C887 RTC cartridge inschakelen"},
/* pl */ {IDCLS_ENABLE_DS12C887RTC_PL, "W��cz kartrid� DS12C887 RTC"},
/* ru */ {IDCLS_ENABLE_DS12C887RTC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_DS12C887RTC_SV, "Aktivera DS12C887 RTC-insticksmodul"},
/* tr */ {IDCLS_ENABLE_DS12C887RTC_TR, "DS12C887 RTC kartu�unu aktif et"},
#endif

/* c64/cart/ds12c887rtc.c */
/* en */ {IDCLS_DISABLE_DS12C887RTC,    N_("Disable the DS12C887 RTC cartridge")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DS12C887RTC_DA, "Deaktiv�r DS12C887 RTC-cartridge"},
/* de */ {IDCLS_DISABLE_DS12C887RTC_DE, "DS12C887 RTC Modul deaktivieren"},
/* es */ {IDCLS_DISABLE_DS12C887RTC_ES, "Deshabilitar cartucho DS12C887 RTC"},
/* fr */ {IDCLS_DISABLE_DS12C887RTC_FR, "D�sactiver la cartouche DS12C887 RTC"},
/* hu */ {IDCLS_DISABLE_DS12C887RTC_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_DS12C887RTC_IT, "Disattiva la cartuccia DS12C887 RTC"},
/* ko */ {IDCLS_DISABLE_DS12C887RTC_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DS12C887RTC_NL, "DS12C887 RTC cartridge uitschakelen"},
/* pl */ {IDCLS_DISABLE_DS12C887RTC_PL, "Wy��cz kartrid� DS12C887 RTC"},
/* ru */ {IDCLS_DISABLE_DS12C887RTC_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_DS12C887RTC_SV, "Inaktivera DS12C887 RTC-insticksmodul"},
/* tr */ {IDCLS_DISABLE_DS12C887RTC_TR, "DS12C887 RTC kartu�unu pasifle�tir"},
#endif

/* c64/cart/ds12c887rtc.c */
/* en */ {IDCLS_DS12C887RTC_RUNMODE_HALTED,    N_("Set the RTC oscillator to 'halted'")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_DE, "Setze RTC Oszillator auf 'gestoppt'"},
/* es */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_ES, "Seleccionar oscilador RTC en 'halted' (parada)"},
/* fr */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_IT, "Imposta l'oscillatore RTC a 'halted'"},
/* ko */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_NL, "Stel de RTC oscillator in als 'gestopt'"},
/* pl */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_PL, "Ustaw oscylator RTC jako 'zatrzymany'"},
/* ru */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DS12C887RTC_RUNMODE_HALTED_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ds12c887rtc.c */
/* en */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING,    N_("Set the RTC oscillator to 'running'")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_DE, "Setze RTC Oszillator auf 'laufend'"},
/* es */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_ES, "Seleccionar RTC oscillator en 'ejecutando'"},
/* fr */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_IT, "Imposta l'oscillatore RTC a 'running'"},
/* ko */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_NL, "Stel de RTC oscillator in als 'werkend'"},
/* pl */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_PL, "Ustaw oscylator RTC jako 'uruchomiony'"},
/* ru */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DS12C887RTC_RUNMODE_RUNNING_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ds12c887rtc.c */
/* en */ {IDCLS_ENABLE_DS12C887RTC_SAVE,    N_("Enable saving of the DS12C887 RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_DS12C887RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_DS12C887RTC_SAVE_DE, "DS12C887 RTC Daten bei �nderung speichern."},
/* es */ {IDCLS_ENABLE_DS12C887RTC_SAVE_ES, "Permitir grabar datos de  DS12C887 RTC cuando cambien."},
/* fr */ {IDCLS_ENABLE_DS12C887RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_DS12C887RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_DS12C887RTC_SAVE_IT, "Attiva il salvataggio dei dati RTC del DS12C887 alla modifica."},
/* ko */ {IDCLS_ENABLE_DS12C887RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_DS12C887RTC_SAVE_NL, "Opslaan van de DS12C887 RTC gegevens bij wijziging inschakelen."},
/* pl */ {IDCLS_ENABLE_DS12C887RTC_SAVE_PL, "Zapisuj dane zegara czasu rzeczywistego DS12C887 przy zmianie"},
/* ru */ {IDCLS_ENABLE_DS12C887RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_DS12C887RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_ENABLE_DS12C887RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* c64/cart/ds12c887rtc.c */
/* en */ {IDCLS_DISABLE_DS12C887RTC_SAVE,    N_("Disable saving of the DS12C887 RTC data when changed.")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_DS12C887RTC_SAVE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_DS12C887RTC_SAVE_DE, "DS12C887 RTC Daten bei �nderung nicht speichern."},
/* es */ {IDCLS_DISABLE_DS12C887RTC_SAVE_ES, "Deshabilitar grabar datos de  DS12C887 RTC cuando cambien."},
/* fr */ {IDCLS_DISABLE_DS12C887RTC_SAVE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_DS12C887RTC_SAVE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_DS12C887RTC_SAVE_IT, "Disattiva il salvataggio dei dati RTC del DS12C887 alla modifica."},
/* ko */ {IDCLS_DISABLE_DS12C887RTC_SAVE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_DS12C887RTC_SAVE_NL, "Opslaan van de DS12C887 RTC gegevens bij wijziging uitschakelen."},
/* pl */ {IDCLS_DISABLE_DS12C887RTC_SAVE_PL, "Nie zapisuj danych zegara czasu rzeczywistego DS12C887 przy zmianie"},
/* ru */ {IDCLS_DISABLE_DS12C887RTC_SAVE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_DS12C887RTC_SAVE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_DISABLE_DS12C887RTC_SAVE_TR, ""},  /* fuzzy */
#endif

/* scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_SET_SIMM_SIZE,    N_("Size of the SIMM RAM (0/1/4/8/16 MB)")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_SIMM_SIZE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_SIMM_SIZE_DE, "Gr��e des SIMM RAM (0/1/4/8/16 MB)"},
/* es */ {IDCLS_SET_SIMM_SIZE_ES, "Tama�o de la RAM SIMM (0/1/4/8/16 MB)"},
/* fr */ {IDCLS_SET_SIMM_SIZE_FR, "Grandeur de la RAM SIMM (0/1/4/8/16 mo)"},
/* hu */ {IDCLS_SET_SIMM_SIZE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_SIMM_SIZE_IT, "Dimensione della RAM SIMM (0/1/4/8/16 MB)"},
/* ko */ {IDCLS_SET_SIMM_SIZE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_SIMM_SIZE_NL, "Grootte van het SIMM RAM (0/1/4/8/16 MB)"},
/* pl */ {IDCLS_SET_SIMM_SIZE_PL, "Ilo�� SIMM RAM-u (0/1/4/8/16 MB)"},
/* ru */ {IDCLS_SET_SIMM_SIZE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_SIMM_SIZE_SV, "Storlek p� SIMM-RAM (0/1/4/8/16 MB)"},
/* tr */ {IDCLS_SET_SIMM_SIZE_TR, ""},  /* fuzzy */
#endif

/* scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_ENABLE_JIFFY_SWITCH,    N_("Turn on Jiffy switch")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_JIFFY_SWITCH_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_JIFFY_SWITCH_DE, "Jiffy Schalter einschalten"},
/* es */ {IDCLS_ENABLE_JIFFY_SWITCH_ES, "Encender conmutador Jiffy"},
/* fr */ {IDCLS_ENABLE_JIFFY_SWITCH_FR, "Activer la jiffy Switch"},
/* hu */ {IDCLS_ENABLE_JIFFY_SWITCH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_JIFFY_SWITCH_IT, "Attiva pulsante Jiffy"},
/* ko */ {IDCLS_ENABLE_JIFFY_SWITCH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_JIFFY_SWITCH_NL, "Jiffy schakelaar inschakelen"},
/* pl */ {IDCLS_ENABLE_JIFFY_SWITCH_PL, "W��cz prze��cznik Jiffy"},
/* ru */ {IDCLS_ENABLE_JIFFY_SWITCH_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_JIFFY_SWITCH_SV, "Sl� p� Jiffyomkopplare"},
/* tr */ {IDCLS_ENABLE_JIFFY_SWITCH_TR, ""},  /* fuzzy */
#endif

/* scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_DISABLE_JIFFY_SWITCH,    N_("Turn off Jiffy switch")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_JIFFY_SWITCH_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_JIFFY_SWITCH_DE, "Jiffy Schalter ausschalten"},
/* es */ {IDCLS_DISABLE_JIFFY_SWITCH_ES, "Apagar conmutador Jiffy"},
/* fr */ {IDCLS_DISABLE_JIFFY_SWITCH_FR, "D�sactiver Jiffy Switch"},
/* hu */ {IDCLS_DISABLE_JIFFY_SWITCH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_JIFFY_SWITCH_IT, "Disattiva pulsante Jiffy"},
/* ko */ {IDCLS_DISABLE_JIFFY_SWITCH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_JIFFY_SWITCH_NL, "Jiffy schakelaar uitschakelen"},
/* pl */ {IDCLS_DISABLE_JIFFY_SWITCH_PL, "Wy��cz prze��cznik Jiffy"},
/* ru */ {IDCLS_DISABLE_JIFFY_SWITCH_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_JIFFY_SWITCH_SV, "Sl� av Jiffyomkopplare"},
/* tr */ {IDCLS_DISABLE_JIFFY_SWITCH_TR, ""},  /* fuzzy */
#endif

/* scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_ENABLE_SPEED_SWITCH,    N_("Turn on Speed switch")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_SPEED_SWITCH_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_SPEED_SWITCH_DE, "Speed Schalter einschalten"},
/* es */ {IDCLS_ENABLE_SPEED_SWITCH_ES, "Encender conmutador de velocidad"},
/* fr */ {IDCLS_ENABLE_SPEED_SWITCH_FR, "Activer Speed Switch"},
/* hu */ {IDCLS_ENABLE_SPEED_SWITCH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_SPEED_SWITCH_IT, "Attiva pulsante di velocit�"},
/* ko */ {IDCLS_ENABLE_SPEED_SWITCH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_SPEED_SWITCH_NL, "Snelheid schakelaar inschakelen"},
/* pl */ {IDCLS_ENABLE_SPEED_SWITCH_PL, "W��cz prze��cznik Speed"},
/* ru */ {IDCLS_ENABLE_SPEED_SWITCH_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_SPEED_SWITCH_SV, "Sl� p� hastighetsomkopplare"},
/* tr */ {IDCLS_ENABLE_SPEED_SWITCH_TR, ""},  /* fuzzy */
#endif

/* scpu64/scpu64-cmdline-options.c */
/* en */ {IDCLS_DISABLE_SPEED_SWITCH,    N_("Turn off Speed switch")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_SPEED_SWITCH_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_SPEED_SWITCH_DE, "Speed Schalter ausschalten"},
/* es */ {IDCLS_DISABLE_SPEED_SWITCH_ES, "Apagar conmutador de velocidad"},
/* fr */ {IDCLS_DISABLE_SPEED_SWITCH_FR, "D�sactiver la Speed Switch"},
/* hu */ {IDCLS_DISABLE_SPEED_SWITCH_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_SPEED_SWITCH_IT, "Disattiva pulsante di velocit�"},
/* ko */ {IDCLS_DISABLE_SPEED_SWITCH_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_SPEED_SWITCH_NL, "Snelheid schakelaar uitschakelen"},
/* pl */ {IDCLS_DISABLE_SPEED_SWITCH_PL, "Wy��cz prze��cznik Speed"},
/* ru */ {IDCLS_DISABLE_SPEED_SWITCH_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_SPEED_SWITCH_SV, "Sl� av hastighetsomkopplare"},
/* tr */ {IDCLS_DISABLE_SPEED_SWITCH_TR, ""},  /* fuzzy */
#endif

/* pet/pethre.c */
/* en */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD,    N_("Enable HiRes Emulation Board")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_DA, ""},  /* fuzzy */
/* de */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_DE, "HiRes Emulation Board aktivieren"},
/* es */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_ES, "Permitir emulaci�n tableta de alta resoluci�n"},
/* fr */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_IT, "Attiva scheda HiRes Emulation"},
/* ko */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_NL, "PET High Res Emulation bord inschakelen"},
/* pl */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_PL, "W��cz kart� emulacji HiRes"},
/* ru */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_SV, "Aktivera h�guppl�sningsemuleringskort"},
/* tr */ {IDCLS_ENABLE_HIRES_EMULATION_BOARD_TR, ""},  /* fuzzy */
#endif

/* pet/pethre.c */
/* en */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD,    N_("Disable HiRes Emulation Board")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_DA, ""},  /* fuzzy */
/* de */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_DE, "HiRes Emulation Board aktivieren"},
/* es */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_ES, "Deshabilitar emulaci�n tableta de alta resoluci�n"},
/* fr */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_HU, ""},  /* fuzzy */
/* it */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_IT, "Disattiva scheda HiRes Emulation"},
/* ko */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_NL, "PET High Res Emulation bord uitschakelen"},
/* pl */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_PL, "Wy��cz kart� emulacji HiRes"},
/* ru */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_SV, "h�guppl�sningsemuleringskort Inaktivera"},
/* tr */ {IDCLS_DISABLE_HIRES_EMULATION_BOARD_TR, ""},  /* fuzzy */
#endif

#ifdef HAVE_RAWDRIVE
/* diskimage/rawimage.c */
/* en */ {IDCLS_SET_RAW_DRIVE_DEVICE,    N_("Set raw drive device name")},
#ifdef HAS_TRANSLATION
/* da */ {IDCLS_SET_RAW_DRIVE_DEVICE_DA, ""},  /* fuzzy */
/* de */ {IDCLS_SET_RAW_DRIVE_DEVICE_DE, "Raw Laufwerk Ger�tename setzen"},
/* es */ {IDCLS_SET_RAW_DRIVE_DEVICE_ES, ""},  /* fuzzy */
/* fr */ {IDCLS_SET_RAW_DRIVE_DEVICE_FR, ""},  /* fuzzy */
/* hu */ {IDCLS_SET_RAW_DRIVE_DEVICE_HU, ""},  /* fuzzy */
/* it */ {IDCLS_SET_RAW_DRIVE_DEVICE_IT, ""},  /* fuzzy */
/* ko */ {IDCLS_SET_RAW_DRIVE_DEVICE_KO, ""},  /* fuzzy */
/* nl */ {IDCLS_SET_RAW_DRIVE_DEVICE_NL, "Stel binair drive apparaatnaam in"},
/* pl */ {IDCLS_SET_RAW_DRIVE_DEVICE_PL, "Wprowad� nazw� urz�dzenia surowego nap�du"},
/* ru */ {IDCLS_SET_RAW_DRIVE_DEVICE_RU, ""},  /* fuzzy */
/* sv */ {IDCLS_SET_RAW_DRIVE_DEVICE_SV, ""},  /* fuzzy */
/* tr */ {IDCLS_SET_RAW_DRIVE_DEVICE_TR, ""},  /* fuzzy */
#endif
#endif

};
