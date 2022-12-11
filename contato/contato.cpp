#include "contato.h"
#include <iostream>
#include <string>

/*Contato::Contato(int cnpj, std::string redeSocial) :
	Cnpj(cnpj), RedeSocial(redeSocial) {}*/

int Contato::getCnpj() {
	return Contato::CPNJ;
}


std::string Contato::getRedeSocial() {
	return RedeSocial;
}


void Contato::setRedeSocial(std::string redeSocial) {
	RedeSocial = redeSocial;
}