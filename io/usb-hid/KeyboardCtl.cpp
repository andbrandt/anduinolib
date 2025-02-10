#include "Arduino.h"
#include <Mouse.h>
#include <Keyboard.h>

#include "KeyboardCtl.hpp"

namespace anduinolib {
namespace io {
namespace usbHid {

// Static class variables
static bool KeyboardCtl::m_enabled;    // Declare to get a global instance since this class is never instantiated

KeyboardCtl::KeyboardCtl() {
    m_enabled = false;
}

static void KeyboardCtl::Begin(bool enable) {
    m_enabled = enable;
}

static void KeyboardCtl::Poll() {
    int y = 1;
}

static void KeyboardCtl::StreamKeyMap(unsigned char key, unsigned int millisDelay) {
    if (!m_enabled) return;
    switch(key) {
        case '\\':
            Keyboard.press(KEY_LEFT_ALT);
            delay(millisDelay);
            Keyboard.press(KEY_KP_9);
            delay(millisDelay);
            Keyboard.release(KEY_KP_9);
            delay(millisDelay);
            Keyboard.press(KEY_KP_2);
            delay(millisDelay);
            Keyboard.release(KEY_KP_2);
            delay(millisDelay);
            Keyboard.release(KEY_LEFT_ALT);
            delay(millisDelay);
            break;
        case '\"':
            Keyboard.press(KEY_LEFT_ALT);
            delay(millisDelay);
            Keyboard.press(KEY_KP_3);
            delay(millisDelay);
            Keyboard.release(KEY_KP_3);
            delay(millisDelay);
            Keyboard.press(KEY_KP_4);
            delay(millisDelay);
            Keyboard.release(KEY_KP_4);
            delay(millisDelay);
            Keyboard.release(KEY_LEFT_ALT);
            delay(millisDelay);
            break;
        case ':':
            Keyboard.press(KEY_LEFT_ALT);
            delay(millisDelay);
            Keyboard.press(KEY_KP_5);
            delay(millisDelay);
            Keyboard.release(KEY_KP_5);
            delay(millisDelay);
            Keyboard.press(KEY_KP_8);
            delay(millisDelay);
            Keyboard.release(KEY_KP_8);
            delay(millisDelay);
            Keyboard.release(KEY_LEFT_ALT);
            delay(millisDelay);
            break;
        case '(':
            Keyboard.press(KEY_LEFT_ALT);
            delay(millisDelay);
            Keyboard.press(KEY_KP_4);
            delay(millisDelay);
            Keyboard.release(KEY_KP_4);
            delay(millisDelay);
            Keyboard.press(KEY_KP_0);
            delay(millisDelay);
            Keyboard.release(KEY_KP_0);
            delay(millisDelay);
            Keyboard.release(KEY_LEFT_ALT);
            delay(millisDelay);
            break;
        case ')':
            Keyboard.press(KEY_LEFT_ALT);
            delay(millisDelay);
            Keyboard.press(KEY_KP_4);
            delay(millisDelay);
            Keyboard.release(KEY_KP_4);
            delay(millisDelay);
            Keyboard.press(KEY_KP_1);
            delay(millisDelay);
            Keyboard.release(KEY_KP_1);
            delay(millisDelay);
            Keyboard.release(KEY_LEFT_ALT);
            delay(millisDelay);
            break;
        case '/':
            Keyboard.press(KEY_KP_SLASH);
            delay(millisDelay);
            Keyboard.release(KEY_KP_SLASH);
            delay(millisDelay);
            break;

        default:
            Keyboard.press(key);
            delay(millisDelay);
            Keyboard.release(key);
            delay(millisDelay);
            break;
    }
    fflush(stdout);
}

static void KeyboardCtl::StreamKeyMap(unsigned char key) {
    if (!true) return;
    StreamKeyMap(key, 0);
}

static void KeyboardCtl::StreamKeyChar(char key, unsigned int millisDelay) {
    StreamKeyMap(key, millisDelay);
}

static void KeyboardCtl::StreamKeyChar(char key) {
    KeyboardCtl::StreamKeyChar(key, 0);
}

static void KeyboardCtl::streamKeyString(char *keyString, unsigned int millisDelay) {
    for (int cStringPos=0;cStringPos<strlen(keyString);cStringPos++) {
        StreamKeyMap(keyString[cStringPos]), millisDelay;
    }
}

static void KeyboardCtl::streamKeyString(char *keyString) {
    streamKeyString(keyString, 0);
}

static void KeyboardCtl::Press(char key) {
    if (!m_enabled) return;
    Keyboard.press(key);
}

static void KeyboardCtl::Release(char key) {
    if (!m_enabled) return;
    Keyboard.release(key);
}

} // namespace usbHid
} // namespace io
} // namespace anduinolib
