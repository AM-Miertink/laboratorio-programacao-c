#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[50];

    printf("=== PRIMEIRO CARACTERE ===\n");
    printf("\nDigite uma palavra: ");
    scanf("%49s", palavra);

    printf("\nPrimeiro caractere: %c\n", palavra[0]);
    return 0;
}
