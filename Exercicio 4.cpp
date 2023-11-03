#include <iostream>


using namespace std;

int main() {
    double v1, v2;
    
    
cout << "Digite um valor: ";
cin >> v1;
    
    double *ponteiro_v1 = &v1;

    v2 = *ponteiro_v1 * 2.0;  

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;

    return 0;
}