#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"

#include <iostream>
using std::cout; using std::endl;

int main() {
    // Criando uma Pessoa Física
    PessoaFisica pf("Joao Silva", "123.456.789-00");
    cout << pf << endl;
    cout << "CPF: " << pf.getCPF() << endl;

    // Criando uma Pessoa Jurídica
    PessoaJuridica pj("Empresa XYZ", "12.345.678/0001-99", "XYZ Comercio Ltda.");
    cout << pj << endl;
    cout << "CNPJ: " << pj.getCNPJ() << endl;
    cout << "Razao Social: " << pj.getRazaoSocial() << endl;

    return 0;
}