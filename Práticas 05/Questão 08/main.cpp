#include "Complex.cpp" 
#include <iostream>
using std::cout; using std::endl;

int main() {
    Complex c1(3.0, 4.0), c2(1.0, 2.0);

    // Teste da soma
    Complex c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;

    // Teste da subtração
    Complex c4 = c1 - c2;
    cout << "c1 - c2 = " << c4 << endl;

    // Teste do operador +=
    c1 += c2;
    cout << "c1 += c2 -> c1 = " << c1 << endl;

    // Teste do operador -=
    c1 -= c2;
    cout << "c1 -= c2 -> c1 = " << c1 << endl;

    // Teste dos operadores ++ pré e pós-fixado
    cout << "++c1 = " << ++c1 << endl;
    cout << "c1++ = " << c1++ << endl;
    cout << "Apos c1++: c1 = " << c1 << endl;

    // Teste dos operadores -- pré e pós-fixado
    cout << "--c1 = " << --c1 << endl;
    cout << "c1-- = " << c1-- << endl;
    cout << "Apos c1--: c1 = " << c1 << endl;

    return 0;
}