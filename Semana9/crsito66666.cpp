#include <iostream>
#include <fstream>
#include <string>
#include "Persona.cpp"

using namespace std;

class Curso
{
private:

    int codigoCurso;
    string nombreCurso;
    int creditos;

    Persona profesor;
    Persona alumnos[5];

    int cantidadAlumnos;

public:

    Curso()
    {
        codigoCurso = 0;
        nombreCurso = "";
        creditos = 0;
        cantidadAlumnos = 0;
    }
    Curso(int codigo, string nombre, int creditosCurso)
    {
        codigoCurso = codigo;
        nombreCurso = nombre;
        creditos = creditosCurso;
        cantidadAlumnos = 0;
    }
    int obtenerCodigo()
    {
        return codigoCurso;
    }
    string obtenerNombre()
    {
        return nombreCurso;
    }
    int obtenerCreditos()
    {
        return creditos;
    }
    void cambiarCodigo(int codigo)
    {
        codigoCurso = codigo;
    }

    void cambiarNombre(string nombre)
    {
        nombreCurso = nombre;
    }

    void cambiarCreditos(int c)
    {
        creditos = c;
    }
void guardarCurso()
{
    ofstream archivoCurso("Curso.txt");

    if (archivoCurso.is_open())
    {
        archivoCurso << codigoCurso << ";"
                     << nombreCurso << ";"
                     << creditos << endl;

        archivoCurso.close();
    }
}
void guardarProfesor()
{
    ofstream archivoProfesor("Docente.txt");

    if (archivoProfesor.is_open())
    {
        archivoProfesor << profesor.get_dni() << ";"
                        << profesor.get_nombre() << ";"
                        << profesor.get_paterno() << ";"
                        << profesor.get_materno() << endl;
        archivoProfesor.close();
    }
}
void guardarAlumno(Persona p)
{
    ofstream archivoAlumno("Alumno.txt", ios::app);

    if (archivoAlumno.is_open())
    {
        archivoAlumno << p.get_dni() << ";"
                      << p.get_nombre() << ";"
                      << p.get_paterno() << ";"
                      << p.get_materno() << endl;

        archivoAlumno.close();
    }
}
void crearCurso()
{
    int codigo;
    int creditosCurso;
    string nombre;

    cout << "Codigo del curso: ";
    cin >> codigo;
    cin.ignore();

    cout << "Nombre del curso: ";
    getline(cin, nombre);

    while (true)
    {
        cout << "Cantidad de creditos: ";
        cin >> creditosCurso;
        if (creditosCurso > 0)
            break;
        cout << "Los creditos deben ser mayores que cero.\n";
    }
    cambiarCodigo(codigo);
    cambiarNombre(nombre);
    cambiarCreditos(creditosCurso);

    guardarCurso();
}
void registrarProfesor()
{
    string dni, nombre, apellidoP, apellidoM;

    do
    {
        cout << "DNI del profesor: ";
        getline(cin, dni);

        if (dni.length() != 8)
            cout << "El DNI debe tener 8 digitos.\n";

    } while (dni.length() != 8);

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Apellido paterno: ";
    getline(cin, apellidoP);

    cout << "Apellido materno: ";
    getline(cin, apellidoM);

    profesor = Persona(dni, nombre, apellidoP, apellidoM);

    guardarProfesor();
}
void registrarAlumno()
{
    if (cantidadAlumnos >= 5)
    {
        cout << "No hay cupos disponibles.\n";
        return;
    }

    string dni, nombre, apellidoP, apellidoM;

    do
    {
        cout << "DNI del alumno: ";
        getline(cin, dni);

    } while (dni.length() != 8);

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Apellido paterno: ";
    getline(cin, apellidoP);

    cout << "Apellido materno: ";
    getline(cin, apellidoM);

    Persona nuevoAlumno(dni, nombre, apellidoP, apellidoM);

    alumnos[cantidadAlumnos] = nuevoAlumno;
    cantidadAlumnos++;

    guardarAlumno(nuevoAlumno);

    cout << "Alumno registrado correctamente.\n";
void mostrarAlumnos()
{
    if (cantidadAlumnos == 0)
    {
        cout << "No existen alumnos registrados.\n";
        return;
    }

    cout << "\n===== LISTA DE ALUMNOS =====\n";

    for (int i = 0; i < cantidadAlumnos; i++)
    {
        cout << "\nAlumno " << i + 1 << endl;
        alumnos[i].saludar();
    }
}void mostrarArchivoAlumnos()
{
    ifstream archivo("Alumno.txt");

    if (!archivo)
    {
        cout << "No se pudo abrir el archivo.\n";
        return;
    }
    string texto;
    cout << "\n===== ALUMNOS REGISTRADOS =====\n";
    while (getline(archivo, texto))
    {
        cout << texto << endl;
    }
    archivo.close();
}
void mostrarProfesor()
{
    cout << "\n===== DOCENTE =====\n";

    cout << profesor.get_nombre() << " "
         << profesor.get_paterno() << " "
         << profesor.get_materno() << endl;
}
void cantidadRegistrada()
{
    cout << "\nCantidad de alumnos: "
         << cantidadAlumnos << endl;
}
void mostrarCurso()
{
    cout << "\n--------------------------" << endl;
    cout << "CURSO : " << nombreCurso << endl;
    cout << "CODIGO: " << codigoCurso << endl;
    cout << "CREDITOS: " << creditos << endl;

    cout << "\nDOCENTE\n";
    mostrarProfesor();

    cout << "\nALUMNOS\n";
    mostrarAlumnos();

    cout << "-------------------------------" << endl;
}
void editarAlumno()
{
    string dniBuscado;

    cout << "Ingrese el DNI del alumno: ";
    getline(cin, dniBuscado);

    ifstream lectura("Alumno.txt");
    ofstream auxiliar("Temporal.txt");

    string dni, nombre, paterno, materno;
    bool encontrado = false;

    while (getline(lectura, dni, ';') &&
           getline(lectura, nombre, ';') &&
           getline(lectura, paterno, ';') &&
           getline(lectura, materno))
    {
        if (dni == dniBuscado)
        {
            encontrado = true;

            cout << "Nuevo nombre: ";
            getline(cin, nombre);

            cout << "Nuevo apellido paterno: ";
            getline(cin, paterno);

            cout << "Nuevo apellido materno: ";
            getline(cin, materno);
        }

        auxiliar << dni << ";"
                 << nombre << ";"
                 << paterno << ";"
                 << materno << endl;
    }

    lectura.close();
    auxiliar.close();

    remove("Alumno.txt");
    rename("Temporal.txt", "Alumno.txt");

    if(encontrado)
        cout << "Alumno actualizado correctamente.\n";
    else
        cout << "No se encontro el DNI.\n";
}
void eliminarAlumno()
{
    string dniBuscado;

    cout << "Ingrese el DNI del alumno a eliminar: ";
    getline(cin, dniBuscado);

    ifstream lectura("Alumno.txt");
    ofstream auxiliar("Temporal.txt");

    string dni, nombre, paterno, materno;
    bool eliminado = false;

    while (getline(lectura, dni, ';') &&
           getline(lectura, nombre, ';') &&
           getline(lectura, paterno, ';') &&
           getline(lectura, materno))
    {
        if (dni == dniBuscado)
        {
            eliminado = true;
            continue;
        }

        auxiliar << dni << ";"
                 << nombre << ";"
                 << paterno << ";"
                 << materno << endl;
    }

    lectura.close();
    auxiliar.close();

    remove("Alumno.txt");
    rename("Temporal.txt", "Alumno.txt");

    if(eliminado)
        cout << "Alumno eliminado correctamente.\n";
    else
        cout << "No existe un alumno con ese DNI.\n";
}
void resumenCurso()
{
    cout << "\n========== CURSO ==========\n";
    cout << "Codigo   : " << codigoCurso << endl;
    cout << "Nombre   : " << nombreCurso << endl;
    cout << "Creditos : " << creditos << endl;

    cout << "\nProfesor\n";
    mostrarProfesor();

    cout << "\nAlumnos registrados\n";
    mostrarAlumnos();

    cout << "\nTotal: " << cantidadAlumnos << endl;
}