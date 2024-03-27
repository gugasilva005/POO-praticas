#include "ViraTempo.hpp"
#include <iostream>

using std::cout;
using std::endl;

void ViraTempo::mostrarTempo() {
    cout << this->tempo << endl;
}

void ViraTempo::virarTempo() {
    prox = prox ? false : true;
}

void ViraTempo::avancarTempo() {
    if (this->tempo > 0 and not prox) {
        this->tempo--;
    }
    if (this->tempo < n and prox) {
        this->tempo++;
    }
}