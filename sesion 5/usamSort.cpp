#include <iostream>
#include <algorithm>
using namespace std;

float obtenerPromedio(float notas[], int cantidad) {

    float suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
}
float notaMayor(float notas[], int cantidad) {

    float mayor = notas[0];

    for (int i = 1; i < cantidad; i++) {
        if (notas[i] > mayor) {
            mayor = notas[i];
        }
    }

    return mayor;
}
void imprimirNotas(float notas[], int cantidad) {

    cout << "\nNotas de menor a mayor:\n";

    for (int i = 0; i < cantidad; i++) {
        cout << notas[i] << " ";
    }

    cout << "\n\nNotas de mayor a menor:\n";

    for (int i = cantidad - 1; i >= 0; i--) {
        cout << notas[i] << " ";
    }

    cout << "\n\nPromedio: " << obtenerPromedio(notas, cantidad);
    cout << "\nNota mas alta: " << notaMayor(notas, cantidad) << endl;
}
int main() {
    const int CANTIDAD = 3;
    float notas[CANTIDAD];

    for (int i = 0; i < CANTIDAD; i++) {
        while (true) {
            cout << "Ingrese la nota " << i + 1 << " (0 - 20): ";
            cin >> notas[i];

            if (notas[i] >= 0 && notas[i] <= 20)
                break;
            cout << "Nota invalida. Intente nuevamente.\n";
        }
    }
    sort(notas, notas + CANTIDAD);

    imprimirNotas(notas, CANTIDAD);
    return 0;
}