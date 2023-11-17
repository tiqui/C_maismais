#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Diga um numero inteiro nao negativo\n";
    cin >> n;
    
    int soma=0;
    int cont=1;
    
    do{
        soma+=cont;
        cont++;

    }while (cont <=n);

cout << "A Soma dos numeros de 0 ate " << n << " = " << soma << endl;
    return 0;
}