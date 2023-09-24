#include <stdio.h>
#include <stdlib.h>
int main(){
    int matriz[3][3],linha, coluna,menor = 0,maior = 0,soma = 0,produtoelemento = 1,soma1 = 0;
    
    
    for(linha = 0;linha < 3;linha++){
        for(coluna = 0;coluna < 3;coluna++){
            printf("Digite os numeros da matriz[%d][%d]: ",linha,coluna);
            scanf("%d", &matriz[linha][coluna]);
            soma = soma + matriz[linha][coluna];
            if(coluna == 2){
                produtoelemento = matriz[linha][coluna] * produtoelemento;
            }
            if(linha == 1){
                soma1 = soma1 + matriz[linha][coluna];
            }
           
        }
        printf("\n");
    }
    maior = matriz[0][0];
    menor = matriz[0][0];
      for(linha = 0;linha < 3;linha++){
        for(coluna = 0;coluna < 3;coluna++){
            printf("Matriz[%d][%d] = %d\n",linha,coluna,matriz[linha][coluna]);
             if((coluna == 0) && (maior < matriz[linha][coluna])){
                maior = matriz[linha][coluna];
            }
            if((coluna == 2) && (menor > matriz[linha][coluna])){
                menor = matriz[linha][coluna];
            }
        }
    }
    printf("A soma dos numeros da matriz: %d\n", soma);
    printf("O produto dos elementos da coluna 2 = %d\n", produtoelemento);
     printf("A soma dos numeros da matriz da linha 1: %d\n", soma1);
     printf("O maior numero da coluna 0 = %d\n", maior);
     printf("O menor numero da coluna 2 = %d\n", menor);
    
    system("pause");
    return 0;
}
