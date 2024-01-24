//
// Created by Yves Peissard on 24/01/2024.
//

#ifndef FLAME_SENSOR_FLAMESENSOR_H
#define FLAME_SENSOR_FLAMESENSOR_H

#define FLAME_SENSOR 2 //connect SENSOR to digital pin2

#include <Arduino.h>

namespace coffeeroasters {

    class FlameSensor {
    public:
        FlameSensor();

        void init();

        bool is_flame_detected();
    };
}

#endif //FLAME_SENSOR_FLAMESENSOR_H
