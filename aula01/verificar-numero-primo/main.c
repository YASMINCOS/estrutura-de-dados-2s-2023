#include <stdio.h>
#include <stdlib.h>

int verificaNumeroPrimo(int n){
   int cont = 3;
   
   if (n%2 == 0){
      return 0;
   }

   while (cont < n){
     if (n % cont == 0){
        return 0;
     }
     cont +=2;
  }

   return 1;
}

int main(){
    int n =2147483647;
    
    printf("%d é primo? %d", n, verificaNumeroPrimo(n));
    return 0;
}