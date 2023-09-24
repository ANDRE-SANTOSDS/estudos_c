#include<stdio.h>
#include<stdlib.h>
int maior(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main(){
    int n1,n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("O maior numero eh = %d\n", maior(n1,n2));
    
    system("pause");
    return 0;
}