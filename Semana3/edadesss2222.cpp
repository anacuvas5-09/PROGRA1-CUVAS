#include <iostream>
using namespace std;

int main() {

    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad < 0) {
        cout << "La edad ingresada no es valida";
    }
    else if (edad <= 12) {
        cout << "Pertenece a la etapa de la niñez";
    }
    else if (edad <= 17) {
        cout << "Pertenece a la etapa de la adolescencia";
    }
    else if (edad <= 59) {
        cout << "Pertenece a la etapa adulta";
    }
    else {
        cout << "Pertenece a la etapa del adulto mayor";
    }
    return 0;
}