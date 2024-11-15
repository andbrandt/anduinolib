#ifndef MOUSECTL_H
#define MOUSECTL_H


namespace anduinolib {
    namespace io {
        namespace usbHid {

    class MouseCtl {
    public:
        static void Begin();
    };

    extern MouseCtl mouseCtl;
        }
    }
}
#endif