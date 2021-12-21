all:
	gcc caixa.h caixa.c pilha.h pilha.c main.c

clean:
	del *.o *.exe *.out *.h.gch