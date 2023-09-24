#include <stdio.h>

int main() {
    int numLinhas, numColunas;
    
    printf("Digite a quantidade de linhas das suas matrizes:");
    scanf("%d", &numLinhas);
    
    printf("Digite a quantidade de colunas das suas matrizes:");
    scanf("%d", &numColunas);
    
    int matriz1[numLinhas][numColunas], matriz2[numLinhas][numColunas];
    
    printf("\n\n**DIGITE OS VALORES DA PRIMEIRA MATRIZ**\n");
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            printf("Digite o valor da matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("\n\n**DIGITE OS VALORES DA SEGUNDA MATRIZ**\n");
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            printf("Digite o valor da matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    int matriz3[numLinhas][numColunas];
    
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
    
    printf("\n\nint matriz3[%d][%d] = {\n", numLinhas, numColunas);
    for(int i = 0; i < numLinhas; i++){
        printf("    {");
        for(int j = 0; j < numColunas; j++){
            if(j != numColunas - 1){
                printf("%d,", matriz3[i][j]);
            }else{
                printf("%d", matriz3[i][j]);
            }
        }
        printf("}\n");
    }
    printf("}\n");
    
    int indiceLinha;
    
    printf("Digite o índice de uma linha da terceira matriz:");
    scanf("%d", &indiceLinha);
    
    while(indiceLinha > (numLinhas - 1) || indiceLinha < 0){
        printf("Valor incorreto, digite novamente:");
        scanf("%d", &indiceLinha);
    }
    printf("\n\n**DIGITE OS VALORES DA TERCEIRA MATRIZ**\n");
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            if(i == indiceLinha){
                printf("Digite o valor da matriz na posição [%d][%d]: ", i, j);
                scanf("%d", &matriz3[i][j]);
            }
        }
    }
    printf("**MATRIZ FINAL**\n");
    printf("\n\nint matriz3[%d][%d] = {\n", numLinhas, numColunas);
    for(int i = 0; i < numLinhas; i++){
        printf("    {");
        for(int j = 0; j < numColunas; j++){
            if(j != numColunas - 1){
                printf("%d,", matriz3[i][j]);
            }else{
                printf("%d", matriz3[i][j]);
            }
        }
        printf("}\n");
    }
    printf("}\n");
}
