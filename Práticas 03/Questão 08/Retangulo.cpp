#include <iostream>
#include <string>
#include <algorithm>

#include "Retangulo.hpp"

Retangulo::Retangulo(const double& altura, const double& largura) {
    setAltura(altura);
    setLargura(largura);
}

void Retangulo::setLargura(const double& largura) {
    this->largura = (largura > 20 || largura < 0 ? 1 : largura);
}

void Retangulo::setAltura(const double& altura) {
    this->altura = (altura > 20 || altura < 0 ? 1 : altura);
}

double Retangulo::perimetro() {
    return ((2*altura) + (2*largura));
}

double Retangulo::area() {
    return (altura*largura);
}

void Retangulo::display() {
    std::string canto = "+";

    for (int i = 0; i < this->largura; i++) {
        canto += '-';
    }
    canto += '+';

    std::string subida = canto;
    std::replace(subida.begin(), subida.end(), '-', ' ');
    std::replace(subida.begin(), subida.end(), '+', '|');

    std::cout << canto << std::endl;
    for (int i = 0; i < this->altura; i++) {
        std::cout << subida << std::endl;
    }
    std::cout << canto << std::endl;
}