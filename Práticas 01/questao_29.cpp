#include <iostream>
#include <string>
#include <cctype>

using std::cout, std::cin, std::string, std::endl;

string tudo_minusculo(string s) {
    string minusculo;
    for (char c : s) {
        minusculo += std::tolower(c);
    }
    return minusculo;
}


int main (void) {

    string palavra;

    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    string minusculo = tudo_minusculo(palavra);

    cout << endl << "Tudo em minúsculo: " << minusculo << endl;

    return 0;
}
