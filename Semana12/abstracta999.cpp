#include <iostream>

using namespace std;

class Alerta
{
public:

    virtual void mostrarAlerta() = 0;

    virtual ~Alerta(){}
};
class Sonido : public Alerta
{
public:

    void mostrarAlerta() override
    {
        cout << "Alerta emitida mediante sonido." << endl;
    }
};
class Pantalla : public Alerta
{
public:

    void mostrarAlerta() override
    {
        cout << "Alerta mostrada en la pantalla." << endl;
    }
};
class Luz : public Alerta
{
public:

    void mostrarAlerta() override
    {
        cout << "Alerta enviada mediante una luz indicadora." << endl;
    }
};
int main()
{
    Alerta *aviso;
    Sonido sonido;
    Pantalla pantalla;
    Luz luz;
    aviso = &sonido;
    aviso->mostrarAlerta();
    aviso = &pantalla;
    aviso->mostrarAlerta();
    aviso = &luz;
    aviso->mostrarAlerta();
    return 0;
}