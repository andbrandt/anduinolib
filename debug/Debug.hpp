#ifndef DEBUG_h
#define DEBUG_h

#include <arduino.h>

extern bool safeMode;

// #define DEBUG

#ifdef DEBUG
    void DebugSetup();
    extern bool dbg_enabled;
    #define DEBUG_SETUP()         {DebugSetup();}
    #define DEBUG_PRINT(f_, ...)  if (dbg_enabled) {Serial.print("DBG: ");              \
                                   Serial.print((f_), ##__VA_ARGS__);  \
                                   Serial.print("\n");                 \
                                  }

#else
    #define DEBUG_SETUP()
    #define DEBUG_PRINT(...)
#endif

#endif