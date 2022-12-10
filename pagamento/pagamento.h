#ifndef TEAM8_PAGAMENTO_H
#define TEAM8_PAGAMENTO_H
#include <string>

class Pagamento {
public:
	// Constructor
	Pagamento(int id);

	// Método virtual para exibição de informações de pagamento
	virtual void ExibirPagamento() const = 0;

	// Getter para o atributo id_
	int getId() const;

private:
	// Identificador único para cada Pagamento
	int id_;
};
#endif // !TEAM8_PAGAMENTO_H

