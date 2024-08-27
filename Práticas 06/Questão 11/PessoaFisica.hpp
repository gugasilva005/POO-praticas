#ifndef PESSOAFISICA_HPP
#define PESSOAFISICA_HPP

#include "Pessoa.hpp"
#include <string>
using std::string;

class PessoaFisica : public Pessoa {
    public:
        PessoaFisica(const string &nome, const string &cpf) : \
            Pessoa(nome), cpf(cpf) { }
        
        string getCPF() const { return this->cpf; }

        void setCPF(const string &cpf) { this->cpf = cpf; }

    private:
        string cpf;
};


#endif