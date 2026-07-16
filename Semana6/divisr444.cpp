#include <iostream>
using namespace std;

void mostrarDivisores(int numero, int contador) {

    if (contador > numero)
        return;
    if (numero % contador == 0) {
        cout << contador << " ";
    }
    mostrarDivisores(numero, contador + 1);
}
int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "\nLos divisores de " << numero << " son:\n";
    mostrarDivisores(numero, 1);
    cout << endl;
    return 0;
}