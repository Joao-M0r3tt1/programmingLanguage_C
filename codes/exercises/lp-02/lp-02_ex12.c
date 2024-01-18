/* NUMEROLOGIAFACEBOOK.C - Exercício 12. Numerologia de Facebook */

/* Enunciado: suponha que o perfil de uma pessoa possa ser determinado pela sua data de nascimento (como exemplificado a seguir). Dada uma data de nascimento, informe o perfil correspondente

Data de nascimento: 13/06/1970
1º passo: 1306 + 1970 = 3276
2º passo: 32 + 76 = 108
3º passo: 108 / 5 = 21 (108 - 105 = resto 3)

Resto       Perfil
0           Timido 
1           Sonhador
2           Paquerador
3           Atraente
4           Irresistível

*/

#include <stdio.h>

int main(void) {
    int day, month, year, step1, step2, step3;

    printf("Data de nascimento (DD MM AAAA)? ");
    scanf("%d %d %d", &day, &month, &year);

    step1 = (day * 100 + month) + year;
    step2 = (step1 / 100) + (step1 % 100);
    step3 = step2 % 5;

    switch (step3) {
    case 0:
        puts("O perfil correspondente e Timido.");
        break;
    case 1:
        puts("O perfil correspondente e Sonhador.");
        break;
    case 2:
        puts("O perfil correspondente e Paquerador.");
        break;
    case 3:
        puts("O perfil correspondente e Atraente.");
        break;
    case 4:
        puts("Operfil correspondente e Irressitivel.");
        break;
    default:
        puts("Perfil nao encontrado.");
        break;
    }

    return 0;
}