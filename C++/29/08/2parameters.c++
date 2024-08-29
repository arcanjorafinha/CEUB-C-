#include <stdio.h> 

int retornarSoma (int a, int b){
    int s;
    s = a + b;
    return s;
}

int main (){
    int valor1, valor2, retorno;
    printf("Digite o valor 1: ");
    scanf("%d", &valor1); 
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    retorno = retornarSoma(valor1, valor2);
    printf("\n%d + %d = %d\n", valor1, valor2, retorno);
}