#include <iostream>
using namespace std;

int main() {

    int opcion;

    cout << "========== MENU ==========\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1:
            cout << "Has seleccionado la opcion SUMA." << endl;
            break;

        case 2:
            cout << "Has seleccionado la opcion RESTA." << endl;
            break;

        case 3:
            cout << "Has seleccionado la opcion MULTIPLICACION." << endl;
            break;

        case 4:
            cout << "Has seleccionado la opcion DIVISION." << endl;
            break;

        case 5:
            cout << "Programa finalizado." << endl;
            break;

        default:
            cout << "La opcion ingresada no existe." << endl;
    }

    return 0;
}