#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[3][2];
    float soma, media;
    int i, j;

    printf("=== MEDIA DOS ALUNOS ===\n");

    for (i = 0; i < 3; i++) {
        soma = 0;
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("Aluno %d, nota da prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        media = soma / 2;
        printf("Media do aluno %d: %.2f\n", i + 1, media);
    }
    return 0;
}
