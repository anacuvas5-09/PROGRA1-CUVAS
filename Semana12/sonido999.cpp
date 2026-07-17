#include <iostream>

using namespace std;

class Instrumento
{
public:

    virtual void tocar() = 0;

    virtual ~Instrumento(){}
};
class Piano : public Instrumento
{
public:

    void tocar() override
    {
        cout << "El piano interpreta una melodia clasica." << endl;
    }
};
class Guitarra : public Instrumento
{
public:

    void tocar() override
    {
        cout << "La guitarra reproduce un solo de rock." << endl;
    }
};
class Bateria : public Instrumento
{
public:

    void tocar() override
    {
        cout << "La bateria marca el ritmo de la cancion." << endl;
    }
};

int main()
{
    Instrumento *musica;
    int opcion;

    Piano piano;
    Guitarra guitarra;
    Bateria bateria;

    cout << "===== INSTRUMENTOS =====" << endl;
    cout << "1. Piano" << endl;
    cout << "2. Guitarra" << endl;
    cout << "3. Bateria" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1:
            musica = &piano;
            break;

        case 2:
            musica = &guitarra;
            break;

        case 3:
            musica = &bateria;
            break;

        default:
            cout << "Opcion incorrecta." << endl;
            return 0;
    }

    musica->tocar();

    return 0;
}