#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

Pilha *criarPilha() {
    Pilha *pilha = (Pilha *) malloc(sizeof(Pilha));
    pilha->topo = NULL;
    pilha->qtd_elemento = 0;
    return pilha;
}

void empilhar(Pilha *pilha, int numero, const char *item) {
    Elemento *elemento = (Elemento *) malloc(sizeof(Elemento));
    elemento->numero = numero;
    strcpy(elemento->item, item);
    
    elemento->proximo_elemento = pilha->topo;
    pilha->topo = elemento;
    pilha->qtd_elemento++;
}

Elemento *desempilhar(Pilha *pilha) {
    if (pilha->qtd_elemento == 0) {
        return NULL;
    }

    Elemento *elemento = pilha->topo;
    pilha->topo = elemento->proximo_elemento;
    pilha->qtd_elemento--;
    return elemento;
}

int qtd_pilha(Pilha pilha) {
    return pilha.qtd_elemento;
}

void imprimirPilha(Pilha *pilha) {
    Elemento *topo_elemento = pilha->topo;
    printf("Historico:\n");
    while (topo_elemento != NULL) {
        printf("Pedido #%d: %s\n", topo_elemento->numero, topo_elemento->item);
        topo_elemento = topo_elemento->proximo_elemento;
    }
}

void limparPilha(Pilha *pilha) {
    Elemento *topo_elemento;
    while ((topo_elemento = desempilhar(pilha) ) != NULL) {
        free(topo_elemento);
    }
}