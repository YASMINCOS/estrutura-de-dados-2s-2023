#include <stdio.h>
#include <stdlib.h>

int soma_elementos_vetor(int array[], int tamanho){
   
   int soma = 0;

   if (tamanho == 0){
      return;
   }

   for (int i = 0; i < tamanho; i++){
     soma +=array[i];
   }

   return soma;
}

int main(int argc, char* argv[]){    

    int array [] = {5,6,7,9,4};
    int tamanho = sizeof(array)/sizeof(array[0]);
    int resultado = soma_elementos_vetor(array, tamanho);

    printf("Soma dos arrays : %d", resultado);

    return 0;

}