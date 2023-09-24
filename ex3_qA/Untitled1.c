#include<stdio.h>
#include<stdlib.h>
int main(){
  int numero;
  printf("Digite um numero inteiro: ");
  scanf("%d",&numero);
  if (numero > 0){
    printf("Numero positivo!\n");
  }
  else if (numero < 0){
    printf("Numero negativo!\n");
  }
  system("pause");
  return 0;
}
