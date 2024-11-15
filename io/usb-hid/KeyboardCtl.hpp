#ifndef KEYBOARDCTL_H
#define KEYBOARDCTL_H

namespace anduinolib {
namespace io {
namespace usbHid {
class KeyboardCtl {
public:
    void Begin();
    void Poll();
};
}
}
}

#endif