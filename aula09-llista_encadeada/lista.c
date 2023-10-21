#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* criar_ponteiro_no(float valor, No* proximo_no){
    /*memoria alocada pois nao perdemos ele no escopo ao alocar em outro meto, por exemplo a main.
     Se fose (No no) ele funcnionaria apenas no metodo e perderia o endereço ao ser chamado na main, pois estou criando
     a variavel apenar no metodo */
    No* no  = malloc(sizeof(No));
    no-> valor = valor;
    no-> proximo_no = proximo_no;
    return no;
}

void lista_inserir_no(No* no_cabeca_lista, No* no){

    if(no_cabeca_lista != NULL){
        if(no_cabeca_lista -> proximo_no == NULL){
            no_cabeca_lista ->proximo_no = no;
        }else{
            lista_inserir_no(no_cabeca_lista->proximo_no,no);
        }

    }else{
        printf("Lista vazia!");
    }
}

void lista_imprimir(No* no_cabeca_lista){

 if(no_cabeca_lista != NULL){
    printf("%.2f ", no_cabeca_lista -> valor);
    lista_imprimir(no_cabeca_lista->proximo_no);
 }
}

//controle da cauda para gerar uma lista circular

No* lista_copiar(No* no_cabeca_lista){
   
   if(no_cabeca_lista != NULL){
       return criar_ponteiro_no(no_cabeca_lista -> valor, lista_copiar(no_cabeca_lista->proximo_no));
   }
   return NULL;
}

void lista_concatenar(No* no_cabeca_lista, No* no_cabeca_concatenar){

    lista_inserir_no(no_cabeca_lista, no_cabeca_concatenar);
  
}

void lista_liberar(No* no_cabeca_lista){
    if(no_cabeca_lista != NULL){
        lista_liberar(no_cabeca_lista->proximo_no);
        free(no_cabeca_lista);
    }
}

int lista_quantidade_nos(No* no_cabeca_lista){
    if(no_cabeca_lista != NULL){
       return 1 + lista_quantidade_nos(no_cabeca_lista -> proximo_no);
    }

    return 0;
}