#ifndef KEYBOARDCTL_H
#define KEYBOARDCTL_H

namespace anduinolib {
namespace io {
namespace usbHid {
class KeyboardCtl {
public:
    static void Begin();
    static void Poll();
    static void StreamKeyMap(unsigned char key);
    static void StreamKeyChar(char key);
    static void streamKeyString(char *keyString);
};
    extern KeyboardCtl keyboardCtl;
}
}
}

#endif