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
    KeyboardCtl::streamKeyString(killSimString, 25);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(500);
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char launchSimString[] = "C:\\Program Files (x86)\\RealFlight9\\RealFlight.exe";
    KeyboardCtl::streamKeyString(launchSimString, 25);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(18000);

    InitSimAirport();
    delay(3000);
    EasyAircraft();
    delay(500);
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
    int delayConst = 15;
    int charDuration = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('a', delayConst);
    KeyboardCtl::StreamKeyChar('a',delayConst);
    KeyboardCtl::Release(KEY_LEFT_ALT);
    delay(delayConst);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_BACKSPACE, charDuration);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e');
    delay(delayConst);
    KeyboardCtl::Press(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_KP_4, charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_KP_5, charDuration);
    delay(delayConst);
    KeyboardCtl::Release(KEY_LEFT_ALT);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar('f', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('l', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('i', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('t', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(' ', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('t', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('i', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('m', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('b', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('r', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(' ', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('1', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('.', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('5', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('m', charDuration);
    delay(1500);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

void SimulatorRealFlight9::AcroAircraft() {
    int delayConst = 15;
    int charDuration = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('a', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('a', charDuration);
    delay(delayConst);
    KeyboardCtl::Release(KEY_LEFT_ALT);


    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_BACKSPACE, charDuration);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('x', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('t', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('r', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('a', charDuration);

    delay(1000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

void SimulatorRealFlight9::InitSimAirport() {
    int delayConst = 15;
    int charDuration = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::Press(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e', charDuration);
    KeyboardCtl::StreamKeyChar('a', charDuration);
    KeyboardCtl::Release(KEY_LEFT_ALT);
    delay(delayConst);

    KeyboardCtl::StreamKeyChar('e', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('v', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('r', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('g', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('r', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('e', charDuration);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar('n', charDuration);
    delay(1000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

        }
    }
}