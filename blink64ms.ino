////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  Filename: blink64ms.ino                                                   //
//                                                                            //
//  Function: To blink the built-in LED at 64 ms interval time.               //
//                                                                            //
//  Platform: Arduino NANO, LGT8F328, STM32F103C8T6.                          //
//                                                                            //
//  Notation: Published on 11.1.2021, last updated 18.1.2021                  //
//            written by Ricky Gai, Nexuz Innovation.                         //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

// NOTE: You may set 1 or 0 at the directive #if below,
//
//       1...blink at 64 ms
//       0...blink at 1000 ms
#if 1
    const int BLINK_SPEED = 64;   // 64 ms
#else
    const int BLINK_SPEED = 1000; // 1000 ms = 1 second
#endif

// setup() will be executed one cycle only.
void setup() 
{  
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
