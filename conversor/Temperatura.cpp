#include <iostream>

#include "Utils.h"
#include "Temperatura.h"

/* Menu */
void temperatura() {

    int opcion;
    int de, a;
    double valor;

    do {

        cambiarColor(14);

        std::cout << "\n=== CONVERSOR DE TEMPERATURA ===\n";
        std::cout << "1. Convertir\n";
        std::cout << "0. Volver\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {

            case 1:

                std::cout << "Unidades disponibles:\n";
                std::cout << "1- Celsius\n";
                std::cout << "2- Fahrenheit\n";
                std::cout << "3- Kelvin\n";

                std::cout << "Unidad de origen: ";
                std::cin >> de;

                std::cout << "Unidad de destino: ";
                std::cin >> a;

                std::cout << "Valor: ";
                std::cin >> valor;

                std::cout << "Resultado: "
                          << convertirTemperatura(de, a, valor)
                          << std::endl;

                break;

            case 0:
                std::cout << "Saliendo...\n";
                break;

            default:
                std::cout << "Opcion invalida\n";
                break;
        }

    } while(opcion != 0);
}

double convertirTemperatura(int de, int a, double valor) {

    double celsius;

    // Convertir todo a Celcius Primero
    switch(de) {
        case 1:
            celsius = valor;
            break;
        case 2:
            celsius = (valor - 32) * 5.0/9.0;
            break;
        case 3:
            celsius = valor - 273.15;
            break;
        default:
            return 0;
    }

    // Convertir de Celsius a destino
    switch(a) {
        case 1:
            return celsius;
        case 2:
            return (celsius * 9.0/5.0) + 32;
        case 3:
            return celsius + 273.15;
        default:
            return 0;
    }
}