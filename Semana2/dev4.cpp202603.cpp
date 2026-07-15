#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "Lunes, laborable" << endl; break;
        case 2: cout << "Martes, laborable" << endl; break;
        case 3: cout << "Miercoles, laborable" << endl; break;
        case 4: cout << "Jueves, laborable" << endl; break;
        case 5: cout << "Viernes, laborable" << endl; break;
        case 6: cout << "Sabado, no laborable" << endl; break;
        case 7: cout << "Domingo, no laborable" << endl; break;
        default: cout << "Numero invalido" << endl;
    }

    return 0;
}
