#include <iostream>

using std::cout, std::cin, std::string, std::endl;

int tem_maiuscula(string s) {
    for (char i : s) {
        if (i >= 'A' && i <= 'Z')
            return true;
    }
    return false;
}

int main (void) {

    string palavra;

    cout << "Digite algo: ";
    getline(cin, palavra);

    if (tem_maiuscula(palavra)) {
        cout << "Há letras maiúsculas na palavra!" << endl;
    } else {
        cout << "Não há letras maiúsculas na palavra!" << endl;
    }

    return 0;
}