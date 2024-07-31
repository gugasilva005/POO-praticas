#include "Caso.hpp"

#include <iostream>
using std::cout; using std::endl;

Caso::Caso(const string &id, const string &data, const Policial &delegado) : \
    id(id), data(data), delegado(delegado), tPeritos(0), tVestigios(0), tSuspeitos(0) { }

void Caso::inserePerito(const Policial &perito){
    if (tPeritos < 5) {
        peritos[tPeritos++] = perito;
    }
}

void Caso::removePerito(int pos) {
    if (pos < tPeritos) {
        for (int i = pos; i < tPeritos - 1; i++) {
            peritos[i] = peritos[i+1];
        tPeritos--;
        }
    }
}

void Caso::insereSuspeito(const Suspeito &suspeito) {
    if (tSuspeitos < 10) {
        suspeitos[tSuspeitos++] = suspeito;
    }
}

void Caso::removeSuspeito(int pos) {
    if (pos < tSuspeitos) {
        for (int i = pos; i < tSuspeitos - 1; i++) {
            suspeitos[i] = suspeitos[i+1];
        }
        tSuspeitos--;
    }
}

void Caso::insereVestigio(const Vestigio &vestigio) {
    if (tVestigios < 20) {
        vestigios[tVestigios++] = vestigio;
    }
}

void Caso::removeVestigio(int pos) {
    if (pos < tVestigios) {
        for (int i = pos; i < tVestigios - 1; i++) {
            vestigios[i] = vestigios[i+1];
        }
        tVestigios--;
    }
}

void Caso::display() const {
    cout << "Identificação: " << this->id << ", Data: " << this->data << endl;
    std::cout << "Delegado do caso: " << this->delegado << endl;
    cout << "Peritos do caso: ";
    for (int i = 0; i < this->tPeritos; i++) {
        if (i == tPeritos - 1)
            cout << peritos[i] << ".";
        else 
            cout << peritos[i] << ", ";
    }
    cout << "Suspeitos do caso: ";
    for (int i = 0; i < this->tSuspeitos; i++) {
        if (i == tSuspeitos - 1)
            cout << suspeitos[i] << ".";
        else 
            cout << suspeitos[i] << ", ";
    }
    cout << "Vestigios do caso: ";
    for (int i = 0; i < this->tVestigios; i++) {
        if (i == tVestigios - 1)
            cout << vestigios[i] << ".";
        else 
            cout << vestigios[i] << ", ";
    }
}