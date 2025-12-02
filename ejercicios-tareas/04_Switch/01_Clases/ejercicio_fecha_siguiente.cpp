/*
 * EJERCICIO 3: FECHA DEL DÍA SIGUIENTE CON SWITCH
 *
 * ENUNCIADO:
 * Dada una fecha válida, determina la fecha del día siguiente.
 *
 * REQUISITOS:
 * - Utilizar la sentencia switch para manejar los diferentes meses
 * - Solicitar al usuario: día, mes y año
 * - Validar que la fecha ingresada sea válida
 * - Considerar los diferentes días por mes (28/29 para febrero, 30 para
 * algunos, 31 para otros)
 * - Manejar el cambio de mes (ej: 31 de enero → 1 de febrero)
 * - Manejar el cambio de año (ej: 31 de diciembre → 1 de enero del siguiente
 * año)
 * - Considerar años bisiestos para febrero
 * - Mostrar la fecha del día siguiente en formato DD/MM/YYYY
 *
 * CASOS ESPECIALES:
 * - Fin de mes: cambiar al día 1 del siguiente mes
 * - Fin de año: cambiar al día 1 de enero del año siguiente
 * - 28 de febrero en año no bisiesto: 1 de marzo
 * - 29 de febrero en año bisiesto: 1 de marzo
 */

#include <iostream>
using namespace std;

int main() {

  cout << "EJERCICIO 3: FECHA DEL DÍA SIGUIENTE CON SWITCH" << endl;
  cout << "================================================" << endl;
  int dia, mes, anio, bisiesto, diasMaximos, diaSiguiente, mesSiguiente,
      anioSiguiente;
  cout << "Ingrese el dia: " << endl;
  cin >> dia;
  cout << "Ingrese el mes: " << endl;
  cin >> mes;
  cout << "Ingrese el anio" << endl;
  cin >> anio;

  if (mes < 1 || mes > 12) {
    cout << "Error: Mes invalido" << endl;
    return 0;
  }

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
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
      diasMaximos = 29;
    } else {
      diasMaximos = 28;
    }
    break;
  }

  if (dia < 1 || dia > diasMaximos) {
    cout << "Error: Dia invalido para el mes ingresado" << endl;
    return 0;
  }

  if (dia < diasMaximos) {
    diaSiguiente = dia + 1;
    mesSiguiente = mes;
    anioSiguiente = anio;
  } else {
    diaSiguiente = 1;
    if (mes == 12) {
      mesSiguiente = 1;
      anioSiguiente = anio + 1;
    } else {
      mesSiguiente = mes + 1;
      anioSiguiente = anio;
    }
  }

  cout << "La fecha siguiente es: " << diaSiguiente << " / " << mesSiguiente
       << " / " << anioSiguiente << endl;
  return 0;
}
