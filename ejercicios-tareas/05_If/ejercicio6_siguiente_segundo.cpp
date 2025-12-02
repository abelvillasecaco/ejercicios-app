/*
Ejercicio 6: Dada la hora del día en horas, minutos y segundos, encuentre la
hora del siguiente segundo.
*/

#include <iostream>
using namespace std;

int main() {
  int horas, minutos, segundos;

  cout << "Ingrese la hora (0-23): ";
  cin >> horas;
  cout << "Ingrese los minutos (0-59): ";
  cin >> minutos;
  cout << "Ingrese los segundos (0-59): ";
  cin >> segundos;

  if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 &&
      segundos >= 0 && segundos <= 59) {
    segundos++;

    if (segundos == 60) {
      segundos = 0;
      minutos++;

      if (minutos == 60) {
        minutos = 0;
        horas++;

        if (horas == 24) {
          horas = 0;
        }
      }
    }
    cout << "El siguiente segundo es: " << horas << ":" << minutos << ":"
         << segundos << endl;
  } else {
    cout << "Introduce hora valida!" << endl;
  }

  return 0;
}
