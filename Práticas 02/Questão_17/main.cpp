#include "Empregado.cpp"

int main() {

    Empregado empregado1("Gustavo", "Silva", 1322);

    Empregado empregado2("Thiago", "Neves", 151);

    empregado1.printSalario();

    std::cout << std::endl;

    empregado2.printSalario();

    std::cout << std::endl;

    empregado1.printSalario10();

    std::cout << std::endl;

    empregado2.printSalario10();

    std::cout << std::endl;


    return 0;
}