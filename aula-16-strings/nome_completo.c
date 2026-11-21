#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];

    printf("=== NOME COMPLETO ===\n");
    printf("\nDigite o nome completo: ");
    fgets(nome, 100, stdin);

    printf("\nNome: %s", nome);
    return 0;
}
