#ifndef TEAM8_PAGAMENTO_H
#define TEAM8_PAGAMENTO_H
#include <string>

class Pagamento {
public:
	Pagamento(int id);

	// M�todo virtual para exibi��o de informa��es de pagamento
	virtual void ExibirPagamento() const = 0;

	int getId() const;

private:
	// Identificador �nico para cada Pagamento
	int id_;
};
#endif // !TEAM8_PAGAMENTO_H