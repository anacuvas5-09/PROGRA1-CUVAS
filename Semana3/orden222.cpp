#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    float numeros[4];
    float suma = 0, promedio;

    cout << "Ingrese cuatro numeros:\n";

    for (int i = 0; i < 4; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    sort(numeros, numeros + 4);

    promedio = suma / 4;

    cout << "\nNumero menor: " << numeros[0] << endl;
    cout << "Numero mayor: " << numeros[3] << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    cout << "\nNumeros ordenados de menor a mayor:\n";

    for (int i = 0; i < 4; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}