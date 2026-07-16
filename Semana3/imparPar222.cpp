#include <iostream>
using namespace std;

int main() {

    int pares = 0, impares = 0;
    int contador = 1;

    while (contador <= 100) {
        if (contador % 2 == 0) {
            pares += contador;
        } else {
            impares += contador;
        }
        contador++;
    }

    cout << "La suma de los numeros pares es: " << pares << endl;
    cout << "La suma de los numeros impares es: " << impares << endl;

    return 0;
}