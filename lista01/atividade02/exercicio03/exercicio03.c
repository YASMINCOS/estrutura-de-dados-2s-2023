#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool verificar_exestincia_elemento(char *array[], int tamanho, char *elemento){

    for (int i = 0; i < tamanho; i++){
        if(strcmp(array[i], elemento) == 0) {
            return true;
        }
    }

    return false;

}

int main(int argc, char* argv[]){    

    char *array [] = {"texto", "J", "EDA", "EDO"};
    int tamanho = sizeof(array)/sizeof(array[0]);
    char *elemento = "J";


    if(verificar_exestincia_elemento(array, tamanho, elemento)){
       printf("O elemento existe no array");
       return 1;
    }else {
        printf("O elemento não existe no array");
        return 0;
    }

    return 0;

}