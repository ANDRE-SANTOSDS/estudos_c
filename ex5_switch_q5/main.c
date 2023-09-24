#include<stdio.h>
#include<stdlib.h>
int main(){
   int n1, n2, soma, sub, mult, divs, operacao;
   printf("Digite 1(soma), 2(subtracao), 3(multiplicacao), 4(divisao): ");
   scanf("%d", &operacao);
   printf("Digite um numero: ");
   scanf("%d", &n1);
   printf("Digite outro numero: ");
   scanf("%d", &n2);
   
   switch(operacao){
      case 1:
        soma = n1 + n2;
        printf("A soma = %d\n", soma);
        break;
      case 2:
        sub = n1 - n2;
        printf("A subtracao = %d\n", sub);
        break;
      case 3:
        mult = n1 * n2;
        printf("A multiplicacao = %d\n", mult);
        break;
      case 4:
        divs = n1 / n2;
        printf("A divisao = %d\n", divs);
        break;
        
        default:
          printf("Numeros invalidos!\n");
          break;
   }
   
    system("pause");
    return 0;
}
