#include <iostream>

#include "Utils.h"
#include "Volumen.h"

/*Funciones de conversion de unidades de Volumen*/
void volumen() {

    int opcion;

    do {

        cambiarColor(14);

        std::cout << "Seleccione la unidad de medida a convertir:\n";
        std::cout << "1. Mililitros\n";
        std::cout << "2. Litros\n";
        std::cout << "3. Galon US\n";
        std::cout << "4. Galon UK\n";
        std::cout << "5. Cuarto\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

        case 1:

            mililitros();
            break;

        case 2:

            litros();
            break;

        case 3:

            galonUS();
            break;

        case 4:

            galonUK();
            break;

        case 5:

            cuarto();
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

/*Funciones de conversion de unidades de Volumen*/
void mililitros() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Litros\n";
        std::cout << "2. Galon US\n";
        std::cout << "3. Galon UK\n";
        std::cout << "4. Cuarto\n";
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

            resultado = conversor(valor, 0.001);

            std::cout << valor << " mililitros son " << resultado << " litros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000264172);

            std::cout << valor << " mililitros son " << resultado << " galones US\n";

            break;

        case 3:
            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.000219969);

            std::cout << valor << " mililitros son " << resultado << " galones UK\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.00105669);

            std::cout << valor << " mililitros son " << resultado << " cuartos\n";

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

void litros() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Mililitros\n";
        std::cout << "2. Galon US\n";
        std::cout << "3. Galon UK\n";
        std::cout << "4. Cuarto\n";
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

            std::cout << valor << " litros son " << resultado << " mililitros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.264172);

            std::cout << valor << " litros son " << resultado << " galones US\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.219969);

            std::cout << valor << " litros son " << resultado << " galones UK\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 1.05669);

            std::cout << valor << " litros son " << resultado << " cuartos\n";

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

void galonUS() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Mililitros\n";
        std::cout << "2. Litros\n";
        std::cout << "3. Galon UK\n";
        std::cout << "4. Cuarto\n";
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

            resultado = conversor(valor, 3785.41);

            std::cout << valor << " galones US son " << resultado << " mililitros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 3.78541);

            std::cout << valor << " galones US son " << resultado << " litros\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.832674);

            std::cout << valor << " galones US son " << resultado << " galones UK\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 4);

            std::cout << valor << " galones US son " << resultado << " cuartos\n";

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

void galonUK() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Mililitros\n";
        std::cout << "2. Litros\n";
        std::cout << "3. Galon US\n";
        std::cout << "4. Cuarto\n";
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

            resultado = conversor(valor, 4546.09);

            std::cout << valor << " galones UK son " << resultado << " mililitros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 4.54609);

            std::cout << valor << " galones UK son " << resultado << " litros\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 1.20095);

            std::cout << valor << " galones UK son " << resultado << " galones US\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 4.8);

            std::cout << valor << " galones UK son " << resultado << " cuartos\n";

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

void cuarto() {

    int opcion;
    double valor, resultado;

    do {

        cambiarColor(15);

        std::cout << "Seleccione la unidad de medida de salida\n";
        std::cout << "1. Mililitros\n";
        std::cout << "2. Litros\n";
        std::cout << "3. Galon US\n";
        std::cout << "4. Galon UK\n";
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

            resultado = conversor(valor, 946.353);

            std::cout << valor << " cuartos son " << resultado << " mililitros\n";

            break;

        case 2:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.946353);

            std::cout << valor << " cuartos son " << resultado << " litros\n";

            break;

        case 3:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.25);

            std::cout << valor << " cuartos son " << resultado << " galones US\n";

            break;

        case 4:

            std::cout << "Ingrese el valor a convertir: \n";
            std::cin >> valor;

            resultado = conversor(valor, 0.20813);

            std::cout << valor << " cuartos son " << resultado << " galones UK\n";

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