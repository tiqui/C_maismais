#include <iostream>

using namespace std;

int main() {
    int valor1, valor2;

    cout << "Insira o primeiro valor inteiro: ";
    cin >> valor1;

    cout << "Insira o segundo valor inteiro: ";
    cin >> valor2;

    int divisao = valor1 / valor2;
    int resto = valor1 % valor2;

    cout << "A divisao de " << valor1 << " por " << valor2 << " resulta em " << divisao << endl;
    cout << "O resto da divisao de " << valor1 << " por " << valor2 << " resulta em " << resto << endl;

    return 0;
}
