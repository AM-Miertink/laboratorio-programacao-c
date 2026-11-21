#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3];
    int i, j, maior;

    printf("=== MAIOR VALOR DA MATRIZ ===\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    maior = m[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
            }
        }
    }

    printf("\nMaior valor: %d\n", maior);
    return 0;
}
