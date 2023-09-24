#include<stdio.h>
#include<stdlib.h>
int main(){
int num1, num2;
printf("Digite um numero: ");
scanf("%d", &num1);
printf("Digite outro numero: ");
scanf("%d", &num2);
int soma = (num1 + num2);
printf("A soma e: %d\n", soma);
system("pause");
return 0;
}
