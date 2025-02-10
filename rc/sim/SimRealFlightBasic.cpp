#include "SimRealFlightBasic.hpp"
#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorRealFlightBasic::InitSim() {
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
    char launchSimString[] = "RealFlight";
    KeyboardCtl::streamKeyString(launchSimString);
    delay(3000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);

    delay(5000);

    // Start selecting Easy Aircraft after deleting ini file
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);

}

void SimulatorRealFlightBasic::RestartSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
}

void SimulatorRealFlightBasic::BlockSim() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
}

void SimulatorRealFlightBasic::UnBlockSim() {
    KeyboardCtl::StreamKeyChar(KEY_LEFT_ARROW, 10);
//    delay(10);
//    KeyboardCtl::StreamKeyChar(KEY_LEFT_ARROW);
//    delay(10);
}

void SimulatorRealFlightBasic::EasyAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_DOWN_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
}

void SimulatorRealFlightBasic::AcroAircraft() {
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_UP_ARROW);
    delay(10);
    KeyboardCtl::StreamKeyChar(KEY_RIGHT_ARROW);
}

        }
    }
}