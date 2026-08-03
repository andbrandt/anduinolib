#include "SimRealFlightBasic.hpp"
#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

static bool blocked = false;

void SimulatorRealFlightBasic::InitSim() {
    int delayConst = 25;

//    KeyboardCtl::StreamKeyChar(KEY_ESC, delayConst);        // Un-show window menu in case it is open

    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char killSimString[] = "taskkill /IM RealFlight.exe";
    KeyboardCtl::streamKeyString(killSimString, 25);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
    delay(2000);

    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char NotepadString[] = "notepad";
    KeyboardCtl::streamKeyString(NotepadString, 25);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
    delay(500);
    KeyboardCtl::Press(KEY_LEFT_ALT);
    KeyboardCtl::StreamKeyChar(' ');
    KeyboardCtl::StreamKeyChar('a');
    KeyboardCtl::Release(KEY_LEFT_ALT);
    char NotepadString2[] = "Warning: To work correctly, SimTimer requires that NumLock is enabled.";
    KeyboardCtl::streamKeyString(NotepadString2, 25);
    delay(3000);

    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char delIniString[] = "cmd.exe /c del \"c:\\users\\%USERNAME%\\Documents\\RealFlight Basic\\RealFlightBasic.ini\"";
    KeyboardCtl::streamKeyString(delIniString, 25);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(500);
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char launchSimString[] = "RealFlight";
    KeyboardCtl::streamKeyString(launchSimString, 25);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(7000);

    // Start selecting Easy Aircraft after deleting ini file
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);

    delay(500);

}

void SimulatorRealFlightBasic::RestartSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW,10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW,10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW,10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW,10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW,10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW,10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW,10);
}

void SimulatorRealFlightBasic::BlockSim() {
    int delayConst = 25;

    KeyboardCtl::Press(KEY_LEFT_ALT);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(' ');
    delay(delayConst);
    KeyboardCtl::Release(KEY_LEFT_ALT);
    delay(delayConst);

    blocked = true;
}

void SimulatorRealFlightBasic::UnBlockSim() {
    int delayConst = 25;

    if ( blocked) {
        // Same as BlockSim - to prevent "funny" error in sim
        KeyboardCtl::Press(KEY_LEFT_ALT);
        delay(delayConst);
        KeyboardCtl::StreamKeyChar(' ');
        delay(delayConst);
        KeyboardCtl::Release(KEY_LEFT_ALT);
        delay(delayConst);

        KeyboardCtl::StreamKeyChar(KEY_ESC, delayConst);        // Un-show window menu
        KeyboardCtl::StreamKeyChar(KEY_TAB, delayConst);        // Return focus to simulator UI in window

        KeyboardCtl::StreamKeyChar(KEY_LEFT_ARROW, delayConst); // Wind backwards if sim menu was open
        KeyboardCtl::StreamKeyChar(KEY_LEFT_ARROW, delayConst);
        blocked = false;
    }
}

void SimulatorRealFlightBasic::EasyAircraft() {
    int delayConst = 10;

    // Always start unblocking - in case sim is currently blocked
//    UnBlockSim();
    delay(250);

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
    delay(delayConst);

    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW, delayConst);
    delay(delayConst);

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
}

void SimulatorRealFlightBasic::AcroAircraft() {
    int delayConst = 10;

    // Always start unblocking - in case sim is currently blocked
//    UnBlockSim();
    delay(250);
    delay(10);

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
    delay(delayConst);

    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);

    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW, delayConst);
    delay(delayConst);

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW, delayConst);
    delay(delayConst);
}

        }
    }
}