#ifndef CAPABRUXO_HPP
#define CAPABRUXO_HPP

#include <string>
using std::string;

class CapaBruxo {
    public:
        CapaBruxo(const string& = "", const double& = 0);
        
        void setCasa(const string&);
        void setTamanho(const double&);

        string getCasa() const { return this->casa; }
        string getCor() const { return this->cor; }
        double getTamanho() const { return this->tamanho; }

        void display() const ;

    private:
        string casa;
        string cor;
        double tamanho;

};

#endif