#include <iostream>
#include <string>
#include "contato.h"
#include "centraldeajuda.h"
#include "CentraldeAjuda.h"


int main() {

	CentraldeAjuda* contato = new CentraldeAjuda(20472256000109, "Instagram : ccpstore", "ccpstore@help.br");
	contato->ExibirContato();



	return 0;
}