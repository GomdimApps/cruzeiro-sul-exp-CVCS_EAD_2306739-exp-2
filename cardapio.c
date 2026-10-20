#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("=====================================\n");
    printf("        LANCHONETE DO ZE - CARDAPIO\n");
    printf("=====================================\n");
    printf("Aqui voce escolhe os itens do seu pedido\n");
    printf("e no final ve o total da conta.\n\n");
    printf("Ola! Seja bem-vindo, bom apetite!\n\n");

    do {
        printf("1 - X-Burger\n");
        printf("2 - X-Salada\n");
        printf("3 - Batata frita\n");
        printf("4 - Refrigerante\n");
        printf("5 - Suco\n");
        printf("0 - Fechar pedido\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

    } while (opcao != 0);

    return 0;
}
