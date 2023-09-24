#include<stdio.h>
#include<stdlib.h>

int LePositivo(){
    int n;
    printf("informe um numero inteiro positivo: ");
    scanf("%d", &n);
    while(n <= 0){
        printf("ERRO! O numero deve ser positivo! Informe um numero positivo: ");
        scanf("%d", &n);
        return n;
    }
}

int main(){
   int vezes,i;
   vezes = LePositivo();
   for(i = 1;i <= vezes;i++){
       printf("Ola, submundo!\n");
   }

    system("pause");
    return 0;
}
