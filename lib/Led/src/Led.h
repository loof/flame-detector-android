//
// Created by ypeis on 24/01/2024.
//

#ifndef FLAME_SENSOR_LED_H
#define FLAME_SENSOR_LED_H

#include <Arduino.h>

namespace coffeeroasters {

    class Led
    {
    public:
        Led(unsigned int pin_r, unsigned int pin_g, unsigned int pin_b, unsigned int r, unsigned int g, unsigned b);
        void set_rgb_colors(unsigned int pin_r, unsigned int pin_g, unsigned int pin_b);
        void set_on(bool is_on);
        void toggle();
        void init();


    private:
        unsigned int _pin_r;
        unsigned int _pin_g;
        unsigned int _pin_b;
        unsigned int _r;
        unsigned int _g;
        unsigned int _b;
        bool _is_on;
        void led_color(int r_value, int g_value, int b_value);
    };

} // coffeeroasters

#endif //FLAME_SENSOR_LED_H
