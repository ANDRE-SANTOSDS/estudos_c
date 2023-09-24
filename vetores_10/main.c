#include<stdio.h>
#include<stdlib.h>

int vetores(int vet3[6]){
    int i,maior = 0,menor = 0;
    
    maior = vet3[0];
    menor = vet3[0];
    for(i = 0;i < 6;i++){
        printf("Vetor[%d] = %d\n",i,vet3[i]);
        if(maior < vet3[i]){
            maior = vet3[i];
        }
        if(menor > vet3[i]){
            menor = vet3[i];
        }
    }
    printf("O maior valor: %d\n", maior);
    printf("O menor valor: %d\n", menor);
}

int main(){
    int i, vet1[3];
    int vet2[3];
    int vet3[6];
    
    for(i = 0;i < 3;i++){
        printf("Digite os valores do primeiro vetor: ");
        scanf("%d", &vet1[i]);
        vet3[i] = vet1[i]; 
    }
    printf("\n");
    
    for(i = 0;i < 3;i++){
        printf("Digite os valores do segundo vetor: ");
        scanf("%d", &vet2[i]);
        vet3[i + 3] = vet2[i];
    }
   vetores(vet3);
    
    system("pause");
    return 0;
}