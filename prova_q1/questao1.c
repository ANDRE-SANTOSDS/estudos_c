#include<stdio.h>
#include<stdlib.h>
int main(){

 float media,n1,n2,n3,soma = 0;
 while(media >= 0){
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);
    soma = n1 + n2 + n3;
    printf("A soma das tres notas = %.2f\n", soma);
    media = soma/3;
    printf("A media das tres notas = %.2f\n", media);
    if((media >= 0) && (media <= 5.00)){
        printf("Reprovado = %.2f\n\n", media);
    }
    else if((media > 5.00) && (media <= 7.00)){
        printf("Recuperacao = %.2f\n\n", media);
    }
    else if(media > 7.00){
    printf("Aprovado = %.2f\n\n", media);
    }
 }


system("pause");
return 0;
}
