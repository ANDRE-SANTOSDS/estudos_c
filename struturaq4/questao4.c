#include<stdio.h>
#include<stdlib.h>

int main(){
  int numero,n1;
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);
  while(numero <= 200){
    if(numero % 2 == 0){
        n1++;
    }
    numero++;
  }
  printf("Quantidade de pares: %d\n",n1);

 system("pause");
 return 0;
}

