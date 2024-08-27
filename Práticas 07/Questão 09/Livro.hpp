#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <string>
using std::string;

class Livro {
    public:
        Livro(const string &, const string &, const string &, int);

        virtual void ler() const;

        virtual ~Livro() { }

    protected:
        string titulo, ano;
        string conteudo;
        int tPaginas;
};

#endif