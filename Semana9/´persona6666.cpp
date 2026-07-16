#include <iostream>
#include <fstream>
#include <string>


using namespace std;

class Curso
{
private:

    int codigo;
    string nombre;
    int creditos;

    Persona profesor;
    Persona alumnos[5];

    int cantidad;

public:

    Curso()
    {
        codigo = 0;
        nombre = "";
        creditos = 0;
        cantidad = 0;
    }

    Curso(int c, string n, int cr)
    {
        codigo = c;
        nombre = n;
        creditos = cr;
        cantidad = 0;
    }

    int getCodigo()
    {
        return codigo;
    }

    string getNombre()
    {
        return nombre;
    }

    int getCreditos()
    {
        return creditos;
    }

    void setCodigo(int c)
    {
        codigo = c;
    }

    void setNombre(string n)
    {
        nombre = n;
    }

    void setCreditos(int c)
    {
        creditos = c;
    }
    void registrarCurso()
{
    cout << "Codigo del curso: ";
    cin >> codigo;
    cin.ignore();

    cout << "Nombre del curso: ";
    getline(cin, nombre);

    do
    {
        cout << "Creditos: ";
        cin >> creditos;

    }while(creditos<=0);

    guardarCurso();
}
void guardarCurso()
{
    ofstream archivo("Curso.txt");

    if(archivo)
    {
        archivo<<codigo<<";"
               <<nombre<<";"
               <<creditos<<endl;
    }

    archivo.close();
}
void registrarProfesor()
{
    string dni,nombre,ap1,ap2;

    do
    {
        cout<<"DNI del profesor: ";
        getline(cin,dni);

    }while(dni.size()!=8);

    cout<<"Nombre: ";
    getline(cin,nombre);

    cout<<"Apellido paterno: ";
    getline(cin,ap1);

    cout<<"Apellido materno: ";
    getline(cin,ap2);

    profesor=Persona(dni,nombre,ap1,ap2);

    guardarProfesor();
}
void guardarProfesor()
{
    ofstream archivo("Docente.txt");

    archivo<<profesor.getDni()<<";"
           <<profesor.getNombre()<<";"
           <<profesor.getApellidoPaterno()<<";"
           <<profesor.getApellidoMaterno()<<endl;

    archivo.close();
}
void registrarAlumno()
{
    if(cantidad==5)
    {
        cout<<"No hay espacio disponible.\n";
        return;
    }

    string dni,nombre,ap1,ap2;

    do
    {
        cout<<"DNI: ";
        getline(cin,dni);

    }while(dni.size()!=8);

    cout<<"Nombre: ";
    getline(cin,nombre);

    cout<<"Apellido paterno: ";
    getline(cin,ap1);

    cout<<"Apellido materno: ";
    getline(cin,ap2);

    alumnos[cantidad]=Persona(dni,nombre,ap1,ap2);

    guardarAlumno(alumnos[cantidad]);

    cantidad++;
}
void guardarAlumno(Persona p)
{
    ofstream archivo("Alumno.txt",ios::app);

    archivo<<p.getDni()<<";"
           <<p.getNombre()<<";"
           <<p.getApellidoPaterno()<<";"
           <<p.getApellidoMaterno()<<endl;

    archivo.close();
}
void mostrarAlumnos()
{
    if(cantidad==0)
    {
        cout<<"No existen alumnos registrados.\n";
        return;
    }

    cout<<"\n===== LISTA DE ALUMNOS =====\n";

    for(int i=0;i<cantidad;i++)
    {
        cout<<"\nAlumno "<<i+1<<endl;
        alumnos[i].saludar();
    }
}
void mostrarProfesor()
{
    cout<<"\n===== DOCENTE =====\n";

    profesor.saludar();
}
void totalAlumnos()
{
    cout<<"Cantidad de alumnos: "<<cantidad<<endl;
}
void leerArchivoAlumnos()
{
    ifstream archivo("Alumno.txt");

    if(!archivo)
    {
        cout<<"No existe el archivo.\n";
        return;
    }

    string linea;

    cout<<"\n===== CONTENIDO DEL ARCHIVO =====\n";

    while(getline(archivo,linea))
    {
        cout<<linea<<endl;
    }

    archivo.close();
}
void eliminarAlumno()
{
    string dniBuscar;

    cout<<"Ingrese el DNI del alumno a eliminar: ";
    getline(cin,dniBuscar);

    ifstream entrada("Alumno.txt");
    ofstream salida("Temporal.txt");

    string dni,nombre,pat,mat;

    while(getline(entrada,dni,';') &&
          getline(entrada,nombre,';') &&
          getline(entrada,pat,';') &&
          getline(entrada,mat))
    {
        if(dni!=dniBuscar)
        {
            salida<<dni<<";"
                  <<nombre<<";"
                  <<pat<<";"
                  <<mat<<endl;
        }
    }

    entrada.close();
    salida.close();

    remove("Alumno.txt");
    rename("Temporal.txt","Alumno.txt");
}
void actualizarAlumno()
{
    string dniBuscar;

    cout<<"Ingrese DNI del alumno: ";
    getline(cin,dniBuscar);

    ifstream entrada("Alumno.txt");
    ofstream salida("Temporal.txt");

    string dni,nombre,pat,mat;

    while(getline(entrada,dni,';') &&
          getline(entrada,nombre,';') &&
          getline(entrada,pat,';') &&
          getline(entrada,mat))
    {

        if(dni==dniBuscar)
        {
            cout<<"Nuevo nombre: ";
            getline(cin,nombre);

            cout<<"Nuevo apellido paterno: ";
            getline(cin,pat);

            cout<<"Nuevo apellido materno: ";
            getline(cin,mat);
        }

        salida<<dni<<";"
              <<nombre<<";"
              <<pat<<";"
              <<mat<<endl;
    }

    entrada.close();
    salida.close();

    remove("Alumno.txt");
    rename("Temporal.txt","Alumno.txt");
}
void imprimir()
{
    cout<<"\n==============================\n";
    cout<<"CURSO : "<<nombre<<endl;
    cout<<"CODIGO: "<<codigo<<endl;
    cout<<"CREDITOS: "<<creditos<<endl;

    cout<<"\nDOCENTE\n";
    profesor.saludar();

    cout<<"\nALUMNOS\n";

    if(cantidad==0)
    {
        cout<<"Sin alumnos registrados.\n";
    }
    else
    {
        for(int i=0;i<cantidad;i++)
        {
            alumnos[i].saludar();
        }
    }

    cout<<"Total registrados: "<<cantidad<<endl;
    cout<<"==============================\n";
}
};