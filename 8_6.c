/*8.6.Reescreva o algoritmo para o problema 8.5 para que no final seja impressa a mensagem Novo c�lculo
(1.sim 2.n�o) solicitando ao usu�rio que informe um c�digo (1 ou 2) indicando se ele deseja ou n�o
executar o algoritmo novamente. Se for informado o c�digo 1 deve ser repetida a execu��o de todo o
algoritmo para permitir um novo c�lculo, caso contr�rio ele deve ser encerrado.*/

#include <stdio.h>

float main()
{
 	float nota1, nota2, media, cont;

 	do{
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
	printf ("\nMedia Final: %.2f\n ", media);
	printf("\nDeseja fazer um Novo Calculo: ");
 	printf("\n1-Sim, 2-Nao\n");
 	scanf ("%f", &cont);
	}
	while (cont==1);	
}
