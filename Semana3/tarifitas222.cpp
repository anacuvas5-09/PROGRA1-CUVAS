#include <iostream>
using namespace std;

int main() {

    int opcion;
    float tarifa, total;

    cout << "========== SISTEMA DE TARIFAS ==========" << endl;
    cout << "1. Cliente Regular" << endl;
    cout << "2. Cliente VIP" << endl;
    cout << "3. Cliente Premium" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el monto de la tarifa: S/ ";
    cin >> tarifa;

    switch(opcion) {

        case 1:
            total = tarifa;
            cout << "\nCliente Regular" << endl;
            cout << "Descuento: 0%" << endl;
            cout << "Total a pagar: S/ " << total << endl;
            break;

        case 2:
            total = tarifa * 0.80;
            cout << "\nCliente VIP" << endl;
            cout << "Descuento: 20%" << endl;
            cout << "Total a pagar: S/ " << total << endl;
            break;

        case 3:
            total = tarifa * 0.70;
            cout << "\nCliente Premium" << endl;
            cout << "Descuento: 30%" << endl;
            cout << "Total a pagar: S/ " << total << endl;
            break;

        default:
            cout << "La opcion ingresada no es valida." << endl;
    }

    return 0;
}