#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){    

  //declarção de vetor
    int v[10];
    *v = 1;
  
  //* pegar o endereço de memória 
   // printf("%d",v[5]);

    int v1[3] = {5,11,3};

    printf("%d",sizeof(v1)/sizeof(int));

    //sizeof - tamanho do vetor


    //for (int i =0; int i < sizeof(v1)/sizeof(int); i++){

   // }


    return 0;
}