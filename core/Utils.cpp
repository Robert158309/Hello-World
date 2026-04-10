#include <iostream>
#include "Utils.h" // Archivo de utilidades

/*Funcion para cambiar el color del texto en la consola*/
void cambiarColor(int color) {

    switch(color) {
        case 0: std::cout << "\033[0m"; break;

        case 1: std::cout << "\033[34m"; break;
        case 2: std::cout << "\033[32m"; break;
        case 3: std::cout << "\033[36m"; break;
        case 4: std::cout << "\033[31m"; break;
        case 5: std::cout << "\033[35m"; break;
        case 6: std::cout << "\033[33m"; break;
        case 7: std::cout << "\033[37m"; break;
        case 8: std::cout << "\033[90m"; break;
        case 9: std::cout << "\033[94m"; break;
        case 10: std::cout << "\033[92m"; break;
        case 11: std::cout << "\033[96m"; break;
        case 12: std::cout << "\033[91m"; break;
        case 13: std::cout << "\033[95m"; break;
        case 14: std::cout << "\033[93m"; break;
        case 15: std::cout << "\033[97m"; break;

        default: std::cout << "\033[0m"; break;
    }

    std::cout.flush();

}

/*Funcion general de conversion (para programa de conversion de unidades)*/
double conversor(double valor, double factor) {

    return valor * factor;

}