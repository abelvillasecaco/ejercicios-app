#include <cmath> // Necesario para la potencia en el ejercicio 2
#include <iostream>
#include <string>

using namespace std;

// --- Ejercicios para Casa: Sentencia Switch ---
// 1. Escribe un programa que lea un número entre 1 y 7, y que
//    muestre el nombre del día de la semana correspondiente.
//
// 2. Crea un programa que simule un menú de opciones para
//    realizar operaciones aritméticas simples: suma, resta,
//    multiplicación, división y potencia.
//
// 3. Ingresa el día y mes de nacimiento de una persona y di
//    cuál es su signo del zodiaco.
//
// 4. Lee un día y mes cualquiera y determina la estación a la
//    que pertenece (para el hemisferio norte).
//
// 5. Lee un mes y año y determina cuántos días tiene ese mes.
//    Considera años bisiestos.
//
// 6. Lee tres números que representen el día, el mes y el año,
//    y di si forman una fecha correcta. Considera años bisiestos.

int main() {
  int ejercicio;
  cout << "--- EJERCICIOS NOMADA C++ ---" << endl;
  cout << "1. Dia de la semana" << endl;
  cout << "2. Calculadora basica" << endl;
  cout << "3. Signo del zodiaco" << endl;
  cout << "4. Estacion del anio" << endl;
  cout << "5. Dias de un mes" << endl;
  cout << "6. Validar una fecha" << endl;
  cout << "-----------------------------" << endl;
  cout << "Ingresa que ejercicio quieres ejecutar (1-6): ";
  cin >> ejercicio;
  cout << endl;

  switch (ejercicio) {
  case 1: {
    cout << "--- Ejercicio 1: Dia de la semana ---" << endl;
    int diaSemana;
    cout << "Introduce un numero del 1 al 7: ";
    cin >> diaSemana;

    switch (diaSemana) {
    case 1:
      cout << "Lunes" << endl;
      break;
    case 2:
      cout << "Martes" << endl;
      break;
    case 3:
      cout << "Miercoles" << endl;
      break;
    case 4:
      cout << "Jueves" << endl;
      break;
    case 5:
      cout << "Viernes" << endl;
      break;
    case 6:
      cout << "Sabado" << endl;
      break;
    case 7:
      cout << "Domingo" << endl;
      break;
    default:
      cout << "Numero no valido." << endl;
      break;
    }
    break;
  }

  case 2: {
    cout << "--- Ejercicio 2: Calculadora basica ---" << endl;
    int operacion;
    double num1, num2;
    cout << "Selecciona la operacion:" << endl;
    cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia"
         << endl;
    cout << "Opcion: ";
    cin >> operacion;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    switch (operacion) {
    case 1:
      cout << "Resultado: " << num1 + num2 << endl;
      break;
    case 2:
      cout << "Resultado: " << num1 - num2 << endl;
      break;
    case 3:
      cout << "Resultado: " << num1 * num2 << endl;
      break;
    case 4:
      if (num2 != 0) {
        cout << "Resultado: " << num1 / num2 << endl;
      } else {
        cout << "Error: No se puede dividir por cero." << endl;
      }
      break;
    case 5:
      cout << "Resultado: " << pow(num1, num2) << endl;
      break;
    default:
      cout << "Operacion no valida." << endl;
      break;
    }
    break;
  }

  case 3: {
    cout << "--- Ejercicio 3: Signo del zodiaco ---" << endl;
    int dia, mes;
    string signo = "";
    cout << "Ingresa tu dia de nacimiento: ";
    cin >> dia;
    cout << "Ingresa tu mes de nacimiento (numero): ";
    cin >> mes;

    switch (mes) {
    case 1:
      signo = (dia < 20) ? "Capricornio" : "Acuario";
      break;
    case 2:
      signo = (dia < 19) ? "Acuario" : "Piscis";
      break;
    case 3:
      signo = (dia < 21) ? "Piscis" : "Aries";
      break;
    case 4:
      signo = (dia < 20) ? "Aries" : "Tauro";
      break;
    case 5:
      signo = (dia < 21) ? "Tauro" : "Geminis";
      break;
    case 6:
      signo = (dia < 21) ? "Geminis" : "Cancer";
      break;
    case 7:
      signo = (dia < 23) ? "Cancer" : "Leo";
      break;
    case 8:
      signo = (dia < 23) ? "Leo" : "Virgo";
      break;
    case 9:
      signo = (dia < 23) ? "Virgo" : "Libra";
      break;
    case 10:
      signo = (dia < 23) ? "Libra" : "Escorpio";
      break;
    case 11:
      signo = (dia < 22) ? "Escorpio" : "Sagitario";
      break;
    case 12:
      signo = (dia < 22) ? "Sagitario" : "Capricornio";
      break;
    default:
      signo = "Fecha no valida";
      break;
    }
    cout << "Tu signo del zodiaco es: " << signo << endl;
    break;
  }

  case 4: {
    cout << "--- Ejercicio: Estacion del anio (PERU) con SWITCH ---" << endl;
    int dia, mes;
    cout << "Ingresa el dia: ";
    cin >> dia;
    cout << "Ingresa el mes: ";
    cin >> mes;

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
      cout << "Fecha no valida." << endl;
    } else {
      switch (mes) {
      case 1:
      case 2:
        cout << "La estacion es: Verano" << endl;
        break;
      case 3:
        if (dia < 20)
          cout << "La estacion es: Verano" << endl;
        else
          cout << "La estacion es: Otono" << endl;
        break;

      case 4:
      case 5:
        cout << "La estacion es: Otono" << endl;
        break;
      case 6:
        if (dia < 21)
          cout << "La estacion es: Otono" << endl;
        else
          cout << "La estacion es: Invierno" << endl;
        break;

      case 7:
      case 8:
        cout << "La estacion es: Invierno" << endl;
        break;
      case 9:
        if (dia < 23)
          cout << "La estacion es: Invierno" << endl;
        else
          cout << "La estacion es: Primavera" << endl;
        break;

      case 10:
      case 11:
        cout << "La estacion es: Primavera" << endl;
        break;
      case 12:
        if (dia < 21)
          cout << "La estacion es: Primavera" << endl;
        else
          cout << "La estacion es: Verano" << endl;
        break;
      }
    }
    break;
  }

  case 5: {
    cout << "--- Ejercicio 5: Dias de un mes ---" << endl;
    int mes, anio;
    cout << "Ingresa el mes (numero): ";
    cin >> mes;
    cout << "Ingresa el anio: ";
    cin >> anio;

    int diasDelMes;
    bool esValido = true;
    if (mes < 1 || mes > 12) {
      cout << "Mes invalido" << endl;
      return 0;
    }
    switch (mes) {

    default:
      esValido = false;
      break;
    }

    if (esValido) {
      cout << "El mes " << mes << " del anio " << anio << " tiene "
           << diasDelMes << " dias." << endl;
    } else {
      cout << "El mes ingresado no es valido." << endl;
    }
    break;
  }

  case 6: {
    cout << "--- Ejercicio 6: Validar fecha ---" << endl;
    int dia, mes, anio;
    cout << "Ingresa el dia: ";
    cin >> dia;
    cout << "Ingresa el mes: ";
    cin >> mes;
    cout << "Ingresa el anio: ";
    cin >> anio;

    int diasMaximos = 0;
    if (mes >= 1 && mes <= 12) {
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
      case 2: {
        bool esBisiesto =
            (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
        diasMaximos = esBisiesto ? 29 : 28;
        break;
      }
      }
    }

    if (diasMaximos > 0 && dia >= 1 && dia <= diasMaximos) {
      cout << "La fecha " << dia << "/" << mes << "/" << anio << " es VALIDA."
           << endl;
    } else {
      cout << "La fecha " << dia << "/" << mes << "/" << anio
           << " es NO VALIDA." << endl;
    }
    break;
  }

  default:
    cout << "Opcion no valida. Por favor, ejecuta de nuevo y elige un numero "
            "del 1 al 6."
         << endl;
    break;
  }

  cout << "\nFin del programa." << endl;
  return 0;
}
