#include <iostream>

#include "Utils.h" // Archivo de utilidades
#include "Longitud.h" // Archivo del conversor de longitud

/*Funciones de conversion de unidades de longitud*/
void longitud() {

    int opcion;

    do {

        cambiarColor(14);

        std::cout << "Seleccione la unidad de medida a convertir:\n";
        std::cout << "1. Milimetros\n";
        std::cout << "2. Centimetros\n";
        std::cout << "3. Metros\n";
        std::cout << "4. Kilometros\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            milimetros();
            break;

        case 2:

            centimetros();
            break;

        case 3:

            metros();
            break;

        case 4:

            kilometros();
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

/*Funciones de conversion de unidades de longitud*/
void milimetros() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Centimetros\n";
        std::cout << "2. Metros\n";
        std::cout << "3. Kilometros\n";
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

            resultado = conversor(valor, 0.1);

            std::cout << valor << " milimetros son " << resultado << " centimetros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.001);

            std::cout << valor << " milimetros son " << resultado << " metros\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000001);

            std::cout << valor << " milimetros son " << resultado << " kilometros\n";

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

void centimetros() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Milimetros\n";
        std::cout << "2. Metros\n";
        std::cout << "3. Kilometros\n";
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

            resultado = conversor(valor, 10);

            std::cout << valor << " centimetros son " << resultado << " milimetros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.01);

            std::cout << valor << " centimetros son " << resultado << " metros\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00001);

            std::cout << valor << " centimetros son " << resultado << " kilometros\n";

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

void metros() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Milimetros\n";
        std::cout << "2. Centimetros\n";
        std::cout << "3. Kilometros\n";
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

            std::cout << valor << " metros son " << resultado << " milimetros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 100);

            std::cout << valor << " metros son " << resultado << " centimetros\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.001);

            std::cout << valor << " metros son " << resultado << " kilometros\n";

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

void kilometros() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Milimetros\n";
        std::cout << "2. Centimetros\n";
        std::cout << "3. Metros\n";
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

            std::cout << valor << " kilometros son " << resultado << " milimetros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 100000);

            std::cout << valor << " kilometros son " << resultado << " centimetros\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 1000);

            std::cout << valor << " kilometros son " << resultado << " metros\n";

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