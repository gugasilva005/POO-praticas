#ifndef IMOVELNOVO_HPP
#define IMOVELNOVO_HPP  

#include "Imovel.hpp"
#include <string>
using std::string;

class ImovelNovo : public Imovel {
    public:
        ImovelNovo(const string &endereco, float preco, float precoAdicional) : \
            Imovel(endereco, preco), precoAdicional(precoAdicional) { }

        float getAdicional() const { return this->precoAdicional; }

        void setAdicional(float precoAdicional) { this->precoAdicional = precoAdicional; }

        float getPreco() const {
            return preco + precoAdicional;
        }

    private:
        float precoAdicional;
};

#endif