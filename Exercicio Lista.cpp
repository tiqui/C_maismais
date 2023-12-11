#include <iostream>

using namespace std;

int fibonacci(int n) 
{
    if (n <= 1) {
      return n;
    } else {
      return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    cout << "Digite a quantidade de numeros da sequencia de Fibonacci desejada: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, insira um numero inteiro positivo." << endl;
        return 1;
    }

    cout << "Os primeiros " << n << " numeros da sequencia de Fibonacci sao: ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
