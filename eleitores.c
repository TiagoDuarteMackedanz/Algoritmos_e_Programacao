/*Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular 
e escrever o percentual que cada um representa em relação ao total de eleitores.*/

#include <stdio.h>

float main()
{
	float total,branco,nulo,valido,percb,percn,percv;
	printf("Digite o Numero Total de Eleitores do Municipio: ");
		scanf("%f", &total);
	printf("\nDigite a Quantidade de Votos Brancos: ");
		scanf("%f", &branco);
	printf("\nDigite a Quantidade de Votos Nulos: ");
		scanf("%f", &nulo);
	printf("\nDigite a Quantidade de Votos Valido: ");
		scanf("%f", &valido);
	percb=branco/total*100;
	percn=nulo/total*100;
	percv=valido/total*100;
	printf("\nVotos Brancos: %.2f", percb);
	printf("\nVotos Nulos: %.2f", percn);
	printf("\nVotos Validos: %.2f", percv);
}
