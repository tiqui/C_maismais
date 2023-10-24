#include <iostream>

using namespace std;

// Comparações: Igual: == , Diferente: !=
//              Outros: < , > , <= , >=
// if: Se   Else: se não


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
    
// 0-2.5 D , 2.5-5 C , 5-7.5 B,  7.5-10 A
// if (media < 2.5){
//      cout << "Nota final: D\N";
//} else if (media < 5){
//    cout << "Nota Final: C\n";
//}
// E por assim vai


    return 0;
}