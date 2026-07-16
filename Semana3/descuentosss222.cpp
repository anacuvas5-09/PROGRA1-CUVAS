#include <iostream>
using namespace std;

int main() {

    float monto, descuento = 0, total;
    cout << "Ingrese el monto de la compra: ";
    cin >> monto;
    if (monto > 500) {
        descuento = 5;
    }
    else if (monto > 200) {
        descuento = 2;
    }
    else if (monto > 100) {
        descuento = 1;
    }
    total = monto - (monto * descuento / 100);
    if (descuento > 0) {
        cout << "\nDescuento aplicado: " << descuento << "%" << endl;
        cout << "Total a pagarS/ " << total << endl;
    }
    else {
        cout << "\nNo aplica descuento." << endl;
        cout << "Total a pagarS/ " << monto << endl;
    }
    return 0;
}