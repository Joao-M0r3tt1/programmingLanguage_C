/*
en-US: EXERCISE_12.C - Exercise 12. Facebook Numerology
- Statement: suppose that a person's profile can be determined by their date of birth (as exemplified below). Given a date of birth, enter the corresponding profile

Date of birth: 06/13/1970
1st step: 1306 + 1970 = 3276
2nd step: 32 + 76 = 108
3rd step: 108 / 5 = 21 (108 - 105 = remainder 3)

Rest        Profile
0           Shy
1           Dreamer
2           Flirtatious
3           Attractive
4           Irresistible
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Numerologia de Facebook
- Enunciado: suponha que o perfil de uma pessoa possa ser determinado pela sua data de nascimento (como exemplificado a seguir). Dada uma data de nascimento, informe o perfil correspondente

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

    printf("Date of birth (DD MM YYYY)? ");
    scanf("%d %d %d", &day, &month, &year);

    step1 = (day * 100 + month) + year;
    step2 = (step1 / 100) + (step1 % 100);
    step3 = step2 % 5;

    switch (step3) {
    case 0:
        puts("The matching profile is shy.");
        break;
    case 1:
        puts("The corresponding profile is Dreamer.");
        break;
    case 2:
        puts("The corresponding profile is Flirting.");
        break;
    case 3:
        puts("The matching profile is Attractive.");
        break;
    case 4:
        puts("The matching profile is Irresistible.");
        break;
    default:
        puts("Profile not found.");
        break;
    }

    return 0;
}