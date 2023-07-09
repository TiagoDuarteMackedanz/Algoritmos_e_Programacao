/*8.3.Reescreva o algoritmo para o problema 8.1 utilizando a estrutura FAÇA/ENQUANTO na construção
da repetição de validação.*/

#include <stdio.h>

float main()
{
    float dividendo, divisor, resultado;
    
    do{
        printf("Digite o seu Dividendo: ");
        scanf("%f", &dividendo);
        printf("Digite seu Divisor: ");
        scanf("%f", &divisor);
    if (divisor!=0){
    	resultado = dividendo / divisor;
        printf("Resultado da Divisao: %.2f\n", resultado);
    }
	}
    while(divisor!=0);
}
