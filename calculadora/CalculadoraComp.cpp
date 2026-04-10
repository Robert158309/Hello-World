#include <iostream>
#include <cmath>

#include "Utils.h" // Archivo de utilidades
#include "CalculadoraComp.h" // Archivo de la calculadora compuesta

/*Funciones Calculadora Compuesta*/
void calculadora_compuesta() {

    int opcion;

    do {

        cambiarColor(11); // azul

        std::cout << "-- Calculadora Compuesta --\n";

        std::cout << "1. Cubo\n";
        std::cout << "2. Cuadrado\n";
        std::cout << "3. Custom\n";
        std::cout << "4. Raiz\n";
        std::cout << "5. Promedio\n";
        std::cout << "0. Volver\n";


        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un numero valido: ";
        }

        switch (opcion) {

        case 1: {

            double res = cubo();
            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 2: {

            double res = cuadrado();
            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 3: {

            double res = custom();
            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 4: {

            double res = raiz();
            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 5: {

            double res = promedio();
            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 0:

            std::cout << "Volviendo al menu principal...\n";

            break;

        default:

            std::cout << "Opcion no valida\n";
            break;

        }

    } while (opcion != 0);
}

/*Funciones Basicas de la Calculadora Compuesta*/
double cubo() {

    double a;

    std::cout << "Ingrese el numero: ";
    std::cin >> a;
    return pow(a, 3);

}

double cuadrado() {

    double a;

    std::cout << "Ingrese el numero: ";
    std::cin >> a;
    return pow(a, 2);

}

double custom() {

    double a, b;

    std::cout << "Ingrese el numero: ";
    std::cin >> a;
    std::cout << "Ingrese la potencia: ";
    std::cin >> b;
    return pow(a, b);

}

double raiz() {

    double a;

    std::cout << "Ingrese el numero: ";
    std::cin >> a;

    if (a < 0) {
        std::cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo.\n";
        return 0;

    }

    return sqrt(a);

}

double promedio() {
    double a, b, c;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> c;
    return (a + b + c) / 3;
}
