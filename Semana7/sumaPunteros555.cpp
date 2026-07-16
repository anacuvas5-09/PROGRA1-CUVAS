#include <iostream>

using namespace std;

int main() {

    int num1 = 12;
    int num2 = 18;

    int *direccion1 = &num1;
    int *direccion2 = &num2;

    int resultado = *direccion1 + *direccion2;

    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;

    cout << "La suma de ambos es: " << resultado << endl;

    return 0;
}