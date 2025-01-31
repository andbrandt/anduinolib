#include <Mouse.h>
#include <Keyboard.h>
#include "SimRealFlight9.hpp"

#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorRealFlight9::InitSim() {
    EasyAircraft();
}


void SimulatorRealFlight9::RestartSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(' ');
    delay(10);
    Keyboard.release(' ');
    delay(10);

}

void SimulatorRealFlight9::BlockSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('a');
    Keyboard.release('a');
    Keyboard.press('a');
    Keyboard.release('a');
    Keyboard.release(KEY_LEFT_ALT);
}

void SimulatorRealFlight9::UnBlockSim() {
    Keyboard.press(KEY_ESC);
    delay(50);
    Keyboard.write(KEY_ESC);
    delay(50);
}

void SimulatorRealFlight9::EasyAircraft() {
    int delayConst = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_LEFT_ALT);
    delay(delayConst);
    Keyboard.press('a');
    delay(delayConst);
    Keyboard.release('a');
    delay(delayConst);
    Keyboard.press('a');
    delay(delayConst);
    Keyboard.release('a');
    delay(delayConst);
    Keyboard.release(KEY_LEFT_ALT);
    delay(delayConst);

    Keyboard.write('e');
    delay(delayConst);
    Keyboard.press(KEY_LEFT_ALT);
    delay(delayConst);
    Keyboard.press(KEY_KP_4);
    delay(delayConst);
    Keyboard.release(KEY_KP_4);
    delay(delayConst);
    Keyboard.press(KEY_KP_5);
    delay(delayConst);
    Keyboard.release(KEY_KP_5);
    delay(delayConst);
    Keyboard.release(KEY_LEFT_ALT);
    delay(delayConst);
    Keyboard.write('f');
    delay(delayConst);
    Keyboard.write('l');
    delay(delayConst);
    Keyboard.write('i');
    delay(delayConst);
    Keyboard.write('t');
    delay(delayConst);
    Keyboard.write('e');
    delay(delayConst);
    Keyboard.write(' ');
    delay(delayConst);
    Keyboard.write('t');
    delay(delayConst);
    Keyboard.write('i');
    delay(delayConst);
    Keyboard.write('m');
    delay(delayConst);
    Keyboard.write('b');
    delay(delayConst);
    Keyboard.write('e');
    delay(delayConst);
    Keyboard.write('r');
    delay(delayConst);
    Keyboard.write(' ');
    delay(delayConst);
    Keyboard.write('X');
    delay(delayConst);
    Keyboard.write(' ');
    delay(delayConst);
    Keyboard.write('1');
    delay(delayConst);
    Keyboard.write('.');
    delay(delayConst);
    Keyboard.write('2');
    delay(delayConst);
    Keyboard.write('m');
    delay(250);
    Keyboard.write(KEY_RETURN);
    delay(delayConst);
}

void SimulatorRealFlight9::AcroAircraft() {
    int delayConst = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_LEFT_ALT);
    delay(delayConst);
    Keyboard.press('a');
    delay(delayConst);
    Keyboard.release('a');
    delay(delayConst);
    Keyboard.press('a');
    delay(delayConst);
    Keyboard.release('a');
    delay(delayConst);
    Keyboard.release(KEY_LEFT_ALT);
    delay(delayConst);

    Keyboard.write('e');
    delay(delayConst);
    Keyboard.write('x');
    delay(delayConst);
    Keyboard.write('t');
    delay(delayConst);
    Keyboard.write('r');
    delay(delayConst);
    Keyboard.write('a');
    delay(250);
    Keyboard.write(KEY_RETURN);
    delay(delayConst);
}

        }
    }
}