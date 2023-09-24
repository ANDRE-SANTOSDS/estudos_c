#include<stdio.h>
#include<stdlib.h>
int main(){
 int numero;
   printf("Digite um numero: ");
   scanf("%d", &numero);
   if(numero % 5==0){
     printf("Numero e divisivel por 5!\n");
   }
   else
    printf("Numero nao e divisivel por 5!\n");

   system("pause");
   return 0;
}
