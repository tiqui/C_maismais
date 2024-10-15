#include <iostream>
using namespace std;

int
main()
{ 
    int inteiro;
    inteiro = 5.2;
    
    float real;
    real = 5.2;

    double real2;
    real2 = 5.2e99;

    bool boleio;
    boleio = false;

    char letra; 
    letra = 'b';

    string palavra;
    palavra = "bola";

    cout << inteiro << endl;
    cout << real << endl;
    cout << real2 << endl;
    cout << boleio << endl;    
    cout << letra << endl;
    cout << palavra << endl;
    
  int idade;

  cout << "Qual sua idade?" << endl;
  cin >> idade;
  cout << "idade: " << idade << endl;

    return 0;
}