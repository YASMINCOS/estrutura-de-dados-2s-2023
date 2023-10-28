#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main(int argc, char* argv) {
    
    put("Brasil","Brasilia");
    put("França", "Paris");

    char *valor = get("França");

    if (valor != NULL){
         printf("Valor encontrado  \n%s", valor);
    } else{
         printf("Valor não encontrado \n%s", valor);
    }

    

return 0;
}