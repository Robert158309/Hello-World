#include <iostream>
#include <map>

#include "Utils.h"
#include "Velocidad.h"

/* Base de conversiones (en m/s) */
std::map<int, double> factoresVelocidad = {
    {1, 1},
    {2, 0.277778},
    {3, 0.44704},
    {4, 0.514444}
};

/* Funciones de conversion */
void velocidad() {

    int opcion;
    int de, a;
    double valor;

    do {

        cambiarColor(14);

        std::cout << "\n=== CONVERSOR DE VELOCIDAD ===\n";
        std::cout << "1. Convertir\n";
        std::cout << "0. Volver\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {

            case 1:

                std::cout << "Unidades disponibles:\n";
                std::cout << "1- m/s\n";
                std::cout << "2- km/h\n";
                std::cout << "3- mph\n";
                std::cout << "4- nudos\n";

                std::cout << "Unidad de origen: ";
                std::cin >> de;

                std::cout << "Unidad de destino: ";
                std::cin >> a;

                std::cout << "Valor: ";
                std::cin >> valor;

                if(factoresVelocidad.count(de) && factoresVelocidad.count(a)) {
                    std::cout << "Resultado: "
                              << convertirVelocidad(de, a, valor)
                              << std::endl;
                } else {
                    std::cout << "Unidades invalidas\n";
                }

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

/* Conversion */
double convertirVelocidad(int de, int a, double valor) {

    return conversor(valor, factoresVelocidad.at(de) / factoresVelocidad.at(a));

}