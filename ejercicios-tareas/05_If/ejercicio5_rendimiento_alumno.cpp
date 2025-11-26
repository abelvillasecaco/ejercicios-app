/*
Ejercicio 5: Escribe un algoritmo que lea el promedio de un alumno y diga cuál
es su rendimiento, considera: datos erróneos, rendimiento pésimo, rendimiento
deficiente, rendimiento regular, rendimiento bueno.
*/

#include <iostream>
using namespace std;

int main() {
  double promedio;

  cout << "Ingrese el promedio del alumno: ";
  cin >> promedio;

  if (promedio < 0 || promedio > 20) {
    cout << "Datos erroneos" << endl;
  } else if (promedio <= 5) {
    cout << "Rendimiento pesimo" << endl;
  } else if (promedio <= 10) {
    cout << "Rendimiento deficiente" << endl;
  } else if (promedio <= 15) {
    cout << "Rendimiento regular" << endl;
  } else {
    cout << "Rendimiento bueno" << endl;
  }

  return 0;
}
