#include <iostream>
#include <tuple>

using namespace std;

int main() {

    tuple<string, string, string> examen1 =
        make_tuple(
            "Examen de Programacion",
            "15 de julio",
            "08:00 a.m."
        );
    tuple<string, string, string> examen2 =
        make_tuple(
            "Examen de Redes",
            "18 de julio",
            "02:00 p.m."
        );
    cout << "========== CRONOGRAMA ==========\n\n";
    cout << "Primer evento\n";
    cout << "Actividad : " << get<0>(examen1) << endl;
    cout << "Fecha     : " << get<1>(examen1) << endl;
    cout << "Hora      : " << get<2>(examen1) << endl;
    cout << "\nSegundo evento\n";
    cout << "Actividad : " << get<0>(examen2) << endl;
    cout << "Fecha     : " << get<1>(examen2) << endl;
    cout << "Hora      : " << get<2>(examen2) << endl;
    return 0;
}