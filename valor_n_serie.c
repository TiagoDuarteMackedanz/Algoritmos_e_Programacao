/*Faça um algoritmo que leia um valor N e calcule a seguinte série. Considere que
será lido um valor inteiro e positivo.*/

#include <stdio.h>

float main ()
{

float denominador, divisao, soma, n;

	soma=0;
	denominador=1;
	
	printf("Digite um Numero para ser Somado a Serie: ");
	scanf("%f", &n);

	do{
	divisao=1/denominador;
	soma=soma+divisao;
	denominador=denominador+1;
	}
	while (denominador<=n);
	printf("O Resultado da Seguinte Serie: %.2f\n", soma);
}

