#ifndef POLICIAL_HPP
#define POLICIAL_HPP

#include <string>
using std::string;


class Policial {

    public:
        Policial(const string &nome = "", const string &cargo = "") : nome(nome), cargo(cargo) { }

        void display() const;

        void setNome(const string &nome) { this->nome = nome; }
        void setCargo(const string &);

        string getNome() const { return this->nome; }
        string getCargo() const { return this->cargo; }

    private:
        string nome, cargo;
        bool validaCargo(const string &) const;
};

#endif