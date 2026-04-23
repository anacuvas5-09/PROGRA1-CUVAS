#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    // Mayor
    if (a >= b && a >= c) {
        cout << "El mayor es: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "El mayor es: " << b << endl;
    } else {
        cout << "El mayor es: " << c << endl;
    }

    // Menor
    if (a <= b && a <= c) {
        cout << "El menor es: " << a << endl;
    } else if (b <= a && b <= c) {
        cout << "El menor es: " << b << endl;
    } else {
        cout << "El menor es: " << c << endl;
    }

    // Igualdad
    if (a == b && b == c) {
        cout << "Los tres numeros son iguales." << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Hay al menos dos numeros iguales." << endl;
    } else {
        cout << "Todos los numeros son diferentes." << endl;
    }

    return 0;
}