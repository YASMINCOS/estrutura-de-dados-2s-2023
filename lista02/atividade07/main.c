#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"
#include "pilha.h"

#define ADIICIONAR_PEDIDO 1
#define ATENDER_PEDIDO 2
#define MOSTRAR_LISTA 3
#define MOSTRAR_HISTORICO 4
#define LIMPAR_HISTORICO 5
#define SAIR 0

const char *MENU[] = {
    "1. Adicionar Pedido",
    "2. Atender Pedido",
    "3. Lista de Pedidos",
    "4. Historico de Pedidos",
    "5. Limpar Historico",
    "0. Sair",
    NULL
};

void mostrarMenu();

int main() {
    FilaPedidos* fila = criarFila();
    Pilha *Historico = criarPilha();
    char item[50];
    int numero = 0;
    int op;

    do {
        system("cls");
        mostrarMenu();
        printf("\nOpcao: ");
        scanf("%d", &op);

        switch (op) {
            case ADIICIONAR_PEDIDO:
                fflush(stdin);
                printf("Pedido: "); gets(item);
                adicionarPedido(fila, ++numero, item);
                empilhar(Historico, numero, item);
                break;
            case ATENDER_PEDIDO:
                atenderPedido(fila);
                break;
            case MOSTRAR_LISTA:
                system("cls");
                imprimirFila(fila);
                break;
            case MOSTRAR_HISTORICO:
                system("cls");
                imprimirPilha(Historico);
                break;
            case LIMPAR_HISTORICO:
                limparPilha(Historico);
                printf("Historico Limpo\n");
                break;
            case SAIR:
                exit(0);
            default:
                printf("opcao invalida!\n");
        }
        system("pause");
    } while(1);

    return 0;
}

void mostrarMenu() {
    int i;
    for (i = 0; MENU[i] != NULL; i++) {
        puts(MENU[i]);
    }
}