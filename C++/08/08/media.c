#include <stdio.h>

int main(){
    int contador = 0;
    float nota, soma = 0, media; 

    while (1){
        printf("digtite a nota: ");
        scanf("%f", &nota);

        if (nota < 1){
            break;
        }
    
        soma += nota;
        contador ++; 
    }
    

    media = soma / contador; 

    printf("sua media é: %.2f ", media);
}