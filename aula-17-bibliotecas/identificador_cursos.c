#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50], codigo[10], copia[50], mensagem[100];

    printf("=== IDENTIFICADOR DE CURSOS ===\n");
    printf("\nDigite o primeiro nome: ");
    scanf("%49s", nome);
    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    printf("\nCaracteres do nome: %d\n", (int)strlen(nome));

    strcpy(copia, nome);
    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("Estudante: %s\n", copia);
    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso nao cadastrado.\n");
    }
    printf("\n%s\n", mensagem);
    return 0;
}
