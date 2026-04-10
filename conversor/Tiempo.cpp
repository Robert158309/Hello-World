#include <iostream>
#include <map>

#include "Utils.h" // Archivo de utilidades
#include "Tiempo.h"

/*Base de conversiones*/
std::map<int, double> factoresTiempo = {
    {1, 1},
    {2, 60},
    {3, 3600},
    {4, 86400},
    {5, 604800},
    {6, 2629800},
    {7, 31557600}
};

/*Funciones de conversion de unidades de Tiempo*/
void tiempo() {

    int opcion;
    int de, a;
    double valor;

    do {
        std::cout << "\n=== CONVERSOR DE TIEMPO ===\n";
        std::cout << "1. Convertir\n";
        std::cout << "0. Salir\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {

            case 1:

                std::cout << "Unidades disponibles:\n";
                std::cout << "1- segundo\n";
                std::cout << "2- minuto\n";
                std::cout << "3- hora\n";
                std::cout << "4- dia\n";
                std::cout << "5- semana\n";
                std::cout << "6- mes\n";
                std::cout << "7- anio\n";

                std::cout << "Unidad de origen: ";
                std::cin >> de;

                std::cout << "Unidad de destino: ";
                std::cin >> a;

                std::cout << "Valor: ";
                std::cin >> valor;

                if(factoresTiempo.count(de) && factoresTiempo.count(a)) {
                    std::cout << "Resultado: "
                              << convertir(de, a, valor)
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

double convertir(int de, int a, double valor) {

    return conversor(valor, factoresTiempo [de] / factoresTiempo[a]);

}
