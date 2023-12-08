#include <iostream>

using namespace std;

int soma_sequencia(int n) {
  return (n * (n + 1)) / 2;
}

int main() {
  int n = 346;
  int soma = soma_sequencia(n);
  cout << "A soma dos primeiros " << n << " números naturais é: " << soma << endl;
  return 0;
}