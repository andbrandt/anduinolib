#include "Arduino.h"

#include "MouseCtl.hpp"



namespace anduinolib {
namespace io {
namespace usbHid {

// Static class variables
static bool MouseCtl::m_enabled;    // Declare to get a global instance since this class is never instantiated

MouseCtl::MouseCtl() {
    m_enabled = false;
}

static void MouseCtl::Begin(bool enable) {
    m_enabled = enable;
}

} // namespace usbHid
} // namespace io
} // namespace anduinolib


