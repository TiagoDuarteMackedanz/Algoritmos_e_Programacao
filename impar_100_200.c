/*Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200.
Utilize a função resto para verificar se o número é impar.*/

#include <stdio.h>

int main ()
{
	
int contador;

	contador = 100;

	while (contador<=200){
		if (contador%2==1){
		printf("%d\n",contador);
	}
		contador++;
	}
	}
