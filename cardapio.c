#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float total = 0;

    printf("=====================================\n");
    printf("        LANCHONETE DO ZE - CARDAPIO\n");
    printf("=====================================\n");
    printf("Aqui voce escolhe os itens do seu pedido\n");
    printf("e no final ve o total da conta.\n\n");
    printf("Ola! Seja bem-vindo, bom apetite!\n\n");

    do {
        printf("1 - X-Burger      R$ 18.00\n");
        printf("2 - X-Salada      R$ 20.00\n");
        printf("3 - Batata frita  R$ 12.50\n");
        printf("4 - Refrigerante  R$ 6.00\n");
        printf("5 - Suco          R$ 8.00\n");
        printf("0 - Fechar pedido\n");
        printf("Opcao: ");

        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = -1;
        }

        switch (opcao) {
            case 1:
                total += 18.00;
                printf("X-Burger adicionado. Total: R$ %.2f\n\n", total);
                break;
            case 2:
                total += 20.00;
                printf("X-Salada adicionado. Total: R$ %.2f\n\n", total);
                break;
            case 3:
                total += 12.50;
                printf("Batata frita adicionada. Total: R$ %.2f\n\n", total);
                break;
            case 4:
                total += 6.00;
                printf("Refrigerante adicionado. Total: R$ %.2f\n\n", total);
                break;
            case 5:
                total += 8.00;
                printf("Suco adicionado. Total: R$ %.2f\n\n", total);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida, tenta de novo.\n\n");
        }

    } while (opcao != 0);

    printf("\nTotal do pedido: R$ %.2f\n", total);
    printf("Obrigado pela preferencia, volte sempre!\n");

    return 0;
}
