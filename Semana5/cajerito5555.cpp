#include <iostream>
#include <string>
using namespace std;

int main() {

    string usuario = "ana.cuvas";
    string clave = "123cuvas";
    string usuarioIngresado, claveIngresada, nuevaClave;

    int opcion;
    float saldo = 2500, monto;

    while (true) {

        cout << "Usuario: ";
        cin >> usuarioIngresado;

        cout << "Contraseña: ";
        cin >> claveIngresada;

        if (usuarioIngresado == usuario && claveIngresada == clave) {
            cout << "\nAcceso permitido.\n";
            break;
        }

        cout << "Usuario o contraseña incorrectos.\n\n";
    }
    while (true) {

        cout << "\n====== MENU ======\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Depositar dinero\n";
        cout << "4. Cambiar contraseña\n";
        cout << "5. Iniciar sesión otra vez\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

        case 1:
            cout << "Saldo disponible: S/ " << saldo << endl;
            break;

        case 2:
            cout << "Monto a retirar: ";
            cin >> monto;

            if(monto <= 0)
                cout << "Monto invalido.\n";
            else if(monto > saldo)
                cout << "Fondos insuficientes.\n";
            else{
                saldo -= monto;
                cout << "Retiro realizado.\n";
                cout << "Saldo actual: S/ " << saldo << endl;
            }
            break;

        case 3:
            cout << "Monto a depositar: ";
            cin >> monto;

            if(monto > 0){
                saldo += monto;
                cout << "Deposito realizado.\n";
                cout << "Saldo actual: S/ " << saldo << endl;
            }
            else
                cout << "Monto invalido.\n";

            break;

        case 4:
            cout << "Ingrese la nueva contraseña: ";
            cin >> nuevaClave;
            clave = nuevaClave;
            cout << "Contraseña actualizada correctamente.\n";
            break;

        case 5:
          cout << "\n=== Iniciar sesión nuevamente ===\n";
            while (true) {
                cout << "Usuario: ";
                cin >> usuarioIngresado;
                cout << "Contraseña: ";
                cin >> claveIngresada;
                if(usuarioIngresado == usuario && claveIngresada == clave){
                    cout << "Acceso correcto.\n";
                    break;
                }
                cout << "Datos incorrectos.\n";
            }
            break;

        case 6:
            cout << "Gracias por utilizar el sistema." << endl;
            return 0;

        default:
            cout << "Opcion invalida." << endl;
        }
    }
}
