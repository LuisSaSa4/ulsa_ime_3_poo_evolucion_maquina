#include "Torno.h"

#include <iostream>

namespace planta {
Torno::Torno(const std::string& nombre)
    : Maquina(nombre),
      motor(1200),
      velocidadRPM(1200) {
    motor.fijarVelocidad(velocidadRPM);
}

void Torno::ejecutarCiclo() {
    std::cout << getNombre()
              << ": torneando pieza a "
              << motor.getVelocidad() << " rpm\n";
}

int Torno::tiempoCicloSeg() const {
    return 45;
}
}
