#include <stdio.h>
#include <stdlib.h>

int main()
{
    int assentos[3][4] = {
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 0, 1}
    };
    int i, j, ocupados = 0, disponiveis = 0;

    printf("=== RESERVA DE ASSENTOS DO CINEMA ===\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
    }

    printf("\nAssentos ocupados: %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);
    return 0;
}
