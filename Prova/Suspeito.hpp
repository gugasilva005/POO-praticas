#ifndef SUSPEITO_HPP
#define SUSPEITO_HPP

#include <string>
using std::string;

class Suspeito {

    public:
        Suspeito(const string &nome = "") : nome(nome), isIndiciado(false) { }

        string getNome() const { return this->nome; }
        bool getIndiciado() const { return this->isIndiciado; }

        void indiciar() { isIndiciado = true; }
        
        void display() const;


    private:
        string nome;
        bool isIndiciado;
};

#endif 