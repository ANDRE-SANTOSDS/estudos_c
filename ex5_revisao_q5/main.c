/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i = 1, numero, soma = 0;
    float media = 0;
    do{
    printf("Digite um número: ");
    scanf("%d", &numero);
    i++;
    soma = soma + numero;
    }while(i <= 5);
    
    printf("A soma é: %d\n",soma);
    media = soma/5;
    printf("A média é: %.2f",media);
    system("pause");
    return 0;
}
