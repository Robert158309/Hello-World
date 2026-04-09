#include <iostream>
#include <vector>

#include "Libreria.h"
#include "Utils.h" // Archivo de utilidades

/*Funciones del Sistema de Libreria*/
void Libreria::libreria() {

    int opcion;

    do {

        cambiarColor(15);

        std::cout << "\n------- Sistema de Libreria -------\n";
        std::cout << "1. Agregar Libro\n";
        std::cout << "2. Mostrar Libros\n";
        std::cout << "3. Agregar Cliente\n";
        std::cout << "4. Mostrar Clientes\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un número válido: ";
        }

        switch (opcion) {

            case 1: {

                Libro l;
                l.pedirDatos();
                biblioteca.push_back(l);
                break;

            }
            case 2:

                mostrarlibros();
                break;

            case 3: {

                cliente c;
                c.pedirDatos();
                clientes.push_back(c);
                break;

            }
            case 4:

                mostrarclientes();
                break;

            case 0:

                std::cout << "Saliendo de la libreria...\n";
                break;

            default:

                std::cout << "Opcion no valida\n";
                break;

        }

    } while (opcion != 0);

}

/*Funcion para mostrar los libros en la biblioteca*/
void Libreria::mostrarlibros() {

    std::cout << "--- Libros en la Biblioteca ---\n";
    for (const Libro& libro : biblioteca) {
        libro.mostrarDatos();
        std::cout << "-----------------------------\n";
    }

}

/*Funcion para mostrar los clientes registrados*/
void Libreria::mostrarclientes() {

    std::cout << "--- Lista de Clientes ---\n";
    for (const cliente& c : clientes) {
        c.mostrarDatos();
        std::cout << "-----------------------\n";
    }

}