#include <iostream>
using namespace std;

void verificarDigitos(int numero) {

    if (numero < 10) {
        if (numero % 2 == 0)
            cout << numero << " es un digito par." << endl;
        else
            cout << numero << " es un digito impar." << endl;
        return;
    }

    verificarDigitos(numero / 10);

    int ultimo = numero % 10;
    if (ultimo % 2 == 0)
        cout << ultimo << " es un digito par." << endl;
    else
        cout << ultimo << " es un digito impar." << endl;
}
int main() {

    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    cout << "\nResultado:\n";
    verificarDigitos(numero);

    return 0;
}