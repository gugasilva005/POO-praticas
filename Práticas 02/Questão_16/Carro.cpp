#include <iostream>
using std::cout, std::endl;

#include "Carro.hpp"

// Implementação

Carro::Carro(string nome, int year) {
    setMarca(nome);
    setAno(year);
}

void Carro::setMarca(string nome) {
    if (nome == "")
        marca = "\"Sem Marca\"";
    else if (nome.length() > 10)
        marca = nome.substr(0,10);
    else
        marca = nome;
}

string Carro::getMarca() {
    return marca;
}

void Carro::displayMessage() {
    cout << "Olá, eu sou um carro da marca " << getMarca() << " de ano " << getAno() << endl;
}

int Carro::setAno(int a) {
    if (a <= 0)
        ano = 0;
    else 
        ano = a;
}

int Carro::getAno() {
    return ano;
}