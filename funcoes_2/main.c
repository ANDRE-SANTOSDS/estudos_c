#include<stdio.h>
#include<stdlib.h>
int LimpaTela(){
    int i;
    for(i = 1;i <= 50;i++){
    }
}
int main(){
    char nome[50];
    printf("Qual é seu nome? ");
    fgets(nome,50,stdin);
    LimpaTela();
    printf("Diga lá: %s", nome);
    printf("Voce programa sempre por aqui?\n\a");

    system("pause");
    return 0;
}
