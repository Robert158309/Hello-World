#include <iostream>

#include "Utils.h" // Archivo de utilidades
#include "Tiempo.h"

/*Funciones de conversion de unidades de Tiempo*/
void tiempo() {

    int opcion;

    do {

        cambiarColor(14);

        std::cout << "Seleccione la unidad de medida a convertir:\n";
        std::cout << "1. Segundos\n";
        std::cout << "2. Minutos\n";
        std::cout << "3. Horas\n";
        std::cout << "4. Dias\n";
        std::cout << "5. Semanas\n";
        std::cout << "6. Meses\n";
        std::cout << "7. Anios\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            segundos();
            break;

        case 2:

            minutos();
            break;

        case 3:

            horas();
            break;

        case 4:

            dias();
            break;

        case 5:

            semanas();
            break;

        case 6:

            meses();
            break;

        case 7:

            anios();
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

/*Funciones de conversion de unidades de Tiempo*/
void segundos() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Minutos\n";
        std::cout << "2. Horas\n";
        std::cout << "3. Dias\n";
        std::cout << "4. Semanas\n";
        std::cout << "5. Meses\n";
        std::cout << "6. Anios\n";
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

            resultado = conversor(valor, 0.0166667);

            std::cout << valor << " segundos son " << resultado << " minutos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000277778);

            std::cout << valor << " segundos son " << resultado << " horas\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0000115741);

            std::cout << valor << " segundos son " << resultado << " dias\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00000165344);

            std::cout << valor << " segundos son " << resultado << " semanas\n";

            break;

        case 5:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000000380517);

            std::cout << valor << " segundos son " << resultado << " meses\n";

            break;

        case 6:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0000000317098);

            std::cout << valor << " segundos son " << resultado << " anios\n";

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

void minutos() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Segundos\n";
        std::cout << "2. Horas\n";
        std::cout << "3. Dias\n";
        std::cout << "4. Semanas\n";
        std::cout << "5. Meses\n";
        std::cout << "6. Anios\n";
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

            resultado = conversor(valor, 60);

            std::cout << valor << " minutos son " << resultado << " segundos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0166667);

            std::cout << valor << " minutos son " << resultado << " horas\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000694444);

            std::cout << valor << " minutos son " << resultado << " dias\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0000992063);

            std::cout << valor << " minutos son " << resultado << " semanas\n";

            break;

        case 5:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000022831);

            std::cout << valor << " minutos son " << resultado << " meses\n";

            break;

        case 6:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00000190132);

            std::cout << valor << " minutos son " << resultado << " anios\n";

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

void horas() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Segundos\n";
        std::cout << "2. Minutos\n";
        std::cout << "3. Dias\n";
        std::cout << "4. Semanas\n";
        std::cout << "5. Meses\n";
        std::cout << "6. Anios\n";
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

            resultado = conversor(valor, 3600);

            std::cout << valor << " horas son " << resultado << " segundos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 60);

            std::cout << valor << " horas son " << resultado << " minutos\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0416667);

            std::cout << valor << " horas son " << resultado << " dias\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00595238);

            std::cout << valor << " horas son " << resultado << " semanas\n";

            break;

        case 5:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00136986);

            std::cout << valor << " horas son " << resultado << " meses\n";

            break;

        case 6:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000114155);

            std::cout << valor << " horas son " << resultado << " anios\n";

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

void dias() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Segundos\n";
        std::cout << "2. Minutos\n";
        std::cout << "3. Horas\n";
        std::cout << "4. Semanas\n";
        std::cout << "5. Meses\n";
        std::cout << "6. Anios\n";
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

            resultado = conversor(valor, 86400);

            std::cout << valor << " dias son " << resultado << " segundos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 1440);

            std::cout << valor << " dias son " << resultado << " minutos\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 24);

            std::cout << valor << " dias son " << resultado << " horas\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.142857);

            std::cout << valor << " dias son " << resultado << " semanas\n";

            break;

        case 5:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0328767);

            std::cout << valor << " dias son " << resultado << " meses\n";

            break;

        case 6:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00273791);

            std::cout << valor << " dias son " << resultado << " anios\n";

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

void semanas() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Segundos\n";
        std::cout << "2. Minutos\n";
        std::cout << "3. Horas\n";
        std::cout << "4. Dias\n";
        std::cout << "5. Meses\n";
        std::cout << "6. Anios\n";
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

            resultado = conversor(valor, 604800);

            std::cout << valor << " semanas son " << resultado << " segundos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 10080);

            std::cout << valor << " semanas son " << resultado << " minutos\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 168);

            std::cout << valor << " semanas son " << resultado << " horas\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 7);

            std::cout << valor << " semanas son " << resultado << " dias\n";

            break;

        case 5:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.230137);

            std::cout << valor << " semanas son " << resultado << " meses\n";

            break;

        case 6:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0191781);

            std::cout << valor << " semanas son " << resultado << " anios\n";

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

void meses() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Segundos\n";
        std::cout << "2. Minutos\n";
        std::cout << "3. Horas\n";
        std::cout << "4. Dias\n";
        std::cout << "5. Semanas\n";
        std::cout << "6. Anios\n";
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

            resultado = conversor(valor, 2.628e+6);

            std::cout << valor << " meses son " << resultado << " segundos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 43800);

            std::cout << valor << " meses son " << resultado << " minutos\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 730);

            std::cout << valor << " meses son " << resultado << " horas\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 30.44);

            std::cout << valor << " meses son " << resultado << " dias\n";

            break;

        case 5:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 4.34812);

            std::cout << valor << " meses son " << resultado << " semanas\n";

            break;

        case 6:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.0833333);

            std::cout << valor << " meses son " << resultado << " anios\n";

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

void anios() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Segundos\n";
        std::cout << "2. Minutos\n";
        std::cout << "3. Horas\n";
        std::cout << "4. Dias\n";
        std::cout << "5. Semanas\n";
        std::cout << "6. Meses\n";
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

            resultado = conversor(valor, 3.154e+7);

            std::cout << valor << " anios son " << resultado << " segundos\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 525600);

            std::cout << valor << " anios son " << resultado << " minutos\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 8760);

            std::cout << valor << " anios son " << resultado << " horas\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 365);

            std::cout << valor << " anios son " << resultado << " dias\n";

            break;

        case 5:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 52.1429);

            std::cout << valor << " anios son " << resultado << " semanas\n";

            break;

        case 6:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 12);

            std::cout << valor << " anios son " << resultado << " meses\n";

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