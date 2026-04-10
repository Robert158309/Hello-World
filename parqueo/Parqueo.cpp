#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "Utils.h" // Archivo de utilidades
#include "Parqueo.h" // Archivo del sistema de parqueo

/*Estructura global para almacenar la informacion del auto*/
struct Auto {

    std::string marca;
    std::string modelo;
    int ticket;

    /*Constructor por defecto*/
    Auto() : marca(""), modelo(""), ticket(0) {}

};

/*Vector global para guardar informacion del auto*/
std::vector<Auto> autos;

/*Funciones del Sistema de Parqueo*/
void sistema_parqueo() {

    cargarAutos();

    int opcion;

    std::cout << "-- Sistema de Parqueo --\n";

    do {

        cambiarColor(12); // rojo

        std::cout << "1. Registrar Vehiculo\n";
        std::cout << "2. Mostrar Vehiculos Registrados\n";
        std::cout << "0. Volver\n";

        while (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ingrese un numero valido: ";
        }

        switch (opcion) {

        case 1:

            parqueo();
            break;

        case 2:

            mostrarAutos();
            break;

        case 0:

            std::cout << "Volviendo al menu principal...\n";
            break;

        default:

            std::cout << "Opcion no valida\n";
            break;

        }

    } while (opcion != 0);

}

/*Funcion para registrar un auto en el sistema de parqueo*/
void parqueo() {

    Auto a;
    a.ticket = rand() % 10000;

    std::cin.ignore(10000, '\n'); // Limpia buffer
    std::cout << "-- Parqueo --\n";
    std::cout << "Ingrese la marca de su vehiculo: ";
    getline(std::cin, a.marca);
    std::cout << "Ingrese el modelo de su vehiculo: ";
    getline(std::cin, a.modelo);

    autos.push_back(a); // Guardamos el auto en el vector

    std::ofstream archivo("../data/parqueo.txt", std::ios::app);

    if (archivo.is_open()) {
        archivo << a.marca << "," << a.modelo << "," << a.ticket << "\n";
        archivo.close();
    }

}

/*Funcion para mostrar los autos registrados en el sistema de parqueo*/
void mostrarAutos() {
    std::cout << "--- Autos Registrados ---\n";
    for (const Auto& a : autos) {
        std::cout << "Marca: " << a.marca << ", Modelo: " << a.modelo << ", Ticket: " << a.ticket << "\n";
    }
}

void cargarAutos() {

    autos.clear();

    std::ifstream archivo("../data/parqueo.txt");

    if (!archivo.is_open()) {
        return; // Si no existe el archivo, no hace nada
    }

    std::string linea;

    while (getline(archivo, linea)) {

        std::stringstream ss(linea);
        std::string dato;

        Auto a;

        // Leer CSV
        getline(ss, a.marca, ',');
        getline(ss, a.modelo, ',');
        getline(ss, dato, ',');

        a.ticket = std::stoi(dato);

        autos.push_back(a);
    }

    archivo.close();
}
