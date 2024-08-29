#include <stdio.h>

int main() {
    char tipoVinho;
    int tinto = 0;  // Contador para vinhos tintos
    int branco = 0; // Contador para vinhos brancos
    int rose = 0;   // Contador para vinhos rosés

    printf("Digite o tipo de vinho (t para tinto, b para branco, r para rosé).\n");
    printf("Digite 'q' para encerrar a entrada de dados.\n");

    do {
        printf("Tipo de vinho: ");
        tipoVinho = getchar(); 
        getchar(); // Captura o '\n' deixado no buffer pelo getchar anterior

        switch (tipoVinho) {
            case 't':
                tinto++;
                break;
            case 'b':
                branco++;
                break;
            case 'r':
                rose++;
                break;
            case 'q':
                break; // Sai do loop se 'q' for digitado
            default:
                printf("Tipo de vinho inválido. Por favor, insira t, b, r ou q.\n");
        }
    } while (tipoVinho != 'q');

    printf("Quantidade de vinho tinto: %d\n", tinto);
    printf("Quantidade de vinho branco: %d\n", branco);
    printf("Quantidade de vinho rosé: %d\n", rose);

    return 0;
}
