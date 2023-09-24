#include<stdio.h>
#include<stdlib.h>
int main(){
   int n1;
   printf("Digite 1 ou 2 para receber uma frase do dia dos namorados: ");
   scanf("%d", &n1);
   switch(n1){
       case 1:
        printf(" Voce eh a pessoa mais bonita que conheci na vida\n");
        break;
       case 2:
         printf(" Gosto muito da sua pessoa\n");
         break;
         
     default:
       printf(" Numero invalido!\n");
       break;
   }
   
   
    system("pause");
    return 0;
}
