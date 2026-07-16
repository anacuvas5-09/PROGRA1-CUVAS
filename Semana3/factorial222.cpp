#include <iostream>
using namespace std;

int main() {
    int numero, factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << numero << "! = ";
    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
        cout << i;
        if(i != numero)
            cout << " x ";
    }
    cout << " = " << factorial << endl;
    return 0;
}