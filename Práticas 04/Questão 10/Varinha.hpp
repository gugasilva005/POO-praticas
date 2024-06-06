#ifndef VARINHA_HPP
#define VARINHA_HPP

#include <string>
using std::string;

class Varinha {
    public:
        Varinha(const string& madeira = "", const string& nucleo = "", const double& comprimento = 0) : 
            madeira(madeira), nucleo(nucleo), comprimento(comprimento) {}
        
        void setMadeira(const string& madeira) { this-> madeira = madeira; }
        void setNucleo(const string& nucleo) { this->nucleo = nucleo; }
        void setComprimento(const double&);

        string getMadeira() const { return this->madeira; }
        string getNucleo() const { return this-> nucleo; }
        double getComprimento() const { return this->comprimento; }

        void display() const;
    
    private:
        string madeira;
        string nucleo;
        double comprimento;

};



#endif