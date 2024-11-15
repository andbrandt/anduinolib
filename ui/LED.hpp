#ifndef LED_h
#define LED_h

#include <Arduino.h> 
#include "LightDeviceBase.hpp"

namespace anduinolib {
    namespace ui {

using namespace anduinolib::ui;

class LED : public LightDevice {
public:
    LED(int pinLed, int levelOff, int levelOn);

    // Overloaded base class functions
    void Poll() override;      // time in ms. Not needed in LED but LED is parent to LedPushButton
    void SetLevel(int level) override;

protected:
    int m_pinLed;
};

    }
}
#endif