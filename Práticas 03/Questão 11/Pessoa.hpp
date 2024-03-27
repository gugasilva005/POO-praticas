#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa {
    public:
        Pessoa(const string& nome, const string& cpf = "") : nome(nome), cpf(cpf) { }

        void setNome(const string& nome) {this->nome = nome;}
        void setCPF(const string&);

        string getNome() const { return this->nome; }
        string getCPF() const { return this->cpf; }
        
        void apresentar();

    private:
        string nome;
        string cpf;
        bool CPFvalido;

        bool validacaoCPF(const string&);
        string numCPF(const string&);
};


#endif