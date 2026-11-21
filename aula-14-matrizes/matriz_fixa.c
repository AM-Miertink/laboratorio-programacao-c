#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][2] = {{1, 2}, {3, 4}};
    int i, j;

    printf("=== MATRIZ 2x2 ===\n\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
