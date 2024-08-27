#ifndef IMOVELANTIGO_HPP
#define IMOVELANTIGO_HPP

#include "Imovel.hpp"
#include <string>
using std::string;

class ImovelAntigo : public Imovel {
    public:
        ImovelAntigo(const string &enderco, float preco, float desconto) : \
            Imovel(enderco, preco), precoDesconto(desconto) { }
        
        void setDesconto(float desconto) { this->precoDesconto = desconto; }

        float getDesconto() const { return this->precoDesconto; }

        float getPreco() const {
            return preco - precoDesconto;
        }

    private:
        float precoDesconto;
};

#endif