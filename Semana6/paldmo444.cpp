#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int main() {

    char respuesta;
    string texto;

    do {
        stack<char> letras;
        string reversa = "";
	        cout << "Ingrese una palabra: ";
	        cin >> texto;
	        for (int i = 0; i < texto.length(); i++) {
	            texto[i] = tolower(texto[i]);
	            letras.push(texto[i]);
        }
        while (!letras.empty()) {
            reversa += letras.top();
            letras.pop();
        }
        if (texto == reversa)
            cout << "La palabra SI es un palindromo" << endl;
        else
            cout << "La palabra NO es un palindromo" << endl;
        cout << "\n¿Desea probar otra palabra? (S/N): ";
        cin >> respuesta;
    } while (respuesta == 'S' || respuesta == 's');
    return 0;
}