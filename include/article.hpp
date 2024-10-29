#ifndef ARTICLE_HPP
#define ARTICLE_HPP

#include <string>

using namespace std;

class Article 
    {
        private:                    // ponemos en private lo que no queremos que se pueda acceder desde afuera
            string code, name;      // por eso definimos los getters (funciones get, obtener)
            float price;
            
        public:
            Article(string _code, string _name, float _price);  // constructor
            ~Article();  // destructor solo a modo de prueba    
            string getCode();    
            string getName();
            float getPrice();
    };

#endif