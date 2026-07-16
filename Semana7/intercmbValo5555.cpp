#include <iostream>

using namespace std;

int main() {

    int x = 45;
    int y = 80;

    int *px = &x;
    int *py = &y;

    cout << "Valores originales\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    int aux = *py;
    *py = *px;
    *px = aux;

    cout << "\nValores intercambiados\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}