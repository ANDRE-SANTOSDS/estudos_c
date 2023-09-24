#include<stdio.h>
#include<stdlib.h>
int main(){
   int i, num1, num2, soma = 0, soma1 = 0;
   for(i = 1; i <= 3; i++){
      printf("Digite um numero: ");
      scanf("%d", &num1);
      printf("Digite outro numero: ");
      scanf("%d", &num2);
      soma = num1 + num2;
      printf("A soma eh: %d\n", soma);
      soma1 = soma1 + soma;
   }
     printf("A soma de todos os numeros eh: %d\n",soma1);
     system("pause");
     return 0;
}
