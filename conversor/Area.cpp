#include <iostream>
#include <map>

#include "Utils.h"
#include "Area.h"

/* Base de conversiones (en metros cuadrados) */
std::map<int, double> factoresArea = {
    {1, 4046.86},
    {2, 10000},
    {3, 0.092903},
    {4, 0.836127}
};

/* Funciones de conversion de unidades de Area */
void area() {

    int opcion;
    int de, a;
    double valor;

    do {

        cambiarColor(14);

        std::cout << "\n=== CONVERSOR DE AREA ===\n";
        std::cout << "1. Convertir\n";
        std::cout << "0. Volver\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {

            case 1:

                std::cout << "Unidades disponibles:\n";
                std::cout << "1- Acres\n";
                std::cout << "2- Hectareas\n";
                std::cout << "3- Pies cuadrados\n";
                std::cout << "4- Yardas cuadradas\n";

                std::cout << "Unidad de origen: ";
                std::cin >> de;

                std::cout << "Unidad de destino: ";
                std::cin >> a;

                std::cout << "Valor: ";
                std::cin >> valor;

                if(factoresArea.count(de) && factoresArea.count(a)) {
                    std::cout << "Resultado: "
                              << convertirArea(de, a, valor)
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
double convertirArea(int de, int a, double valor) {

    return conversor(valor, factoresArea[de] / factoresArea[a]);

}