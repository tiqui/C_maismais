#include <iostream>

using namespace std;

int main()
{
 int var1;
 int* pont1; 
var1=5;
pont1=&var1;
cout << var1 << endl;
cout << pont1 << endl;
cout << *pont1 << endl;

 float var2;
 float* pont2;
 var2=8;
 pont2=&var2;

cout << var2 << endl;
cout << pont2 << endl;
cout << *pont2 << endl;




    return 0;
}