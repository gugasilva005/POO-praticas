#include "ChapeuSeletor.hpp"

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;
using std::string;

void ChapeuSeletor::sortearCasa() {
    int num;
    string casas[4] = {"Sonserina", "Grifinora", "Lufa-Lufa", "Corvinal"};

    srand(time(NULL));
    num = (rand() >> 1)%4;

    cout << "Humm... " << casas[num] << endl;

}

void ChapeuSeletor::recepcionar() const {
    cout << "Nao ha nada escondido em sua cabeca que o Chapeu Seletor nao consiga ver" \
    " por isso eh so me porem na cabeca que vou dizer em que casa de Hogwarts deverao ficar" \
    << endl;
}