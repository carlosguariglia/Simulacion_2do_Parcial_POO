#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>

using namespace std;

class Client              // los mismos comentarios de codigo explicados en article.hpp valen para esta clase
    {
        private:
            string code, name, surname, address;

        public:
            Client(string _code, string _name, string _surname, string _address);
            string getCode();
            string getName();
            string getSurname();
            string getAddress();
    };

#endif