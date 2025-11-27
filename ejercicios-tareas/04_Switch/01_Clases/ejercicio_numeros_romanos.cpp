/*
 * EJERCICIO 4: CONVERSIÓN A NÚMEROS ROMANOS CON SWITCH
 *
 * ENUNCIADO:
 * Lee un número menor a 4000 y conviértelo a números romanos.
 *
 * REQUISITOS:
 * - Utilizar la sentencia switch para manejar los diferentes valores
 * - Solicitar al usuario: un número entero (1-3999)
 * - Validar que el número esté en el rango válido
 * - Convertir el número a su representación en números romanos
 * - Utilizar el sistema de numeración romano (I, V, X, L, C, D, M)
 * - Considerar las reglas de sustracción (IV=4, IX=9, XL=40, XC=90, CD=400,
 * CM=900)
 * - Mostrar el resultado en números romanos
 *
 * SISTEMA ROMANO BÁSICO:
 * - M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1
 * - 400 = CD, 900 = CM, 4 = IV, 9 = IX, 40 = XL, 90 = XC
 *
 * PISTA DE ALGORITMO:
 * Puede usar arrays o switch case para las conversiones
 * Ej: switch(centenas){ case 1: resultado += "C"; break; ... }
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

  cout << "EJERCICIO 4: CONVERSIÓN A NÚMEROS ROMANOS CON SWITCH" << endl;
  cout << "=====================================================" << endl;

  int num;
  string resultado = "";

  cout << "Ingresa número menor a 4000" << endl;
  cin >> num;

  int millares = num / 1000;
  cout << millares << endl;
  int centenas = (num % 1000) / 100;
  cout << centenas << endl;
  int decenas = (num % 100) / 10;
  cout << decenas << endl;
  int unidades = num % 10;
  cout << unidades << endl;

  switch (millares) {
  case 1:
    resultado += "M";
    break;
  case 2:
    resultado += "MM";
    break;
  case 3:
    resultado += "MMM";
    break;
  }

  switch (centenas) {
  case 1:
    resultado += "C";
    break;
  case 2:
    resultado += "CC";
    break;
  case 3:
    resultado += "CCC";
    break;
  case 4:
    resultado += "CD";
    break;
  case 5:
    resultado += "D";
    break;
  case 6:
    resultado += "DC";
    break;
  case 7:
    resultado += "DCC";
    break;
  case 8:
    resultado += "DCCC";
    break;
  case 9:
    resultado += "CM";
    break;
  }

  switch (decenas) {
  case 1:
    resultado += "X";
    break;
  case 2:
    resultado += "XX";
    break;
  case 3:
    resultado += "XXX";
    break;
  case 4:
    resultado += "XL";
    break;
  case 5:
    resultado += "L";
    break;
  case 6:
    resultado += "LX";
    break;
  case 7:
    resultado += "LXX";
    break;
  case 8:
    resultado += "LXXX";
    break;
  case 9:
    resultado += "XC";
    break;
  }

  switch (unidades) {
  case 1:
    resultado += "I";
    break;
  case 2:
    resultado += "II";
    break;
  case 3:
    resultado += "III";
    break;
  case 4:
    resultado += "IV";
    break;
  case 5:
    resultado += "V";
    break;
  case 6:
    resultado += "VI";
    break;
  case 7:
    resultado += "VII";
    break;
  case 8:
    resultado += "VIII";
    break;
  case 9:
    resultado += "IX";
    break;
  }

  cout << "El numero " << num << " en romanos es " << resultado << endl;

  return 0;
}
