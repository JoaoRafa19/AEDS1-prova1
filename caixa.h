#ifndef CAIXA_H

#define CAIXA_H

typedef struct tcaixa
{
  float volume;       // tamanho da caixa
  float peso;         // peso da caixa
  char conteudo[100]; // conteudo da caixa
  struct tcaixa *prox;
} Caixa;

Caixa *inicializaCaixa(char *conteudo);
void imprimeCaixa(Caixa *caixa);
void setVolume(Caixa *caixa, float volume);
void setPeso(Caixa *caixa, float peso);
void setConteudo(Caixa *caixa, char *conteudo);
void setProx(Caixa *caixa);
float getVolume(Caixa *caixa);
float getPeso(Caixa *caixa);
char *getConteudo(Caixa *caixa);

#endif