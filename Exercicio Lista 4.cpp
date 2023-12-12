#include <iostream>

using namespace std;

int main() {
  
  int duracao;
  int quantidade;
  int temperatura;
  double multiplicador;
  
  cout << "Digite a duracao do experimento (em dias): ";
  cin >> duracao;


  quantidade = 1000;
  temperatura = 45;
  multiplicador = 1.0 + (temperatura - 40) / 100;

  for (int i = 1; i <= duracao; i++) {
    
    if (i % 2 == 0) {
      temperatura += 0.3;
      multiplicador = 1.0 + (temperatura - 40) / 100;
    }

    
    quantidade *= multiplicador;
  }

  
  cout << "Quantidade de bacterias no final do experimento: " << quantidade << endl;

  return 0;
}