#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Libreria.h"
#include "Utils.h" // Archivo de utilidades

/*Funciones del Sistema de Libreria*/
void Libreria::libreria() {

    cargarClientes();

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
                agregarLibro();
                break;

            }
            case 2:
                mostrarlibros();
                break;

            case 3: {
                agregarCliente();
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
    for (const Cliente& c : clientes) {
        c.mostrarDatos();
        std::cout << "-----------------------\n";
    }

}

void Libreria::cargarClientes() {

    clientes.clear();

    std::ifstream archivo("../data/libreria/clientes.txt");

    if (!archivo.is_open()) return;

    std::string linea;

    while (getline(archivo, linea)) {

        std::stringstream ss(linea);
        std::string nombre, apellido, idStr;

        getline(ss, nombre, ',');
        getline(ss, apellido, ',');
        getline(ss, idStr, ',');

        Cliente c(nombre, apellido, std::stoi(idStr));
        clientes.push_back(c);
    }

    archivo.close();
}

void Libreria::agregarCliente() {

    Cliente c;
    c.pedirDatos();

    clientes.push_back(c);

    std::ofstream archivo("../data/libreria/clientes.txt", std::ios::app);

    if (archivo.is_open()) {
        archivo << c.getNombre() << ","
            << c.getApellido() << ","
            << c.getId() << "\n";
        archivo.close();
    }
}

void Libreria::cargarLibros() {

    biblioteca.clear();

    std::ifstream archivo("../data/libreria/libros.txt");

    if (!archivo.is_open()) return;

    std::string linea;

    while (getline(archivo, linea)) {

        std::stringstream ss(linea);
        std::string titulo, autor, editorial, genero, anioStr;

        getline(ss, titulo, ',');
        getline(ss, autor, ',');
        getline(ss, editorial, ',');
        getline(ss, genero, ',');
        getline(ss, anioStr, ',');

        Libro l(titulo, autor, editorial, genero, std::stoi(anioStr));
        biblioteca.push_back(l);
    }

    archivo.close();
}

void Libreria::agregarLibro() {

    Libro l;
    l.pedirDatos();

    biblioteca.push_back(l);

    std::ofstream archivo("../data/libreria/libros.txt", std::ios::app);

    if (archivo.is_open()) {
        archivo << l.getTitulo() << ","
                << l.getAutor() << ","
                << l.getEditorial() << ","
                << l.getGenero() << ","
                << l.getAnio() << "\n";
        archivo.close();
    }
}