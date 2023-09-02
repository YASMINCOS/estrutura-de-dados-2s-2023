#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int cpf;
    char data_nascimento[11];
    char nome [100];
}Pessoa;

int main(int argc, char* argv[]){ 
    FILE *f1;

    f1 = fopen("teste.dat","wb");

    if(f1  == NULL){
        perror("Não foi possível abrir o arquivo");
        return 1;
    }

    Pessoa p;
    strcpy(p.nome, "Joao");
    p.cpf = 12347884;
    strcpy(p.data_nascimento,"11/11/1111");

    fwrite(&p, sizeof(Pessoa), 1, f1);

    fclose(f1);

    f1 = fopen("teste.dat", "r");
    Pessoa p2;
    fread(&p2, sizeof(Pessoa),1,f1);
    printf("%s - %d - %s", p2.nome, p2.cpf,p2.data_nascimento);
    fclose(f1);

    exit(0);
}