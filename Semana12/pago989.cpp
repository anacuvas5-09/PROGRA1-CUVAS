#include <iostream>

using namespace std;

class FormaPago
{
public:

    virtual void realizarPago(double monto) = 0;

    virtual ~FormaPago(){}
};
class Efectivo : public FormaPago
{
public:

    void realizarPago(double monto) override
    {
        cout << "Pago de S/ " << monto
             << " realizado en efectivo." << endl;
    }
};

class BilleteraDigital : public FormaPago
{
public:

    void realizarPago(double monto) override
    {
        cout << "Pago de S/ " << monto
             << " realizado con billetera digital." << endl;
    }
};

class CodigoQR : public FormaPago
{
public:

    void realizarPago(double monto) override
    {
        cout << "Pago de S/ " << monto
             << " realizado mediante codigo QR." << endl;
    }
};

int main()
{
    FormaPago *metodo;

    Efectivo efectivo;
    BilleteraDigital billetera;
    CodigoQR qr;

    metodo = &efectivo;
    metodo->realizarPago(120.50);

    metodo = &billetera;
    metodo->realizarPago(89.90);

    metodo = &qr;
    metodo->realizarPago(45.00);

    return 0;
}