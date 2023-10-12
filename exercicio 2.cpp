#include <iostream>
using namespace std;
int main(void)
{
  float largura, comprimento, area;
  std::cout << "Digite a largura: ";
  std::cin >> largura;
  std::cout << "Digite comprimento: ";
  std::cin >> comprimento;
 area = largura * comprimento;
  std::cout << "A area = " << area << "m2";

  return 0;
}
