#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, vet1[3] = {1,2,3};
    int vet2[3] = {10,20,30};
    int vet3[6];
    for(i = 0;i < 3;i++){
       vet3[i] = vet1[i];
    } 
     
    for(i = 0;i < 3;i++){
        vet3[i + 3] = vet2[i];
    }
    
    for(i = 0;i < 6; i++){
        printf("\nimprimido os vetores[%d] = %d\n",i,vet3[i]);
    }

    system("pause");
    return 0;
}
