#include<stdio.h>
#include<stdlib.h>
int main(){
 int numero;
   printf("Digite um numero inteiro: ");
   scanf("%d", &numero);
   if(numero % 2==0){
     printf("Numero eh par!\n");
   }
   else
    printf("Numero eh impar!\n");

   system("pause");
   return 0;
}
