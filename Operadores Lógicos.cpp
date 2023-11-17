#include <iostream>
using namespace std;

int main()
{
  float nota1, nota2;
    cout << "Informe a Nota 1\n";
    cin >> nota1;
    cout << "Informe a Nota 2\n";
    cin >> nota2;
    float media=(nota1+nota2)/2;
    cout << "Media= " << media << endl;
    
    if (media >= 5)
    {
    cout << "Aluno Aprovado\n";
    }
    else{
           cout << "Aluno reprovado\n";

    }
    
// Operadores Logicos: E:&& , OU: || , NAO: !
float freq;
cout << "Qual é a frequencia do aluno?\n";
cin >> freq;

if(media >= 5 && freq >= 75)
{
 cout << "Aluno Aprovado!\n";
} else{
    cout << "Aluno Reprovado!\n";
      }


if (media < 5 || freq < 75){
cout << "Aluno Aprovado!\n";

}else{

    cout << "Aluno Reprovado\n";
}


return 0;
}