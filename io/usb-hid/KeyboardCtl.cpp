#include "Arduino.h"
#include <Mouse.h>
#include <Keyboard.h>

#include "KeyboardCtl.hpp"

namespace anduinolib {
namespace io {
namespace usbHid {

    static void KeyboardCtl::Begin() {
        int x = 1;
    }

    static void KeyboardCtl::Poll() {
        int y = 1;
    }

    // ¤¤¤¤ Move function in this section to general ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
    static void KeyboardCtl::StreamKeyMap(unsigned char key) {
        switch(key) {
            case '\\':
                Keyboard.press(KEY_LEFT_ALT);
                Keyboard.press(KEY_KP_9);
                Keyboard.release(KEY_KP_9);
                Keyboard.press(KEY_KP_2);
                Keyboard.release(KEY_KP_2);
                Keyboard.release(KEY_LEFT_ALT);
                break;
            case '\"':
                Keyboard.press(KEY_LEFT_ALT);
                Keyboard.press(KEY_KP_3);
                Keyboard.release(KEY_KP_3);
                Keyboard.press(KEY_KP_4);
                Keyboard.release(KEY_KP_4);
                Keyboard.release(KEY_LEFT_ALT);
                break;
            case ':':
                Keyboard.press(KEY_LEFT_ALT);
                Keyboard.press(KEY_KP_5);
                Keyboard.release(KEY_KP_5);
                Keyboard.press(KEY_KP_8);
                Keyboard.release(KEY_KP_8);
                Keyboard.release(KEY_LEFT_ALT);
                break;
            case '/':
                Keyboard.press(KEY_KP_SLASH);
                Keyboard.release(KEY_KP_SLASH);
                break;

            default:
                Keyboard.press(key);
                Keyboard.release(key);
                break;
        }
        fflush(stdout);
    }

    static void KeyboardCtl::StreamKeyChar(char key) {
        StreamKeyMap(key);
    }

    static void KeyboardCtl::streamKeyString(char *keyString) {
        for (int cStringPos=0;cStringPos<strlen(keyString);cStringPos++) {
            StreamKeyChar(keyString[cStringPos]);
        }
    }

// ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
}
}
}