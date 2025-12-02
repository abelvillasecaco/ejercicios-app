/*
Ejercicio 3: Costo de una llamada telefónica. Una llamada telefónica cuesta S/.
0,5 por los primeros tres minutos o menos. Cada minuto adicional es un paso de
contador y cuesta S/. 0,1. Calcula el monto de una llamada cualquiera.
*/

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float minutos;
  int minutosRedondeados;
  double costo;

  cout << "Ingrese los minutos de la llamada: ";
  cin >> minutos;

  if (minutos <= 3 && minutos >= 0) {
    costo = 0.5;
    cout << "El consto total de la llamad es: S/" << costo << endl;
  } else {
    minutosRedondeados = ceil(minutos);
    costo = 0.5 + (minutosRedondeados - 3) * 0.1;
    cout << costo << endl;
    cout << "Costo de la llamada es: S/" << costo << endl;
  }

  return 0;
}
