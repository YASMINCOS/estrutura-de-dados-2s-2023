#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main (int argc, char* argv[]){

   struct Objeto o1;
   o1.valor = 'A';

   struct Objeto o2;
   o2.valor = 'B';

   struct Objeto o3;
   o3.valor = 'C';

   struct Fila* ptr_f = fila();

   queue(&o1,ptr_f);
   queue(&o2,ptr_f);
   queue(&o3,ptr_f);

   struct Objeto* ptr_o;

   //lancar erro????

   do{
     ptr_o = dequeue(ptr_f);
     if(ptr_o != NULL){
         printf("%c\n", ptr_o-> valor);
     }
   }while(ptr_o != NULL);


   return 0;
}