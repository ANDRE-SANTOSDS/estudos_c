#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i = 0,numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    while(i <= 10){
        printf("%d * %d = ", numero,i);
        printf("%d\n", numero * i);
        i++;
    }
  
    system("pause");
    return 0;
}
