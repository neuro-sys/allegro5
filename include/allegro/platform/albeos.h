/*         ______   ___    ___ 
 *        /\  _  \ /\_ \  /\_ \ 
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___ 
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      BeOS specific definitions header file.
 *
 *      By Jason Wilkins.
 *
 *      See readme.txt for copyright information.
 */


/* system driver */
#define SYSTEM_BEOS           AL_ID('B','S','Y','S')
AL_VAR(SYSTEM_DRIVER, system_beos);

/* timer driver */
#define TIMER_BEOS            AL_ID('B','T','I','M')
AL_VAR(TIMER_DRIVER, timer_beos);

/* keyboard driver */
#define KEYBOARD_BEOS         AL_ID('B','K','E','Y')
AL_VAR(KEYBOARD_DRIVER, keyboard_beos);

/* mouse driver */
#define MOUSE_BEOS            AL_ID('B','M','O','U')
AL_VAR(MOUSE_DRIVER, mouse_beos);

/* joystick driver */
#define JOYSTICK_BEOS         AL_ID('B','J','O','Y')
AL_VAR(JOYSTICK_DRIVER, joystick_beos);

/* graphics drivers */
#define GFX_BEOS                 AL_ID('B','W','N','S')

#define GFX_BEOS_FULLSCREEN      AL_ID('B','F','S',' ')
#define GFX_BEOS_FULLSCREEN_SAFE AL_ID('B','F','S','S')
AL_VAR(GFX_DRIVER, gfx_beos_bwindowscreen_accel);
AL_VAR(GFX_DRIVER, gfx_beos_bwindowscreen);

#define GFX_BEOS_WINDOWED        AL_ID('B','W','N',' ')
#define GFX_BEOS_WINDOWED_SAFE   AL_ID('B','W','N','S')
AL_VAR(GFX_DRIVER, gfx_beos_bdirectwindow);
AL_VAR(GFX_DRIVER, gfx_beos_bwindow);

#define GFX_BEOS_OVERLAY         AL_ID('B','O','V','L')
AL_VAR(GFX_DRIVER, gfx_beos_overlay);

/* digi drivers */
#define DIGI_BEOS             AL_ID('B','D','I','G')
AL_VAR(DIGI_DRIVER, digi_beos);

/* midi drivers */
#define MIDI_BEOS             AL_ID('B','M','I','D')
AL_VAR(MIDI_DRIVER, midi_beos);

#define GFX_DRIVER_BEOS                                                 \
   { GFX_BEOS_FULLSCREEN,      &gfx_beos_bwindowscreen_accel, TRUE },	\
   { GFX_BEOS_FULLSCREEN_SAFE, &gfx_beos_bwindowscreen,       TRUE },	\
   { GFX_BEOS_OVERLAY,         &gfx_beos_overlay,             TRUE },   \
   { GFX_BEOS_WINDOWED,        &gfx_beos_bdirectwindow,       TRUE },	\
   { GFX_BEOS_WINDOWED_SAFE,   &gfx_beos_bwindow,             TRUE },

#define DIGI_DRIVER_BEOS                                                \
   {  DIGI_BEOS,       &digi_beos,      TRUE  },
   
#define MIDI_DRIVER_BEOS                                                \
   {  MIDI_BEOS,       &midi_beos,      TRUE  },

#define JOYSTICK_DRIVER_BEOS                                            \
   {  JOYSTICK_BEOS,   &joystick_beos,  TRUE  },

#define GFX_SAFE_ID	GFX_BEOS
#define GFX_SAFE_DEPTH	8
#define GFX_SAFE_W	320
#define GFX_SAFE_H	200
