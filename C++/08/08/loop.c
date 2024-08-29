#include <stdio.h> // Biblioteca padrão de entrada/saída em C

int main() {
    int numero, soma = 0; // Variável para armazenar o número inserido pelo usuário // Variável para armazenar a soma dos números

    printf("Digite números para somar (digite um número negativo para sair):\n");

    // Loop infinito
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Verifica se o número é negativo
        if (numero < 0) {
            break; // Sai do loop se o número for negativo
        }

        soma += numero; // Adiciona o número à soma
    }

    // Exibe o resultado da soma
    printf("A soma dos números inseridos é: %d\n", soma);

    return 0;
}