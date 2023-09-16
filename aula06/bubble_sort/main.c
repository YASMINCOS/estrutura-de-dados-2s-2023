#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void imprimir_array(int *array, int n){
    printf("\n");
    for (int i = 0 ; i < n ; i++){
       printf("%d ", array[i]);
    }
    printf("\n");
}

int main (int argc, char* argv[]){

    int array [] = {54, 26, 93, 17, 77, 31, 44, 55,20};
    int tamanho_array = sizeof(array)/sizeof(int);
    imprimir_array(array, tamanho_array);

    bubble_sort(array,tamanho_array);
    imprimir_array(array, tamanho_array);

    
    return 0;
}