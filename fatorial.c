/*Faça um algoritmo para calcular o fatorial de um número.*/

#include <stdio.h>

float main()
{
	
float numero, fatorial, calculo;

	printf("Digite um numero para calcular seu fatorial: ");
	scanf("%f", &numero);
	for(fatorial=1; numero>1; numero=numero-1){
	fatorial = (fatorial*numero);
	printf("\nFatorial Calculado: %f", fatorial);
	}
		
}
