#include<stdio.h>
#include<stdlib.h>
int main(){
int idade;
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Sua idade mais 1: %d\n", ++idade);
system("pause");
return 0;
}
