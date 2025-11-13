#include <iostream>
using namespace std;
// --- Ejercicios para Casa: Operadores ---
// Por favor, completa el código para cada uno de los siguientes ejercicios.
// Imprime los resultados en la consola para verificar.

// 1. Escribe un programa que solicite dos edades y muestre si tienen la misma
// edad o cuál es mayor.

// 2. Solicita un valor booleano y muestra el valor contrario.

// 3. Solicita dos números enteros. Si ambos números son positivos, muestra:
// "Ambos son positivos".
//    Si al menos uno es negativo, muestra: "Al menos uno es negativo".

// 4. Declara una variable 'x' con un valor ingresado por teclado.
//    Luego, aumenta su valor en 5 usando un operador de asignación y muéstralo.

int main() {
  // Ejercicio 1
  cout << " -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -" << endl;
  int edad1 = 12, edad2 = 26;
  (edad1 == edad2)  ? cout << "1. Son iguales" << endl
  : (edad1 > edad2) ? cout << "1. La primera edad es mayor! " << endl
                    : cout << "1. La segunda edad es mayor! " << endl;
  // Ejercicio 2
  cout << " -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -" << endl;
  bool valor = true;
  bool respuesta = !valor;
  cout << "2. La negacion del valor es: " << respuesta << endl;
  // Ejercicio 3
  cout << " -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -" << endl;
  int numero1 = 122, numero2 = 26;
  (numero1 == numero2)  ? cout << "3. Son iguales" << endl
  : (numero1 > numero2) ? cout << "3. El primer numero es mayor! " << endl
                        : cout << "3. El segundo numero es mayor! " << endl;
  // Ejercicio 4
  cout << " -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -" << endl;
  int numero = 0;
  cout << "Ingresa un entero" << endl;
  cin >> numero;

  if (typeid(numero) == typeid(int)) {
    numero += 5;
    cout << "4. Aumentado su valor en 5 la respuesta es: " << numero << endl;
  } else {
    cout << "Ingresa un entero" << endl;
  }

  return 0;
}
