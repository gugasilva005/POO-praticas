#ifndef GATO_HPP
#define GATO_HPP

#include "Animal.hpp"

class Gato : public Animal {
    public:
        Gato() : Animal() { }
        
        Gato(const string &nome, const string &raca) : Animal(nome, raca) { }

        string mia() const { return this->nome + " esta miando."; }
};

#endif