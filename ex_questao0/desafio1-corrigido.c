#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, tamx, tamy, tamx2, tamy2, soma=0,k;
	
	printf("Tanto de linhas da primeira matriz: ");
	scanf("%d", &tamx);
	printf("Tanto de colunas da sua primeira matriz: ");
	scanf("%d", &tamy);
	
	int vet1[tamx][tamy];
	
	printf("Tanto de linhas da segunda matriz: ");
	scanf("%d", &tamx2);
	printf("Tanto de colunas da sua segunda matriz: ");
	scanf("%d", &tamy2);
	
	
	int vet2[tamx2][tamy2];
	
	//digitar as matrizes
	
	for(i=0;i<tamx;i++){
		for(j=0;j<tamy;j++){
		    printf("Digite os numeros da primeira matriz [%d][%d]: ", i, j);
			scanf("%d", &vet1[i][j]);			
		}
		
	}
	for(i=0;i<tamx2;i++){
		for(j=0;j<tamy2;j++){
		    printf("Digite os numeros da segunda matriz [%d][%d]: ", i, j);
			scanf("%d", &vet2[i][j]);
		}
	}
	
	//mostrar as matrizes
	
	printf("\n\nint vet1[%d][%d] = {\n", tamx, tamy);
    for(int i = 0; i < tamx; i++){
        printf("    {");
        for(int j = 0; j < tamy; j++){
            if(j != tamy - 1){
                printf("%d,", vet1[i][j]);
            }else{
                printf("%d},\n", vet1[i][j]);
            }
        }
    }
    printf("}\n");
    
	printf("\n\nint vet2[%d][%d] = {\n", tamx2, tamy2);
    for(int i = 0; i < tamx2; i++){
        printf("    {");
        for(int j = 0; j < tamy2; j++){
            if(j != tamy2 - 1){
                printf("%d,", vet2[i][j]);
            }else{
                printf("%d},\n", vet2[i][j]);
            }
        }
    }
    printf("}\n");
	
	//terceira matriz
	int vet3[tamx][tamy2];
	
	for (i = 0; i < tamx; i++) {
        for (j = 0; j < tamy2; j++) {
            vet3[i][j] = 0;
        }
    }


	for(i=0;i<tamx;i++){
		for(j=0;j<tamy2;j++){
		    for(k = 0; k < tamy; k++){
		        vet3[i][j] += vet1[i][k] * vet2[k][j];
		    }
		}
	}
	

	//mostrar terceira matriz
	
	printf("\n\nint vet3[%d][%d] = {\n", tamx, tamy2);
    for(int i = 0; i < tamx; i++){
        printf("    {");
        for(int j = 0; j < tamy2; j++){
            if(j != tamy2 - 1){
                printf("%d,", vet3[i][j]);
            }else{
                printf("%d},\n", vet3[i][j]);
            }
        }
    }
    printf("}\n");
	
	
	return 0;
}