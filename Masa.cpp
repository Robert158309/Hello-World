#include <iostream>

#include "Utils.h"
#include "Masa.h"

/*Funciones de conversion de unidades de Masa */
void masa() {

    int opcion;

    do {

        cambiarColor(14);

        std::cout << "Seleccione la unidad de medida a convertir:\n";
        std::cout << "1. Gramos\n";
        std::cout << "2. Onzas\n";
        std::cout << "3. Kilogramos\n";
        std::cout << "4. Libras\n";
        std::cout << "5. Toneladas\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            gramos();
            break;

        case 2:

            onzas();
            break;

        case 3:

            kilogramos();
            break;

        case 4:

            libras();
            break;

        case 5:

            toneladas();
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

/*Funciones de conversion de unidades de Masa*/
void gramos() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Onzas\n";
        std::cout << "2. Kilogramos\n";
        std::cout << "3. Libras\n";
        std::cout << "4. Toneladas\n";
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

            resultado = conversor(valor, 0.035274);

            std::cout << valor << " gramos son " << resultado << " onzas\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.001);

            std::cout << valor << " gramos son " << resultado << " kilogramos\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00220462);

            std::cout << valor << " gramos son " << resultado << " libras\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000001);

            std::cout << valor << " gramos son " << resultado << " toneladas\n";

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

void onzas() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Gramos\n";
        std::cout << "2. Kilogramos\n";
        std::cout << "3. Libras\n";
        std::cout << "4. Toneladas\n";
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

            resultado = conversor(valor, 28.3495);

            std::cout << valor << " onzas son " << resultado << " gramos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0283495);

            std::cout << valor << " onzas son " << resultado << " kilogramos\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0625);

            std::cout << valor << " onzas son " << resultado << " libras\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0000283495);

            std::cout << valor << " onzas son " << resultado << " toneladas\n";

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

void kilogramos() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Gramos\n";
        std::cout << "2. Onzas\n";
        std::cout << "3. Libras\n";
        std::cout << "4. Toneladas\n";
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

            resultado = conversor(valor, 1000);

            std::cout << valor << " kilogramos son " << resultado << " gramos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 35.274);

            std::cout << valor << " kilogramos son " << resultado << " onzas\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 2.20462);

            std::cout << valor << " kilogramos son " << resultado << " libras\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.001);

            std::cout << valor << " kilogramos son " << resultado << " toneladas\n";

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

void libras() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Gramos\n";
        std::cout << "2. Onzas\n";
        std::cout << "3. Kilogramos\n";
        std::cout << "4. Toneladas\n";
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

            resultado = conversor(valor, 453.592);

            std::cout << valor << " libras son " << resultado << " gramos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 16);

            std::cout << valor << " libras son " << resultado << " onzas\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.453592);

            std::cout << valor << " libras son " << resultado << " kilogramos\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000453592);

            std::cout << valor << " libras son " << resultado << " toneladas\n";

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

void toneladas() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Gramos\n";
        std::cout << "2. Onzas\n";
        std::cout << "3. Kilogramos\n";
        std::cout << "4. Libras\n";
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

            resultado = conversor(valor, 1000000);

            std::cout << valor << " toneladas son " << resultado << " gramos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 35274);

            std::cout << valor << " toneladas son " << resultado << " onzas\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 1000);

            std::cout << valor << " toneladas son " << resultado << " kilogramos\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 2204.62);

            std::cout << valor << " toneladas son " << resultado << " libras\n";

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