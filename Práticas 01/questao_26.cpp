#include <iostream>
using namespace std;

void swap (int *a, int *b) {
    //int aux = a;
    a = b;
    b = a;
}

int main (void) {

    int x, y;

    x = 10;
    y = 40;

    cout << x << endl << y << endl;
    swap(x, y);
    cout << endl << x << endl << y << endl;

    return 0;
}