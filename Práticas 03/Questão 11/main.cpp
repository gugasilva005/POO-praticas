#include <iostream>
#include "Pessoa.cpp"

using std::cout;
using std::endl;

int main() {

    Pessoa p1("Maria", "10526965456");
    p1.apresentar();
    cout << endl;

    p1.setCPF("11111111111");
    p1.apresentar();
    cout << endl;

    p1.setCPF("10526965460");
    p1.apresentar();
    cout << endl;


    return 0;
}