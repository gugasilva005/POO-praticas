#include <iostream>
using namespace std;

int main (void) {
    
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < 5 - i; j++) {
            cout << " ";
        }
        for (int x = 1; x <= i; x++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}