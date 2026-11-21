#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[50];
    int i, contador = 0;

    printf("=== CONTADOR DE CARACTERES ===\n");
    printf("\nDigite uma palavra: ");
    scanf("%49s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("\nQuantidade de letras: %d\n", contador);
    return 0;
}
