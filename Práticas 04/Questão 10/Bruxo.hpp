#ifndef BRUXO_HPP
#define BRUXO_HPP

#include "CapaBruxo.cpp"
#include "Varinha.cpp"

#include <string>
using std::string;

class Bruxo {
    public:
        Bruxo(const string& = "", const string& = "", const string& = "");

        void vestirCapa(CapaBruxo *c) { capa = c; }
        void tirarCapa() { capa = nullptr; }
        void pegarVarinha(Varinha *v) { varinha = v; }
        void soltarVarinha() { varinha = nullptr; }

        void setNome(const string& nome) { this->nome = nome; }
        void setFeitico(const string& feitico_p) { this->feitico_p = feitico_p; }
        void setCasa(const string&);

        string getNome() const { return this->nome; }
        string getCasa() const { return this->casa; }
        string getFeitico() const { return this->feitico_p; }

        void lancarFeitico() const;
        void display() const;

    private:
        string nome;
        string casa;
        string feitico_p;
        CapaBruxo *capa;
        Varinha *varinha;
        
};

#endif