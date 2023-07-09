/*Faça um algoritmo que gere os N primeiros termos da série a seguir. Considere
que será lido um valor inteiro e positivo.*/

#include <stdio.h>

float main ()
{

float denominador, divisao, soma, n;
int  divisor1, divisor2, contador;

	soma=1;
	divisor1=8;
	divisor2=4;
	denominador=3;
	
	printf("Digite o Numero de Termos a ser Calculado: ");
	scanf("%f", &n);
	
	for (contador=2; contador<=n; contador++){
		if (divisor2%2==0){
			divisao=(divisor1-divisor2)/denominador;
			soma=soma+divisao;
			denominador=denominador+2;
			divisor1=divisor1+4;
			divisor2=divisor2-1;
	}
		else{
			divisao=(divisor1-divisor2)/denominador;
			soma=soma+divisao;
			denominador=denominador+2;
			divisor1=divisor1+4;
			divisor2=divisor2+1;
		}
	}
	printf("Resultado Serie: %f \n", soma);	
}
