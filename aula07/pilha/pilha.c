#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    p->quantidade_objetos = 0;
    return p;
}

void empilhar(Objeto* o, Pilha *p){
    o->proximo_objeto = p ->topo;
    p->topo = o;
    p->quantidade_objetos++;
}
//retirar o objeto e atualiza o topo

Objeto* desempilhar(Pilha* p){
    
   if(p->quantidade_objetos == 0){
       return NULL;
   }

   Objeto* o = p->topo;
   p->topo = o->proximo_objeto;
   p->quantidade_objetos --;
   return o;

}