#include<stdio.h>
#include<stdlib.h>
int main(){
float salario, vendas, acrescimo = 10, total;

do{
printf("Digite o seu salario fixo: ");
scanf("%f", &salario);
printf("Digite o total de vendas: ");
scanf("%f", &vendas);
vendas = (vendas * acrescimo)/ 100;
printf("O total de vendas com o acrescimo de 10 porcento = %.2f\n", vendas);
total = vendas + salario;
printf("Total a receber no final do mes = %.2f\n\n", total);

}while(salario > 0);

system("pause");
return 0;
}
