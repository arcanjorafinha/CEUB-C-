#include <stdio.h>

int main()
{
    int bit1, bit2, bit3;
    int ct = 0;

    printf("Aqui estao seus numeros binários:\n");
    for (bit3 = 0; bit3 <= 1; bit3++)
    {
        for (bit1 = 0; bit1 <= 1; bit1++)
        {
            for (bit2 = 0; bit2 <= 1; bit2++)
            {
                printf(" %d%d%d - %d\n", bit1, bit2, bit3, ct);
                ct = ct + 1;
            }
        }
    }

    return 0;
}
