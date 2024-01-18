/*
en-US: EXERCISE_06.C - Exercise 06. The next day
- Statement: create a program that, given a date, if it is valid, informs the date of the next day. The program must consist of the following functions:

int main(void)                          : which performs the user interface
int valid(int d, int m, int a)          : which informs whether the given date is valid
int last_day(int m, int a)              : which informs the last day of month m in year a
int leap_year(int a)                    : which tells whether year a is a leap year
void exhibited_nd(int d, int m, int a)  : which displays the date of the day following that given date
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. O dia seguinte
- Enunciado: crie um programa que, dada uma data, se ela for válida, informe a data do dia seguinte. O programa deve ser composto pelas seguintes funções: 

int main(void)                       : que realiza a interface com o usuário 
int valida(int d, int m, int a)      : que informa se a data fornecida é válida      
int ultimo_dia(int m, int a)         : que informa o último dia do mês m no ano a
int bissexto(int a)                  : que informa se o ano a é bissexto
void exibe_ds(int d, int m, int a)   : que exibe a data do dia seguinte àquele dado
*/

#include <stdio.h>

int leap_year(int year) {
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) return 1;
            else return 0;
        } else return 1;
    } else return 0;
}

int last_day(int month, int year) {
    if(month == 2) {
        if(leap_year(year)) return 29;
        else return 28;
    } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
    else if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 0;
}

int valid(int day, int month, int year) {
    int aux = last_day(month, year);

    if(!aux) return 0;
    else if(day > aux || day <= 0) return 0;
    else return 1;
}

void exhibited_nd(int day, int month, int year) {
    if(!valid(day, month, year)) {
        printf("Date informed and invalid!\n");
    } else {
        if(day == 31 && month == 12) printf("Next day: 01/01/%d\n", year + 1);
        else if((day == 29 && month == 2 && leap_year(year)) || (day == 28 && month == 2 && !leap_year(year))) printf("Next day: 01/%02d/%d\n", month + 1, year);
        else if(day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) printf("Next day: 01/%02d/%d\n", month + 1, year);
        else if(day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)) printf("Next day: 01/%02d/%d\n", month + 1, year);
        else printf("Next day: %02d/%02d/%d\n", day + 1, month, year);
    }
}

int main(void) {
    int day, month, year;

    printf("(dd/mm/yyyy) - Date? ");
    scanf("%d %d %d", &day, &month, &year);

    exhibited_nd(day, month, year);

    return 0;
}