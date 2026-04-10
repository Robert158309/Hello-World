#include <iostream>
#include <string>

#include "Cliente.h" // Archivo de la clase Cliente

cliente::cliente() : nombre(""), apellido(""), id_cliente(0) {}

void cliente::pedirDatos() {

    std::string nom, ape;
    int id;
    std::cin.ignore(); // limpiar buffer
    std::cout << "Ingrese el nombre del cliente: ";
    getline(std::cin, nom);
    std::cout << "Ingrese el apellido del cliente: ";
    getline(std::cin, ape);
    std::cout << "Ingrese el ID del cliente: ";
    std::cin >> id;

}

/*Funcion para mostrar datos*/
void cliente::mostrarDatos() const {

    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Apellido: " << apellido << "\n";
    std::cout << "ID Cliente: " << id_cliente << "\n";

}
