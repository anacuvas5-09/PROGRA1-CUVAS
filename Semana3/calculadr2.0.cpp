#include <iostream>
using namespace std;

int suma(int x, int y){
    return x + y;
}
int resta(int x, int y){
    return x - y;
}
int multiplicacion(int x, int y){
    return x * y;
}
float division(float x, float y){
    return x / y;
}
int main(){
    int opcion, num1, num2;
    char continuar;
    do{
        cout << "\n====== CALCULADORA ======\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        switch(opcion){

            case 1:
                cout << "Resultado: " << suma(num1, num2) << endl;
                break;

            case 2:
                cout << "Resultado: " << resta(num1, num2) << endl;
                break;

            case 3:
                cout << "Resultado: " << multiplicacion(num1, num2) << endl;
                break;

            case 4:
                if(num2 == 0){
                    cout << "No se puede dividir entre cero." << endl;
                }else{
                    cout << "Resultado: " << division(num1, num2) << endl;
                }
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

        cout << "\n¿Desea realizar otra operacion? (S/N): ";
        cin >> continuar;

    }while(continuar == 'S' || continuar == 's');

    cout << "\nGracias por usar la calculadora" << endl;

    return 0;
}