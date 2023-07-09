/*8.4.Altere a solução do exercício 8.3 para que seja impressa a mensagem Valor inválido caso o segundo
valor informado seja 0.*/

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
    	printf("Valor Invalido!\n");
}
