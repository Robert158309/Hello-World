#pragma once

#include <iostream>
#include <string>

class Libro {

private:

    std::string titulo;
    std::string autor;
    std::string editorial;
    std::string genero;
    int anio;

public:

    Libro();
    void pedirDatos();
    void mostrarDatos() const;
    Libro(std::string titulo, std::string autor, std::string editorial, std::string genero, int anio);
    std::string getTitulo() const;
    std::string getAutor() const;
    std::string getEditorial() const;
    std::string getGenero() const;
    int getAnio() const;

};