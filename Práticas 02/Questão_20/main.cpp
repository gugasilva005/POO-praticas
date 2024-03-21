#include "Data.cpp"

int main() {

    Data hoje(20, 3, 2024);

    hoje.mostrarData();

    hoje.setMes(8);

    hoje.mostrarData();

    hoje.setAno(1995);

    hoje.mostrarData();

    return 0;
}