#include <stdio.h>

/*funcoes*/
double calculate_double(double n){
    return n*2;
}

int main(int argc, char* argv[]){
    int n = 11;
    int n2 = 0;
    float f1 = 1.5;
    double d1 = 1.555555;
    char letra = 'Y';

    /*estruturas de controle*/
    if(n2){
        printf("0 is true\n");
    }

    if(n){
         printf("11 is true\n");
    }

    for(n = 0; n < 10 ; n++){
        printf("%d ",n);
    }
    printf("\n");

    n = 0;
    do{
      printf("%d ",n);
      n ++;
    }while(n < 11);

    printf("\n");

    printf("The double of %f is %f", d1, calculate_double(d1));
    
    return 0;
}