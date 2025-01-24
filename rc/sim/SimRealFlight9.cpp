#include <Mouse.h>
#include <Keyboard.h>
#include "SimRealFlight9.hpp"

#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorRealFlight9::InitSim() {
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
    char killSimString[] = "taskkill /IM RealFlight.exe";
    keyboardCtl.streamKeyString(killSimString);
    delay(3000);
    Keyboard.write(KEY_RETURN);

    delay(500);
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
    char launchSimString[] = "RealFlight";
    keyboardCtl.streamKeyString(launchSimString);
    delay(3000);
    Keyboard.write(KEY_RETURN);
}


void SimulatorRealFlight9::RestartSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(' ');
    delay(10);
    Keyboard.release(' ');
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
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('a');
    Keyboard.release('a');
    Keyboard.press('a');
    Keyboard.release('a');
    Keyboard.release(KEY_LEFT_ALT);

    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.write(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(50);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(50);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(500);

    Keyboard.write(KEY_RETURN);
}

void SimulatorRealFlight9::AcroAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('a');
    Keyboard.release('a');
    Keyboard.press('a');
    Keyboard.release('a');
    Keyboard.release(KEY_LEFT_ALT);

    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.write(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(50);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(500);

    Keyboard.write(KEY_RETURN);
}

        }
    }
}