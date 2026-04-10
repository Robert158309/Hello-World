#include <iostream>
#include <string>

#include "Libro.h" // Archivo de la clase Libro

Libro::Libro() : titulo(""), autor(""), editorial(""), genero(""), anio(0) {}

/*Funcion para pedir datos*/
void Libro::pedirDatos() {

    std::string ti, au, ed, ge;
    int an;

    std::cin.ignore(); // limpiar buffer
    std::cout << "Ingrese el titulo del libro: ";
    getline(std::cin, ti);
    std::cout << "Ingrese el autor del libro: ";
    getline(std::cin, au);
    std::cout << "Ingrese la editorial del libro: ";
    getline(std::cin, ed);
    std::cout << "Ingrese el genero del libro: ";
    getline(std::cin, ge);
    std::cout << "Ingrese el anio de publicacion del libro: ";
    std::cin >> an;

}

/*Funcion para mostrar datos*/
void Libro::mostrarDatos() const {

    std::cout << "Titulo: " << titulo << "\n";
    std::cout << "Autor: " << autor << "\n";
    std::cout << "Editorial: " << editorial << "\n";
    std::cout << "Genero: " << genero << "\n";
    std::cout << "Anio de Publicacion: " << anio << "\n";

}
