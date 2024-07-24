#include "Agenda_melhorada.hpp"

#include <iostream>
using std::cout;
using std::endl;

Agenda::Agenda(int tPessoas) : tPessoas(tPessoas), qtdePessoas(0) {
    this->pessoas = new Pessoa[tPessoas];
}

Agenda::~Agenda() {
    if (pessoas)
        delete[] pessoas;
}

void Agenda::armazenaPessoa(const string &nome, int idade, float altura) {
    if (this->qtdePessoas > this->tPessoas - 1) {
        return;
    } else {
        this->pessoas[qtdePessoas++] = Pessoa(nome, idade, altura);
    }
}

void Agenda::armazenaPessoa(const Pessoa &p) {
    if (this->qtdePessoas > this->tPessoas - 1) {
        cout << "Agenda lotada.";
        return;
    } else {
        this->pessoas[qtdePessoas++] = p;
    }
}

void Agenda::removePessoa(const string &nome) {
    int index = buscaPessoa(nome);
    if (index == -1) {
        cout << "Nome não encontrado.";
        return;
    }

    for (int i = index; i < qtdePessoas - 1; i++) {
        pessoas[i] = pessoas[i + 1];
    }
    qtdePessoas--;
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