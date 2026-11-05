#include <stdio.h>
#include <stdlib.h>

int dobro(int quantidade)
{
    return quantidade * 2;
}

int main()
{
    int estoque, estoque_dobro;

    printf("=== CONTROLE DE ESTOQUE ===\n");
    printf("\nQuantidade inicial: ");
    scanf("%d", &estoque);

    estoque_dobro = dobro(estoque);

    printf("Quantidade final: %d\n", estoque_dobro);

    return 0;
}
