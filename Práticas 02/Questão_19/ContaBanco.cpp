#include <iostream>

#include "ContaBanco.hpp"

ContaBanco::ContaBanco(double num) {
    if (num < 0)
        saldoConta = 0;
    else 
        saldoConta = num;
}

double ContaBanco::creditar(double num) {
    if (num < 0)
        saldoConta += 0;
    else 
        saldoConta += num;
}

double ContaBanco::debitar(double num) {
    if (num > saldoConta)
        std::cout << "Valor acima do saldo em conta" << std::endl;
    else
        saldoConta -= num;
}

double ContaBanco::getSaldo() {
    std::cout << "Saldo em conta: " << saldoConta << std::endl;
}