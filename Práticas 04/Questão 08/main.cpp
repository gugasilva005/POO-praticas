#include "Varinha.cpp"

#include <iostream>
using std::cout; 
using std::endl;

int main() {

    Varinha bruxo1, bruxo2("Parreira", "Corda de Coracao de Dragao", 27);

    bruxo1.display();
    cout << endl << endl;

    bruxo2.display();
    cout << endl << "Nucleo: " << bruxo2.getNucleo();

    return 0;
}