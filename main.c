#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "caixa.h"
#include "pilha.h"

int main()
{

  srand(time(NULL));
  Pilha *pilha;
  pilha = inicializa_pilha(pilha);
  for (int i = 0; i <= 4; i++)
  {
    if (i == 0)
    {
      Caixa *caixa = inicializaCaixa("caixa1");
      insere(pilha, caixa);
    }
    else
    {
      Caixa *caixa = inicializaCaixa(NULL);
      insere(pilha, caixa);
    }
  }
  imprime(pilha);
  for (int i = 0; i < 2; i++){
    Caixa caixa = remove_(pilha);
  }
    imprime(pilha);
}