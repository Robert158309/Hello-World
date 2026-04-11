#include <iostream>
#include <string>

#include "Libro.h"

/*Constructor por defecto*/
Libro::Libro() : titulo(""), autor(""), editorial(""), genero(""), anio(0) {}

/*Constructor con parámetros*/
Libro::Libro(std::string titulo, std::string autor, std::string editorial, std::string genero, int anio)
    : titulo(titulo), autor(autor), editorial(editorial), genero(genero), anio(anio) {}

/*Funcion para pedir datos*/
void Libro::pedirDatos() {

    std::cin.ignore(10000, '\n'); // limpiar buffer BIEN

    std::cout << "Ingrese el titulo del libro: ";
    getline(std::cin, titulo);

    std::cout << "Ingrese el autor del libro: ";
    getline(std::cin, autor);

    std::cout << "Ingrese la editorial del libro: ";
    getline(std::cin, editorial);

    std::cout << "Ingrese el genero del libro: ";
    getline(std::cin, genero);

    std::cout << "Ingrese el anio de publicacion del libro: ";
    std::cin >> anio;
}

/*Funcion para mostrar datos*/
void Libro::mostrarDatos() const {

    std::cout << "Titulo: " << titulo << "\n";
    std::cout << "Autor: " << autor << "\n";
    std::cout << "Editorial: " << editorial << "\n";
    std::cout << "Genero: " << genero << "\n";
    std::cout << "Anio de Publicacion: " << anio << "\n";
}

/*Getters (necesarios para guardar en archivo)*/
std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
std::string Libro::getEditorial() const { return editorial; }
std::string Libro::getGenero() const { return genero; }
int Libro::getAnio() const { return anio; }
