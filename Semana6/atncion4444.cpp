#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {

    queue<string> ventanillaA;
    queue<string> ventanillaB;
    stack<string> registro;

    ventanillaA.push("Carlos");
    ventanillaA.push("Sofia");
    ventanillaA.push("Miguel");
    ventanillaA.push("Lucia");

    ventanillaB.push("Elena");
    ventanillaB.push("Diego");
    ventanillaB.push("Valeria");

    cout << "VENTANILLA A\n";
    queue<string> copiaA = ventanillaA;
    while (!copiaA.empty()) {
        cout << copiaA.front() << endl;
        copiaA.pop();
    }
    cout << "\nVENTANILLA B\n";
    queue<string> copiaB = ventanillaB;
    while (!copiaB.empty()) {
        cout << copiaB.front() << endl;
        copiaB.pop();
    }
    cout << "\n--- INICIO DE ATENCION ---\n";
    while (!ventanillaA.empty() || !ventanillaB.empty()) {
        int atendidos = 0;
        while (atendidos < 3 && !ventanillaA.empty()) {
            cout << "Se atendio a: " << ventanillaA.front() << endl;
            registro.push(ventanillaA.front());
            ventanillaA.pop();
            atendidos++;
        }
        if (!ventanillaB.empty()) {
            cout << "Se atendio a: " << ventanillaB.front() << endl;
            registro.push(ventanillaB.front());
            ventanillaB.pop();
        }
    }
    cout << "\nHistorial de atenciones:\n";
    while (!registro.empty()) {
        cout << registro.top() << endl;
        registro.pop();
    }
    return 0;
}