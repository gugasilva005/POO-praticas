#include "Cupom.cpp"
#include <iostream>
using std::cout, std::endl;

int main() {

    Cupom cupom1("123", "SSD M.2 NVME 128gb", 20, 150);

    cout << cupom1.getId() << endl;
    cout << cupom1.getDesc() << endl;
    cout << cupom1.getQuant() << endl;
    cout << cupom1.getPreco() << endl;

    cout << "Valor do cupom1: " << cupom1.calculaCupom() << endl;
    
    cupom1.setId("321");
    cupom1.setDesc("Fonte 500w");
    cupom1.setQuant(31);
    cupom1.setPreco(220);

    cout << cupom1.getId() << endl;
    cout << cupom1.getDesc() << endl; 
    cout << "Valor do cumpom: " << cupom1.calculaCupom() << endl;

    return 0;
}