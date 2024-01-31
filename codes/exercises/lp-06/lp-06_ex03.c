/*
en-US: EXERCISE_03.C - Exercise 03. histogram
- Statement: create the histogram() function, which displays a graph with temperature variation throughout the week. In this graph, each bar must be composed of n ASCII 220 characters (n being the corresponding temperature). Furthermore, the color of each bar must indicate whether the temperature is equal to the average (green), lower (blue) or higher (red). For simplicity, assume that temperatures are values between 0ºC and 50ºC
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Histograma
- Enunciado: crie a função histograma(), que exibe um gráfico com a variação de temperatura ao longo da semana. Nesse gráfico, cada barra deve ser composta por n caracteres ASCII 220 (sendo n a temperatura correspondente). Ademais, a cor de cada barra deve indicar se a temperatura é igual à media (verde), menor (azul) ou maior (vermelho). Para simplificar, suponha que as temperaturas são valores entre 0ºC e 50ºC
*/

#include <stdio.h>
#include <conio.h>

void fill(float w[]) {
    int i = 0;

    do {
        printf("%dst temperature? ", (i + 1));
        scanf("%f", &w[i++]);
    } while(i < 7);
    
    puts("");
}

float calc_average(float w[]) {
    float average = 0.0;
    
    for(int i = 0; i < 7; i++) {
        average += w[i];
    }

    return (average / 7);
}

void histogram(float w[], float average) {
    for(int i = 0; i < 7; i++) {
        _textcolor(15);
		printf("%dst: ", (i + 1));
        if(w[i] < average) {
            _textcolor(1);
			while(w[i]--) printf("%c", 220);
			puts("");
        } else if(w[i] == average) {
            _textcolor(2);
			while(w[i]--) printf("%c", 220);
			puts("");
        } else {
            _textcolor(4);
			while(w[i]--) printf("%c", 220);
			puts("");
        }
    }
	_textcolor(15);
}

int main(void) {
    float vector[7];
    fill(vector);
    histogram(vector, calc_average(vector));

    return 0;
}
