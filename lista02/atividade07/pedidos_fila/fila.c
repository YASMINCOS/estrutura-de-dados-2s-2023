#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

FilaPedidos* criarFila() {
    FilaPedidos* fila = (FilaPedidos*)malloc(sizeof(FilaPedidos));
    fila->frente = fila->final = NULL;
    return fila;
}

void adicionarPedido(FilaPedidos* fila, int numero, const char* item) {
    Pedido* novoPedido = (Pedido*)malloc(sizeof(Pedido));
    novoPedido->numero = numero;
    strcpy(novoPedido->item, item);
    novoPedido->next = NULL;

    if (fila->final == NULL) {
        fila->frente = fila->final = novoPedido;
    } else {
        fila->final->next = novoPedido;
        fila->final = novoPedido;
    }
}

void atenderPedido(FilaPedidos* fila) {
    if (filaVazia(fila)) {
        printf("Nenhum pedido para atender.\n");
        return;
    }

    Pedido* pedidoAtendido = fila->frente;
    fila->frente = pedidoAtendido->next;

    printf("Pedido #%d: %s foi atendido.\n", pedidoAtendido->numero, pedidoAtendido->item);
    free(pedidoAtendido);
}

int filaVazia(FilaPedidos* fila) {
    return (fila->frente == NULL);
}

void imprimirFila(FilaPedidos* fila) {
    Pedido* atual = fila->frente;
    printf("Fila de Pedidos:\n");
    while (atual != NULL) {
        printf("Pedido #%d: %s\n", atual->numero, atual->item);
        atual = atual->next;
    }
}


