cmake_minimum_required(VERSION 4.1)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)

add_executable(HelloWorld

        main.cpp

        core/Utils.cpp

        calculadora/CalculadoraSimple.cpp
        calculadora/CalculadoraComp.cpp

        parqueo/Parqueo.cpp

        libreria/Libreria.cpp
        libreria/Libro.cpp
        libreria/Cliente.cpp

        conversor/Conversor.cpp
        conversor/Longitud.cpp
        conversor/Masa.cpp
        conversor/Volumen.cpp
        conversor/Temperatura.cpp
        conversor/Tiempo.cpp
        conversor/Area.cpp
        conversor/Velocidad.cpp
)

target_include_directories(HelloWorld PRIVATE
        components
        core
        calculadora
        parqueo
        libreria
        conversor
)
