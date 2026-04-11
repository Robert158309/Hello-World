#pragma once

#include <iostream>
#include <string>

class Cliente {

private:

    std::string nombre;
    std::string apellido;
    int id_cliente;

public:


    Cliente();  // Constructor por defecto

    void pedirDatos();
    void mostrarDatos()const;
    std::string getNombre() const;
    std::string getApellido() const;
    int getId() const;
    Cliente(std::string nombre, std::string apellido, int id_cliente);

};