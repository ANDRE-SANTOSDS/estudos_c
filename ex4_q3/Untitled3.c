#include<stdio.h>
#include<stdlib.h>
int main(){
  int numero = 50, i;

  for(i = 1; i <= numero; i++){
    if((i % 2) == 0)
    printf("%d\n", i);
  }
  system("pause");
  return 0;
}
