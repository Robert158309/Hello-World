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

    Libro();  // Constructor

    void pedirDatos();
    void mostrarDatos() const;

};