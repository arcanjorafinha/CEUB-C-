#include <stdio.h>
#include <locale.h> 

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, j;
     
    for (i = 1; i <= 10; i++) {  
        printf("Multiplicação Tabuada do %d:\n", i);
        for (j = 1; j <= 10; j++) {  
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}
