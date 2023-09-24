#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("Digite outro numero: ");
    scanf("%d", &n3);
    if((n1 > n2) && (n1 > n3)){
        printf("O primeiro numero eh maior = %d\n", n1);
    }
    else if((n2 > n1) && (n2 > n3)){
        printf("O segundo numero eh maior = %d\n", n2);
    }
    else if((n3 > n1) && (n3 > n2)){
        printf("O terceiro numero eh maior = %d\n", n3);
    }
    else if((n1 == n2) && (n1 == n3) && (n2 == n3)){
        printf("Todos os numeros sao iguais!\n");
    }
   
    system ("pause");
    return 0;
}

