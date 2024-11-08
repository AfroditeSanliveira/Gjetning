

#include <iostream>
#include <cstdlib>  // para a função rand() e srand()
#include <ctime>    // para a função time()

using namespace std;

int main() {
    srand(time(0));
    int numeroAleatorio = rand() % 100 + 1; 
    int tentativas = 5;
    bool acertou = false;

    cout << "Bem-vindo ao Gjetning!" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;
    cout << "Voce tem " << tentativas << " tentativas." << endl;

    while (tentativas > 0 && !acertou) {
        int palpite;
        cout << "Digite seu palpite: ";
        cin >> palpite;


        if (palpite == numeroAleatorio) {
            cout << "Parabens! Voce acertou o numero!" << endl;
            acertou = true;
        } else if (palpite > numeroAleatorio) {
            cout << "O numero e menor. Tente novamente!" << endl;
        } else {
            cout << "O numero e maior. Tente novamente!" << endl;
        }

        tentativas--;
        cout << "Tentativas restantes: " << tentativas << endl;
    }

    if (!acertou) {
        cout << "Que pena! Suas tentativas acabaram. O numero era " << numeroAleatorio << "." << endl;
    }
    cout << "Obrigado por jogar!" << endl;

    return 0;
}
