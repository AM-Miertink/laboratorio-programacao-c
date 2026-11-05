#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int num)
{
    int i, resultado = 1;

    for (i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main()
{
    int num;

    printf("=== CALCULADORA DE FATORIAL ===\n");
    printf("\nDigite um numero entre 0 e 12: ");
    scanf("%d", &num);

    if (num < 0 || num > 12) {
        printf("\nNumero fora do intervalo.\n");
    } else {
        printf("\nFatorial de %d = %d\n", num, calcularFatorial(num));
    }
    return 0;
}
