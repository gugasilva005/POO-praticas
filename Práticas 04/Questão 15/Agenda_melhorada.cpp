#include "Agenda_melhorada.hpp"

#include <iostream>
using std::cout;
using std::endl;

Agenda::Agenda(int tPessoas) : tPessoas(tPessoas), qtdePessoas(0) {
    this->pessoas = new Pessoa[tPessoas];
}

Agenda::~Agenda() {
    delete[] pessoas;
}

void Agenda::armazenaPessoa(const string &nome, int idade, float altura) {
    if (this->qtdePessoas > this->tPessoas - 1) {
        return;
    }
    this->pessoas[qtdePessoas++] = Pessoa(nome, idade, altura);
}

void Agenda::armazenaPessoa(const Pessoa &p) {
    if (this->qtdePessoas > this->tPessoas - 1) {
        return;
    }
    this->pessoas[qtdePessoas++] = p;
}

void Agenda::removePessoa(const string &nome) {
    int index = buscaPessoa(nome);
    if (index == -1) {
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
    for (int i = 0; i < qtdePessoas; i++) {
        imprimePessoa(i);
    }
}

void Agenda::imprimePessoa(int i) const {
    Pessoa p = this->pessoas[i];
    
    cout << "Nome: " << p.getNome() << endl;
    cout << "Idade: " << p.getIdade() << endl;
    cout << "Altura: " << p.getAltura() << endl; 
    
}