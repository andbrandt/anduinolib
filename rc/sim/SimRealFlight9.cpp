#include "SimRealFlight9.hpp"

#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorRealFlight9::InitSim() {
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char killSimString[] = "taskkill /IM RealFlight.exe";
    KeyboardCtl::streamKeyString(killSimString);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(500);
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char delIniString[] = "cmd.exe /c del \"c:\\users\\%USERNAME%\\Documents\\RealFlight Basic\\RealFlightBasic.ini\"";
    KeyboardCtl::streamKeyString(delIniString);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(500);
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char launchSimString[] = "C:\\Program Files (x86)\\RealFlight9\\RealFlight.exe";
    KeyboardCtl::streamKeyString(launchSimString);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(5000);

    EasyAircraft();
}


void SimulatorRealFlight9::RestartSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::StreamKeyChar(' ', 10);
//    delay(10);
//    Keyboard.release(' ');
//    delay(10);
}

void SimulatorRealFlight9::BlockSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_LEFT_ALT);
    KeyboardCtl::StreamKeyChar('a');
    KeyboardCtl::StreamKeyChar('a');
    KeyboardCtl::Release(KEY_LEFT_ALT);
}

void SimulatorRealFlight9::UnBlockSim() {
    KeyboardCtl::StreamKeyChar(KEY_ESC, 50);
//    delay(50);
//    Keyboard.release(KEY_ESC);
//    delay(50);
}

void SimulatorRealFlight9::EasyAircraft() {
    int delayConst = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('a', delayConst);
    KeyboardCtl::StreamKeyChar('a',delayConst);
    KeyboardCtl::Release(KEY_LEFT_ALT);
    delay(delayConst);

    KeyboardCtl::StreamKeyChar('e');
    delay(delayConst);
    KeyboardCtl::Press(KEY_LEFT_ALT);
    KeyboardCtl::StreamKeyChar(KEY_KP_4, delayConst);
    KeyboardCtl::StreamKeyChar(KEY_KP_5, delayConst);
    KeyboardCtl::Release(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('f', delayConst);
    KeyboardCtl::StreamKeyChar('l', delayConst);
    KeyboardCtl::StreamKeyChar('i', delayConst);
    KeyboardCtl::StreamKeyChar('t', delayConst);
    KeyboardCtl::StreamKeyChar('e', delayConst);
    KeyboardCtl::StreamKeyChar(' ', delayConst);
    KeyboardCtl::StreamKeyChar('t', delayConst);
    KeyboardCtl::StreamKeyChar('i', delayConst);
    KeyboardCtl::StreamKeyChar('m', delayConst);
    KeyboardCtl::StreamKeyChar('b', delayConst);
    KeyboardCtl::StreamKeyChar('e', delayConst);
    KeyboardCtl::StreamKeyChar('r', delayConst);
    KeyboardCtl::StreamKeyChar(' ', delayConst);
    KeyboardCtl::StreamKeyChar('X', delayConst);
    KeyboardCtl::StreamKeyChar(' ', delayConst);
    KeyboardCtl::StreamKeyChar('1', delayConst);
    KeyboardCtl::StreamKeyChar('.', delayConst);
    KeyboardCtl::StreamKeyChar('2', delayConst);
    KeyboardCtl::StreamKeyChar('m', delayConst);
    delay(250);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
    delay(delayConst);
}

void SimulatorRealFlight9::AcroAircraft() {
    int delayConst = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('a', delayConst);
    KeyboardCtl::StreamKeyChar('a', delayConst);
    KeyboardCtl::Release(KEY_LEFT_ALT);
    delay(delayConst);

    KeyboardCtl::StreamKeyChar('e', delayConst);
    KeyboardCtl::StreamKeyChar('x', delayConst);
    KeyboardCtl::StreamKeyChar('t', delayConst);
    KeyboardCtl::StreamKeyChar('r', delayConst);
    KeyboardCtl::StreamKeyChar('a', delayConst);
    delay(250);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
    delay(delayConst);
}

        }
    }
}