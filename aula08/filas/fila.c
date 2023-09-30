#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct Fila* fila(){
   struct Fila* ptr_f = (struct Fila*) malloc(sizeof(struct Fila));
   ptr_f -> inicio = NULL;
   ptr_f -> final = NULL;
   ptr_f -> quantidade_objetos = 0;
   return ptr_f;
}

void queue(struct Objeto* ptr_o , struct Fila* ptr_f){
   if(ptr_f -> inicio == NULL){
       ptr_f ->inicio = ptr_o;
       ptr_f -> final = ptr_o;
       ptr_o -> objeto_anterior = NULL;
   }else{
       ptr_f ->final-> objeto_anterior = ptr_o;
       ptr_f-> final = ptr_o;
   }
   ptr_f -> quantidade_objetos ++;
}

struct Objeto* dequeue(struct Fila* ptr_f){
   if(ptr_f -> quantidade_objetos == 0 ){
       return NULL;
   }
   struct Objeto* ptr_o = ptr_f -> inicio;
   ptr_f-> inicio = ptr_o -> objeto_anterior;
   ptr_f -> quantidade_objetos --;
   return ptr_o;
}