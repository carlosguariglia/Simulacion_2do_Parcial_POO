#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>

#include "article.hpp"    // 
#include "client.hpp"     // al estar en el mismo directorio no hace falta poner la ruta  

using namespace std;

class Order
{
    private:
        string code;
        Client* client;         // Puntero a una instancia de la clase Client
        Article* articles[20];  // Arreglo fijo de 20 punteros de tipo Article 
        int numArticles;        // Cantidad de articulos, variable que controlara el tamaño del arreglo

    public:
        Order(string _code, Client* _client);
        string getCode();
        void addArticle(Article* _article);   // funcion para agregar un articulo al arreglo
        void showOrder();                     // funcion para mostrar el pedido ("Imprime" la clase order mostrando codigo, cliente y el arreglo de articulos)
};

#endif