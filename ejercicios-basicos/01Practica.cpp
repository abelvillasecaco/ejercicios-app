#include <iostream> // Para entrada/salida (cout, endl)
#include <limits> // Para std::numeric_limits (aunque no se usa directamente en los ejercicios, es útil)
#include <string> // Para usar std::string

// Usar el espacio de nombres estándar para no tener que escribir std::
using namespace std;

int main() {
  cout << "--- Tanda de Ejercicios #2 ---" << endl << endl;

  // 1. Entero Largo (`long long`):
  //    Declara una variable llamada `poblacionMundial` de tipo `long long` y
  //    asígnale un valor aproximado de la población mundial. Imprime su valor.
  long long poblacionMundial = 8000000000;
  cout << "01. Numero long long población mundial: " << poblacionMundial
       << endl;

  cout << "----------------------------------------" << endl;

  // 2. Declaración de Constantes (`const`):
  //    Declara una **constante** de tipo `double` llamada `PI` y asígnale el
  //    valor `3.14159`. Intenta cambiar su valor en la línea siguiente y
  //    observa el error que te da el compilador. Luego, comenta o borra esa
  //    línea para que el programa funcione y muestra el valor de `PI`.
  const double PI = 3.14159;
  // PI = 3.1416; // El compolador nos da este error en esta linea: error:
  //  assignment of read-only variable ‘PI’
  cout << "02. El valor de la constante PI es: " << PI << endl;
  cout << "----------------------------------------" << endl;

  // 3. Cadena de Texto (`string`):
  //    Declara una variable de tipo `string` llamada `nombreCompleto` y
  //    asígnale tu nombre y apellido. Imprime el resultado.
  string nombreCompleto = "Aron Choque Chauca";
  cout << "03. Mi nombre completo es: " << nombreCompleto << endl;
  cout << "----------------------------------------" << endl;

  // 4. División con Tipos Mixtos:
  //    Declara una variable `double` llamada `presupuesto` con valor `100.0` y
  //    una variable `int` llamada `participantes` con valor `3`. Calcula cuánto
  //    le toca a cada participante (`presupuesto / participantes`) y guarda el
  //    resultado en una variable `double`. Muestra el resultado para ver los
  //    decimales.
  double presupuesto = 100.0;
  int participantes = 3;
  double presupuestoPorParticipante = presupuesto / participantes;
  cout << "04. El presupuesto por participante es: "
       << presupuestoPorParticipante << endl;
  cout << "----------------------------------------" << endl;

  // 5. Operador Módulo (`%`) para Pares e Impares:
  //    Declara una variable `int` llamada `numero` con cualquier valor.
  //    Usa el operador módulo (`% 2`) y una estructura `if-else` para
  //    determinar si el número es par o impar. Muestra en consola "El número es
  //    par" o "El número es impar" según corresponda.
  int numero = 143;
  if (numero % 2 == 0) {
    cout << "05. El numero: " << numero << " es par." << endl;
  } else {
    cout << "05. El numero: " << numero << " es impar." << endl;
  }
  cout << "----------------------------------------" << endl;

  // 6. Conversión Explícita (Casting):
  //    Declara una variable `double` llamada `gravedad` con el valor `9.81`.
  //    Crea una variable `int` llamada `gravedadEntera` y asígnale el valor de
  //    `gravedad` pero convertido explícitamente a `int`. Muestra ambos valores
  //    para ver cómo se truncaron los decimales.
  double gravedad = 9.81;
  int gravedadEntera = static_cast<int>(gravedad);
  cout << "06. El valor con decimales de la gravedad es: " << gravedad << endl;
  cout << "06. El valor entero de la gravedad es: " << gravedadEntera << endl;
  cout << "----------------------------------------" << endl;

  // 7. Operadores Lógicos (`&&`):
  //    Declara dos variables `bool`: `esMayorDeEdad` (asígnale `true`) y
  //    `tieneIdentificacion` (asígnale `false`). Escribe una condición `if` que
  //    use el operador `&&` (AND) para mostrar "Acceso concedido" solo si ambas
  //    variables son `true`. En caso contrario, muestra "Acceso denegado`.
  bool esMayorDeEdad = true;
  bool tieneIdentificacion = false;
  if (esMayorDeEdad && tieneIdentificacion) {
    cout << "07. Acceso concedido" << endl;
  } else {
    cout << "07. Acceso denegado" << endl;
  }
  cout << "----------------------------------------" << endl;

  // 8. Aritmética de Caracteres:
  //    Declara una variable `char` llamada `letra` con el valor `'B'`.
  //    Crea una nueva variable `char` llamada `letraSiguiente` y asígnale el
  //    resultado de `letra + 1`. Muestra el valor de `letraSiguiente` (debería
  //    ser `'C'`).
  char letra = 'B';
  char letraSiguiente = letra + 1;
  cout << "8. La letra siguiente es: " << letraSiguiente << endl;
  cout << "----------------------------------------" << endl;

  // 9. Operador Ternario:
  //    Declara dos variables `int`, `a` y `b`, con valores diferentes.
  //    Usa el operador ternario (`condicion ? valor_si_true : valor_si_false`)
  //    para encontrar cuál de los dos es menor y asigna ese valor a una tercera
  //    variable `int` llamada `minimo`. Imprime el valor de `minimo`.
  int a = 10, b = 2, minimo = 0;
  minimo = a < b ? a : b;
  cout << "9. El valor minimo es: " << minimo << endl;
  cout << "----------------------------------------" << endl;

  // 10. Entero Sin Signo (`unsigned int`):
  //     Declara una variable de tipo `unsigned int` llamada
  //     `distanciaPositiva`. Intenta asignarle un valor negativo (ej. `-10`) y
  //     muestra el valor que realmente almacena la variable para observar el
  //     comportamiento de "vuelta" o *wrap-around*.
  unsigned int distanciaPositiva = -50;
  cout << "10. Valor de unsigned: " << distanciaPositiva << endl;
  cout << "----------------------------------------" << endl;

  return 0; // Indica que el programa finalizó correctamente
}
