#include "SimPhoenix.hpp"

#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorPhoenix::InitSim() {
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char killSimString[] = "taskkill /IM phoenixRC.exe";
    KeyboardCtl::streamKeyString(killSimString);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(500);
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char launchSimString[] = "phoenixRC";
    KeyboardCtl::streamKeyString(launchSimString);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
    delay(4000);
}

void SimulatorPhoenix::RestartSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::StreamKeyChar('b');
}

void SimulatorPhoenix::BlockSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_RIGHT_CTRL);
    KeyboardCtl::StreamKeyChar('m');
    KeyboardCtl::Release(KEY_RIGHT_CTRL);
}

void SimulatorPhoenix::UnBlockSim() {
    KeyboardCtl::StreamKeyChar(KEY_ESC);
}

void SimulatorPhoenix::EasyAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_RIGHT_CTRL);
    KeyboardCtl::StreamKeyChar('m');
    KeyboardCtl::Release(KEY_RIGHT_CTRL);

    delay(50);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, 50);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, 50);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, 50);

    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

void SimulatorPhoenix::AcroAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_RIGHT_CTRL);
    KeyboardCtl::StreamKeyChar('m');
    KeyboardCtl::Release(KEY_RIGHT_CTRL);

    delay(50);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, 50);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, 50);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, 50);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, 50);

    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

        }
    }
}