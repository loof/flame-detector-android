//
// Created by Yves Peissard on 24/01/2024.
//

#include <Arduino.h>
#include "main.h"
#include <Led.h>
#include "FlameSensor.h"



coffeeroasters::Led _led(PIN_R, PIN_G, PIN_B, DEFAULT_R, DEFAULT_G, DEFAULT_B);
coffeeroasters::FlameSensor _flame_sensor;


void setup() {
    _led.init();
    _led.set_rgb_colors(COLOR_R, COLOR_G, COLOR_B);
}

void loop() {
    if (_flame_sensor.is_flame_detected()) {
        _led.set_on(true);
    } else {
        _led.set_on(false);
    }
}