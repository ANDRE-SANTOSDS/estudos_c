#include<stdio.h>
#include<stdlib.h>
int main(){
  int i = 200, n = 100;
  for(i = 200; i >= n; i--){
    if((i % 2) == 0){
        printf("%d\n\n", i);
    }
  }

system("pause");
return 0;
}
