#include "Varinha.hpp"

#include <iostream>
using std::cout;
using std::endl;

void Varinha::setComprimento(const double& comprimento) {
    if (comprimento < 0)
        this->comprimento = 0;
    else 
        this->comprimento = comprimento;
}

void Varinha::display() const {
    cout << "Varinha" << endl;
    cout << "Tipo de madeira: " << (getMadeira() == "" ? "Nada declarado" : getMadeira()) << endl;
    cout << "Nucleo: " << (getNucleo() == "" ? "Nada declarado" : getNucleo()) << endl;
    cout << "Comprimento: " << getComprimento() << " cm" << endl;
}