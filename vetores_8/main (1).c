#include<stdio.h>
#include<stdlib.h>

int vetor(int vet[5]){
    int i, maior = 0;
    
    maior = vet[0];
    for(i = 0;i < 5;i++){
        printf("Vetor[%d] = %d\n",i,vet[i]);
        if(maior < vet[i]){
            maior = vet[i];
        }
    }
    printf("O maior valor: %d\n", maior);
}

int main(){
    int i, vet[5];
    for(i = 0;i < 5;i++){
        printf("Digite os conteudos dos vetores: ");
        scanf("%d", &vet[i]);
    }
    printf("\n");
    vetor(vet);
    
    system("pause");
    return 0;
}