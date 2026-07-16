#include <iostream>
using namespace std;

int main() {
    int anio;
    bool bisiesto = false;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if (anio % 400 == 0) {
        bisiesto = true;
    }
    else if (anio % 100 == 0) {
        bisiesto = false;
    }
    else if (anio % 4 == 0) {
        bisiesto = true;
    }

    if (bisiesto)
        cout << "El aniiiio ingresado es bisiesto.";
    else
        cout << "El aniiio ingresado no es bisiesto.";

    return 0;
}