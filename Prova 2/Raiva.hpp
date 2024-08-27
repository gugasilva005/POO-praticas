#ifndef RAIVA_HPP
#define RAIVA_HPP

#include "Emocao.hpp"
#include <string>
//using std::string;
#include <iostream>
//using std::cout, std::endl;
using namespace std;

class Raiva : public Emocao {
  public:
    Raiva(const string &nome, bool estado = false) : Emocao(nome, estado) { }

    virtual void processar(const string &descricao) override {
      if (contarVogais(descricao) % 2 != 0) {
        if (estaAtiva() == true) {
          this->isAtiva = false;
          cout << "Raiva: " << this->nome << " está ativa (emocao invertida)" << endl;
        } else {
          this->isAtiva = true;
          cout << "Raiva: " << this->nome << " está ativa (emocao invertida)" << endl;
        }
      } else {
        cout << "Raiva: " << this->nome << " está inativa (não foi invertida)" << endl;
      }
    }

  private:
    int contarVogais(const string &texto) {
      int count = 0;
      for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
          count++;
        }
      }
      return count;
    }
};

#endif