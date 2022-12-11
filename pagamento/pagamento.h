#ifndef TEAM8_PAGAMENTO_H
#define TEAM8_PAGAMENTO_H
#include <string>

class Pagamento {
public:
	Pagamento(int id);

	// Método virtual para exibição de informações de pagamento
	virtual void ExibirPagamento() const = 0;

	int getId() const;

private:
	// Identificador único para cada Pagamento
	int id_;
};
#endif // !TEAM8_PAGAMENTO_H