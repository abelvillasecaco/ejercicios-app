/*
Ejercicio 2: Elabora un algoritmo que resuelva una ecuación de primer grado.
*/

#include <iostream>
using namespace std;

int main() {
  double a, b;

  cout << "Resuelve la ecuacion de primer grado: ax + b = 0" << endl;
  cout << "Ingrese el coeficiente a: ";
  cin >> a;
  cout << "Ingrese el coeficiente b: ";
  cin >> b;

  if (a == 0) {
    if (b == 0) {
      cout << "La ecuacion tiene infinitas soluciones!" << endl;
    } else {
      cout << "La ecuacion no tiene solucion!" << endl;
    }
  } else {
    float respuesta = -a / b;
    cout << "Respuesta es: " << respuesta << endl;
  }

  return 0;
}
