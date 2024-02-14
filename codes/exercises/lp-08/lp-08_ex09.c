/*
en-US: EXERCISE_09.C - Exercise 09. Centralized string display
- Statement: create the function center(s, y), which clears the screen and displays the string s centered on the y line of the video. Suppose the screen has 25 lines of 80 columns and that s has a maximum of 80 characters
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_09.C - Exercicio 09. Exibição centralizada de string
- Enunciado: crie a função centraliza(s, y), que limpa a tela e exibe a string s centralizada na linha y do vídeo. Suponha que a tela tem 25 linhas de 80 colunas e que s tem no máximo 80 caracteres 
*/

#include <stdio.h>
#include <conio.h>

void center(char s[], int y) {
    int i = 0, n;

    while(s[i]) {
        i++;
    }
    n = i / 2;
    
    _clrscr();
    _gotoxy(1, (y - n));
    for(int j = 0; j <= i; j++) 
        printf("%c", s[j]); 
	printf("\n\n");
}

int main(void) {
    char v[] = "Just a test"; 

    center(v, 13);

    return 0;
}
