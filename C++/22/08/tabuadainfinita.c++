#include <stdio.h>

int main() {
    int numero, i;
    char continuar;

    do {
        printf("Digite o número para o qual deseja gerar a tabuada: ");
        scanf("%d", &numero);

        printf("Tabuada do %d:\n", numero);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("Deseja gerar outra tabuada? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}