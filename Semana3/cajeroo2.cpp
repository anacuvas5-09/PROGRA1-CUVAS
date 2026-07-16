#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 1000.0, monto;

    do {
        cout << "\n====== CAJERITO AUTOMATICO ======\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                cout << "Saldo disponible: S/ " << saldo << endl;
                break;

            case 2:
                cout << "Monto a depositar: ";
                cin >> monto;

                if(monto <= 0){
                    cout << "El monto ingresado no es valido.\n";
                }else{
                    saldo += monto;
                    cout << "Deposito realizado correctamente.\n";
                    cout << "Nuevo saldo: S/ " << saldo << endl;
                }
                break;

            case 3:
                cout << "Monto a retirar: ";
                cin >> monto;

                if(monto <= 0){
                    cout << "El monto ingresado no es valido.\n";
                }
                else if(monto > saldo){
                    cout << "No cuenta con saldo suficiente.\n";
                }
                else{
                    saldo -= monto;
                    cout << "Retiro realizado correctamente.\n";
                    cout << "Saldo restante: S/ " << saldo << endl;
                }
                break;

            case 4:
                cout << "Gracias por utilizar el cajero.\n";
                break;

            default:
                cout << "Opcion incorrecta. Intente nuevamente.\n";
        }

    } while(opcion != 4);

    return 0;
}