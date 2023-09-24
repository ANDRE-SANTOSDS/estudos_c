#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 1, numero;
    printf("Digite um numero: ");
    scanf("%d", &i);
    printf("Digite um numero maior que o primeiro numero: ");
    scanf("%d", &numero);
    while(i <= numero){
        printf("%d\n", i);
        i++;   
    }
  
    system("pause");
    return 0;
}
