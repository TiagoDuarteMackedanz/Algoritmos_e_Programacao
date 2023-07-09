/*8.5.Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e imprimir a
média semestral. Faça com que o algoritmo só aceite notas válidas( uma nota válida deve pertencer ao
intervalo [0,10]. Cada nota deve ser validada separadamente. Deve ser impressa a mensagem "Nota
inválida" caso a nota informada não pertença ao intervalo [0,10].*/

#include <stdio.h>

float main()
{
 	float nota1, nota2, media;

 	
	printf("Digite as notas das Avaliacoes:\n");	
 	printf("\nDigite a nota da Avaliacao 1: ");
 		scanf ("%f", &nota1);
 		
 		while ((nota1<0) || (nota1>10)){
		printf("Valor Invalido\n");
		printf("Digite a Nota da Avalicacao 1: ");
		scanf("%f", &nota1);
	}
	
 	printf("\nDigite a nota da Avaliacao 2: ");
 		scanf ("%f", &nota2);
 		
 		while ((nota2<0) || (nota2>10)){
		printf("Valor Invalido!\n");
		printf("Digite a Nota da Avalicacao 2: ");
		scanf("%f", &nota2);
	}
			
 	media=(nota1+nota2)/2;
	printf ("\nMedia Final: %.2f", media);

}

