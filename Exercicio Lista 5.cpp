#include <iostream>

using namespace std;

int main() {
 
  float peso;
  float valor;
  float taxa_adicional;

  cout << "Digite o peso do pacote (em Kg): ";
  cin >> peso;
 
  if (peso > 90) {
    cout << "Pacote não aceito" << endl;
    return 0;
  }
 
  valor = 20.00;
  if (peso > 5) {
    valor += (peso - 5) * 2.15;
  }

  if (peso > 30) {
    taxa_adicional = 20.00;
  } else if (peso > 60) {
    taxa_adicional = 20.00 + 30.00;
  } else {
    taxa_adicional = 0.00;
  }

  valor += taxa_adicional;
 
  cout << "Valor do envio: R$ " << valor << endl;

  return 0;
}