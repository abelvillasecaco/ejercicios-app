/*
Ejercicio 4: Dadas 3 longitudes, comprueba si pueden formar un triángulo. Luego,
clasifica el tipo de triángulo es según sus lados.
*/

#include <iostream>
using namespace std;

int main() {
  double lado1, lado2, lado3;

  cout << "Ingrese el primer lado: ";
  cin >> lado1;
  cout << "Ingrese el segundo lado: ";
  cin >> lado2;
  cout << "Ingrese el tercer lado: ";
  cin >> lado3;

  if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
    cout << "Los lados deben ser positivos" << endl;
    return -1;
  }

  if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
    if (lado1 == lado2 && lado2 == lado3) {
      cout << "Es un triangulo equilatero" << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
      cout << "Es un triangulo isosceles" << endl;
    } else {
      cout << "Es un triangulo escaleno" << endl;
    }
  } else {
    cout << "No pueden formar un triangulo" << endl;
  }

  return 0;
}
