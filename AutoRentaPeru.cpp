#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//clasew de la interfaz 
class Inspeccionable {
public:
    virtual void inspeccionar() = 0;
    virtual ~Inspeccionable() {}
};
//clase abstracta 
class Vehiculo : public Inspeccionable {
private:
    string placa;
protected:
    string marca;
    string modelo;
    int anio;
    float tarifaDia;
//aca hacemos el constructor
	public:
    Vehiculo(string p, string ma, string mo, int a, float tarifa) {
        placa = p;
        marca = ma;
        modelo = mo;
        setAnio(a);
        setTarifaDia(tarifa);
    }
//usamos get para la placa 
    string getPlaca() {
        return placa;
    }
//aca para marca usamos tambien getters
    string getMarca() {
        return marca;
    }
    string getModelo() {
        return modelo;
    }
    int getAnio() {
        return anio;
    }
    float getTarifaDia() {
        return tarifaDia;
    }
//en este caso usamos setters
void setMarca(string ma) {
        marca = ma;
    }
    void setModelo(string mo) {
        modelo = mo;
    }
    void setAnio(int a) {
        time_t tiempo = time(0);
        tm* fecha = localtime(&tiempo);
        int anioActual = 1900 + fecha->tm_year;
        if (a > 0 && a <= anioActual) {
            anio = a;
        } else {
            cout << "----OJO:anio no valido----" << endl;
            anio = anioActual;
        }
    }
    void setTarifaDia(float tarifa) {
        if (tarifa > 0) {
            tarifaDia = tarifa;
        } else {
            cout << "OJITO:tarifa no valida" << endl;tarifaDia = 0;
        }
    }
//aqui usaremos metodo abstracto
    virtual float calcularCosto(int dias) = 0;
//usaremos sobrecargass     
    float calcularCosto(int dias, float descuento) {
        float costo = tarifaDia * dias;
        return costo - (costo * descuento);
    }
//mostramos toda la informacion
    virtual void mostrarInformacion() {
        cout << "Placa: " << placa << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Anio: " << anio << endl;
        cout << "Tarifa por dia S/: " << tarifaDia << endl;
    }
    virtual ~Vehiculo() {}
};
//clase de autmovil 
class Automovil : public Vehiculo {
public:
    Automovil(string p, string ma, string mo, int a, float tarifa) : Vehiculo(p, ma, mo, a, tarifa) {
    }
//usamos sobreescritura
    float calcularCosto(int dias) override {
    return tarifaDia * dias;
    }
    void inspeccionar() override {
        cout << "Inspeccion del automovil" << endl;
        cout << "Revisando danos y el nivel de combustible." << endl;
    }
};
//clse de la motocicleta
class Motocicleta : public Vehiculo {
public:
    Motocicleta(string p, string ma, string mo, int a, float tarifa): Vehiculo(p, ma, mo, a, tarifa) {
    }
//usamos tmbn sibreescritura
    float calcularCosto(int dias) override {  
		float costo = tarifaDia * dias;
//hacemos el descuento del 10 %
        return costo - (costo * 0.10);
    }
    void inspeccionar() override {
        cout << "Inspeccion de la motocicleta" << endl;
        cout << "Revisando danos y nivel de combustible." << endl;
    }
};
//clse de la camioneta 
class Camioneta : public Vehiculo {
public:
    Camioneta(string p, string ma, string mo, int a, float tarifa): Vehiculo(p, ma, mo, a, tarifa) {
    }
//su sobreescritura
    float calcularCosto(int dias) override {
        float costo = tarifaDia * dias;
//hacemos un recargo del 20%
		        return costo + (costo * 0.20);
    }
    void inspeccionar() override {
        cout << "Inspeccion de la camioneta" << endl;
        cout << "Revisando danos, combustible y zona de carga" << endl;
    }
};
int main() {
//creamos los objetos
    Automovil auto1("ABC-123","Toyota","Corolla",2024,100);
    Motocicleta moto1("MOT-456","Honda","CB190R",2023,50);
    Camioneta camioneta1("CAM-789","Ford","Ranger",2025,150);
//ejemplo de polimoprfismo
    Vehiculo* vehiculos[3];
    vehiculos[0] = &auto1;
    vehiculos[1] = &moto1;
    vehiculos[2] = &camioneta1;
    for (int i = 0; i < 3; i++) {
        cout << "\n--------------_________----------" << endl;
        vehiculos[i]->mostrarInformacion();
        cout << "Costo por 5 dias: S/ "<< vehiculos[i]->calcularCosto(5)<< endl;
        vehiculos[i]->inspeccionar();
    }
//ejemplo de sobrecarga
    cout << "\n--------------_________----------" << endl;
    cout << "Costo del automovil con descuento especial: S/ "<< auto1.Vehiculo::calcularCosto(5, 0.15)<< endl;
    return 0;
};