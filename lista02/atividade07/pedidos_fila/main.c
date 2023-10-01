#include <stdio.h>
#include "fila.h"

int main() {
    FilaPedidos* fila = criarFila();

    adicionarPedido(fila, 1, "Hamburguer");
    adicionarPedido(fila, 2, "Batata Frita");
    adicionarPedido(fila, 3, "Refrigerante");
    adicionarPedido(fila, 4, "Suco ");

    printf("Pedidos na fila:\n");
    imprimirFila(fila);

    atenderPedido(fila);
    atenderPedido(fila);

    printf("\nPedidos restantes na fila:\n");
    imprimirFila(fila);
    return 0;
}
