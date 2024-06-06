#include "CapaBruxo.hpp"

#include <iostream>
using std::cout;
using std::endl;

CapaBruxo::CapaBruxo(const string& casa, const double& tamanho) : casa(casa), tamanho(tamanho) 
{
    setCasa(casa);
    setTamanho(tamanho);
}


void CapaBruxo::setCasa(const string& casa) {
    if (casa == "Grifinoria") {
        this->casa = casa;
        this->cor = "Vermelho";
    } if (casa == "Sonserina") {
        this->casa = casa;
        this->cor = "Verde";
    } if (casa == "Corvinal") {
        this->casa = casa;
        this->cor = "Azul";
    } if (casa == "Lufa-Lufa") {
        this->casa = casa;
        this->cor = "Amarelo";
    }
}

void CapaBruxo::setTamanho(const double& tamanho) {
    if (tamanho < 0) 
        this->tamanho = 0;
    else 
        this->tamanho = tamanho;
}

void CapaBruxo::display() const {
    cout << "Capa do Bruxo" << endl;
    cout << "Casa: " << (getCasa() == "" ? "Nada declarado" : getCasa()) << endl;
    cout << "Cor: " << (getCor() == "" ? "Nada declarado" : getCor()) << endl;
    cout << "Tamanho: " << getTamanho() << " cm" << endl;
}