#include<stdio.h>
#include<stdlib.h>
int main(){

int i = 20, numero = 50;
  do{
        i++;
    if((i % 2) == 0){
    printf("%d\n", i,numero);
    }

  }while(i <= numero);

system("pause");
return 0;
}

