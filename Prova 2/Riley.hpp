#ifndef RILEY_HPP
#define RILEY_HPP

#include "Emocao.hpp"
#include "Raiva.hpp"
#include "Tristeza.hpp"
#include "Alegria.hpp"
#include <string>
//using std::string;
#include <iostream>
//using std::cout, std::endl;
using namespace std;

class Riley {
    public:
      Riley() : countEmocoes(0) {}
    
      void adicionarEmocaoA(Alegria emocao) {
        if (countEmocoes < MAX_EMOCOES) {
            Emocao* aux = new Alegria(emocao);
            emocoes[countEmocoes++] = aux;
        } else {
            std::cerr << "Capacidade máxima de emoções atingida!" << std::endl;
        }
      }
      
      void adicionarEmocaoT(Tristeza emocao) {
        if (countEmocoes < MAX_EMOCOES) {
            Emocao* aux = new Tristeza(emocao);
            emocoes[countEmocoes++] = aux;
        } else {
            std::cerr << "Capacidade máxima de emoções atingida!" << std::endl;
        }
      }
      
      void adicionarEmocaoR(Raiva emocao) {
        if (countEmocoes < MAX_EMOCOES) {
            Emocao* aux = new Raiva(emocao);
            emocoes[countEmocoes++] = aux;
        } else {
            std::cerr << "Capacidade máxima de emoções atingida!" << std::endl;
        }
      }
    
      void processar(const std::string& descricao) {
        for (int i = 0; i < countEmocoes; i++) {
            emocoes[i]->processar(descricao);
        }
      }
    
      friend ostream& operator<<(ostream& os, const Riley& riley) {
        os << "Emoções: ";
        for (int i = 0; i < riley.countEmocoes; ++i) {
            os << riley.emocoes[i]->getNome() << " ";
        }
        return os;
      }
    
      Riley& operator<<(Alegria emocao) {
          adicionarEmocaoA(emocao);
          return *this;
      }
      
      Riley& operator<<(Tristeza emocao) {
          adicionarEmocaoT(emocao);
          return *this;
      }
      
      Riley& operator<<(Raiva emocao) {
          adicionarEmocaoR(emocao);
          return *this;
      }
      
     
      ~Riley() {
        for (int i = 0; i < countEmocoes; ++i) {
            delete emocoes[i];
        }
      }
    
    private:
        static const int MAX_EMOCOES = 10; 
        Emocao* emocoes[MAX_EMOCOES]; 
        int countEmocoes; 
};

#endif