#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[50];
    int i;

    printf("=== CARACTERES POR LINHA ===\n");
    printf("\nDigite uma palavra: ");
    scanf("%49s", palavra);

    printf("\n");
    for (i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }
    return 0;
}
