#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

// Interface
class Carro {

    public:
        Carro(string nome, int year);

        void setMarca(string nome);

        string getMarca();

        int setAno(int a);

        int getAno();

        void displayMessage();
    
    private:
        string marca;
        int ano;
};

#endif