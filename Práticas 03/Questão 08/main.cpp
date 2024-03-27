#include "Retangulo.cpp"
#include <iostream>

int main() {

    Retangulo r1;

    std::cout << "Altura: " << r1.getAltura() << std::endl << "Largura: " << r1.getLargura() << std::endl << std::endl;

    r1.setAltura(5);
    r1.setLargura(100);

    std::cout << "Altura: " << r1.getAltura() << std::endl << "Largura: " << r1.getLargura() << std::endl << std::endl;

    std::cout << "Perimetro: " << r1.perimetro() << std::endl;

    r1.setLargura(5);

    std::cout << "Area: " << r1.area() << std::endl << std::endl;

    r1.display();

    return 0;
}