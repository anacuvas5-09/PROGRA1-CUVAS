#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string texto;

    try
    {
        ifstream lectura("registro.txt");

        if(lectura.fail())
        {
            throw "No fue posible acceder al archivo.";
        }
        cout << "===== INFORMACION DEL ARCHIVO =====\n" << endl;

        while(getline(lectura, texto))
        {
            cout << texto << endl;
        }

        lectura.close();
    }
    catch(const char *error)
    {
        cout << "Ocurrio un problema: " << error << endl;
    }

    return 0;
}