#include <iostream>

using namespace std;

int main()
{
    double dineroDisponible = 1500.00;
    double monto;

    cout << "========== CAJERO AUTOMATICO ==========" << endl;
    cout << "Saldo actual: S/ " << dineroDisponible << endl;

    cout << "Ingrese el monto que desea retirar: ";
    cin >> monto;

    try
    {
        if(monto > dineroDisponible)
        {
            throw "No cuenta con saldo suficiente para realizar el retiro.";
        }

        dineroDisponible -= monto;

        cout << "\nOperacion realizada correctamente." << endl;
        cout << "Monto retirado: S/ " << monto << endl;
        cout << "Saldo disponible: S/ " << dineroDisponible << endl;
    }
    catch(const char *error)
    {
        cout << "\nOperacion cancelada." << endl;
        cout << error << endl;
    }

    return 0;
}