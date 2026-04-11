#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "Cliente.h" // Archivo de la clase Cliente

Cliente::Cliente() : nombre(""), apellido(""), id_cliente(0) {}

Cliente::Cliente(std::string nombre, std::string apellido, int id_cliente)
    : nombre(nombre), apellido(apellido), id_cliente(id_cliente) {}

void Cliente::pedirDatos() {

    std::cin.ignore();
    std::cout << "Ingrese el nombre del cliente: ";
    getline(std::cin, nombre);

    std::cout << "Ingrese el apellido del cliente: ";
    getline(std::cin, apellido);

    std::cout << "Ingrese el ID del cliente: ";
    std::cin >> id_cliente;
}

/*Funcion para mostrar datos*/
void Cliente::mostrarDatos() const {

    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Apellido: " << apellido << "\n";
    std::cout << "ID Cliente: " << id_cliente << "\n";

}

std::string Cliente::getNombre() const {
    return nombre;
}

std::string Cliente::getApellido() const {
    return apellido;
}

int Cliente::getId() const {
    return id_cliente;
}
