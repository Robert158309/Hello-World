#pragma once

#include <vector>

#include "Libro.h"
#include "Cliente.h"

class Libreria {

    std::vector<Libro> biblioteca;
    std::vector<cliente> clientes;

public:

    void libreria();
    void mostrarlibros();
    void mostrarclientes();

};
