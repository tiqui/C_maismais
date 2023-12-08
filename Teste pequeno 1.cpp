#include <iostream>

int main() {
    const double temperatura = 50.0;
    const int duracao_experimento = 180;
    double multiplicador = 1 + (temperatura - 30) / 100.0;
    double quantidade_bacterias = 1000.0;

    for (int dia = 1; dia <= duracao_experimento; dia += 5) {
        quantidade_bacterias *= multiplicador;
    }

    std::cout << "A quantidade de bacterias no final do experimento e: " << quantidade_bacterias << std::endl;

    return 0;
}