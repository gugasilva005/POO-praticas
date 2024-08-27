#ifndef LIVROMONSTRUOSO_HPP
#define LIVROMONSTRUOSO_HPP

#include "Livro.hpp"
#include <iostream>
using std::cout; using std::endl;

class LivroMonstruosoDosMonstros : public Livro {
    public:
        LivroMonstruosoDosMonstros(const string &titulo, const string &ano, const string &conteudo, int tPaginas) : \
            Livro(titulo, ano, conteudo, tPaginas) { }
        
        void ler() const {
            cout << "Mastiga, mastiga, mastiga, mastiga..." << endl;
        }
};

#endif