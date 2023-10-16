#include <iostream>

//nova biblioteca:
#include <math.h>

using namespace std;

int main()
{
    int a=5, b=2;
         int soma=a+b;
         cout << "Soma: " << soma << endl;

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;

    int mult=a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a/b;
    cout << "Quonciente da divisao: " << quocdiv << endl;

    int restodiv = a%b;
    cout << "Resto da divisao: " << restodiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;

    float pot = pow(a,b);
    cout << "Potencia: " << pot << endl;
    
    //Incremento e Decremento
    cout << "a antigo: " << a << endl;
             //a = a+1;
            //a+= 1;
            //a++; //mesma coisa pra diminuir (a-=1).
            //a*=x // pra multiplicar
    cout << "a novo: " << a << endl;


 return 0;
}