/*8.7.Reescreva o algoritmo do exercício 8.6 validando a resposta do usuário para a pergunta Novo Cálculo
(1.sim 2.não)? (aceitar apenas os código 1 ou 2).*/

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
		
		do{
		printf("\nDeseja fazer um Novo Calculo: ");
 		printf("\n1-Sim, 2-Nao\n");
 		scanf ("%f", &cont);
 	}
		while ((cont<1)||(cont>2));

	}
	while (cont==1);	
}
