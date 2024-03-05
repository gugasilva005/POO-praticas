#include <iostream>

using std::cout, std::endl;

int main (void) {

    int n = 3;
    int l = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if (j >= n - i - 1 and j <= n + i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < l; j++) {
            if (j >= n - i - 1 and j <= n + i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}