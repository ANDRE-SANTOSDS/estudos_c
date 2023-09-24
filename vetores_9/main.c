#include<stdio.h>
#include<stdlib.h>

int vetores(int vet1[3], int vet2[3]){
    int i;
    for(i = 0;i < 3;i++){
        printf("Vetor[%d] = %d %d\n",i,vet1[i],vet2[i]);
    }
    printf("\n");
    for(i = 0;i < 3;i++){
        printf("Vetor[%d] = %d %d\n",i,vet2[i],vet1[i]);
    }
}

int main(){
    int i, vet1[3];
    int vet2[3];
    
    for(i = 0;i < 3;i++){
        printf("Digite os valores do primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }
    printf("\n");
    
    for(i = 0;i < 3;i++){
        printf("Digite os valores do segundo vetor: ");
        scanf("%d", &vet2[i]);
    }
    vetores(vet1,vet2);
    
    system("pause");
    return 0;
}