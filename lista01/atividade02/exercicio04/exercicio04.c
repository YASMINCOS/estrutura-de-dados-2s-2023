#include <stdio.h>
#include <stdlib.h>


int conta_int_array(int array[], int tamanho, int numero) {
    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        if (array[i] == numero) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int array[] = {5, 7, 9, 6, 7, 11, 6, 5,7};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int numero = 7;

    int resultado = conta_int_array(array, tamanho, numero);

    printf("O numero %d aparece no array %d vezes.\n", numero, resultado);

    return 0;
}
