cmake_minimum_required(VERSION 4.1)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)

add_executable(HelloWorld main.cpp
        Utils.cpp
        Utils.h
        CalculadoraSimple.cpp
        CalculadoraSimple.h
        CalculadoraComp.cpp
        CalculadoraComp.h
        Parqueo.cpp
        Parqueo.h
        Libreria.cpp
        Libreria.h
        Libro.cpp
        Libro.h
        Cliente.cpp
        Cliente.h
        Conversor.cpp
        Conversor.h
        Longitud.cpp
        Longitud.h
        Masa.cpp
        Masa.h
        Volumen.cpp
        Volumen.h
        Temperatura.cpp
        Temperatura.h
        Tiempo.cpp
        Tiempo.h
        Area.cpp
        Area.h
        Velocidad.cpp
        Velocidad.h)
