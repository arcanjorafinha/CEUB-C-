#include <stdio.h>

int main (){
    int inicial, final;

    printf("digite o valor incial: ");
    scanf("%d", &inicial); 

    printf("digite o valor final");
    scanf("%d", &final);

    if( final >= inicial){
        for(int i = inicial; i <= final; i++){
            printf("%d\n", i); 
        }
    }else{
        printf("o valor final deve ser maior que o incial");
    }
}