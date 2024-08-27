#include "Livro.hpp"
#include "LivroInvisivelDaInvisibilidade.hpp"
#include "LivroMonstruosodosMonstros.hpp"

int main() {

    Livro *l1 = new Livro("Livro de Magias", "2020", "Conteudo do livro de magias", 100);
    Livro *l2 = new LivroMonstruosoDosMonstros("Livro de Monstros", "2020", "Conteudo do livro de monstros", 200);
    Livro *l3 = new LivroInvisivelDaInvisibilidade("Livro de Invisibilidade", "2020", "O livro que ninguém pode ler", 0);

    l1->ler();
    l2->ler();
    l3->ler();

    delete l1;
    delete l2;
    delete l3;

    return 0;
}