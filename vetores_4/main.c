#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, vet[5], menor;
    for(i = 0; i < 5; i++){
    printf("Digite os valores de cada vetor: ");
    scanf("%d", &vet[i]);
    printf("%d\n", vet[i]);
    }
    printf("\n");
    
    for(i = 0; i < 5; i++){
        printf("Vetor[%d] = %d\n",i + 1,vet[i]);
    }
    
    menor = vet[0];
    
    for(i = 0;i < 5; i++){
        if(menor > vet[i]){
            menor = vet[i];
        }
    }
    printf("O menor valor = %d\n", menor);
    
    system("pause");
    return 0;
}
