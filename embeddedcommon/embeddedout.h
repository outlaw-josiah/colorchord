#ifndef _EMBEDDEDOUT_H
#define _EMBEDDEDOUT_H

#include "embeddednf.h"


//Controls brightness
#define NOTE_FINAL_AMP  12   //Number from 0...255

//Controls, basically, the minimum size of the splotches.
#define NERF_NOTE_PORP 15 //value from 0 to 255

#ifndef NUM_LIN_LEDS
#define NUM_LIN_LEDS 296
#endif

#ifndef LIN_WRAPAROUND
#define LIN_WRAPAROUND 0 //Whether the output lights wrap around. (Can't easily run on embedded systems)
#endif

#define SORT_NOTES 0     //Whether the notes will be sorted.

extern uint8_t ledArray[];
extern uint8_t ledOut[]; //[NUM_LIN_LEDS*3]
extern uint8_t RootNoteOffset; //Set to define what the root note is.  0 = A.
void UpdateLinearLEDs();

uint32_t ECCtoHEX( uint8_t note, uint8_t sat, uint8_t val );
uint32_t EHSVtoHEX( uint8_t hue, uint8_t sat, uint8_t val ); //hue = 0..255 // TODO: TEST ME!!!


#endif

