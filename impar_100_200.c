/*Fa�a um algoritmo que gera e escreve os n�meros �mpares entre 100 e 200.
Utilize a fun��o resto para verificar se o n�mero � impar.*/

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
