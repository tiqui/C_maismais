#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Diga um numero inteiro nao negativo\n";
    cin >> n;
    
    int soma=0;
    int cont=1;
    
    for (int j=1 ; j<=n ; j++){
              soma+=j;


                              } 

cout << "A Soma dos numeros de 0 ate " << n << " = " << soma << endl;
    return 0;
}