#include "Livro.cpp"
#include "LivroInvisivelDaInvisibilidade.hpp"
#include "LivroMonstruosodosMonstros.hpp"

#include <iostream>
using std::cout; using std::endl;

int main() { 

    LivroMonstruosoDosMonstros livroMonstruoso("Livro dos Monstros", "2023", "Um livro perigoso cheio de criaturas", 1000);
    LivroInvisivelDaInvisibilidade livroInvisivel("Livro da Invisibilidade", "2015", "Um livro impossivel de se ver", 100);

    Livro historiaDaMagia("Historia da Magia", "2020", "Uma breve historia da magia", 250);

    historiaDaMagia.ler();

    cout << endl << "Lendo o livro dos monstros: ";
    livroMonstruoso.ler();

    cout << endl << "Lendo o livro invisivel: ";
    livroInvisivel.ler();

    return 0;
}