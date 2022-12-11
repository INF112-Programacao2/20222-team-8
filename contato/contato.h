#ifndef TEAM8_CONTATO_H
#define TEAM8_CONTATO_H
#include <string>
class Contato
{
protected:
    int CPNJ;
    std::string RedeSocial;
public:
    virtual void ExibirContato() = 0;
    std::string getRedeSocial();
    void setRedeSocial(std::string redeSocial);
    int getCnpj();
};


#endif // !TEAM8_CONTATO_H