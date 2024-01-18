/* CAIXAELETRONICO.C - Exercicio 13. Caixa eletrônico */

/* Enunciado: simule o funcionamento de um caixa eletrônico, que oferece as seguintes opções ao cliente: 1-depósito, 2-saque, 3-saldo e 4-sair. Suponha que o saldo inicial do cliente é de R$1000,00 e que ele não pode ficar negativo (se o usuário tentar efeturar um saque maior que o saldo corrente, a operação não deve ser efetuada e o usua´rio deve ser informado) */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int option;
    float deposit, balance = 0, withdraw;

    while(1) {
        printf("Opcao? ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                puts("\nDeposito");
                printf("Valor? ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Deposito realizado. Saldo atual R$ %.2f\n\n", balance);
                break;
            case 2:
                puts("\nSaque");
                printf("Valor? ");
                scanf("%f", &withdraw);
                if(withdraw > balance) printf("Nao e possivel realizar o saque. Saldo ficara negativo!\n\n");
                else {
                    balance -= withdraw;
                    printf("Saque realizado. Saldo atual R$ %.2f\n\n", balance);    
                }
                break;
            case 3:
                puts("\nSaldo");
                printf("R$ %.2f\n\n", balance);
                break;
            case 4:
                exit(0);
            default:
                printf("Opcao invalida!\n\n");
                break;
        }
    }

    return 0;
}