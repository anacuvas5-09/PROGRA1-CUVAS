#include <iostream>
using namespace std;

int multiplicar(int num1, int num2) {
    if (num2 == 0)
        return 0;

    if (num2 > 0)
        return num1 + multiplicar(num1, num2 - 1);
    return -(multiplicar(num1, -num2));
}
int main() {

    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    int resultado = multiplicar(numero1, numero2);
    cout << "Resultado de la multiplicacion: " << resultado << endl;
    return 0;
}