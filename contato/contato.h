#ifndef TEAM8_CONTATO_H
#define TEAM8_CONTATO_H
#include <string>
class Contato
{
protected:
    //variaveis para as duas heranças de contato
    long long int CPNJ;
    std::string RedeSocial;
public:
    //metodo nao instanciado pois vai ser abstrato
    virtual void ExibirContato() = 0;
    //getter e setter
    std::string getRedeSocial();
    void setRedeSocial(std::string redeSocial);
    long long int getCnpj();
};


#endif // !TEAM8_CONTATO_H