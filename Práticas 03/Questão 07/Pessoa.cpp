#include <iostream>
#include <cctype>

#include "Pessoa.hpp"

void Pessoa::setCPF(const string& cpf) {
    bool validacao = true;
    if (cpf.length() != 11) 
        validacao = false;
    else {
        for (auto& i : cpf) {
            if (!std::isdigit(i)) {
                validacao = false;
                break;
            }
        }
    }
    this->cpf = cpf;
    this->CPFvalido = validacao;
}

void Pessoa::apresentar() {
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "CPF: " << getCPF();
    if (getCPF_valido()) {
        std::cout << " (Valido)" << std::endl;
    } else {
        std::cout << " (Invalido)" << std::endl;
    }
}