/*Faça um algoritmo que calcule a seguinte série 1/1 + 1/2*/

#include <stdio.h>

float main ()
{

float denominador, divisao, soma;

	soma=0;
	denominador=1;

	do{
	divisao=1/denominador;
	soma=soma+divisao;
	denominador=denominador+1;
	}
	while (denominador<=100);
	printf("O Resultado da Seguinte Serie: %.2f\n", soma);
}

