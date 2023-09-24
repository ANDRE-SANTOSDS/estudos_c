#include<stdio.h>
#include<stdlib.h>
int main(){
  int i = 1, num1, num2, soma = 0, soma1 = 0;

  do{
   i++;
   printf("Digite um numero: ");
   scanf("%d", &num1);
   printf("Digite outro numero: ");
   scanf("%d", &num2);
   soma = num1 + num2;
   printf("A soma eh: %d\n", soma);
   soma1 = soma1 + soma;

  }while(i <= 3);
  printf("A soma total eh: %d\n", soma1);

system("pause");
return 0;
}
