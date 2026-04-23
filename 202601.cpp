#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;

    // Verificamos las condiciones
    if (anio % 400 == 0) {
        cout << anio << " es bisiesto." << endl;
    } else if (anio % 4 == 0 && anio % 100 != 0) {
        cout << anio << " es bisiesto." << endl;
    } else {
        cout << anio << " no es bisiesto." << endl;
    }

    return 0;
}