#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3];
    int i, j, pares = 0;

    printf("=== CONTAGEM DE VALORES PARES ===\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            if (m[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("\nQuantidade de valores pares: %d\n", pares);
    return 0;
}
