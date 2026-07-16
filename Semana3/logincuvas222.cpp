#include <iostream>
#include <string>

using namespace std;

int main() {
    string usuarioIngresado, claveIngresada;
    const string USUARIO = "ana.cuvas";
    const string CLAVE = "123cuvas";
    while (true) {
        cout << "\n=== INICIO DE SESION ===" << endl;
        cout << "Ingrese su usuario: ";
        cin >> usuarioIngresado;
        cout << "Ingrese su contraseña: ";
        cin >> claveIngresada;
        if (usuarioIngresado == USUARIO && claveIngresada == CLAVE) {
            cout << "\nBienvenida Ana. Acceso concedido." << endl;
            break;
        }
        if (usuarioIngresado != USUARIO)
            cout << "El usuario ingresado no existe." << endl;
        if (claveIngresada != CLAVE)
            cout << "La contraseña es incorrecta." << endl;
        cout << "Vuelva a intentarlo.\n";
    }
    return 0;
}