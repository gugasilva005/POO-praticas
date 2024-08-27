#include "Imovel.cpp"
#include "ImovelAntigo.hpp"
#include "ImovelNovo.hpp"

#include <iostream>
using std::cout; using std::endl;

int main() {
    // Criando um imóvel novo com um adicional no preço
    ImovelNovo imovelNovo("Rua dos Alfeneiros, 4", 500000, 50000);
    cout << "Imovel Novo: " << imovelNovo.getEndereco() << endl;
    cout << "Preco com adicional: R$ " << imovelNovo.getPreco() << endl;

    // Criando um imóvel velho com um desconto no preço
    ImovelAntigo imovelVelho("Rua das Acacias, 22", 400000, 30000);
    cout << "Imovel Velho: " << imovelVelho.getEndereco() << endl;
    cout << "Preco com desconto: R$ " << imovelVelho.getPreco() << endl;

    return 0;
}