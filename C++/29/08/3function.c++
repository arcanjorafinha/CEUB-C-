#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int main() {
    int valor1, valor2, resultado;
    char operacao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite a operacao que deseja realizar (+ para soma, - para subtracao): ");
    scanf(" %c", &operacao); 

    if (operacao == '+') {
        resultado = soma(valor1, valor2);
        printf("Resultado da soma: %d\n", resultado);
    } else if (operacao == '-') {
        resultado = subtracao(valor1, valor2);
        printf("Resultado da subtracao: %d\n", resultado);
    } else {
        printf("Operacao invalida!\n");
    }

    return 0;
}
