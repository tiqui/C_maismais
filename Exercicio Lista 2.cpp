#include <iostream>

using namespace std;

int main() {
  
  double soma = 1;
  int iteracoes = 1;
  double limite;

  cout << "Digite o valor limite: ";
  cin >> limite;

  while (soma < limite) {
    soma += 1.0 / iteracoes;
    iteracoes++;
  }

  cout << "O número de iterações necessárias é " << iteracoes << endl;

  return 0;
}