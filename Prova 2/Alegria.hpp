#ifndef ALEGRIA_HPP
#define ALEGRIA_HPP

#include "Emocao.hpp"

#include <string>
//using std::string;
#include <iostream>
//using std::cout, std::endl;
using namespace std;

class Alegria : public Emocao {
  public:
    Alegria(const string &nome, bool estado = false) : Emocao(nome, estado) { }

    void processar(const string &descricao) override {
      if (descricao.length() % 2 == 0) {
        this->isAtiva = true;
        cout << "Alegria: " << this->nome << " está ativa" << endl;
      } else {
        this->isAtiva = false;
        cout << "Alegria: " << this->nome << " está inativa" << endl;
      }
    }
    
};

#endif