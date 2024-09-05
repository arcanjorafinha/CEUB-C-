#include <stdio.h>

int main() {
    int N;
    
    // Solicitando o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    
    // Declarando o vetor com o tamanho escolhido pelo usuário
    int vetor[N];
    
    // Variáveis para armazenar as somas dos índices pares e ímpares
    int soma_pares = 0;
    int soma_impares = 0;
    
    // Recebendo os valores para o vetor
    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Exibindo os valores armazenados no vetor
    printf("\nValores armazenados no vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);

        // Verifica se o índice é par ou ímpar e realiza as somas
        if (i % 2 == 0) {
            soma_pares += vetor[i];  // Índice par
        } else {
            soma_impares += vetor[i];  // Índice ímpar
        }
    }

    // Pulando uma linha
    printf("\n");
    
    // Exibindo os resultados das somas
    printf("Soma dos valores nos índices pares: %d\n", soma_pares);
    printf("Soma dos valores nos índices ímpares: %d\n", soma_impares);
    
    return 0;
}
