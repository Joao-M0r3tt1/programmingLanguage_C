/*
en-US: EXERCISE_13.C - Exercise 13. Cash machine
- Statement: simulate the operation of an ATM, which offers the following options to the customer: 1-deposit, 2-withdrawal, 3-balance and 4-exit. Suppose that the customer's initial balance is R$1000.00 and that it cannot become negative (if the user tries to make a withdrawal greater than the current balance, the operation must not be carried out and the user must be informed)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_13.C - Exercicio 13. Caixa eletrônico
- Enunciado: simule o funcionamento de um caixa eletrônico, que oferece as seguintes opções ao cliente: 1-depósito, 2-saque, 3-saldo e 4-sair. Suponha que o saldo inicial do cliente é de R$1000,00 e que ele não pode ficar negativo (se o usuário tentar efeturar um saque maior que o saldo corrente, a operação não deve ser efetuada e o usua´rio deve ser informado)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int option;
    float deposit, balance = 0, withdraw;

    while(1) {
        printf("Option? ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                puts("\nDeposit");
                printf("Value? ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Deposit made. Current balance R$ %.2f\n\n", balance);
                break;
            case 2:
                puts("\nWithdraw");
                printf("Value? ");
                scanf("%f", &withdraw);
                if(withdraw > balance) printf("It is not possible to withdraw. Balance will be negative!\n\n");
                else {
                    balance -= withdraw;
                    printf("Withdrawal made. Current balance R$ %.2f\n\n", balance);    
                }
                break;
            case 3:
                puts("\nBalance");
                printf("R$ %.2f\n\n", balance);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid option!\n\n");
                break;
        }
    }

    return 0;
}