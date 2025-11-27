/*
 * EJERCICIO 2: DÍAS DEL MES CON SENTENCIA SWITCH
 *
 * ENUNCIADO:
 * Lea un mes y año. Determina cuántos días tiene ese mes.
 *
 * REQUISITOS:
 * - Utilizar la sentencia switch para determinar los días del mes
 * - Solicitar al usuario: número del mes (1-12) y año
 * - Considerar años bisiestos para febrero (29 días)
 * - Meses con 31 días: enero, marzo, mayo, julio, agosto, octubre, diciembre
 * - Meses con 30 días: abril, junio, septiembre, noviembre
 * - Validar que el mes esté en el rango 1-12
 * - Mostrar el nombre del mes y la cantidad de días
 *
 * REGLA AÑO BISIESTO:
 * Un año es bisiesto si es divisible por 4, excepto aquellos
 * divisibles por 100 que no sean divisibles por 400.
 */

#include <iostream>
using namespace std;

int main() {
  cout << "EJERCICIO 2: DÍAS DEL MES CON SWITCH" << endl;
  cout << "======================================" << endl;
  int diasMaximos, mes, anio, bisiesto;
  cout << "Ingrese los mes: " << endl;
  cin >> mes;
  cout << "Ingrese los anio: " << endl;
  cin >> anio;

  if (mes < 1 || mes > 12) {
    cout << "Ingrese un mes valido" << endl;
    return -1;
  }
  bisiesto = ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));

  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    diasMaximos = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    diasMaximos = 30;
    break;
  case 2:
    if (bisiesto) {
      diasMaximos = 29;
    } else {
      diasMaximos = 28;
    }
    break;
  default:
    cout << "Ingresa un mes valido" << endl;
    break;
  }

  cout << "El mes " << mes << " tiene " << diasMaximos << " dias" << endl;
  return 0;
}
