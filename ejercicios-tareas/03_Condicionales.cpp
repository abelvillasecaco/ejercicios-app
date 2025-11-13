#include <iostream>
using namespace std;

// --- Ejercicios para Casa: Condicionales ---
// Por favor, completa el código para cada uno de los siguientes ejercicios.
// Imprime los resultados en la consola para verificar.

// 1. Escribe un programa que solicite la edad de una persona y
//    determine si es mayor de edad (18 años o más) o no.

// 2. Crea un programa que pida la temperatura de una ciudad y
//    determine si hace frío (menos de 10 grados), templado
//    (entre 10 y 25 grados) o caliente (más de 25 grados).

// 3. Escribe un algoritmo que lea dos números y determine cómo
//    es uno respecto al otro (menor, igual o mayor).

// 4. Encuentra el mayor valor de tres números dados.
// < Imprime en consola >

int main() {
  // Ejercicio 1
  int edad = 0;
  cout << "Ingrese su edad: " << endl;
  cin >> edad;
  if (edad > 18) {
    cout << "Eres mayor de edad!" << endl;
  } else if (edad < 0) {
    cout << "La edad no puede ser negativa" << endl;
  } else {
    cout << "Eres menor de edad" << endl;
  }
  // Ejercicio 2
  float temperatura = 0;
  cout << "Ingrese temperatura: " << endl;
  cin >> temperatura;
  if (temperatura < 10) {
    cout << "¡El clima es frío!" << endl;
  } else if (temperatura >= 10 && temperatura <= 25) {
    cout << "El clima es templado" << endl;
  } else {
    cout << "El clima es cálido" << endl;
  }
  // Ejercicio 3
  int numero1 = 0, numero2 = 0;
  cout << "Ingrese numero1: " << endl;
  cin >> numero1;
  cout << "Ingrese numero2: " << endl;
  cin >> numero2;
  if (numero1 > numero2) {
    cout << "Numero1 es mayor!" << endl;
  } else if (numero1 == numero2) {
    cout << "Los numeros son iguales!" << endl;
  } else {
    cout << "El numero 2 es mayor!" << endl;
  }
  // Ejercicio 4
  int numero3 = 0, mayor = 0;
  cout << "Ingrese tres numeros:" << endl;
  cin >> numero1 >> numero2 >> numero3;
  mayor = numero1;
  if (numero2 > mayor) {
    mayor = numero2;
  }
  if (numero3 > mayor) {
    mayor = numero3;
  }
  cout << "El numero mayor es: " << mayor << endl;

  return 0;
}
