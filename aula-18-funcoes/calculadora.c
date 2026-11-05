#include <stdio.h>
#include <stdlib.h>

void exibirMenu(void)
{
    printf("\n=== CALCULADORA ===\n");
    printf("\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
    printf("\nEscolha uma opcao: ");
}

float somar(float a, float b)
{
    return a + b;
}
float subtrair(float a, float b)
{
    return a - b;
}
float multiplicar(float a, float b)
{
    return a * b;
}
float dividir(float a, float b)
{
    return a / b;
}

int main()
{
    int opcao;
    float x, y;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &x);

            printf("Digite o segundo numero: ");
            scanf("%f", &y);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", somar(x, y));
                break;
            case 2:
                printf("Resultado: %.2f\n", subtrair(x, y));
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplicar(x, y));
                break;
            case 4:
                if (y == 0) {
                    printf("Erro: divisao por zero\n");
                } else {
                    printf("Resultado: %.2f\n", dividir(x, y));
                }
                break;
            case 0:
                printf("\nEncerrando...");
                break;
            default:
                printf("Opcao invalida.\n\n");
        }
    } while (opcao != 0);

    return 0;
}
