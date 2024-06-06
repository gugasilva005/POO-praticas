#include "Bruxo.hpp"

#include <iostream>
using std::cout;
using std::endl;


Bruxo::Bruxo(const string& nome, const string& casa, const string& feitico_p) :
        nome(nome), casa(casa), feitico_p(feitico_p), capa(nullptr), varinha(nullptr)
{
    setNome(nome);
    setCasa(casa);
    setFeitico(feitico_p);
}

void Bruxo::setCasa(const string& casa) {
    if (casa == "Grifinoria") {
        this->casa = casa;
    } if (casa == "Sonserina") {
        this->casa = casa;
    } if (casa == "Corvinal") {
        this->casa = casa;
    } if (casa == "Lufa-Lufa") {
        this->casa = casa;
    }
}


void Bruxo::lancarFeitico() const {
    cout << "Lancando Feitico " << getFeitico() << endl;
}

void Bruxo::display() const {
    cout << "Bruxo" << endl;
    cout << "Nome: " << (getNome() == "" ? "Inominado" : getNome()) << endl;
    cout << "Casa: " << (getCasa() == "" ? "Sem casa" : getCasa()) << endl;
    cout << "Feitico predileto: " << (getFeitico() == "" ? "Ainda um trouxa..." : getFeitico()) << endl;
    cout << endl << "Capa do Bruxo" << endl;
    cout << "Cor: " << (capa->getCor() == "" ? "Sem casa" : capa->getCor()) << endl;
    cout << "Tamanho: " << (capa->getTamanho() == 0 ? 0 : capa->getTamanho()) << endl;
    cout << endl << "Varinha do Bruxo" << endl;
    cout << "Tipo da madeira: " << (varinha->getMadeira() == "" ? "Nada declarado" : varinha->getMadeira()) << endl;
    cout << "Nucleo: " << (varinha->getNucleo() == "" ? "Nada declarado" : varinha->getNucleo()) << endl;
    cout << "Tamanho: " << (varinha->getComprimento() == 0 ? 0 : varinha->getComprimento()) << endl;
}