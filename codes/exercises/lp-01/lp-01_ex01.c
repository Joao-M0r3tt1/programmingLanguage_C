/* ERRO.C - Exercicios 2. Erro */
/* Enunciado: Qual o erro no programa a seguir? */

#include <stdio.h> 

int main(void) {
    /* printf("%d\n", 0678); */   // erro
    printf("%d\n", 067);   // correto

    return 0;
}

/* Identifica que o valor '0678' seria um octal, mas é um octal inválido - Apresenta o erro: invalid octal digit */