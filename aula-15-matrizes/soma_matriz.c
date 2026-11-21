#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][3];
    int i, j, soma = 0;

    printf("=== SOMA DOS ELEMENTOS DA MATRIZ 2x3 ===\n\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
    }

    printf("\nSoma = %d\n", soma);
    return 0;
}
