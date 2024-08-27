#ifndef CACHORRO_HPP
#define CACHORRO_HPP

#include "Animal.hpp"

class Cachorro : public Animal {
    public:
        Cachorro() : Animal() { }

        Cachorro(const string &nome, const string &raca) : Animal(nome, raca) { }

        string late() const { return this->nome + " esta latindo."; }
};

#endif