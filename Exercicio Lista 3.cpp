#include <iostream>
using namespace std;


int main() {
    const int capacidadeMaxima = 50000;
    const int recebimentoDiario = 2450;
    const int envioDiario = 1980;
    const double limitePorcentagem = 0.9;
    const double envioPorcentagem = 0.4;
    const int inicioEstoque = 1500;

    int dias = 0;
    double estoque = inicioEstoque;

    while (dias < 5) {
        estoque += recebimentoDiario;
        estoque -= envioDiario;

        if (estoque >= limitePorcentagem * capacidadeMaxima) {
            estoque *= (1.0 - envioPorcentagem);
            dias++;
        }
    }

    cout << "Levara " << dias << " dias para o armazem atingir 90% da lotacao maxima pela quinta vez." << std::endl;

    return 0;
}
