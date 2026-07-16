#include <iostream>
using namespace std;

float calcularPromedio(float arreglo[], int cantidad) {

    float total = 0;
    for (int i = 0; i < cantidad; i++) {
        total += arreglo[i];
    }
    return total / cantidad;
}
float obtenerMayor(float arreglo[], int cantidad) {

    float mayor = arreglo[0];
    for (int i = 1; i < cantidad; i++) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
    }
    return mayor;
}
int main() {

    float notas[] = {16.3, 12.5, 11.8};

    cout << "Notas registradas: ";
    for (int i = 0; i < 3; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;
    cout << "Promedio: " << calcularPromedio(notas, 3) << endl;
    cout << "Nota mas alta: " << obtenerMayor(notas, 3) << endl;

    return 0;
}
