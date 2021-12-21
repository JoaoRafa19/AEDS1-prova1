#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

Pilha *inicializa_pilha(Pilha *stack)
{
  stack = (Pilha *)malloc(sizeof(Pilha));
  stack->tamanho = 0;
  stack->pcaixas = NULL;
  return stack;
}

int isEmpty(Pilha *stack)
{
  // return 1 if true, 0 if false
  return stack->tamanho == 0 && stack->pcaixas == NULL;
}

void insere(Pilha *stack, Caixa *caixa)
{

  if (isEmpty(stack))
  {
    stack->pcaixas = caixa;
    stack->tamanho++;
  }
  else
  {
    Caixa *aux = stack->pcaixas;
    while (aux->prox != NULL)
    {
      aux = aux->prox;
    }
    aux->prox = caixa;
    stack->tamanho++;
  }
}

Caixa remove_(Pilha *stack)
{
  if (isEmpty(stack))
  {
    printf("\nStack is empty\n");
  }
  else
  {
    Caixa aux3;
    Caixa *aux = stack->pcaixas;
    Caixa *aux2 = stack->pcaixas->prox;
    while (aux2->prox != NULL)
    {
      aux2 = aux2->prox;
      aux = aux->prox;
    }

    aux->prox = NULL;
    aux3 = *aux2;
    free(aux2);
    stack->tamanho--;
    return aux3;
  }
}

int size(Pilha *stack)
{
  return stack->tamanho;
}

void imprime(Pilha *stack)
{
  Caixa *aux = stack->pcaixas;

  while (aux->prox != NULL)
  {
    imprimeCaixa(aux);
    aux = aux->prox;
  }
  printf("\n");
}
