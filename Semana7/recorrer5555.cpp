#include <iostream>

using namespace std;

int main() {

    int valores[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int *ptr = valores;
    cout << "Recorrido de izquierda a derecha:\n";
    for (int i = 0; i < 10; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << "\n\nRecorrido de derecha a izquierda:\n";

    ptr = &valores[9];
    for (int i = 0; i < 10; i++) {
        cout << *ptr << " ";
        ptr--;
    }
    cout << endl;

    return 0;
}