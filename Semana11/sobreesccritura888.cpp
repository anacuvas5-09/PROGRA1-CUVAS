#include <iostream>

using namespace std;

class Vehiculo
{
public:

    virtual void encender()
    {
        cout << "El vehiculo ha sido encendido." << endl;
    }

    virtual ~Vehiculo(){}
};
class Motocicleta : public Vehiculo
{
public:

    void encender() override
    {
        cout << "La motocicleta arranco con el boton de encendido." << endl;
    }
};

int main()
{
    Vehiculo *transporte;
    transporte = new Motocicleta();
    transporte->encender();
    delete transporte;

    return 0;
}