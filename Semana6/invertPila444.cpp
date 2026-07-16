#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> datos;
    stack<int> auxiliar;
    stack<int> mostrar;

    datos.push(5);
    datos.push(10);
    datos.push(15);
	    mostrar = datos;
	    cout << "Pila original:\n";
	    while (!mostrar.empty()) {
	        cout << mostrar.top() << endl;
	        mostrar.pop();
	    }
	    while (!datos.empty()) {
	        auxiliar.push(datos.top());
	        datos.pop();
	    }

    cout << "\nPila invertida:\n";

    while (!auxiliar.empty()) {
        cout << auxiliar.top() << endl;
        auxiliar.pop();
    }

    return 0;
}