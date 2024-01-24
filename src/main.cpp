#include <Arduino.h>

#include <Led.h>

int _pin_r = 3;
int _pin_g = 5;
int _pin_b = 6;

coffeeroasters::Led _led(_pin_r, _pin_g, _pin_b, 0, 0, 0);


void setup() {
    _led.init();
    _led.set_rgb_colors(0, 255, 0);
    _led.set_on(true);
}

void loop() {

}