#include "contato.h"
#include <iostream>
#include <string>


long long int Contato::getCnpj() {
	return Contato::CPNJ;
}


std::string Contato::getRedeSocial() {
	return RedeSocial;
}


void Contato::setRedeSocial(std::string redeSocial) {
	RedeSocial = redeSocial;
}