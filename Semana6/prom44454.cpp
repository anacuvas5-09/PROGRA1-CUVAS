#include <iostream>
#include <map>

using namespace std;

	int main() {
	
	    map<string, map<string, float>> alumnos;
	
	    alumnos["Ana"]["Programacion"] = 19;
	    alumnos["Ana"]["Matematica"] = 17;
	    alumnos["Ana"]["Fisica"] = 18;
	
	    alumnos["Luis"]["Programacion"] = 16;
	    alumnos["Luis"]["Matematica"] = 15;
	    alumnos["Luis"]["Fisica"] = 14;
	
	    alumnos["Carla"]["Programacion"] = 20;
	    alumnos["Carla"]["Matematica"] = 18;
	    alumnos["Carla"]["Fisica"] = 19;

    cout << "===== REPORTE DE NOTAS =====\n\n";
    for (auto persona : alumnos) {

        cout << "Alumno: " << persona.first << endl;
        float total = 0;
        for (auto curso : persona.second) {
            cout << curso.first << " -> " << curso.second << endl;
            total += curso.second;
        }
        float promedio = total / persona.second.size();
        cout << "Promedio: " << promedio << endl;
        cout << "---------------------------" << endl;
    }

    return 0;
}