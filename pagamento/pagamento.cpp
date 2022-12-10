#include "pagamento.h"
#include <iostream>
#include <string>

Pagamento::Pagamento(int id) :
	id_(id) {}

int Pagamento::getId() const
{
	return id_;
}


