/*Faça um algoritmo que calcule a seguinte série 99/50*/

#include <stdio.h>

float main ()
{

float denominador, divisao, soma, contador, divisor;

	soma=0;
	divisor=1;
	denominador=1;
	
	for (contador=1; contador<=50; contador++){
		printf("Seguinte Serie: %.0f / %.0f \n", divisor, denominador);
		divisao=divisor/denominador;
		soma=soma+divisao;
		divisor=divisor+2;
		denominador=denominador+1;
	}
	printf("Resultado Serie: %.0f \n", soma);	
}
