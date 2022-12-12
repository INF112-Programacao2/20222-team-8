CC = g++

LINKER = g++
LFLAGS = produto.cpp carrinho.cpp pedido.cpp pagamento.cpp pagamentopix.cpp pagamentoqrcode.cpp contato/centraldeajuda.cpp contato/contato.cpp contato/contatofinanceiro.cpp -o

MAIN = main.cpp
OUT = a.exe


all:
	$(CC) $(CFLAGS) $(MAIN) $(LFLAGS) $(OUT)

run:
	./$(OUT)