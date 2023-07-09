/*Faça um algoritmo que leia 3 números e diga se podem ser lados de um triângulo*/

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("\nDigite tres valores para saber se podem ser lados de um triangulo.\n");
	
	printf("\nDigite o valor de A: ");
		scanf("%d", &a);
	printf("\nDigite o valor de B: ");
		scanf("%d", &b);
	printf("\nDigite o valor de C: ");
		scanf("%d", &c);
	
	if ((a<(b+c)) && (b<(c+a)) && (c<(a+b))){
		printf("\nPodem ser lados de um triangulo");
	}
	else {
		printf("\nNao podem ser lados de um triangulo.");
	}
}
