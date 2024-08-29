#include <stdio.h>

#define NUM_ALUNOS 3

int main() {
    float notas[NUM_ALUNOS];
    float soma = 0.0;
    float media;
    
    // Leitura das notas dos alunos
    printf("Digite as notas dos %d alunos:\n", NUM_ALUNOS);
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / NUM_ALUNOS;

    // Exibição da saída tabular
    printf("\nNumero\tNota\n");
    printf("---------------\n");
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("%d\t%.2f\n", i + 1, notas[i]);
    }

    // Exibição da média
    printf("\nMédia da turma: %.2f\n", media);

    return 0;
}
