#include "ContaBanco.cpp"

int main() {

    ContaBanco fulano(1350.69);

    fulano.creditar(-15);

    fulano.getSaldo();

    std::cout << std::endl;

    fulano.debitar(550);

    fulano.getSaldo();

    std::cout << std::endl;

    fulano.creditar(100);

    fulano.getSaldo();

    std::cout << std::endl;

    fulano.debitar(1000);

    return 0;
}