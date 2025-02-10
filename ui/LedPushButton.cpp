#include "Arduino.h"

#include "LedPushButton.hpp"
#include "../../../HAL.hpp"

namespace anduinolib {
    namespace ui {

LedPushButton::LedPushButton(int pinLed, int levelOff, int levelOn, int pinPushButton) : LED(pinLed, levelOff,
                                                                                             levelOn),
                                                                                         PushButton(
                                                                                                 pinPushButton) {
}

bool LedPushButton::Begin(UiEvent *uiEvent, UiEvent::UiEventsExternal longPressEvent,
                          UiEvent::UiEventsExternal shortPressX1Event,
                          UiEvent::UiEventsExternal shortPressX2Event) {
    return PushButton::Begin(uiEvent, longPressEvent, shortPressX1Event, shortPressX2Event);
}

void LedPushButton::Poll() {
    LED::Poll();
    PushButton::Poll();
}

    }
}