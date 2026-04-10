#include <iostream>
#include <map>

#include "Utils.h"
#include "Masa.h"

/* Base de conversiones (en kilogramos) */
std::map<int, double> factoresMasa = {
    {1, 0.001},
    {2, 0.0283495},
    {3, 1},
    {4, 0.453592},
    {5, 1000}
};

/* Funciones de conversion */
void masa() {

    int opcion;
    int de, a;
    double valor;

    do {

        cambiarColor(14);

        std::cout << "\n=== CONVERSOR DE MASA ===\n";
        std::cout << "1. Convertir\n";
        std::cout << "0. Volver\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {

            case 1:

                std::cout << "Unidades disponibles:\n";
                std::cout << "1- Gramos\n";
                std::cout << "2- Onzas\n";
                std::cout << "3- Kilogramos\n";
                std::cout << "4- Libras\n";
                std::cout << "5- Toneladas\n";

                std::cout << "Unidad de origen: ";
                std::cin >> de;

                std::cout << "Unidad de destino: ";
                std::cin >> a;

                std::cout << "Valor: ";
                std::cin >> valor;

                if(factoresMasa.count(de) && factoresMasa.count(a)) {
                    std::cout << "Resultado: "
                              << convertirMasa(de, a, valor)
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
double convertirMasa(int de, int a, double valor) {
    return conversor(valor, factoresMasa.at(de) / factoresMasa.at(a));
}