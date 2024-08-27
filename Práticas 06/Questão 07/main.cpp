#include "Gato.hpp"
#include "Cachorro.hpp"
#include "Animal.cpp"

#include <iostream>
using std::cout; using std::endl;

int main() {
    
    Gato cat("Bixano", "Siames");
    Cachorro dog("Rex", "Viralata");

    cout << cat << endl;
    cout << cat.caminha() << endl;
    cout << cat.mia() << endl;

    cout << dog << endl;
    cout << dog.caminha() << endl;
    cout << dog.late() << endl << endl;

    //cout << gato << endl;

    return 0;
}