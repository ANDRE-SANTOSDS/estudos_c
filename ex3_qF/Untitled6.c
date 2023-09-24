#include<stdio.h>
#include<stdlib.h>
int main(){
   float nota1, nota2, nota3, media;
   printf("Insira a primeira nota: ");
   scanf("%f", &nota1);
   printf("Insira a segunda nota: ");
   scanf("%f", &nota2);
   printf("Insira a terceira nota: ");
   scanf("%f", &nota3);
   media = (nota1 + nota2 + nota3)/3;
   printf("A media das notas: %.2f\n", media);
  if(media <= 4.9){
    printf("Conceito insuficiente!\n");
  }
  else if((media >= 5.0) && (media < 7.0)){
    printf("Conceito regular!\n");
  }
  else if((media >= 7.0) && (media < 9.0)){
    printf("Conceito bom!\n");
  }
  else if(media >= 9.0){
    printf("Conceito excelente!\n");
  }
  else {
    printf("Numero invalido!\n");
  }
  system("pause");
  return 0;
}
