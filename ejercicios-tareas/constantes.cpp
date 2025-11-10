#include <cmath>
#include <iostream>
using namespace std;

#define SALUDO "Hola Mundo"
// --- Ejercicios para Casa: Constantes ---
// Por favor, completa el código para cada uno de los siguientes ejercicios.
// Imprime los resultados en la consola para verificar.

// 1. Declara una constante entera llamada MAX_NOTAS con el valor 100.
//    Luego, imprime su valor en la consola.

// 2. Declara una constante flotante llamada PI con el valor 3.14159 usando
// 'const'. Luego, imprime su valor en la consola.

// 3. Declara una constante de carácter llamada SEPARADOR con el valor '-'.
//    Luego, imprime su valor en la consola.

// 4. Declara una constante booleana llamada ES_ADMIN con el valor 'true'.
//    Luego, imprime su valor en la consola (debería mostrar 1).

// 5. Usa la directiva #define para crear una constante de texto llamada SALUDO
// con el valor "Hola Mundo". Luego, imprime su valor en la consola.

// 6. Crea un programa que calcule e imprima el área de un círculo con radio 5.
//    Utiliza la constante PI declarada anteriormente. El área es PI * radio^2.

int main() {
  // Ejercicio 1
  const int MAX_NOTAS = 100;
  cout << "Constante MAX_NOTAS: " << MAX_NOTAS << endl;
  // Ejercicio 2
  const float PI = 3.14159;
  cout << "Constante PI: " << PI << endl;
  // Ejercicio 3
  const char SEPARADOR = '-';
  cout << "Constante SEPARADOR: " << SEPARADOR << endl;
  // Ejercicio 4
  const bool ES_ADMIN = true;
  cout << "Constante ES_ADMIN: " << ES_ADMIN << endl;
  // Ejercicio 5
  cout << "Constante SALUDO: " << SALUDO << endl;
  // Ejercicio 6
  int radio = 5;
  float area = 0;
  area = PI * pow(radio, 2);
  cout << "Area de un círculo de radio " << radio << " es " << area << endl;
  return 0;
}
