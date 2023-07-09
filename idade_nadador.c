/*Elabore um algoritmo que, dada a idade de um nadador classifica-o em uma categoria.*/

#include <stdio.h>

float main()
{
	float idade;
	printf("\nDigite sua Idade: ");
	scanf("%f", &idade);
	if ((idade>=5) && (idade<=7)){
		printf("Voce faz parte da categoria: Infantil A");
	}
	if ((idade>=8) && (idade<=10)){
		printf("Voce faz parte da categoria: Infantil B");
	}
	if ((idade>=11) && (idade<=13)){
		printf("Voce faz parte da categoria: Juvenil A");
	}
	if ((idade>=14) && (idade<=17)){
		printf("Voce faz parte da categoria: Juvenil B");
	}
		if (idade>=18){
		printf("Voce faz parte da categoria: Adulto");
	}
}
