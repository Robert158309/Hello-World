#include <iostream>

#include "Utils.h"
#include "Temperatura.h"

/*Funciones de conversion de unidades de Temperatura*/
void temperatura() {

    int opcion;

    do {

        cambiarColor(14);

        std::cout << "Seleccione la unidad de medida a convertir:\n";
        std::cout << "1. Celcius\n";
        std::cout << "2. Fahrenheit\n";
        std::cout << "3. Kelvin\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            celcius();
            break;

        case 2:

            fahrenheit();
            break;

        case 3:

            kelvin();
            break;

        case 0:

            std::cout << "Volviendo al menu anterior...\n";
            break;

        default:

            std::cout << "Opcion no valida\n";
            break;

        }

    } while (opcion != 0);

}

/*Funciones de conversion de unidades de Temperatura*/
void celcius() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Fahrenheit\n";
        std::cout << "2. Kelvin\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = (valor * 9 / 5) + 32;

            std::cout << valor << " grados Celsius son " << resultado << " grados Fahrenheit\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = valor + 273.15;

            std::cout << valor << " grados Celsius son " << resultado << " Kelvin\n";

            break;

        case 0:

            std::cout << "Volviendo al menu anterior...\n";
            break;

        default:

            std::cout << "Opcion no valida\n";
            break;

        }

    } while (opcion != 0);

}

void fahrenheit() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(19);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Celsius\n";
        std::cout << "2. Kelvin\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = (valor - 32) * 5 / 9;

            std::cout << valor << " grados Fahrenheit son " << resultado << " grados Celsius\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = (valor - 32) * 5 / 9 + 273.15;

            std::cout << valor << " grados Fahrenheit son " << resultado << " Kelvin\n";

            break;

        case 0:

            std::cout << "Volviendo al menu anterior...\n";
            break;

        default:

            std::cout << "Opcion no valida\n";
            break;

        }

    } while (opcion != 0);

}

void kelvin() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Celsius\n";
        std::cout << "2. Fahrenheit\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = valor - 273.15;

            std::cout << valor << " Kelvin son " << resultado << " grados Celsius\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = (valor - 273.15) * 9 / 5 + 32;

            std::cout << valor << " Kelvin son " << resultado << " grados Fahrenheit\n";

            break;

        case 0:

            std::cout << "Volviendo al menu anterior...\n";
            break;

        default:

            std::cout << "Opcion no valida\n";
            break;

        }

    } while (opcion != 0);

}