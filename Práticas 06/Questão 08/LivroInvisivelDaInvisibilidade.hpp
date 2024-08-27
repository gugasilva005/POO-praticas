#ifndef LIVROINVISIVEL_HPP
#define LIVROINVISIVEL_HPP

#include "Livro.hpp"
#include <iostream>
using std::cout; using std::endl;

class LivroInvisivelDaInvisibilidade : public Livro {
    public:
        LivroInvisivelDaInvisibilidade(const string &titulo, const string &ano, const string &conteudo, int tPaginas) : \
            Livro(titulo, ano, conteudo, tPaginas) { }
        
        void ler() const {
            cout << "..." << endl;
        }
};

#endif