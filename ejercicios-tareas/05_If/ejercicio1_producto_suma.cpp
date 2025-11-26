/*
Ejercicio 1: Si dos números son positivos, calcule su producto; si no lo son, calcule su suma.
*/

#include <iostream>
using namespace std;

int main() {
  double num1, num2;

  cout << "Ingrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;

  if (num1 > 0 && num2 > 0) {
    cout << "Ambos numeros son positivos. El producto es: " << (num1 * num2)
         << endl;
  } else {
    cout << "No ambos numeros son positivos. La suma es: " << (num1 + num2)
         << endl;
  }

  return 0;
}
