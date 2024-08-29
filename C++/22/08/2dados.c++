#include <stdio.h>

int main() {
    int dado1, dado2;

    printf("Todos os valores possíveis ao rolar dois dados:\n");
    for (dado1 = 1; dado1 <= 20; dado1++) {
        for (dado2 = 1; dado2 <= 20; dado2++) {
            printf("Dado 1: %d, Dado 2: %d\n", dado1, dado2);
        }
    }

    return 0;
}
