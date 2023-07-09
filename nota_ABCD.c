/*Escrever um algoritmo que leia uma nota e mostre o conceito equivalente.*/

#include <stdio.h>

float main()
{
	float nota1;
	printf("\nDigite sua Nota: ");
	scanf("%f", &nota1);
	if ((nota1>=0) && (nota1<=5)){
		printf("Voce tirou: D");
	}
		if ((nota1>5) && (nota1<=7)){
		printf("Voce tirou: C");
	}
		if ((nota1>7) && (nota1<=9)){
		printf("Voce tirou: B");
	}
		if ((nota1>9) && (nota1<=10)){
		printf("Voce tirou: A");
	}
	
}
