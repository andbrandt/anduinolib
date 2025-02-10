#include "Debug.hpp"

#ifdef DEBUG
bool dbg_enabled = false;

void DebugSetup()
{
  dbg_enabled = true;
  Serial.begin(9600);

  while (!Serial) {
      delay(1); // wait for serial port to connect. Needed for Serial Port to work from first line of code.
  }
  delay(2000);
  Serial.println("WARNING: Code waits for Serial USB device to be ready for printing from first line.");
  Serial.println("         Disable this code when bebugging is finished");
}
#endif
