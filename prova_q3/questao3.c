#include<stdio.h>
#include<stdlib.h>
int main(){
 int i, numero;
   printf("Digite um numero: ");
   scanf("%d", &numero);
   for(i = 1; numero > 1;numero = numero - 1){
    i = i * numero;
   }
   printf("O fatorial = %d\n", i);

system("pause");
return 0;
}
