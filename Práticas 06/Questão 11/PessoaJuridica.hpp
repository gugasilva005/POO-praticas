#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

#include "Pessoa.hpp"
#include <string>
using std::string;

class PessoaJuridica : public Pessoa {
    public:
        PessoaJuridica(const string &nomeFantasia, const string &cnpj, const string &razaoSocial) : \
            Pessoa(nomeFantasia), cnpj(cnpj), razaoSocial(razaoSocial) { }
        
        string getCNPJ() const { return this->cnpj; }
        string getRazaoSocial() const { return this->razaoSocial; }

        void setCNPJ(const string &cnpj) { this->cnpj = cnpj; }
        void setRazaoSocial(const string &razaoSocial) { this->razaoSocial = razaoSocial; }
    private:
        string cnpj, razaoSocial;
};

#endif