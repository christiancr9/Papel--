#pragma once /*Evita que el archivo se incluya varias veces*/
#include <vector> /*lista dinamica donde guardar productos*/
#include <string> 
using namespace std;
class producto
{
public:
    std::string nombre;
    float precioCosto, precioVenta;
    producto (std::string a, float b, float c) : nombre(a), precioCosto(b), precioVenta(c) {}
    
};




