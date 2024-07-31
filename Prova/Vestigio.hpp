#ifndef VESTIGIO_HPP
#define VESTIGIO_HPP

#include <string>
using std::string;

class Vestigio {

    public:
        Vestigio(const string & = "", const string & = "");
        
        void setEvidencia() { this->isEvidencia = true; }

        string getNome() const { return this->nome; }
        string getTipo() const { return this->tipo; }

        void display() const;

    private:
        string nome, tipo;
        bool isEvidencia;
        bool validaTipo(const string &tipo);

};


#endif