#include <iostream>
#include <string>

using namespace std;

class Medico
{
private:

    int codigo;
    int documento;
    string nombreCompleto;
    string area;

    bool comprobarDni(int numero)
    {
        return numero >= 10000000 && numero <= 99999999;
    }

public:
    Medico()
    {
        codigo = 0;
        documento = 0;
        nombreCompleto = "";
        area = "";
    }
    Medico(int c, int d, string nom, string esp)
    {
        codigo = c;
        documento = d;
        nombreCompleto = nom;
        area = esp;
    }
    int obtenerCodigo()
    {
        return codigo;
    }
    int obtenerDocumento()
    {
        return documento;
    }
    string obtenerNombre()
    {
        return nombreCompleto;
    }
    string obtenerEspecialidad()
    {
        return area;
    }
    void cambiarCodigo(int c)
    {
        codigo = c;
    }
    void cambiarDocumento(int d)
    {
        if(comprobarDni(d))
        {
            documento = d;
        }
    }

    void cambiarNombre(string nom)
    {
        nombreCompleto = nom;
    }
    void cambiarEspecialidad(string esp)
    {
        area = esp;
    }
    void registrarMedico()
    {
        cout << "\n========== REGISTRO DEL MEDICO ==========\n";

        cout << "Codigo: ";
        cin >> codigo;

        do
        {
            cout << "DNI: ";
            cin >> documento;

            if(!comprobarDni(documento))
            {
                cout << "DNI incorrecto. Intente nuevamente.\n";
            }

        }while(!comprobarDni(documento));

        cin.ignore();

        cout << "Nombre completo: ";
        getline(cin, nombreCompleto);

        cout << "Especialidad: ";
        getline(cin, area);
    }
    void mostrarMedico()
    {
        cout << "\n========== INFORMACION DEL MEDICO ==========\n";
        cout << "Codigo        : " << codigo << endl;
        cout << "DNI           : " << documento << endl;
        cout << "Nombre        : " << nombreCompleto << endl;
        cout << "Especialidad  : " << area << endl;
    }
};
int main()
{
    Medico doctor;
    doctor.registrarMedico();
    doctor.mostrarMedico();
    return 0;
}