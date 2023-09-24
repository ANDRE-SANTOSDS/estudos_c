#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet1[3] = {1,2,3};
    int vet2[3] = {4,5,6};
    int i;
    for(i = 0;i < 3;i++){
        printf("vetor[%d] = %d %d\n",i,vet1[i],vet2[i]);
    } 
     
    printf("\n");
     
    for(i = 0;i < 3;i++){
        printf("vetor[%d] = %d %d\n",i,vet2[i],vet1[i]);
    }

    system("pause");
    return 0;
}
