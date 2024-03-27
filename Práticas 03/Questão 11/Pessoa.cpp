#include <iostream>
#include <cctype>
#include <cctype>
#include <algorithm>
#include <string>

using std::string;
using std::cout;
using std::endl;

#include "Pessoa.hpp"

string Pessoa::numCPF(const string& cpf) {
    string cpf_num;
    std::copy_if(cpf.begin(), cpf.end(), std::back_inserter(cpf_num), [](char c) { return std::isdigit(c); });
    return cpf_num;
}

bool Pessoa::validacaoCPF(const string& cpf) {
    if (cpf.length() != 11) {
        return false;
    }
    
    bool is_equal = std::all_of(cpf.begin() + 1, cpf.end(), [&](char c) { return c == cpf[0]; });

    if (is_equal) {
        return false;
    }

    int sum = 0;
    for (int i = 10, j = 0; i > 1, j < 9; i--, j++) {
        int atual = (cpf[j] - '0');
        sum += atual * i;
    }

    auto calc = [](int c) -> int { return (c*10) % 11;};

    int resultado = calc(sum);
    int digito_um_calc = resultado == 10 ? 0 : resultado;
    int digito_um_atual = (cpf[9] - '0');
    if (digito_um_calc != digito_um_atual) {
        return false;
    }

    sum = 0;
    for (int i = 10, j = 0; i > 1, j < 9; i--, j++) {
        int atual = (cpf[j] - '0');
        sum += atual * i;
    }

    resultado = calc(sum);
    int digito_dois_calc = resultado == 10 ? 0 : resultado;
    int digito_dois_atual = (cpf[9] - '0');
    if (digito_dois_calc != digito_dois_atual) {
        return false;
    }

    return true;
}

void Pessoa::setCPF(const string& cpf) {
    this->cpf = numCPF(cpf);
    this->CPFvalido = validacaoCPF(this->cpf);
}

void Pessoa::apresentar() {
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "CPF: " << getCPF();
    if (this->CPFvalido) {
        std::cout << " (Valido)" << std::endl;
    } else {
        std::cout << " (Invalido)" << std::endl;
    }
}