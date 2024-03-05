#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

    float km, litros, km_l;
    float sum_km, sum_litros;
    int count;

    count = 0;
    while (km != -1) {
        if (count != 0)
            cout << endl << endl; 
        
        cout << "Litros abastecido: ";
        cin >> litros;
        cout << "Km rodados: ";
        cin >> km;

        sum_litros += litros;
        sum_km += km;

        cout << fixed << setprecision(2) << "\nConsumo médio de " << km / litros << " Km/L";

        cout << fixed << setprecision(2) << "\nTotal de litros abastecidos: " << sum_litros;

        cout << fixed << setprecision(2) << "\nTotal de Km rodados: " << sum_km;

        count += 1;
    }



    return 0;
}