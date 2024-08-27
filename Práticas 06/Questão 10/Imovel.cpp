#include "Imovel.hpp"

Imovel::Imovel(const string &endereco, float preco) : endereco(endereco), preco(preco) { }

void Imovel::setEndereco(const string &endereco) {
    this->endereco = endereco;
}

void Imovel::setPreco(float preco) {
    if (preco >= 0) {
        this->preco = preco;
    } else {
        this->preco = 0;
    }
}