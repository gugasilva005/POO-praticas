#ifndef BRUXO_HPP
#define BRUXO_HPP

#include <iostream>
#include <string>
using std::string;

class Bruxo {
    friend std::ostream &operator<<(std::ostream &out, const Bruxo &bruxo) {
        out << "Bruxo: " << bruxo.nome << ", Casa: " << bruxo.casa << ", Feitico: " << bruxo.feitico_p << std::endl;
        return out;
    }
    public:
        Bruxo(string , string , string);
        Bruxo() : nome(""), casa(""), feitico_p("") {}

        void setNome(string);

        void setCasa(string);

        void setFeitico(string);

        string getNome() const ;

        string getCasa() const ;

        string getFeitico() const ;

        void lancarFeitico();

        void display();

        bool operator==(const Bruxo &other) {
            return this->nome == other.nome;
        }

    private:
        string nome;
        string casa;
        string feitico_p;
};

#endif