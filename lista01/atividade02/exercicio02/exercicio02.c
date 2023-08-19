#include <stdio.h>
#include <stdlib.h>

void procurar_maior_menor(int array[], int tamanho, int *maior, int *menor){
   
   if (tamanho == 0){
      return;
   }

   *maior = array[0];
   *menor = array[0];

    for (int i = 1; i < tamanho; i++){

        if(array[i] > *maior){
            *maior = array[i];
        }

        if(array[i] < *menor){
            *menor = array[i];
        }
    }

}

int main(int argc, char* argv[]){    

    int array [] = {5,6,7,9,4};
    int tamanho = sizeof(array)/sizeof(array[0]);
    int maior, menor;

    procurar_maior_menor(array, tamanho, &maior, &menor);

    printf("Maior elemento : %d", maior);
    printf("\nMenor elemento : %d", menor);


    return 0;

}