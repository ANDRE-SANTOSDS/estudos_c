#include<stdio.h>
#include<stdlib.h>
int main(){
  float raio, area;
  const float PI = 3.14;

  printf("Insira o raio do circulo: ");
  scanf("%f", &raio);
  printf("O valor do raio: %.2f\n", raio);
  area = (PI * raio * raio);
  printf("A area do circulo vale: %.2f\n",area);

  system("pause");
  return 0;
}
