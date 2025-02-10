#ifndef KEYBOARDCTL_H
#define KEYBOARDCTL_H

#include <Keyboard.h>

namespace anduinolib {
namespace io {
namespace usbHid {

class KeyboardCtl {
public:
    KeyboardCtl();
    static void Begin(bool enable);
    static void Poll();
    static void StreamKeyMap(unsigned char key);
    static void StreamKeyMap(unsigned char key, unsigned int millisDelay);
    static void StreamKeyChar(char key);
    static void StreamKeyChar(char key, unsigned int millisDelay);
    static void streamKeyString(char *keyString);
    static void streamKeyString(char *keyString, unsigned int millisDelay);
    static void Press(char key);
    static void Release(char key);

private:
    static bool m_enabled;
};

} // namespace usbHid
} // namespace io
} // namespace anduinolib

#endif