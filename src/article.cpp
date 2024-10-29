#include "../include/article.hpp"    // los 2 puntos al inicio significan que el archivo esta en otro directorio  (se podria pensar que uso un punto porque necesito salir del directorio que esto 1 nivel para atras, src en este caso, y luego ir a include (./include/article.hpp))
#include <string>
#include <iostream>

using namespace std;

//esto es otra forma de inicializar que se llama lista de iniciacion
//en lugar de inicializarlos dentro del cuerpo del constructor, se hace directamente asi
// Articulo::Articulo(string _codigo, string _nombre, float _precio) : codigoArticulo(_codigo), nombre(_nombre), precio(_precio) {}

Article::Article(string _code, string _name, float _price) 
{
    this->code = _code;      // al no usar el mismo nombre en los parametros y en la clase 
    this->name = _name;      // NO es necesario usar el puntero this->  yo lo uso por una
    price = _price;          // cuestion de claridad personal al leer el codigo)
                             // A modo de ejemplo le voy a sacar un puntero this-> al atributo price
};

Article::~Article()   // solo a modo de prueba en realidad no hace nada y si el Destructor no esta implementado se crea automaticamente
{
    cout << "Articulo destruido" << endl;   // no hace nada solo muestra por consola que se paso por aca
};

string Article::getName()
    {
        return this->name;  // al ser los atributos privados deberiamos siempre codificar los getters (funciones get, obtener) para poder acceder a los atributos sin hacerlo directamente
    }

string Article::getCode()
    {
        return this->code;
    }

float Article::getPrice()
    {
        return this->price;
    }