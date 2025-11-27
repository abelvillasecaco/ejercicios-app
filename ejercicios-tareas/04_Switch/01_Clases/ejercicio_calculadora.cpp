/*
 * EJERCICIO 1: CALCULADORA CON SENTENCIA SWITCH
 *
 * ENUNCIADO:
 * Construye una calculadora que lea dos números y un operador,
 * efectúa la operación indicada. La calculadora debe ser capaz de
 * realizar las siguientes operaciones: suma, resta, multiplicación,
 * división y potencia.
 *
 * REQUISITOS:
 * - Utilizar la sentencia switch para seleccionar la operación
 * - Solicitar al usuario: primer número, segundo número y operador
 * - Operadores posibles: +, -, *, /, ^ (potencia)
 * - Manejar casos especiales: división por cero, operador inválido
 * - Mostrar el resultado de la operación
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  cout << "EJERCICIO 1: CALCULADORA CON SWITCH" << endl;
  cout << "====================================" << endl;
  float primerNumero, segundoNumero, resultado;
  char operador;

  cout << "Introduce primer numero: " << endl;
  cin >> primerNumero;
  cout << "Introduce primer numero: " << endl;
  cin >> segundoNumero;
  cout << "Introduce operacion(+,-,*,/,^): " << endl;
  cin >> operador;

  switch (operador) {
  case '+':
    resultado = primerNumero + segundoNumero;
    cout << "El resultado es: " << resultado << endl;
    break;
  case '-':
    resultado = primerNumero - segundoNumero;
    cout << "El resultado es: " << resultado << endl;
    break;
  case '*':
    resultado = primerNumero * segundoNumero;
    cout << "El resultado es: " << resultado << endl;
    break;
  case '/':
    resultado = primerNumero / segundoNumero;
    cout << "El resultado es: " << resultado << endl;
    break;
  case '^':
    resultado = pow(primerNumero, segundoNumero);
    cout << "El resultado es: " << resultado << endl;
    break;
  default:
    cout << "Introduce operador valido" << endl;
    break;
  }
  return 0;
}
