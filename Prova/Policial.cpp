#include "Policial.hpp"

#include <iostream>
using std::cout; using std::endl;


void Policial::display() const {
    cout << "Nome: " << getNome() << endl;
    cout << "Cargo: " << getCargo() << endl;
}

Policial::Policial(const string &nome, const string &cargo) : nome(nome), cargo(cargo) {
    setNome(nome);
    setCargo(cargo);
}

bool Policial::validaCargo(const string &cargo) const {
    return cargo == "Delegado" or "Perito" or "Investigador" or "Escrivão";
}

void Policial::setCargo(const string &cargo) {
    if (validaCargo(cargo)) 
        this->cargo = cargo;
    else 
        cout << "ERRO";
}