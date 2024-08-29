#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 
    int v, numero, calculo;

    printf("Digite o número: "); 
    scanf("%d",  &numero); 

    printf("\nTabuada de multiplicação: \n"); 
    for (v = 1; v <= 10; v ++){
        calculo = v * numero; 
        printf("\n%d x %d = %d", v, numero, calculo); 
    }
}
