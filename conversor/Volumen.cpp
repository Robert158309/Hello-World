#include <iostream>
#include <map>

#include "Utils.h"
#include "Volumen.h"

/* Base de conversiones (en litros) */
std::map<int, double> factoresVolumen = {
    {1, 0.001},
    {2, 1},
    {3, 3.78541},
    {4, 4.54609},
    {5, 0.946353}
};

/* Funciones de conversion */
void volumen() {

    int opcion;
    int de, a;
    double valor;

    do {

        cambiarColor(14);

        std::cout << "\n=== CONVERSOR DE VOLUMEN ===\n";
        std::cout << "1. Convertir\n";
        std::cout << "0. Volver\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {

            case 1:

                std::cout << "Unidades disponibles:\n";
                std::cout << "1- Mililitros\n";
                std::cout << "2- Litros\n";
                std::cout << "3- Galon US\n";
                std::cout << "4- Galon UK\n";
                std::cout << "5- Cuarto (US)\n";

                std::cout << "Unidad de origen: ";
                std::cin >> de;

                std::cout << "Unidad de destino: ";
                std::cin >> a;

                std::cout << "Valor: ";
                std::cin >> valor;

                if(factoresVolumen.count(de) && factoresVolumen.count(a)) {
                    std::cout << "Resultado: "
                              << convertirVolumen(de, a, valor)
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
double convertirVolumen(int de, int a, double valor) {

    return conversor(valor, factoresVolumen.at(de) / factoresVolumen.at(a));

}