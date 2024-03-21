#ifndef CUPOM_HPP
#define CUPOM_HPP

#include <string>
using std::string;

class Cupom {
    public:
        Cupom(string, string, int, float);

        string setId(string);

        string setDesc(string);

        int setQuant(int);

        float setPreco(float);

        string getId();

        string getDesc();

        int getQuant();

        float getPreco();

        float calculaCupom();

    private:
        string id;
        string desc;
        int quant;
        float preco;



};


#endif