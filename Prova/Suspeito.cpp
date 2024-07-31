#include "Suspeito.hpp"
#include <iostream>
using std::cout; using std::endl;


void Suspeito::display() const {
    cout << "Nome: " << getNome();
    cout << "( " << (getIndiciado()?"Sim":"Nao") << ")" << endl;
}