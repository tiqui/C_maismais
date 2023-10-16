#include <iostream>

using namespace std;

int main()
{

//numeros inteiros
 int inteiro = 5;
 inteiro = 5.2; 
 cout << inteiro << endl;

//numeros com virgula, se nao for acima 10e38
float real; 
real = 5.2;
cout << real << endl;

//float + mais espaço de memoria armazena até 10e308
double real2;
real2 = 5.2e99;
cout << real2 << endl;

//1 ou 0
bool booleando;
booleando = true;
cout << booleando << endl;

//uma unica letra (ou a final)
char letra;
letra = 'b';
cout << letra << endl;

//varias palavras
string palavra;
palavra = "bola";
cout << palavra << endl;

int idade;
//computador fornece
cout << "Qual sua idade? " << endl;
//computador recebe
cin >> idade;
cout << "Idade: " << idade << endl;


    return 0;
}