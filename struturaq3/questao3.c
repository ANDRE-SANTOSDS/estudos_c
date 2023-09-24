#include<stdio.h>
#include<stdlib.h>

int main(){
   int numero;
   printf("Digite um numero inteiro: ");
   scanf("%d", &numero);
   printf("Numero digitado: %d\n", numero);
   if(numero % 2 == 0){
     printf("Eh par!\n");
   }else if(numero % 2 != 0){
     printf("Eh impar!\n");
   }


  system("pause");
  return 0;
 }
