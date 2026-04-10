#pragma once

#include <iostream>
#include <string>

class cliente {

private:

    std::string nombre;
    std::string apellido;
    int id_cliente;

public:


    cliente();  // Constructor por defecto

    void pedirDatos();
    void mostrarDatos()const;

};