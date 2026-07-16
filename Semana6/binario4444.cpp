#include <iostream>
using namespace std;

void convertirBinario(int numero) {

    if (numero <= 1) {
        cout << numero;
        return;
    }
    convertirBinario(numero / 2);
    cout << numero % 2;
}
void convertirHexadecimal(int numero) {

    if (numero < 16) {
        if (numero < 10)
            cout << numero;
        else
            cout << char(numero - 10 + 'A');
        return;
    }
    convertirHexadecimal(numero / 16);
    int residuo = numero % 16;
    if (residuo < 10)
        cout << residuo;
    else
        cout << char(residuo - 10 + 'A');
}
int main() {

    int numero;
    cout << "Ingrese un numero decimal: ";
    cin >> numero;
    cout << "\nEquivalente en binario: ";
    convertirBinario(numero);
    cout << "\nEquivalente en hexadecimal: ";
    convertirHexadecimal(numero);
    cout << endl;
    return 0;
}