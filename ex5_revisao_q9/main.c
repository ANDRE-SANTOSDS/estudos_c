#include<stdio.h>
#include<stdlib.h>
int main()
{
    int valor, i, origem, destino;
    printf("Preço da corrida de Moto táxi!\n");
    printf("Digite 1 se seu destino e o nucleo Cidade Nova!\n");
    printf("Digite 2 se seu destino e o nucleo Maraba Pioneira!\n");
    printf("Digite 3 se seu destino e o nucleo Nova Maraba!\n\n");
    
    while(i <= 0){
      printf("Digite o numero do seu local de origem: ");
      scanf("%d", &origem);
      printf("Digite o numero do seu destino: ");
      scanf("%d", &destino);
    
        if((origem == 3) && (destino == 3)){
            printf("Voce deseja realizar uma corrida dentro do nucleo Nova Maraba!\n");
            valor = 7;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else if((origem == 1) && (destino == 1)){
            printf("Voce deseja realizar uma corrida dentro do nucleo Cidade Nova!\n");
            valor = 8;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else if((origem == 2) && (destino == 2)){
            printf("Voce deseja realizar uma corrida dentro do nucleo Maraba Pioneira!\n");
            valor = 10;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else if((origem == 3) && (destino == 1)){
            printf("Local de origem Nova Maraba, destino Cidade Nova!\n");
            valor = 15;
            printf("o valor da corrida = %d\n\n", valor);
        }
        else if((origem == 3) && (destino == 2)){
            printf("Local de origem Nova Maraba, destino Maraba Pioneira!\n");
            valor =  10;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else if((origem == 1) && (destino == 2)){
            printf("Local de origem Cidade Nova, destino Maraba Pioneira!\n");
            valor = 10;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else if((origem == 1) && (destino == 3)){
            printf("Local de origem Cidade Nova, destino Nova Maraba!\n");
            valor = 15;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else if((origem == 2) && (destino == 1)){
            printf("Local de origem Maraba Pioneira, destino Cidade Nova!\n");
            valor = 10;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else if((origem == 2) && (destino == 3)){
            printf("Local de origem Maraba Pioneira, destino Nova Maraba!\n");
            valor = 10;
            printf("O valor da corrida = %d\n\n", valor);
        }
        else{
            printf("Digite apenas os numeros 1, 2 e 3.\n");
        }
        
     i++;
    }
    system("pause");
    return 0;
}
