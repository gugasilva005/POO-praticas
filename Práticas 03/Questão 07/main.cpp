#include <iostream>

#include "Pessoa.cpp"

int main() {

    Pessoa p1("Gustavo", "12345678900");
    std::cout << p1.getCPF_valido() << std::endl;
    std::cout << p1.getCPF() << std::endl;
    std::cout << p1.getNome() << std::endl;

    p1.apresentar(); std::cout << std::endl;

    p1.setCPF("10526965544");

    p1.apresentar(); std::cout << std::endl;

    Pessoa p2{"Maria", "78954257941", true};
    p2.apresentar();

    return 0;
}