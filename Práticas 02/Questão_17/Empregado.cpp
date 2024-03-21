#include <iostream>

#include "Empregado.hpp"

float salario10(float num) {
    float dezpc = (num*0.1);
    return num+dezpc;
}

Empregado::Empregado(string a, string b, float c) {
    setNome(a);
    setSobrenome(b);
    setSalario(c);
}

void Empregado::setNome(string a) {
    if (a == "")
        nome = "Sem";
    else
        nome = a;
}

void Empregado::setSobrenome(string b) {
    if (b == "")
        sobrenome = "Nome";
    else
        sobrenome = b;
}

float Empregado::setSalario(float c) {
    if (c < 0)
        salario = 0;
    else
        salario = c;
}

string Empregado::getNome() {return nome;}

string Empregado::getSobrenome() {return sobrenome;}

float Empregado::getSalario() {return salario;}

void Empregado::printSalario() {
    std::cout << getNome() << " " << getSobrenome() << ":" << std::endl << "R$ " << getSalario() << std::endl;
}

void Empregado::printSalario10() {
    std::cout << "Salário com acréscimo de 10% de " << getNome() << " " << getSobrenome() << ":" << std::endl;
    std::cout << "R$ " << salario10(getSalario());
}