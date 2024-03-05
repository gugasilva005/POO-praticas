#include <iostream>
using namespace std;

int sequencia () {
    static int count = 0;
    return count++;
}

int main (void) {
    
    cout << sequencia() << endl;
    cout << sequencia() << endl;
    cout << sequencia() << endl;
    
    return 0;
}