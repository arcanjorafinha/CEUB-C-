#include <stdio.h> // Biblioteca padrão de entrada/saída em C

int main() {
    int numero; // Variável para armazenar o número inserido pelo usuário
    int contador = 0; // Variável para contar quantos números foram inseridos
    int soma = 0;

    printf("Digite números (digite um numero negativo para sair):\n");

    // Loop infinito
    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        // Verifica se o número é negativo
        if (numero < 0) {
            break; // Sai do loop se o número for negativo
        }

        soma += numero;
        contador++; // Incrementa o contador
    }

    // Exibe o resultado do contador
    printf("Numero de entradas validas: %d\n", contador);
    printf("A soma dos números inseridos é: %d\n", soma);

    return 0;
}
