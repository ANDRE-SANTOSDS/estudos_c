#include<stdio.h>
#include<stdlib.h>
int main(){
  int numero, i, soma = 0;
  float media = 0;

  for(i = 1; i <= 5; i++){
    printf("Digite um numero: ");
    scanf("%d", &numero);
    soma = soma + numero;

  }
   printf("A soma dos numeros eh: %d\n", soma);
   media = soma/5;
   printf("A media dos numeros eh: %.2f\n", media);
system("pause");
return 0;
}
