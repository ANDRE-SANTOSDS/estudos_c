#include<stdio.h>
#include<stdlib.h>
int main(){
int idade;
 printf("Digite sua idade: ");
 scanf("%d", &idade);
 printf("Sua idade e: %d\n",idade);
 if (idade >= 18){
    printf("Maior de idade!\n");
 }
 else{
     printf("Menor de idade!\n");
 }
    system("pause");
    return 0;
}
