#include "ExpressoHogwarts.hpp"
#include <iostream>
using std::cout; using std::endl;

ExpressoHogwarts::ExpressoHogwarts(int tam) : capacidade(tam), tBruxos(0) {
    this->arr_bruxo = new Bruxo[capacidade];
}

ExpressoHogwarts::~ExpressoHogwarts() {
    delete[] arr_bruxo;
}

ExpressoHogwarts &ExpressoHogwarts::operator<<(const Bruxo &bruxo) {
    if (tBruxos < capacidade) {
        arr_bruxo[tBruxos] = bruxo;
        cout << bruxo.getNome() << " embarcou no Expresso Hogwarts" << endl;
        tBruxos++;
    } else {
        cout << "Nao ha mais vagas disponiveis para " << bruxo.getNome() << " embarcar." << endl;
    }
    return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator>>(const Bruxo &bruxo) {
    for (int i = 0; i < this->tBruxos; i++) {
        if (this->arr_bruxo[i] == bruxo) {
            cout << this->arr_bruxo[i].getNome() << " desembarcou do Expresso Hogwarts." << endl;
            // Reajsutando o array
            for (int j = i; j < this->tBruxos; j++) {
                arr_bruxo[j] = arr_bruxo[j + 1];
            }
            this->tBruxos--;
            return *this;
        }
    }
    cout << "Bruxo " << bruxo.getNome() << " nao encontrado" << endl;
    return *this;
}

ExpressoHogwarts &ExpressoHogwarts::operator>>(const string &nome) {
    for (int i = 0; i < this->tBruxos; i++) {
        if (this->arr_bruxo[i].getNome() == nome) {
            cout << this->arr_bruxo[i].getNome() << " desembarcou do Expresso Hogwarts." << endl;
            // Reajsutando o array
            for (int j = i; j < this->tBruxos; j++) {
                arr_bruxo[j] = arr_bruxo[j + 1];
            }
            this->tBruxos--;
            return *this;
        }
    }
    cout << "Bruxo " << nome << " nao encontrado" << endl;
    return *this;
}