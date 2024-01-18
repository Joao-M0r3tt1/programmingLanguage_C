/* OBESE.C - determina se uma pessoa est� obesa */

/* Enunciado: Uma pessoa est� obesa se seu IMC (peso dividido pela altura ao quadrado) � superior a 30.
Dados o peso e a altura de uma pessoa, informe se ela est� obesa. */

#include <stdio.h>	// entrada e sa�da padr�o
#include <math.h>	// fun��es matem�ticas

int main(void) {
	// declara��o de vari�veis
	float weight, height, bmi;	
	
	// comandos
	printf("Qual o peso e a altura? ");
	scanf("%f %f", &weight, &height);
	bmi = weight / pow(height, 2);	// bmi = weight / (height * height);
	printf("BMI = %.1f\n", bmi);
	if(bmi <= 30) printf("Nao esta obesa!\n");
	else printf("Esta obesa!\n");
	
	// retorno da fun��o main
	return 0;
}

