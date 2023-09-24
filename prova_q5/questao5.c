#include<stdio.h>
#include<stdlib.h>
int main(){
  float n, tarifa, taxa = 5.50, total;

  printf("Digite um numero real: ");
  scanf("%f", &n);
  tarifa = 0.60;
  total = (n * tarifa) + taxa;
  printf("O total a ser pago eh = %.2f\n", total);

system("pause");
return 0;
}
