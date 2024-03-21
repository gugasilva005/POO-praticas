#include "Bruxo.cpp"


int main() {

    Bruxo b1("Harry", "Grifinória", "Expelliarmus");

    Bruxo b2("", "Sonserina", "Imperio");

    b1.display();

    std::cout << std::endl;

    b2.display();

    std::cout << std::endl;

    b1.lancarFeitico();

    std::cout << std::endl;

    b2.lancarFeitico();

    return 0;
}