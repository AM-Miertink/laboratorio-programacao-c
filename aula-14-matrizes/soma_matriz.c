#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, soma = 0;

    printf("=== SOMA DOS ELEMENTOS DA MATRIZ 3x3 ===\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma += m[i][j];
        }
    }

    printf("\nSoma = %d\n", soma);
    return 0;
}
