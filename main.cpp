/*Importación de Librerias*/
#include <iostream>
#include <ctime>

/*Importación de Archivos*/
#include "Utils.h" // Archivo de utilidades
#include "CalculadoraSimple.h" // Archivo de la calculadora simple
#include "CalculadoraComp.h" // Archivo de la calculadora compuesta
#include "Parqueo.h" // Archivo del sistema de parqueo
#include "Libreria.h" // Archivo del sistema de libreria
#include "Conversor.h" // Archivo del conversor de medidas

void hola_mundo();

/*Easter Egg >:D*/
void hola_mundo() {
    std::cout << "Hello World!!\n";
}

/*Funcion Principal*/
int main() {

    srand(time(0));

    int opcion;
    Libreria libreria;

    do {

        cambiarColor(10); // Cambia color de texto a verde

        std::cout << "------------- Menu Principal -------------\n";
        std::cout << "-- Ingrese la opcion que desea realizar --\n";
        std::cout << "1. Calculadora Simple\n";
        std::cout << "2. Calculadora Compuesta\n";
        std::cout << "3. Sistema de Parqueo\n";
        std::cout << "4. Sistema de Libreria\n";
        std::cout << "5. Conversor de Medidas\n";
        std::cout << "0. Salir\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un numero valido: ";
        }

        switch (opcion) {

            case 1:

                std::cout << "Cargando...\n";
                calculadora_simple();

                break;

            case 2:

                std::cout << "Cargando...\n";
                calculadora_compuesta();

                break;

            case 3:

                std::cout << "Cargando...\n";
                sistema_parqueo();

                break;

            case 4:

                std::cout << "Cargando...\n";
                libreria.libreria();

                break;

            case 5:

                std::cout << "Cargando...\n";
                converMedi();

                break;

            case 0:

                std::cout << "Saliendo del Programa\n";
                break;

            default:

                std::cout << "Opcion no valida\n";
                hola_mundo(); // Easter Egg

                break;
        }

    } while (opcion != 0);

    return 0;
}

/*Final del Programa*/
