#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, string> agenda;

    agenda["Rojas"] = "Ana";
    agenda["Perez"] = "Luis";
    agenda["Torres"] = "Carlos";
    agenda["Mendoza"] = "Lucia";
    cout << "====== LISTA DE CONTACTOS ======\n\n";
    for (auto contacto : agenda) {
        cout << "Apellido : " << contacto.first << endl;
        cout << "Nombre   : " << contacto.second << endl;
        cout << "------------------------" << endl;
    }
    return 0;
}