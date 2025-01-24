// #include "Arduino.h"

#include <Mouse.h>
#include <Keyboard.h>
#include "SimRealFlightBasic.hpp"

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorRealFlightBasic::Restart() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
}

void SimulatorRealFlightBasic::BlockSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_RIGHT_ARROW);
}

void SimulatorRealFlightBasic::UnBlockSim() {
    Keyboard.write(KEY_LEFT_ARROW);
    delay(10);
    Keyboard.write(KEY_LEFT_ARROW);
    delay(10);
}

// ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
void keyMap(unsigned char key) {
    switch(key) {
        case '\\':
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press(KEY_KP_9);
            Keyboard.release(KEY_KP_9);
            Keyboard.press(KEY_KP_2);
            Keyboard.release(KEY_KP_2);
            Keyboard.release(KEY_LEFT_ALT);
            break;
        case '\"':
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press(KEY_KP_3);
            Keyboard.release(KEY_KP_3);
            Keyboard.press(KEY_KP_4);
            Keyboard.release(KEY_KP_4);
            Keyboard.release(KEY_LEFT_ALT);
            break;
        case ':':
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press(KEY_KP_5);
            Keyboard.release(KEY_KP_5);
            Keyboard.press(KEY_KP_8);
            Keyboard.release(KEY_KP_8);
            Keyboard.release(KEY_LEFT_ALT);
            break;
        case '/':
            Keyboard.press(KEY_KP_SLASH);
            Keyboard.release(KEY_KP_SLASH);
            break;

        default:
            Keyboard.press(key);
            Keyboard.release(key);
            break;
    }
    fflush(stdout);
}

void keyWrite(char key) {
    keyMap(key);
}

void streamKeyString(char *keyString) {
    for (int cStringPos=0;cStringPos<strlen(keyString);cStringPos++) {
        keyWrite(keyString[cStringPos]);
    }
}

// ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

void SimulatorRealFlightBasic::InitSim() {
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
//    char cString[] = "cmd.exe taskkill /IM RealFlight.exe";
    char cString[] = "taskkill /IM RealFlight.exe";
    streamKeyString(cString);
    delay(3000);
    Keyboard.write(KEY_RETURN);

    delay(500);
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
//  char cString2[] = "cmd.exe /c del \"c:\\users\\%USERNAME%\\Documents\\RealFlight Basic\\RealFlightBasic.ini\"";
    char cString2[] = "cmd.exe /c del \"c:\\users\\%USERNAME%\\Documents\\RealFlight Basic\\RealFlightBasic.ini\"";
    streamKeyString(cString2);
    delay(3000);
    Keyboard.write(KEY_RETURN);

    delay(500);
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
    char cString3[] = "RealFlight.exe";
    streamKeyString(cString3);
    delay(3000);
    Keyboard.write(KEY_RETURN);

    //    delay(5000);
//    Keyboard.write(KEY_RETURN);
//    delay(50);
//    Keyboard.write(KEY_LEFT_ARROW);
//    delay(10);
//    Keyboard.write(KEY_LEFT_ARROW);
//    delay(10);
//    Keyboard.write(KEY_LEFT_ARROW);
//    delay(10);
//
//    Keyboard.press(KEY_LEFT_ALT);
//    Keyboard.press(KEY_F4);
//    Keyboard.release(KEY_F4);
//    Keyboard.release(KEY_LEFT_ALT);

// ##############################################

//    Keyboard.write(KEY_LEFT_GUI);
//    delay(500);
//
//    Keyboard.print('cmd.exe /c del "c:\\users\\%USERNAME\%\Documents\RealFlight Basic\RealFlightBasic.ini\');
//    delay(250);
//    Keyboard.write(KEY_RETURN);

//    delay(5000);
}

void SimulatorRealFlightBasic::EasyAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_RIGHT_ARROW);
}

void SimulatorRealFlightBasic::AcroAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_UP_ARROW);
    delay(10);
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(10);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(10);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(10);
    Keyboard.write(KEY_RIGHT_ARROW);
}

        }
    }
}