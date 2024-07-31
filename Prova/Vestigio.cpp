#include "Vestigio.hpp"
#include <iostream>
using std::cout; using std::endl;

bool Vestigio::validaTipo(const string &tipo) {
    return tipo == "Digital" or tipo == "Biologico" or tipo == "Fisico";
}

Vestigio::Vestigio(const string &nome = "", const string &tipo = "") : \
    nome(nome), tipo(tipo), isEvidencia(false) {

        if (validaTipo(tipo))
            this->tipo = tipo;
        else
            this->tipo = "ERRO";
}

void Vestigio::display() const {
    cout << "Nome: " << getNome() << (isEvidencia?"(Evidencia)":"") << endl;;
    cout << "Tipo: " << getTipo() << endl;
}
