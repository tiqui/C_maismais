#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    // hora atual
    time_t currentTime = time(nullptr);

    // contagem regressiva para 25 anos (em segundos)
    const time_t countdownDuration = 25 * 365 * 24 * 60 * 60;

    // a data final calculada
    time_t endTime = currentTime + countdownDuration;

    // exibir a contagem regressiva
    while (currentTime < endTime) {
        cout << "Contagem regressiva: " << (endTime - currentTime) / (365 * 24 * 60 * 60) << " anos restantes." << endl;
        std::this_thread::sleep_for(chrono::seconds(1)); // Espere 1 segundo
        currentTime = time(nullptr); // Atualize o tempo atual
    }

    // verificar se o Vasco subiu
    // caso o vasco não suba
    cout << "Ja era esperado." << endl;

    return 0;
}