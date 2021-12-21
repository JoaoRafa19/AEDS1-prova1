#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "caixa.h"

float randGen(){
  float x = ((float)rand() / (float)(RAND_MAX)) * 10.0;
  int inteiro = rand();
  float valor = (double)inteiro + x;
  return valor;
}

Caixa *inicializaCaixa(char *conteudo){
  Caixa *caixa = (Caixa*) malloc(sizeof(Caixa));
  setProx(caixa);
  setVolume(caixa, randGen());
  setPeso(caixa, randGen());
  if(conteudo != NULL){
    setConteudo(caixa, conteudo);
  }else{
    setConteudo(caixa, "vazia");
  }
  return caixa;
}
void imprimeCaixa(Caixa *caixa){
  printf("Volume: %.2f|", getVolume(caixa));
  printf("Peso: %.2f|", getPeso(caixa));
  printf("Conteudo: %s\n", getConteudo(caixa));
}

void setProx(Caixa* caixa){
  caixa->prox = NULL;
}

void setVolume(Caixa *caixa, float volume){
  caixa->volume = volume;
}
void setPeso(Caixa *caixa, float peso){
  caixa->peso = peso;
}
void setConteudo(Caixa *caixa, char *conteudo){
  strcpy(caixa->conteudo, conteudo);
}
float getVolume(Caixa *caixa){
  return caixa->volume;
}
float getPeso(Caixa *caixa){
  return caixa->peso;
}
char *getConteudo(Caixa *caixa){
  return caixa->conteudo;
}