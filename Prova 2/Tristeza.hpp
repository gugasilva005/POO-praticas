#ifndef TRISTEZA_HPP
#define TRISTEZA_HPP

#include "Emocao.hpp"
#include <string>
//using std::string;
#include <iostream>
//using std::cout, std::endl;
using namespace std;

class Tristeza : public Emocao {
  public:
    Tristeza(const string &nome, bool estado = false) : Emocao(nome, estado) { }

    virtual void processar(const string &descricao) override {
      if (descricao.length() % 2 != 0) {
        this->isAtiva = true;
        cout << "Tristeza: " << this->nome << " está ativa" << endl;
      } else {
        this->isAtiva = false;
        cout << "Tristeza: " << this->nome << " está inativa" << endl;
      }
    }
};



#endif