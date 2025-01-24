// #include "Arduino.h"

#include <Mouse.h>
#include <Keyboard.h>
#include "SimPhoenix.hpp"

#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorPhoenix::InitSim() {
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
    char killSimString[] = "taskkill /IM phoenixRC.exe";
    keyboardCtl.streamKeyString(killSimString);
    delay(3000);
    Keyboard.write(KEY_RETURN);

    delay(500);
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
    char launchSimString[] = "phoenixRC";
    keyboardCtl.streamKeyString(launchSimString);
    delay(3000);
    Keyboard.write(KEY_RETURN);
}

void SimulatorPhoenix::RestartSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.write('b');
}

void SimulatorPhoenix::BlockSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('m');
    Keyboard.release('m');
    Keyboard.release(KEY_RIGHT_CTRL);
}

void SimulatorPhoenix::UnBlockSim() {
    Keyboard.write(KEY_ESC);
}

void SimulatorPhoenix::EasyAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('m');
    Keyboard.release('m');
    Keyboard.release(KEY_RIGHT_CTRL);

    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_DOWN_ARROW);

    Keyboard.write(KEY_RETURN);
}

void SimulatorPhoenix::AcroAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('m');
    Keyboard.release('m');
    Keyboard.release(KEY_RIGHT_CTRL);

    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_UP_ARROW);
    delay(50);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(50);
    Keyboard.write(KEY_DOWN_ARROW);
    delay(50);

    Keyboard.write(KEY_RETURN);
}

        }
    }
}