
#include "Motor.h"

#include <iostream>
#include <stdexcept>

Motor::Motor(double velocidadMaxRpm)
    : velocidadMaxRpm(velocidadMaxRpm),
      velocidadActualRpm(0.0) {

    if (velocidadMaxRpm <= 0) {
        throw std::invalid_argument(
            "La velocidad maxima debe ser positiva"
        );
    }
}


void Motor::fijarVelocidad(double rpm) {
    if (rpm < 0) {
        velocidadActualRpm = 0;
    }
    else if (rpm > velocidadMaxRpm) {
        velocidadActualRpm = velocidadMaxRpm;
    }
    else {
        velocidadActualRpm = rpm;
    }
}

double Motor::getVelocidad() const {
    return velocidadActualRpm;
}
