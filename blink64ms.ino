////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  Filename: blink64ms.ino                                                   //
//                                                                            //
//  Function: To blink the built-in LED at 64 ms interval time.               //
//                                                                            //
//  Platform: Arduino NANO, LGT8F328.                                         //
//                                                                            //
//  Notation: Published on 11.1.2021 by Ricky Gai, Nexuz Innovation.          //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

// needed for clock_prescale_set() 
#include <avr/power.h>

const int BLINK_SPEED = 64; // 64 ms

// setup() will be executed one cycle only.
void setup() 
{  
    // Tells the compiler not to change the clock speed,
    // if LGT8F328P 32MHz used, then this instruction 
    // ensure it is 32MHz compile.
    clock_prescale_set( clock_div_1 );
  
    // initialize digital pin LED_BUILTIN as an output.
    pinMode( LED_BUILTIN, OUTPUT );
}

// WARNING: Don't put endless loop ( eg. for loop ) within this 
//          loop() otherwise the Serial communication will be blocked.
void loop() 
{
    digitalWrite( LED_BUILTIN, HIGH );  
    delay( BLINK_SPEED );              
    
    digitalWrite( LED_BUILTIN, LOW );  
    delay( BLINK_SPEED );              
}

/// END OF FILE ////////////////////////////////////////////////////////////////
