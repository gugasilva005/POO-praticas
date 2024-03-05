#include <iostream>
#include <cctype>
#include <string>

using std::cout, std::cin, std::string, std::endl;

string sem_acento (string s) {
    string resultado;
    
    for (char c : s) {
        if (!std::ispunct(c) && !std::isspace(c)) {
            resultado += c;
        }
    }
    return resultado;
}

int main (void) {

    string palavra = "carroça";
    string palavra2;

    cout << "Palavra original: " << palavra << endl;
    palavra2 = sem_acento(palavra);
    cout << "Palavra sem acento: " << palavra2 << endl;


    return 0;
}