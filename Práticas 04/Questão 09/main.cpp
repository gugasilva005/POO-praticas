#include "CapaBruxo.cpp"

#include <iostream>
using std::cout;
using std::endl;

int main() {

    CapaBruxo bruxo1, bruxo2("Sonserina", 60);

    bruxo1.display();

    bruxo1.setCasa("asdf");
    bruxo1.setTamanho(75);

    cout << endl << endl;

    bruxo1.display();

    cout << endl << endl;

    bruxo2.display();

    return 0;
}