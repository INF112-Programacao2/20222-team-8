#include "contato.h"
#include <iostream>
#include <string>

Contato::Contato(int cnpj, std::string redeSocial, std::string emailGeral) :
	Cnpj(cnpj), RedeSocial(redeSocial), EmailContato(emailGeral) {}

int Contato::getCnpj() {
	return Cnpj;
}

std::string Contato::getEmail() {
	 return EmailContato;
 }

std::string Contato::getRedeSocial() {
	return RedeSocial;
}

void Contato::setEmail(std::string emailGeral) {
	EmailContato = emailGeral;
}

void Contato::setRedeSocial(std::string redeSocial) {
	RedeSocial = redeSocial;
}

void Contato::ExibirContato() {

}