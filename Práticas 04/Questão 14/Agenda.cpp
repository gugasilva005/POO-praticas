#include "Agenda.hpp"

#include <iostream>
using std::cout;
using std::endl;

void Agenda::armazenaPessoa(const string &nome, int idade, float altura) {
    if (qtdePessoas < 10) {
        pessoas[qtdePessoas] = Pessoa(nome, idade, altura);
        qtdePessoas++;
    } else {
        cout << "Agenda Lotada" << endl;
    }
}

void Agenda::armazenaPessoa(const Pessoa &p) {
    if (qtdePessoas < 10) {
        pessoas[qtdePessoas] = p;
        qtdePessoas++;
    } else {
        cout << "Agenda Lotada" << endl;
    }
}

void Agenda::removePessoa(const string &nome) {
    for (int i = 0; i < qtdePessoas; i++) {
        if (pessoas[i].getNome() == nome) {
            for (int j = i; j < qtdePessoas - 1; j++) {
                pessoas[j] = pessoas[j + 1];
            }
            qtdePessoas--;
            return;
        }
    }
    cout << "Pessoa nao encontrada" << endl;
}

int Agenda::buscaPessoa(const string &nome) const {
    for (int i = 0; i < qtdePessoas; i++) {
        if (pessoas[i].getNome() == nome) 
            return i;
    }
    return -1;
}

void Agenda::imprimePovo() const {
    if (qtdePessoas == 0) {
        cout << "Agenda vazia" << endl;
        return;
    }
    cout << "Agenda:" << endl;
    for (int i = 0; i < qtdePessoas; i++) {
        cout << "Nome: " << pessoas[i].getNome() << endl;
        cout << "Idade: " << pessoas[i].getIdade() << endl;
        cout << "Altura: " << pessoas[i].getAltura() << endl;
    }
}

void Agenda::imprimePessoa(int i) const {
    if (i >= 0 and i < qtdePessoas) {
        cout << "Nome: " << pessoas[i].getNome() << endl;
        cout << "Idade: " << pessoas[i].getIdade() << endl;
        cout << "Altura: " << pessoas[i].getAltura() << endl; 
    } else {
        cout << "Posicao invalida" << endl;
    }
}