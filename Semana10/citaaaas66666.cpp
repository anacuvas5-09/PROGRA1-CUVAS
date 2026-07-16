#include <iostream>
#include <string>

using namespace std;

class Cita
{
private:
    int codigo;
    int dni;
    string paciente;
    string medico;
    string especialidad;
    string fecha;

    bool verificarDni(int numero)
    {
        return numero >= 10000000 && numero <= 99999999;
    }

    bool verificarFecha(string f)
    {
        return f.length() == 10 && f[2] == '/' && f[5] == '/';
    }

public:

    Cita()
    {
        codigo = 0;
        dni = 0;
        paciente = "";
        medico = "";
        especialidad = "";
        fecha = "";
    }

    void registrarCita()
    {
        cout << "Codigo(de 8 digitos): ";
        cin >> codigo;

        do
        {
            cout << "DNI: ";
            cin >> dni;

            if(!verificarDni(dni))
                cout << "DNI incorrecto.\n";

        }while(!verificarDni(dni));

        cin.ignore();

        cout << "Paciente: ";
        getline(cin,paciente);

        cout << "Medico: ";
        getline(cin,medico);

        cout << "Especialidad: ";
        getline(cin,especialidad);

        do
        {
            cout << "Fecha (DD/MM/YYYY): ";
            getline(cin,fecha);

            if(!verificarFecha(fecha))
                cout << "Fecha incorrecta.\n";

        }while(!verificarFecha(fecha));
    }

    void imprimirCita()
    {
        cout << "\n===== DATOS DE LA CITA =====\n";
        cout << "Codigo: " << codigo << endl;
        cout << "DNI: " << dni << endl;
        cout << "Paciente: " << paciente << endl;
        cout << "Medico: " << medico << endl;
        cout << "Especialidad: " << especialidad << endl;
        cout << "Fecha: " << fecha << endl;
    }
};

int main()
{
    Cita cita;

    cita.registrarCita();

    cita.imprimirCita();

    return 0;
}