#include <iostream>
using namespace std;
int main(void)
{
  float largura, comprimento, area;
  cout << "Digite a largura: ";
  cin >> largura;
  cout << "Digite comprimento: ";
  cin >> comprimento;
  area = largura * comprimento;
  cout << "A area = " << area << "m2";

  return 0;

}