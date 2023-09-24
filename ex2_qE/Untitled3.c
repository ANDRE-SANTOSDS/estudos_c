#include<stdio.h>
#include<stdlib.h>
int main(){
  float celsius,fahrenheit;
  printf("Digite a temperatura em graus celsius: ");
  scanf("%f", &celsius);
  fahrenheit = (celsius*9/5)+32;
  printf("A temperatura em Fahrenheit: %.2f\n", fahrenheit);
  system("pause");
  return 0;
}
