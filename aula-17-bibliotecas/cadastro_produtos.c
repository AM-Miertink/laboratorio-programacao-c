#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char produto[50], categoria[20], copia[50], descricao[100];

    printf("=== CADASTRO DE PRODUTOS ===\n");
    printf("\nDigite o nome do produto: ");
    scanf("%49s", produto);
    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    printf("\nCaracteres do nome: %d\n", (int)strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria invalida.\n");
    }

    strcpy(copia, produto);
    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n%s\n", descricao);
    return 0;
}
