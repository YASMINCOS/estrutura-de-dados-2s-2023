#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> //usar nas opções
#include "fila.h"
#include "pilha.h"

/*
//pilha
void titulo_pilha();
void menu_comidas();
void menu_bebidas();
*/

int main() {
    /*
    char nome[50];
    int tecla = 0;
    int opcao = 1;

    //pilha
    titulo_pilha();
    printf("\tQual o seu nome? ");
    scanf("%[^\n]s", &nome);

    do{
        tecla = getch();
        if (tecla == 0 || tecla == 224){
            tecla = getch();
        }
        if (tecla == 72) {
            titulo_pilha();
            printf("\tO que vc quer pedir?\n\n");
            printf("\t -> Comida\n");
            printf("\t    Bebida");
            opcao = 1;
        }else if (tecla == 80){
            titulo_pilha();
            printf("\tO que vc quer pedir?\n\n");
            printf("\t    Comida\n");
            printf("\t -> Bebida");
            opcao = 2;
        }
    } while(tecla != 13);

    if(opcao == 1){
        menu_comidas();
    } else if (opcao == 2){
        menu_bebidas();
    }
    */

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

/*
void titulo_pilha() {
    system("cls");
    printf("PILHA\n\n");
}
*/