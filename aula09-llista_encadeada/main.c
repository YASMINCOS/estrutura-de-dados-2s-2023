#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main (int argc, char* argv){

    No* n0_ptr = criar_ponteiro_no(2.0, NULL);
    No* n1_ptr = criar_ponteiro_no(3.23, criar_ponteiro_no(1.0, criar_ponteiro_no(3.6,NULL)));
    No* n2_ptr = criar_ponteiro_no(0.53,NULL);

    lista_inserir_no(n0_ptr, n1_ptr);
    lista_inserir_no(n0_ptr, n2_ptr);

    No* ListaCopia =lista_copiar(n0_ptr);

    lista_imprimir(n0_ptr);
    printf("\n");
    lista_imprimir(ListaCopia);
    lista_concatenar(n0_ptr, ListaCopia);

    printf("\n");
    lista_imprimir(n0_ptr);

    printf("\nqtd nos lista : %d", lista_quantidade_nos(n0_ptr));
    printf("\nqtd nos Lista copia: %d", lista_quantidade_nos(ListaCopia));

    lista_liberar(n0_ptr);

    return 0;
}