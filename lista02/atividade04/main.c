#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    // Verifica se pelo menos dois argumentos foram passados (incluindo o nome do programa)
    if (argc < 2) {
        printf("Uso: %s <numeros>\n", argv[0]); // Mostra uma mensagem de uso
        return 1; // Encerra o programa com código de erro
    }

    // Calcula o número de números a serem ordenados
    int n = argc - 1;

    // Aloca memória para armazenar os números
    int *arr = (int *)malloc(n * sizeof(int));

    // Converte os argumentos da linha de comando em números inteiros e armazena no array
    for (int i = 1; i <= n; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    // Chama a função bubbleSort para ordenar o array
    bubble_sort(arr, n);

    // Imprime a lista ordenada
    printf("Saida: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Libera a memória alocada para o array
    free(arr);

    return 0; // Encerra o programa com código de sucesso
}

