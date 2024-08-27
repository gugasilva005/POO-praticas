#include "Livro.hpp"
#include <iostream>
using std::cout; using std::endl;

Livro::Livro(const string &titulo, const string &ano, const string &conteudo, int tPaginas) : \
                titulo(titulo), ano(ano), conteudo(conteudo), tPaginas(tPaginas) { }


void Livro::ler() const {
    cout << "Titulo: " << this->titulo << endl;
    cout << "Ano: " << this->ano << endl;
    cout << "Conteudo: " << this->conteudo << endl;
    cout << "Total de paginas: " << this->tPaginas << " paginas" << endl;
}