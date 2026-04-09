#include <iostream>
#include "Utils.h" // Archivo de utilidades
#include "CalculadoraSimple.h" // Archivo de la calculadora simple

/*Funciones Calculadora Simple*/
void calculadora_simple() {

    int opcion;

    do {

        cambiarColor(11); // azul

        std::cout << "-- Calculadora Simple --\n";
        std::cout << "1. Suma\n";
        std::cout << "2. Resta\n";
        std::cout << "3. Multiplicacion\n";
        std::cout << "4. Division\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un numero valido: ";
        }

        switch (opcion) {

        case 1: {

            double a, b;

            std::cout << "Ingrese el primer numero: ";
            std::cin >> a;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> b;

            double res = suma(a, b);

            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 2: {

            double a, b;

            std::cout << "Ingrese el primer numero: ";
            std::cin >> a;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> b;

            double res = resta(a, b);

            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 3: {

            double a, b;

            std::cout << "Ingrese el primer numero: ";
            std::cin >> a;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> b;

            double res = multiplicacion(a, b);

            std::cout << "El resultado es: " << res << "\n";

            break;

        }
        case 4: {

            double a, b;

            std::cout << "Ingrese el primer numero: ";
            std::cin >> a;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> b;

            if (b == 0) {
                std::cout << "Error: Division por cero no es permitida.\n";
                break;
            }

            double res = division(a, b);

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

/*Funciones Basicas de la Calculadora Simple*/
double suma(double a, double b) {

    return a + b;

}

double resta(double a, double b) {

    return a - b;

}

double multiplicacion(double a, double b) {

    return a * b;

}

double division(double a, double b) {

    return a / b;

}
