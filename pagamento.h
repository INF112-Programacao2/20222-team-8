#ifndef TEAM8_PAGAMENTO_H
#define TEAM8_PAGAMENTO_H
#include <string>

class Pagamento {
public:
	Pagamento(int id);

	int getId() const;

protected:
	// Identificador único para cada Pagamento
	int id_;
};
#endif // !TEAM8_PAGAMENTO_H