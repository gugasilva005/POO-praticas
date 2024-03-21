#include "Data.hpp"

#include <iostream>

Data::Data(int a, int b, int c) {
    setDia(a);
    setMes(b);
    setAno(c);
}

int Data::setDia(int a) {
    if (1 <= a <= 31) 
        dia = a;
    else
        dia = 1;
}

int Data::setMes(int b) {
    if (1 <= b <= 12)
        mes = b;
    else 
        mes = 1;
}

int Data::setAno(int c) { ano = c; }

int Data::getDia() { return dia; }

int Data::getMes() { return mes; }

int Data::getAno() { return ano; }

void Data::mostrarData() {
    std::cout << getDia() << "/" << getMes() << "/" << getAno() << std::endl;
}