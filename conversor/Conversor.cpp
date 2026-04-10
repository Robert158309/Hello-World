#include <iostream>

#include "Utils.h" // Archivo de utilidades
#include "Conversor.h" // Archivo del conversor de medidas
#include "Longitud.h" //Archivo de conversion de longitudes
#include "Masa.h" //Archivo de conversion de masas
#include "Volumen.h" //Archivo de conversion de volumen
#include "Temperatura.h" //Archivo de conversion de unidades de temperatura
#include "Tiempo.h" //Archivo de conversion de unidades de tiempo
#include "Area.h" //Archivo de conversion de area
#include "Velocidad.h" //Archivo de conversion de unidades de velocidad

/*Funciones del Conversor de Medidas*/
void converMedi() {

    int opcion;

    do {

        cambiarColor(14);

        std::cout << "--------- Conversor de Medidas --------\n";
        std::cout << "Ingrese el tipo de unidad a convertir\n";
        std::cout << "1. Longitud\n";
        std::cout << "2. Masa\n";
        std::cout << "3. Volumen\n";
        std::cout << "4. Temperatura\n";
        std::cout << "5. Tiempo\n";
        std::cout << "6. Area\n";
        std::cout << "7. Velocidad\n";
        std::cout << "0. Salir\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

            case 1:

                longitud();
                break;

            case 2:

                masa();
                break;

            case 3:

                volumen();
                break;

            case 4:

                temperatura();
                break;

            case 5:

                tiempo();
                break;

            case 6:

                area();
                break;

            case 7:

                velocidad();
                break;

            case 0:

                std::cout << "Saliendo del conversor de medidas...\n";
                break;

            default:

                std::cout << "Opcion no valida\n";
                break;

        }

    } while (opcion != 0);

}
