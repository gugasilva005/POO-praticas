#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <string>
using std::string;

class Imovel {
    public:
        Imovel(const string &, float);

        float getPreco() const { return this->preco; }
        string getEndereco() const { return this->endereco; }

        void setPreco(float);
        void setEndereco(const string &);

    protected:
        string endereco;
        float preco;
};

#endif