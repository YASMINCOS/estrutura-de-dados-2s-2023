#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main (int argc, char* argv[]){

   Objeto o1;
   o1.valor = 'A';
   Objeto o2;
   o2.valor = 'B';
   Objeto o3;
   o3.valor = 'C';
   Objeto o4;
   o4.valor = 'D';

   Pilha* p = pilha();

   empilhar(&o1,p);
   empilhar(&o2,p);
   empilhar(&o3,p);
   empilhar(&o4,p);

   Objeto* o;
   do{
      o = desempilhar(p);
      if(o != NULL){
        printf("%c\n", o ->valor);
      }

   }while(o != NULL);
    
    return 0;
}