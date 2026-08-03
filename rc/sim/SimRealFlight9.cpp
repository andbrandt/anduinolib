#include "SimRealFlight9.hpp"

#include "../../io/usb-hid/KeyboardCtl.hpp"

using namespace anduinolib::io::usbHid;

namespace anduinolib {
    namespace rc {
        namespace sim {

void SimulatorRealFlight9::InitSim() {
    KeyboardCtl::StreamKeyChar(KEY_ESC);
    delay(100);
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char killSimString[] = "taskkill /IM RealFlight.exe";
    KeyboardCtl::streamKeyString(killSimString, 1);
    delay(500);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
    delay(3000);

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

    KeyboardCtl::StreamKeyChar(KEY_ESC);
    delay(100);
    KeyboardCtl::StreamKeyChar(KEY_LEFT_GUI);
    delay(500);
    char launchSimString[] = "C:\\Program Files (x86)\\RealFlight9\\RealFlight.exe";
    KeyboardCtl::streamKeyString(launchSimString, 1);
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

    // Use "Quick Load" search function to get aircraft without timing issues
    KeyboardCtl::Press(KEY_LEFT_CTRL);
    KeyboardCtl::StreamKeyChar('f');
    KeyboardCtl::Release(KEY_LEFT_CTRL);
    delay(delayConst);

    // Enter name of aircraft
    char aircraftSimString[] = "ElectriStar";
    KeyboardCtl::streamKeyString(aircraftSimString, 25);
    delay(1000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

void SimulatorRealFlight9::AcroAircraft() {
    int delayConst = 15;
    int charDuration = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

   // Use "Quick Load" search function to get aircraft without timing issues
    KeyboardCtl::Press(KEY_LEFT_CTRL);
    KeyboardCtl::StreamKeyChar('f');
    KeyboardCtl::Release(KEY_LEFT_CTRL);
    delay(delayConst);

    // Enter name of aircraft
    char aircraftSimString[] = "Extra 300L";
    KeyboardCtl::streamKeyString(aircraftSimString, 25);
    delay(1000);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

void SimulatorRealFlight9::InitSimAirport() {
    int delayConst = 15;
    int charDuration = 10;
    // Always start unblocking - in case sim is currently blocked
    UnBlockSim();

    //Close all gadgets
    KeyboardCtl::Press(KEY_LEFT_ALT);
    KeyboardCtl::StreamKeyChar('g');
    KeyboardCtl::StreamKeyChar('c');
    KeyboardCtl::Release(KEY_LEFT_ALT);
    delay(delayConst);


    // Use "Quick Load" search function to get airport without timing issues
    KeyboardCtl::Press(KEY_LEFT_CTRL);
    KeyboardCtl::StreamKeyChar('f');
    KeyboardCtl::Release(KEY_LEFT_CTRL);
    delay(delayConst);

    // Enter name of airport
    char airportSimString[] = "evergreen";
    KeyboardCtl::streamKeyString(airportSimString, 25);
    delay(100);
    KeyboardCtl::StreamKeyChar(KEY_RETURN);
}

        }
    }
} 

// ###################### USEFUL NOTES
// CTRL+SHIFT+C => Console gadget => help shows everything!

// aircraft_reset

// gadget_closeall

// environmentReset

// titleBar (toggle display)

// aircraft_select <- Keypress timing challenge - use CTRL-F instead!

// airport_select <- Keypress timing challenge - use CTRL-F instead!


// Use Alt,a,a to start pause

// Use ESC to end pause

// Alt,G,C => Close all gadgets
// 
// CTRL+F =>  Quick load                                                                   <-
