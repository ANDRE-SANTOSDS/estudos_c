#include<stdio.h>
#include<stdlib.h>
int main(){
 int i;
 float bruto, desconto, liquido;
  for(i = 1; i <= 3; i++){
    printf("Digite o valor do seu salario: ");
    scanf("%f", &bruto);
      if(bruto < 1903.99){
          printf("Voce nao esta em nenhuma faixa = %.2f\n\n", bruto);
      }
      else if((bruto >= 1903.99) && (bruto <= 2826.65)){
          printf("Faixa 1 = %.2f\n", bruto);
          desconto = 7.5;
          desconto = (desconto * bruto)/100;
          printf("O valor com desconto = %.2f\n", desconto);
          liquido = bruto - desconto;
          printf("O valor liquido = %.2f\n\n", liquido);
      }
      else if((bruto >= 2826.66) && (bruto <=  3751.05)){
          printf("Faixa 2 = %.2f\n", bruto);
          desconto = 15;
          desconto = (desconto * bruto)/100;
          printf("O valor com desconto = %.2f\n", desconto);
          liquido = bruto - desconto;
          printf("o valor liquido = %.2f\n\n", liquido);
      }
      else if((bruto >= 3751.06) && (bruto <= 4664.68)){
          printf("Faixa 3 = %.2f\n", bruto);
          desconto =  22.5;
          desconto = (desconto * bruto)/100;
          printf("O valor com desconto = %.2f\n", desconto);
          liquido = bruto - desconto;
          printf("O valor liquido = %.2f\n\n", liquido);
      }
      else if(bruto > 4664.68){
          printf("Faixa 4 = %.2f\n", bruto);
          desconto = 27.5;
          desconto = (desconto * bruto)/100;
          printf("o valor com desconto = %.2f\n", desconto);
          liquido = bruto - desconto;
          printf("O valor liquido = %.2f\n\n", liquido);
      }
  }
  system("pause");
  return 0;
}
