#include <iostream>
#include <string>

using namespace std;

class Canal
{
protected:
    string receptor;
    string contenido;
public:
    Canal(string r, string c)
    {
        receptor = r;
        contenido = c;
    }

    virtual void enviar() = 0;

    void reenviar(string nuevoReceptor)
    {
        cout << "\nReenviando notificacion...\n";
        cout << "Origen: " << receptor << endl;
        cout << "Destino: " << nuevoReceptor << endl;
        cout << "Contenido: " << contenido << endl;
    }
    void enviarAdministrador()
    {
        cout << "\nNotificacion para el administrador\n";
        enviar();
    }

    virtual ~Canal(){}
};
class Correo : public Canal
{
public:

    Correo(string r,string c) : Canal(r,c){}

    void enviar() override
    {
        cout << "\n===== CORREO ELECTRONICO =====\n";
        cout << "Correo destino : " << receptor << endl;
        cout << "Asunto         : Aviso del sistema" << endl;
        cout << "Mensaje        : " << contenido << endl;
    }
};
class MensajeTexto : public Canal
{
public:

    MensajeTexto(string r,string c) : Canal(r,c){}

    void enviar() override
    {
        cout << "\n===== MENSAJE SMS =====\n";
        cout << "Telefono : " << receptor << endl;
        cout << "Mensaje  : " << contenido << endl;
    }
};

class Notificacion : public Canal
{
public:

    Notificacion(string r,string c) : Canal(r,c){}

    void enviar() override
    {
        cout << "\n===== NOTIFICACION =====\n";
        cout << "Usuario : " << receptor << endl;
        cout << "Codigo  : " << contenido << endl;
    }
};

int main()
{
    Canal *correo = new Correo(
        "soporte@hospitalcentral.com",
        "Su cita ha sido confirmada para el lunes."
    );

    Canal *sms = new MensajeTexto(
        "987654321",
        "Recuerde asistir 15 minutos antes de su cita."
    );

    Canal *push = new Notificacion(
        "Paciente_2026",
        "COD-456789"
    );

    cout << "========== ENVIO DE NOTIFICACIONES ==========\n";

    correo->enviar();
    sms->enviar();
    push->enviar();

    cout << "\n========== REENVIO ==========\n";
    correo->reenviar("recepcion@hospitalcentral.com");

    cout << "\n========== MENSAJE PRIORITARIO ==========\n";
    sms->enviarAdministrador();

    delete correo;
    delete sms;
    delete push;

    return 0;
}