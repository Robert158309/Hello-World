#include <iostream>

#include "Utils.h"
#include "Area.h"

/*Funciones de conversion de unidades de Area*/
void area() {

    int opcion;

    do {

        cambiarColor(14);

        std::cout << "Seleccione la unidad de medida a convertir:\n";
        std::cout << "1. Acres\n";
        std::cout << "2. Hectareas\n";
        std::cout << "3. Pies\n";
        std::cout << "4. Yardas\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            acres();
            break;

        case 2:

            hectareas();
            break;

        case 3:

            pies();
            break;

        case 4:

            yardas();
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

/*Funciones de conversion de unidades de Area*/
void acres() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Hectareas\n";
        std::cout << "2. Pies\n";
        std::cout << "3. Yardas\n";
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

            resultado = conversor(valor, 0.404686);

            std::cout << valor << " acres son " << resultado << " hectareas\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 43560);

            std::cout << valor << " acres son " << resultado << " pies\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 4840);

            std::cout << valor << " acres son " << resultado << " yardas\n";

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

void hectareas() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Acres\n";
        std::cout << "2. Pies\n";
        std::cout << "3. Yardas\n";
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

            resultado = conversor(valor, 2.47105);

            std::cout << valor << " hectareas son " << resultado << " acres\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 107639);

            std::cout << valor << " hectareas son " << resultado << " pies\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 11960);

            std::cout << valor << " hectareas son " << resultado << " yardas\n";

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

void pies() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Acres\n";
        std::cout << "2. Hectareas\n";
        std::cout << "3. Yardas\n";
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

            resultado = conversor(valor, 0.0000229568);

            std::cout << valor << " pies son " << resultado << " acres\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0000092903);

            std::cout << valor << " pies son " << resultado << " hectareas\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.111111);

            std::cout << valor << " pies son " << resultado << " yardas\n";
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

void yardas() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Acres\n";
        std::cout << "2. Hectareas\n";
        std::cout << "3. Pies\n";
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

            resultado = conversor(valor, 0.000206612);

            std::cout << valor << " yardas son " << resultado << " acres\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0000836127);

            std::cout << valor << " yardas son " << resultado << " hectareas\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 9);

            std::cout << valor << " yardas son " << resultado << " pies\n";

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