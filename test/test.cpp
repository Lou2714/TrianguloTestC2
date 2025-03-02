#include <catch2/catch_test_macros.hpp>
#include <sstream>
#include <string>
#include <iostream>
#include "../include/prueba.h"

using namespace std;

string resultadoEsperadoTriangulo(int altura){
    string piramide;
    //cout << "\n";
    //Simboliza las filas de las matriz
    for (int i = 1; i <= altura; i++)
    {
        //Mientras el valor de j sea menos que i, va a imprimir j-veces el *, simboliza columnas
        for (int j = 0; j < i; j++)
        {
            //cout << "*";
            piramide += "*";
        }
        //Salto de linea
        //cout << "\n";
        piramide += "\n";
    }
    return piramide;
}

TEST_CASE("Testing piramide caso base", "[piramideCasoBase]"){
    string esperado = resultadoEsperadoTriangulo(1);
    REQUIRE( imprimirPiramide(1) == esperado);
}

TEST_CASE("Testing piramide caso 5", "[piramideCaso5]"){
    string esperado = resultadoEsperadoTriangulo(5);
    REQUIRE( imprimirPiramide(5) == esperado);
}

TEST_CASE("Testing piramide caso 20", "[piramideCaso20]"){
    string esperado = resultadoEsperadoTriangulo(20);
    REQUIRE( imprimirPiramide(20) == esperado);
}

TEST_CASE("Testing piramide caso 100", "[piramideCaso100]"){
    string esperado = resultadoEsperadoTriangulo(100);
    REQUIRE( imprimirPiramide(100) == esperado);
}

TEST_CASE("Testing piramide caso 200", "[piramideCaso200]"){
    string esperado = resultadoEsperadoTriangulo(200);
    REQUIRE( imprimirPiramide(200) == esperado);
}