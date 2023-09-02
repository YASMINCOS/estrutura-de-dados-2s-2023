#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){ 
    FILE *f;

    f = fopen("teste.txt","a");

    //w- escrita em arquivo - sobescreve o arquivo
    //a - abre o arquivo sem sobescrever
    //r - leitura em arquivo
    //w+ - leitura e escrita - sobscreve
    //a+ - leitura e escrita, posicioa o cursor ao final do arquivo 

    if(f == NULL){
        perror("Não foi possível abrir o arquivo");
        return 1;
    }

    int r =fprintf(f,"texto na tela\n");

    if (r <0 ){
        perror("Não foi possível escrever no arquivo ");
        return 1;
    }

    fclose(f);

    f = fopen("teste.txt", "r");

    if(f == NULL){
        perror("Não foi possível abrir o arquivo");
        return 1;
    }

    char txt[100];

    while (!feof(f)){
       //fscanf(f, "%[^\n]s", &txt);
       fgets(txt, 100, f);
       printf("%s\n",txt);
    }

    exit(0);
}