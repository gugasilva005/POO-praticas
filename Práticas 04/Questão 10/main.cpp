#include "Bruxo.cpp"

#include <iostream>
using std::cout;
using std::endl;

int main() {

    Bruxo bruxo1("Gustavo", "Corvinal", "Expelliarmos");
    CapaBruxo capa1(bruxo1.getCasa(), 75);
    Varinha varinha1("Parreira", "Corda de Coracao de Dragao", 27);
    bruxo1.vestirCapa(&capa1);
    bruxo1.pegarVarinha(&varinha1);

    bruxo1.display();

    cout << endl;
    bruxo1.lancarFeitico();

    return 0;
}