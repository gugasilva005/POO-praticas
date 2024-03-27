#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa {
    public:
        Pessoa(const string& nome, const string& cpf = "", const bool& CPFvalido= false) : nome(nome), cpf(cpf), CPFvalido(CPFvalido) { }

        void setNome(const string& nome) {this->nome = nome;}
        void setCPF(const string&);
        void setCPFvalido(const bool& CPFvalido) {this->CPFvalido = CPFvalido;}

        string getNome() const { return this->nome; }
        string getCPF() const { return this->cpf; }
        bool getCPF_valido() const { return this->CPFvalido; }

        void apresentar();

    private:
        string nome;
        string cpf;
        bool CPFvalido;
};


#endif