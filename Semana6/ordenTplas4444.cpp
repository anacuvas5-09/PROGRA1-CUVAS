#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {

    tuple<string, int, float> alumnos[] = {
        {"Carlos", 18, 16.7},
        {"Ana", 20, 18.9},
        {"Luis", 19, 14.5},
        {"Rosa", 21, 17.8}
    };

    int cantidad = 4;

    sort(alumnos, alumnos + cantidad,
        [](tuple<string, int, float> x, tuple<string, int, float> y) {
            return get<2>(x) > get<2>(y);
        });

    cout << "===== LISTA DE ESTUDIANTES =====\n\n";

    for (int i = 0; i < cantidad; i++) {

        string nombre = get<0>(alumnos[i]);
        int edad = get<1>(alumnos[i]);
        float promedio = get<2>(alumnos[i]);

        cout << "Alumno #" << i + 1 << endl;
        cout << "Nombre   : " << nombre << endl;
        cout << "Edad     : " << edad << endl;
        cout << "Promedio : " << promedio << endl;
        cout << "--------------------------" << endl;
    }

    return 0;
}