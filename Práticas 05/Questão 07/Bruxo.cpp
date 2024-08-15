#include <iostream>

#include "Bruxo.hpp"

Bruxo::Bruxo(string a, string b, string c) : nome(a), casa(b), feitico_p(c)  {
    setNome(a);
    setCasa(b);
    setFeitico(c);
}

void Bruxo::setCasa(string a) {
    if (a == "Grifinoria" or a == "Lufa-lufa" or a == "Corvinal" or a == "Sonserina")
        casa = a;
    else 
        casa = "Sem casa";
}

void Bruxo::setNome(string b) {
    if (b == "")
        nome = "Inominado";
    else 
        nome = b;
}

void Bruxo::setFeitico(string c) {
    if (c == "")
        feitico_p = "Sem feitiço";
    else
        feitico_p = c;
}

string Bruxo::getNome() const { return nome; }

string Bruxo::getCasa() const { return casa; }

string Bruxo::getFeitico() const { return feitico_p; }

void Bruxo::lancarFeitico() {
    std::cout << "Lançando Feitiço " << getFeitico() << std::endl;
}

void Bruxo::display() {
    std::cout << "Bruxo" << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Casa: " << getCasa() << std::endl;
    std::cout << "Feitiço predileto: " << getFeitico() << std::endl;
}