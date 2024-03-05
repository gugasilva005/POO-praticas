#include <iostream>

using std::cout, std::endl;

int main (void) {   

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            cout << " ";
        }
        for (int x = 0; x < 2 * i + 1; x++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}