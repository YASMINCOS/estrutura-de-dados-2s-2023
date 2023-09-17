#include "bubble_sort.h"
#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
     int aux = *n1;
     *n1 = *n2;
     *n2 = aux; 
}
void bubble_sort(int *array, int tamanho){

    for(int i = 0 ; i < tamanho - 1 ; i++){
        for(int j =0; j< tamanho -1 -i ;j++){
             int aux;
             if(array[j] > array [j+1]){
               swap(&array[j], &array[j+1]);
            }
        }
    
    }
}
