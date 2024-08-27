#include "Animal.hpp"

#include <iostream>
using std::cout; using std::endl;

Animal::Animal() : nome("Indefinido"), raca("Indefinida") { }

Animal::Animal(const string &nome, const string &raca) : nome(nome), raca(raca) { }

string Animal::caminha() const {
    return this->nome + " esta caminhando.";
}