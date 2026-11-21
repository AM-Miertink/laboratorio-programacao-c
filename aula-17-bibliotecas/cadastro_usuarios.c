#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50], perfil[20], confirmacao[50], mensagem[100];

    printf("=== CADASTRO DE USUARIOS ===\n");
    printf("\nDigite o primeiro nome: ");
    scanf("%49s", nome);
    printf("Digite o perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    printf("\nCaracteres do nome: %d\n", (int)strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Usuario comum\n");
    } else {
        printf("Perfil invalido.\n");
    }

    strcpy(confirmacao, nome);
    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, nome);
    strcat(mensagem, "!");

    printf("Confirmacao: %s\n", confirmacao);
    printf("\n%s\n", mensagem);
    return 0;
}
