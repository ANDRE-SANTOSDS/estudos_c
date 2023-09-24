#include<stdio.h>
#include<stdlib.h>
int Quadrado(int a ){
    return a * a;
}
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O numero ao quadrado eh = %d\n", Quadrado(n));

    system("pause");
    return 0;
}
