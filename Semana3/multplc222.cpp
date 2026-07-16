#include <iostream>
using namespace std;

int main() {

    int numero, contador = 1;

    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> numero;
    cout << "\nTabla del " << numero << endl;
    while (contador <= 12) {
        cout << numero << " x " << contador << " = "
             << numero * contador << endl;
        contador++;
    }
    return 0;
}