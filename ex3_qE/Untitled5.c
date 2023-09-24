#include<stdio.h>
#include<stdlib.h>
int main(){
  int nota;
  printf("Digite sua nota: ");
  scanf("%d", &nota);

  if(nota >= 7){
     printf("Aprovado!\n");
  }
  else
    printf("Reprovado!\n");

  system("pause");
  return 0;
}
