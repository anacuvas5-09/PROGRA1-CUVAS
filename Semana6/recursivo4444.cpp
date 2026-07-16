#include <iostream>
using namespace std;

int sumaRecursiva(int numero) {
    if (numero == 1) {
        cout << 1;
        return 1;
    }
    int resultado = sumaRecursiva(numero - 1);
    cout << " + " << numero;
    return resultado + numero;
}
int main() {

    int valor;
    cout << "Ingrese un numero positivo: ";
    cin >> valor;
    if (valor < 1) {
        cout << "Debe ingresar un numero mayor que cero." << endl;
        return 0;
    }
    cout << "\nOperacion: ";
    int total = sumaRecursiva(valor);
    cout << " = " << total << endl;
    return 0;
}