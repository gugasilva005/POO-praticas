#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
using std::string;
#include <iostream>

class Animal {
    friend std::ostream &operator<<(std::ostream &out, const Animal &obj) {
        out << "Animal: " << obj.nome << ", Raca: " << obj.raca;
        return out;
    }

    public:
        Animal();

        Animal(const string &, const string &);

        string caminha() const;

    protected:
        string nome, raca;
};

#endif