#include <stdio.h>

#define TAMANHO_VETOR 5  

float mediaVetor(int* vetor) {
    int soma = 0;
    
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        soma += vetor[i];
    }
    
    return (float)soma / TAMANHO_VETOR;
}

int main() {
    int vetor[TAMANHO_VETOR];

    printf("Digite %d valores inteiros:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetor[i]);
    }

    float media = mediaVetor(vetor);

    printf("A média dos valores é: %.2f\n", media);
    
    return 0;
}
