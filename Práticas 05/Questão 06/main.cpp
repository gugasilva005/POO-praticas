#include <iostream>
using std::cout; using std::endl;
using std::cin;

#include "Array.cpp"

int main() {
    /*
    Array a1(7);  //array de 7 elementos
    Array a2;     //array de 10 elementos

    cout << "Entre com 7 elementos: ";

    cin >> a1;    //lendo array 

    cout << "Printando a1: ";
    cout << a1;   //escrevendo array

    if (a1 == a2)
    cout << "a1 e a2 são iguais";

    Array a3(a1);

    a3[5] = 100; //invoca int &operator[](int)

    cout << "a3[5] == " << a3[5] << endl;  //int operator[](int) const

    a2 = a3;

    cout << "a2[5] == " << a3[5] << endl;

    a2[100] = 50;
    */

    Array arr1(5);
    Array arr2(3);

    // Inicializando arr1 e arr2 com valores
    std::cout << "Insira 5 valores para arr1: ";
    std::cin >> arr1;

    std::cout << "Insira 3 valores para arr2: ";
    std::cin >> arr2;
    
    cout << endl;
    // Concatenando arr1 e arr2 usando o operador +
    Array arr3 = arr1 + arr2;
    std::cout << "arr3 (arr1 + arr2): " << arr3 << std::endl;

    // Concatenando arr1 e arr2 usando o operador +=
    arr1 += arr2;
    std::cout << "arr1 apos arr1 += arr2: " << arr1 << std::endl;

    return 0;
}