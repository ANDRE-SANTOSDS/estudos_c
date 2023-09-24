#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1;
     printf("Digite um numero: ");
     scanf("%d", &n1);
     switch(n1 > 0){
         case 1:
          printf("Numero positivo = %d\n" , n1);
          break;
     }
     switch(n1 < 0){
         case 1:
         printf("Numero negativo = %d\n", n1);
         break;
     }
     switch(n1 == 0){
         case 1:
         printf("Numero = %d\n", n1);
         break;
     }
    
    
    system("pause");
    return 0;
}
