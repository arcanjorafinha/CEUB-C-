#include <stdio.h> 

int main(){
    int number;

    printf("Escreva um numero: ");
    scanf("%d", &number);

    if( number < 0){
        printf("O numero e Negtivo");
    }else if( number == 0){
        printf("o numero e Nulo");
    }else{
        printf("o numero e Positivo");
    }
}