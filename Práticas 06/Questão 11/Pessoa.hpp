#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
using std::string;
#include <iostream>

class Pessoa {
    friend std::ostream &operator<<(std::ostream &out, const Pessoa &pessoa) {
        out << "Pessoa: " << pessoa.getNome();

        return out;
    }
    public:
        Pessoa(const string &nome) : nome(nome) { }

        string getNome() const { return this->nome; }

        void setNome(const string &nome) { this->nome = nome; }

    protected:
        string nome;
};

#endif