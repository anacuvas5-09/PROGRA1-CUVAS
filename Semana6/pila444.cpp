#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    queue<int> numeros;
    stack<int> invertidos;
    numeros.push(10);
    numeros.push(20);
    numeros.push(30);

    cout << "Elementos de la cola:\n";
    queue<int> auxiliar = numeros;
    while (!auxiliar.empty()) {
        cout << auxiliar.front() << " ";
        auxiliar.pop();
    }
    cout << "\n\nCola invertida usando una pila:\n";
    while (!numeros.empty()) {
        invertidos.push(numeros.front());
        numeros.pop();
    }
   while (!invertidos.empty()) {
        cout << invertidos.top() << " ";
        invertidos.pop();
    }
    cout << endl;

    return 0;
}