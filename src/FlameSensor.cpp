//
// Created by Yves Peissard on 24/01/2024.
//

#include "FlameSensor.h"

namespace coffeeroasters {

    FlameSensor::FlameSensor() {}

    void FlameSensor::init() {
        pinMode(FLAME_SENSOR, INPUT);
    }

    bool FlameSensor::is_flame_detected() {
        return !digitalRead(FLAME_SENSOR);
    }

} // cofeeroasters