/*8.2.Altere a solução do exercício 8.1 para que seja impressa a mensagem Valor inválido caso o segundo
valor informado seja ZERO.*/

#include <stdio.h>

float main()
{
    float dividendo, divisor, resultado;
    
    
        printf("Digite o seu Dividendo: ");
        scanf("%f", &dividendo);
        printf("Digite seu Divisor: ");
        scanf("%f", &divisor);
    while (divisor ==0){
    	printf("Valor Invalido!\n");
   	 	printf("Digite eu Divisor: ");
        scanf("%f", &divisor);
    }
      	resultado = dividendo / divisor;
        printf("Resultado da Divisao: %.2f\n", resultado);
}
