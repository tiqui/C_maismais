#include <iostream>

using namespace std;

int main()
{
 bool var1 = true;
 char var2 = 'c';
 int  var3 = 94, var4 = -118;
 double var5 = 19.953, var6 = 13.3432e2;
 cout << "var1 = " << var1 << " , tamanho = " << sizeof(var1) << " Byte " << ::endl;
 cout << "var2 = " << var2 << " , tamanho = " << sizeof(var2) << " Byte " << ::endl;
 cout << "var3 = " << var3 << " , tamanho = " << sizeof(var3) << " Byte " << ::endl;
 cout << "var4 = " << var4 << " , tamanho = " << sizeof(var4) << " Byte " << ::endl;
 cout << "var5 = " << var5 << " , tamanho = " << sizeof(var5) << " Byte " << ::endl;
 cout << "var6 = " << var6 << " , tamanho = " << sizeof(var6) << " Byte " << ::endl;
}
