/*Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo.*/

#include <stdio.h>

int main ()
{
	int area,base,altura;
	printf("Digite a Base e Altura do Retangulo.\n");
	printf("\nInforme a Base: ");
	scanf("%d", &base);
	printf("\nInforme a Altura: ");
	scanf("%d", &altura);
	area = base * altura;
	printf("\nArea do Retangulo %d", area);
}
