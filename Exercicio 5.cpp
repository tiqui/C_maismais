#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um valor inteiro: ";
    cin >> numero;

    int resultado = (numero % 2 == 0) ? 1 : 0;

    cout << resultado << endl;

    return 0;
}