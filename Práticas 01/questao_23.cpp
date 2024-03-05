#include <iostream>
#include <iomanip>
using namespace std;
#define p_nota1 3
#define p_nota2 4
#define p_nota3 5

float media_pond(float nota1, float nota2, float nota3) {
    float media = ((nota1*p_nota1) + (nota2*p_nota2) + (nota3*p_nota3));
    return media / (p_nota1 + p_nota2 + p_nota3);
}

int main(void) {

    string nome;
    float nota1, nota2, nota3;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "\nDigite suas notas: ";
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;

    cout << fixed << setprecision(2) << "O aluno " << nome << " obteve média " << media_pond(nota1, nota2, nota3) << endl;

    return 0;
}