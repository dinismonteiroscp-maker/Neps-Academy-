#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    setlocale(LC_ALL,"");

    while (1) {
        int op;
        float n1, n2;

        printf("===============================\n");
        printf("      Calculadora Simples      \n");
        printf("===============================\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");

        // ---------- VALIDAR MENU ----------
        while (1) {
            printf("Opcao: ");

            if (scanf("%d", &op) != 1) {
                printf("Entrada invalida! Digite apenas numeros.\n");
                limparBuffer();
                continue;
            }

            if (op < 1 || op > 5) {
                printf("Opcao fora do intervalo! Tente novamente.\n");
                limparBuffer();
                continue;
            }

            limparBuffer(); // limpa ENTER sobrando
            break;
        }

        if (op == 5) {
            system("cls");
            printf("Obrigado por usar a calculadora!\n");
            break;
        }

        // ---------- LEITURA DOS NÚMEROS ----------
        printf("Digite o primeiro numero: ");
        while (scanf("%f", &n1) != 1) {
            printf("Entrada invalida! Digite um numero valido: ");
            limparBuffer();
        }
        limparBuffer();

        printf("Digite o segundo numero: ");
        while (scanf("%f", &n2) != 1) {
            printf("Entrada invalida! Digite um numero valido: ");
            limparBuffer();
        }
        limparBuffer();

        // ---------- OPERACOES ----------
        switch (op) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
                break;
            case 3:
                printf("Resultado: %.2f x %.2f = %.2f\n", n1, n2, n1 * n2);
                break;
            case 4:
                if (n2 == 0) {
                    printf("Erro: divisao por zero!\n");
                } else {
                    printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
                }
                break;
        }

        // ---------- PERGUNTAR S/N ----------
        char jn;
        while (1) {
            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &jn);
            limparBuffer();

            if (jn == 's' || jn == 'S' || jn == 'n' || jn == 'N')
                break;

            printf("Entrada invalida! Digite apenas s ou n.\n");
        }

        if (jn == 'n' || jn == 'N') {
            system("cls");
            printf("Obrigado por usar a calculadora!\n");
            break;
        }

        system("cls"); // limpar a tela a cada operação
    }

    return 0;
}

