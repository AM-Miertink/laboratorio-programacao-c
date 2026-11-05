#include <stdio.h>
#include <stdlib.h>

float maiorPreco(float a, float b)
{
    if (a > b) {
        return a;
    }
    return b;
}

int main()
{
    float p1, p2;

    printf("=== COMPARADOR DE PRECOS ===\n");
    printf("\nPreco do produto 1: ");
    scanf("%f", &p1);
    printf("Preco do produto 2: ");
    scanf("%f", &p2);

    if (p1 == p2) {
        printf("\nOs precos sao iguais\n");
    } else {
        printf("\nMaior preco: R$ %.2f\n", maiorPreco(p1, p2));
    }
    return 0;
}
