#pragma once

#include <string>
#include <vector>

#include "Libro.h"
#include "Cliente.h"

class Libreria {

    std::vector<Libro> biblioteca;
    std::vector<Cliente> clientes;

public:

    void libreria();
    void mostrarlibros();
    void cargarLibros();
    void agregarLibro();
    void mostrarclientes();
    void cargarClientes();
    void agregarCliente();

};
