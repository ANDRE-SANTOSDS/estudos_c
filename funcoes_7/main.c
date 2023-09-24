#include<stdio.h>
#include<stdlib.h>
int somaElementos(int n1, int n2){
    return n1 + n2;
}

int main(){;
     int num1, num2;
     printf("Digite o primeiro numero: ");
     scanf("%d", &num1);
     
     printf("Digite o segundo numero: ");
     scanf("%d", &num2);
     
     printf("Primeiro numero: %d\n", num1);
     printf("Segundo numero: %d\n", num2);
     
     int resultado = somaElementos(num1, num2);
     printf("A soma dos elementos = %d\n\n", resultado);

    system("pause");
    return 0;
}
