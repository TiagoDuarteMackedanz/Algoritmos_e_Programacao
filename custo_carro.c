/*O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de f�brica de um carro, 
calcular e escrever o custo final ao consumidor.*/

#include <stdio.h>

float main()
{
	float custo_fab,imposto,perc_dist,custo_cons;
	
	printf("Digite o Custo de Fabrica do Carro: ");
		scanf("%f", &custo_fab);
	perc_dist=(custo_fab*0.28)+custo_fab;
	imposto=(custo_fab*0.45)+custo_fab;
	custo_cons=perc_dist+imposto+custo_fab;
	printf("\n O Custo Final ao Consumidor e: %.3f", custo_cons);
}

