#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <string>

class Formulario{
    private:
        std::string nomeCliente;
        std::string emailCliente;
        std::string telCliente;
    public:    
        std::string GetNomeCliente();
        std::string GetEmailCliente();
        std::string GetTelClinte();
};


#endif