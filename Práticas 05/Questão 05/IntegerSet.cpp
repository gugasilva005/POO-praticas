#include "IntegerSet.hpp"
#include <iostream>
using std::cout; using std::endl;

IntegerSet::IntegerSet(const int arr[], int tam) : conjunto {} {
    for (int i = 0; i < tam; i++) {
        if (arr[i] >= 0 and arr[i] < 100) {
            conjunto[arr[i]] = 1;
        }
    }
}

void IntegerSet::insertElement(int k) {
    if (k >= 0 and k < 100) {
        conjunto[k] = 1;
    } else {
        std::cerr << "Erro: valor fora do intervalo (0-99)" << endl;
    }
}

void IntegerSet::deleteElement(int k) {
    if (k >= 0 and k < 100) {
        conjunto[k] = 0;
    } else {
        std::cerr << "Erro: valor fora do intervalo (0-99)" << endl;
    }
}

void IntegerSet::print() const {
    cout << "{ ";
    for (int i = 0; i < 100; i++) {
        if (conjunto[i] == 1)
            cout << i << " ";
    }
    cout << "}" << endl;
}