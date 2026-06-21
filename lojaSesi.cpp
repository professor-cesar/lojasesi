#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis (usando float e int como no seu exemplo)
    int op;
    float caixa = 500.00;
    float valor;
    int opcao;

    do {
        // Menu de opções
        printf("\n===== LOJA SESI =====");
        printf("\n1) Consultar caixa");
        printf("\n2) Registrar venda");
        printf("\n3) Registrar despesa");
        printf("\n4) Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);
        while(getchar() != '\n');

        switch(op) {
            case 1:
                printf("Valor em caixa: R$ %.2f\n", caixa);
                break;

            case 2:
                printf("Digite o valor da venda: R$ ");
                scanf("%f", &valor);
                caixa = caixa + valor;
                printf("Venda registrada com sucesso!\n");
                break;

            case 3:
                printf("Digite o valor da despesa: R$ ");
                scanf("%f", &valor);

                // Regra para não deixar o caixa negativo
                if (caixa - valor >= 0) {
                    caixa = caixa - valor;
                    printf("Despesa registrada com sucesso!\n");
                } else {
                    printf("Erro: Saldo insuficiente!\n");
                }
                break;

            case 4:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }

    } while(op != 4);


}


