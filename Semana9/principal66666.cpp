#include <iostream>
#include <string>
#include "Curso.cpp"

using namespace std;

void mostrarMenu()
{
    cout << "\n=================================\n";
    cout << "      SISTEMA ACADEMICO\n";
    cout << "=================================\n";
    cout << "1. Registrar curso\n";
    cout << "2. Registrar docente\n";
    cout << "3. Registrar alumno\n";
    cout << "4. Ver alumnos registrados\n";
    cout << "5. Mostrar archivo de alumnos\n";
    cout << "6. Eliminar alumno del archivo\n";
    cout << "7. Modificar alumno del archivo\n";
    cout << "8. Ver docente\n";
    cout << "9. Cantidad de alumnos\n";
    cout << "10. Mostrar informacion del curso\n";
    cout << "11. Salir\n";
    cout << "=================================\n";
    cout << "Seleccione una opcion: ";
}

int main()
{
    Curso sistema;
    int opcion;

    do
    {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch(opcion)
        {
            case 1:
                sistema.registrarCurso();
                break;

            case 2:
                sistema.registrarDocente();
                break;

            case 3:
                sistema.registrarAlumno();
                break;

            case 4:
                sistema.mostrarAlumnos();
                break;

            case 5:
                sistema.leerArchivoAlumnos();
                break;

            case 6:
                sistema.eliminarAlumno();
                break;

            case 7:
                sistema.actualizarAlumno();
                break;

            case 8:
                sistema.mostrarProfesor();
                break;

            case 9:
                sistema.totalAlumnos();
                break;

            case 10:
                sistema.imprimir();
                break;

            case 11:
                cout << "\nPrograma finalizado.\n";
                break;

            default:
                cout << "\nOpcion incorrecta. Intente nuevamente.\n";
        }

    } while(opcion != 11);

    return 0;
}