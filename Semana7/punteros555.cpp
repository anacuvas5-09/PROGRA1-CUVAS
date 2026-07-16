#include <iostream>

using namespace std;

int main() {

    int datos[10];
    int *ptr = datos;

    int total = 0;
    int mayorValor, menorValor;

    cout << "Ingrese 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> *(ptr + i);
    }
    mayorValor = menorValor = datos[0];
    for (int i = 0; i < 10; i++) {

        total += *(ptr + i);
        if (*(ptr + i) > mayorValor)
            mayorValor = *(ptr + i);
       if (*(ptr + i) < menorValor)
            menorValor = *(ptr + i);
    }
    float promedio = (float)total / 10;

    cout << "\nResultados\n";
    cout << "Suma: " << total << endl;
    cout << "Mayor: " << mayorValor << endl;
    cout << "Menor: " << menorValor << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}