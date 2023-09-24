#include<stdio.h>
#include<stdlib.h>

int main(){
   float numero,n;

   printf("Digite o custo de fabrica do seu carro: ");
   scanf("%f", &numero);
   n = (numero * 73)/100;
   n = n + numero;
   printf("Custo: %.2f\n",n);

  system("pause");
  return 0;
}

