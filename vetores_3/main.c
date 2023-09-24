#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,vet[5];
    
    for(i = 0; i < 5; i++){
        printf("Digite o numero de cada vetor: ");
        scanf("%d", &vet[i]);
        printf("%d\n", vet[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("Vetor[%d] = %d\n",i + 1,vet[i]); 
    }
    
    system("pause");
    return 0;
}
