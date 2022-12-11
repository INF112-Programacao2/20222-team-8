#include <iostream>
#include <string>
#include "contato.h"
#include "centraldeajuda.h"
#include "contatofinanceiro.h"


int main() {

	ContatoFinanceiro* contato = new ContatoFinanceiro(1, "face", "email");
	contato->ExibirContato();



	return 0;
}