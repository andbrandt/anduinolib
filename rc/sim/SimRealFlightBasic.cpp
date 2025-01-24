// #include "Arduino.h"

#include <Mouse.h>
#include <Keyboard.h>
#include "SimRealFlightBasic.hpp"
#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorRealFlightBasic::InitSim() {
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
    char killSimString[] = "taskkill /IM RealFlight.exe";
    keyboardCtl.streamKeyString(killSimString);
    delay(3000);
    Keyboard.write(KEY_RETURN);

    delay(500);
    Keyboard.write(KEY_LEFT_GUI);
    delay(500);
    char delIniString[] = "cmd.exe /c del \"c:\\users\\%USERNAME%\\Documents\\RealFlight Basic\\RealFlightBasic.ini\"";
    keyboardCtl.streamKeyString(delIniString);
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

void SimulatorRealFlightBasic::RestartSim() {
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