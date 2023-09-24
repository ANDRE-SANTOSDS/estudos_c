#include<stdio.h>
#include<stdlib.h>


int fatorial(int valor){
    int i;
    int totalFatorial = 1;
    for(i = 1;i <= valor;i++){
        if(i != valor){
            printf("%d * ",i);
        }
        else{
            printf("%d\n", i);
        }
        totalFatorial = totalFatorial * i;
    }
    return totalFatorial;
}
int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("O fatorial eh = %d\n", fatorial(numero));
    
    system("pause");
    return 0;
}