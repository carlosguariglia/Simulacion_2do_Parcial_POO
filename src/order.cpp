#include <iostream>
#include "../include/order.hpp"
using namespace std;

Order::Order(string _code, Client* _client)
    {
        this->code = _code;             // aplica lo mismo a lo explicado en aritcle.hpp
        this->client = _client;
        this->numArticles = 0;          // al inicializar el objeto numArticles es 0

    // Inicializamos todos los punteros a nullptr  recorremos el arreglo inicializando cada puntero a nullptr para asegurarnos de que no apuntan a ninguna instancia 
    for (int i = 0; i < 20; i++) {
        this->articles[i] = nullptr;
    }  
 }

string Order::getCode()
{
    return this->code;
}

void Order::addArticle(Article* _article) 
{
    if (numArticles < 20) {        // chequeamos que el pedido no este lleno
        articles[numArticles] = _article;  // agregamos el articulo
        numArticles++;                     // aumentamos la cantidad de articulos   
    } else {
        cout << "Error: No se pueden agregar más artículos. El pedido está lleno." << endl;
    }
}

void Order::showOrder()
{
    cout << "Pedido Nro: " << getCode() << endl;      // uso del getter para obtener el valor del atributo code
    cout << "Cliente: " << client->getName() << " " << client->getSurname() << endl;
    cout << "Direccion: " << client->getAddress() << endl;
    cout << "Articulos: " << endl;

    for(int i = 0; i < numArticles; i++) // recorremos el arreglo de punteros articles y al ser los mismo objetos articles usamos sus metodos (getters)
    {
        cout << "  - " << articles[i]->getName() << " (" << articles[i]->getCode() << "): $" << articles[i]->getPrice() << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << endl;
}