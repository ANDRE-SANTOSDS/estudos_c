#include<stdio.h>
#include<stdlib.h>

int matriz1(int matriz[3][3]){
    int linha,coluna,menor = 0,soma = 0,produtoElemento = 1,soma1 = 0, maior = 0,menor1 = 0;
    
    menor = matriz[0][0];
    maior = matriz[0][0];
    menor1 = matriz[0][0];
    for(linha = 0;linha < 3;linha++){
        for(coluna = 0; coluna < 3;coluna++){
            printf("Matriz[%d][%d] = %d\n", linha,coluna,matriz[linha][coluna]);
            
            if(menor > matriz[linha][coluna]){
                menor = matriz[linha][coluna];
            }
            
            soma = soma + matriz[linha][coluna];
            
            if(coluna == 2){
                produtoElemento = produtoElemento * matriz[linha][coluna];
            }
            
            if(linha == 1){
                soma1 = soma1 + matriz[linha][coluna];
            }
            
            if(coluna == 0 && maior < matriz[linha][coluna]){ 
                maior = matriz[linha][coluna];
            }
            
            if(coluna == 2 && menor1 > matriz[linha][coluna]){
                menor1 = matriz[linha][coluna];
            }
        }
    }
    printf("O menor valor da matriz = %d\n",menor);
    printf("A soma dos valores da matriz = %d\n", soma);
    printf("O produto dos elementos da coluna 2 = %d\n", produtoElemento);
    printf("A soma dos valores da linha 1 = %d\n", soma1);
    printf("O maior valor da matriz da primeira coluna = %d\n",maior);
    printf("O menor valor da matriz da ultima coluna = %d\n",menor1);
}

int main(){
   int linha,coluna,matriz[3][3];
   
   for(linha = 0;linha < 3;linha++){
       for(coluna = 0;coluna < 3;coluna++){
        printf("Preencha a matri[%d][%d] = ",linha,coluna);
        scanf("%d", &matriz[linha][coluna]);
       }
       printf("\n");
   }
  
  matriz1(matriz);
    
    system("pause");
    return 0;
}