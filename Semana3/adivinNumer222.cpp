#include <iostream>
using namespace std;

int main() {

    int numero = 7;
    int respuesta;
    int intentos = 4;

    cout << "====== JUEGO DE ADIVINANZA ======" << endl;
    cout << "Debes adivinar un numero del 1 al 10." << endl;

    while (intentos > 0) {

        cout << "\nIntentos restantes: " << intentos << endl;
        cout << "Ingrese un numero: ";
        cin >> respuesta;

        if (respuesta == numero) {
            cout << "¡Felicidades! Adivinaste el numero.muy bien jejejexd" << endl;
            return 0;
        }

        if (respuesta < numero)
            cout << "El numero secreto es mayor." << endl;
        else
            cout << "El numero secreto es menor." << endl;

        intentos--;
    }

    cout << "\nSe acabaron los intentos.pipipi" << endl;
    cout << "El numero correcto era: " << numero << endl;

    return 0;
}