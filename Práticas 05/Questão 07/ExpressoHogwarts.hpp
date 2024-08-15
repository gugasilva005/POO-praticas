#ifndef EXPRESSOHOGWARTS_HPP
#define EXPRESSOHOGWARTS_HPP

#include "Bruxo.cpp"
#include <iostream>
#include <vector>
#include <string>
using std::string;

class ExpressoHogwarts {
    friend std::ostream &operator<<(std::ostream &out, const ExpressoHogwarts &expresso) {
        out << "Bruxos a bordo do Expresso Hogwarts: \n";
        for (int i = 0; i < expresso.tBruxos; i++) {
            out << expresso.arr_bruxo[i] << std::endl;
        }
        return out;
    }
    public:
        ExpressoHogwarts(int tam);
        ~ExpressoHogwarts();

        ExpressoHogwarts &operator<<(const Bruxo &);

        ExpressoHogwarts &operator>>(const Bruxo &);
        ExpressoHogwarts &operator>>(const string &);

    private:
        int capacidade;
        int tBruxos;
        Bruxo *arr_bruxo;
};


#endif