#ifndef MOUSECTL_H
#define MOUSECTL_H


namespace anduinolib {
namespace io {
namespace usbHid {

class MouseCtl {
public:
    MouseCtl();
    static void Begin(bool enable);

private:
    static bool m_enabled;
};

} // namespace usbHid
} // namespace io
} // namespace anduinolib
#endif