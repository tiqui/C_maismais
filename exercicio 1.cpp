#include <iostream>

int main()

{
std::cout << "Adicione tres numeros: " << std::endl;
int v1 = 0, v2 = 0, v3 = 0;
std::cin >> v1 >> v2 >> v3;
std::cout << "a soma de " << v1 << " , " << v2 << " e " << v3
        << " se torna " << v1 + v2 + v3 << std::endl;
std::cout << "multiplicando " << v1 << " , " << v2 << " e " << v3
           << " fica "  << v1 * v2 * v3 << std::endl; 

return 0;
}