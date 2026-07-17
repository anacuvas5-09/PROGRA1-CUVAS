#include <iostream>

using namespace std;

class Alumno
{
private:

    float calificacion;

public:

    void registrarCalificacion(float nota)
    {
        if(nota < 0 || nota > 20)
        {
            throw "La calificacion debe estar entre 0 y 20.";
        }

        calificacion = nota;

        cout << "\nCalificacion registrada correctamente." << endl;
        cout << "Nota obtenida: " << calificacion << endl;
    }
};

int main()
{
    Alumno estudiante;
    float notaIngresada;

    cout << "Ingrese la calificacion: ";
    cin >> notaIngresada;

    try
    {
        estudiante.registrarCalificacion(notaIngresada);
    }
    catch(const char *error)
    {
        cout << "\nSe produjo un error: " << error << endl;
    }

    return 0;
}