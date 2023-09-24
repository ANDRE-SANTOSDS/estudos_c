#include<stdio.h>
#include<stdlib.h>

int main(){
    int linhas,colunas,nlinhas,ncolunas;
    
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &nlinhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &ncolunas);
    printf("\n");
    
    int matriz1[nlinhas][ncolunas];
    int matriz2[nlinhas][ncolunas];
    int matriz3[nlinhas][ncolunas];
    
    for(linhas = 0;linhas < nlinhas;linhas++){
        for(colunas = 0;colunas < ncolunas;colunas++){
            printf("Digite os valores da primeira matriz: ");
            scanf("%d", &matriz1[linhas][colunas]);
        }
    }
    printf("\n");
    for(linhas = 0;linhas < nlinhas;linhas++){
        for(colunas = 0;colunas < ncolunas;colunas++){
           printf("Digite os valores da matriz[%d][%d]: %d\n",linhas,colunas,matriz1[linhas][colunas]);
        }
    }
    
    printf("\n");
    for(linhas = 0;linhas < nlinhas;linhas++){
        for(colunas = 0;colunas < ncolunas;colunas++){
            printf("Digite os valores da segunda matriz: ");
            scanf("%d", &matriz2[linhas][colunas]);
        }
    }
    printf("\n");
     for(linhas = 0;linhas < nlinhas;linhas++){
        for(colunas = 0;colunas < ncolunas;colunas++){
            printf("Digite os valores da segunda matriz[%d][%d]: %d\n",linhas,colunas,matriz2[linhas][colunas]);
        }
    }
    
    printf("\n");
    for(linhas = 0; linhas < nlinhas;linhas++){
        for(colunas = 0; colunas < ncolunas;colunas++){
            matriz3[linhas][colunas] = matriz1[linhas][colunas] * matriz2[linhas][colunas];
            printf("Digite os valores da terceira matriz[%d][%d]: %d\n",linhas,colunas,matriz3[linhas][colunas]);
        }
    }
    
    system("pause");
    return 0;
}
