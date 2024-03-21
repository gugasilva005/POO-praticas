#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>
using std::string;


class Empregado {

    public:
        Empregado(string a, string b, float c);

        void setNome(string a);

        void setSobrenome(string b);

        float setSalario(float c);

        string getNome();

        string getSobrenome();

        float getSalario();

        void printSalario();

        void printSalario10();

    private:
        string nome;
        string sobrenome;
        float salario;
};


#endif