#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    char jn;

    do {
        int op;
        float n1, n2;

        printf("===============================\n");
        printf("       Calculadora Simples     \n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        printf("\n");

        if (op <= 0 || op > 5) {
            printf("Opcao invalida\n");
            continue;
        }

        if (op == 5) {
            break;
        } else {
            system("cls");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("\nDigite o segundo numero: ");
            scanf("%f", &n2);
            printf("\n");

            switch (op) {
                case 1:
                    printf("Resultado: %.2f + %.2f = %.2f", n1, n2, n1+n2);
                    break;
                case 2:
                    printf("Resultado: %.2f - %.2f = %.2f", n1, n2, n1-n2);
                    break;
                case 3:
                    printf("Resultado: %.2f x %.2f = %.2f", n1, n2, n1*n2);
                    break;
                case 4:
                    if (n2 == 0)
                        printf("Erro: divisao por zero!\n");
                    else
                        printf("Resultado: %.2f / %.2f = %.2f", n1, n2, n1/n2);
                    break;
                default:
                    printf("Opcao invalida!\n");
            }

            printf("\nDeseja realizar outra operacao? (s/n): ");
            scanf(" %c", &jn);
            printf("\n");
        }
    } while (jn == 's' || jn == 'S');

    system("cls");
    printf("\nObrigado por usar a calculadora! Ate a proxima.\n");

    return 0;
}

