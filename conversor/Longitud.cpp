#include <iostream>
#include <map>

#include "Utils.h"
#include "Longitud.h"

/* Base de conversiones (en metros) */
std::map<int, double> factoresLongitud = {
    {1, 0.001},
    {2, 0.01},
    {3, 1},
    {4, 1000}
};

/* Funciones de conversion */
void longitud() {

    int opcion;
    int de, a;
    double valor;

    do {

        cambiarColor(14);

        std::cout << "\n=== CONVERSOR DE LONGITUD ===\n";
        std::cout << "1. Convertir\n";
        std::cout << "0. Volver\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {

            case 1:

                std::cout << "Unidades disponibles:\n";
                std::cout << "1- Milimetros\n";
                std::cout << "2- Centimetros\n";
                std::cout << "3- Metros\n";
                std::cout << "4- Kilometros\n";

                std::cout << "Unidad de origen: ";
                std::cin >> de;

                std::cout << "Unidad de destino: ";
                std::cin >> a;

                std::cout << "Valor: ";
                std::cin >> valor;

                if(factoresLongitud.count(de) && factoresLongitud.count(a)) {
                    std::cout << "Resultado: "
                              << convertirLongitud(de, a, valor)
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
double convertirLongitud(int de, int a, double valor) {

    return conversor(valor, factoresLongitud.at(de) / factoresLongitud.at(a));

}