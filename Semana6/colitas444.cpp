#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    stack<int> pilaNumeros;
    stack<int> pilaAux;

    queue<int> colaNumeros;
    queue<int> colaAux;

    pilaNumeros.push(5);
    pilaNumeros.push(15);
    pilaNumeros.push(25);

    colaNumeros.push(100);
    colaNumeros.push(200);
    colaNumeros.push(300);

    pilaAux = pilaNumeros;
    cout << "Contenido de la pila:\n";
    while (!pilaAux.empty()) {
        cout << pilaAux.top() << endl;
        pilaAux.pop();
    }

    colaAux = colaNumeros;
    cout << "\nContenido de la cola:\n";
    while (!colaAux.empty()) {
        cout << colaAux.front() << endl;
        colaAux.pop();
    }

    while (!colaNumeros.empty()) {
        pilaAux.push(colaNumeros.front());
        colaNumeros.pop();
    }

    cout << "\nCola invertida:\n";
    while (!pilaAux.empty()) {
        cout << pilaAux.top() << endl;
        pilaAux.pop();
    }

    return 0;
}