#include <stdio.h>

int vetor(int vet[5]){
    int i,menor = 0;
    for(i = 0;i < 5;i++){
        printf("Vetor[%d] = %d\n",i,vet[i]);
    }
    menor = vet[0];
    for(i = 0;i < 5;i++){
        if(menor > vet[i]){
            menor = vet[i];
        }
    }
    printf("O menor valor: %d\n", menor);
}


int main(){
   int i, vet[5];
   
   for(i = 0;i < 5;i++){
       printf("Digite os valores: ");
       scanf("%d", &vet[i]);
   }
   vetor(vet);
   
    return 0;
}
