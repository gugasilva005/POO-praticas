#include "Cupom.hpp"

Cupom::Cupom(string a, string b, int c, float d) {
    setId(a);
    setDesc(b);
    setQuant(c);
    setPreco(d);
}

string Cupom::setId(string a) { id = a; }

string Cupom::setDesc(string b) { desc = b; }

int Cupom::setQuant(int c) {
    if (c < 0) 
        quant = 0;
    else
        quant = c;
}

float Cupom::setPreco(float d) {
    if (d < 0)
        preco = 0;
    else
        preco = d;
}

string Cupom::getId() { return id; }

string Cupom::getDesc() { return desc; }

int Cupom::getQuant() { return quant; }

float Cupom::getPreco() { return preco; }

float Cupom::calculaCupom() { return preco*quant; }