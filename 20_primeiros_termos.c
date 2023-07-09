/*Faça um algoritmo que lê um valor x e calcula e mostra os 20 primeiros termos da série*/

#include <stdio.h>
#include <math.h>

float main ()
{

float denominador, divisao, soma, expoente, contador;

	soma=1;
	expoente=1;
	contador=1;
	
	printf("Digite o numero do Denominador: ");
	scanf("%f", &denominador);
	
	for (contador=1; contador<=20; contador++){
		divisao=1/(pow(denominador, expoente));
		soma=soma+divisao;
		expoente=expoente+1;
		printf("Os 20 Primeiros Termos da Seguinte Serie: %.2f\n", soma);
	}
	
	
	
}
