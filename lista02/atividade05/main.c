#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    
    FILE *inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    // Contar o número de palavras no arquivo
    int wordCount = 0;
    char word[1000];  // Assumindo que as palavras não excederão 100 caracteres

    while (fscanf(inputFile, "%s", word) != EOF) {
        wordCount++;
    }

    // Voltar ao início do arquivo
    fseek(inputFile, 0, SEEK_SET);

    // Ler as palavras em um array
    char **words = (char **)malloc(wordCount * sizeof(char *));
    for (int i = 0; i < wordCount; i++) {
        words[i] = (char *)malloc(100 * sizeof(char));
        fscanf(inputFile, "%s", words[i]);
    }

    // Fechar o arquivo de entrada
    fclose(inputFile);

    // Ordenar as palavras usando o Bubble Sort
    bubbleSort(words, wordCount);

    // Criar o arquivo de saída
    char outputFile[1000];
    snprintf(outputFile, sizeof(outputFile), "%s_ordenado.txt", argv[1]);
    FILE *outputFilePtr = fopen(outputFile, "w");
    if (outputFilePtr == NULL) {
        perror("Erro ao criar o arquivo de saida");
        return 1;
    }

    // Escrever as palavras ordenadas no arquivo de saída
    for (int i = 0; i < wordCount; i++) {
        fprintf(outputFilePtr, "%s\n", words[i]);
    }

    // Fechar o arquivo de saída
    fclose(outputFilePtr);

    // Liberar a memória alocada
    for (int i = 0; i < wordCount; i++) {
        free(words[i]);
    }
    free(words);

    return 0;
}






