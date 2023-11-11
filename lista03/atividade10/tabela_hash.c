#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"
#define TAMANHO 100

Hash* tabela[TAMANHO];

unsigned int hash(char* chave) {
   unsigned h = 0;
   for (int i = 0; chave[i] != '\0'; i++) {
      h += 
      [i];
   }
   return h;
}

char* get(char* chave){
    unsigned int indice = hash(chave);
    Hash* atual = tabela[indice];

     while (atual != NULL) {
        if (strcmp(atual -> chave, chave)== 0) {
            return atual -> valor;
        }
        atual = atual->proximo_valor;
    }
    return NULL;
}

void put(char* chave, char* valor){
    unsigned int indice = hash(chave);

    Hash* novoValor  = (Hash*)malloc(sizeof(Hash));
    novoValor-> chave = chave;
    novoValor-> valor = valor;
    novoValor-> proximo_valor = tabela[indice];

    tabela[indice] = novoValor;
}
