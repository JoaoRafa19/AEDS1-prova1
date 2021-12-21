#ifndef pilha_h
#define pilha_h

#include "caixa.h"

typedef struct tPilha
{
  int tamanho;
  Caixa *pcaixas;

} Pilha;

Pilha * inicializa_pilha(Pilha *);
void insere(Pilha *, Caixa *);
Caixa remove_(Pilha *);
void imprime(Pilha *);
Pilha *inverte(Pilha *);

#endif