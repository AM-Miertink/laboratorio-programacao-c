#include <stdio.h>
#include <stdlib.h>

int verificarPar(int num)
{
    if (num % 2 == 0) {
        return 1;
    }
    return 0;
}

int main()
{
    int numero;

    printf("=== VERIFICADOR DE NUMEROS ===\n");
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (verificarPar(numero) == 1) {
        printf("\nO numero %d e par.\n", numero);
    } else {
        printf("\nO numero %d e impar.\n", numero);
    }
    return 0;
}
