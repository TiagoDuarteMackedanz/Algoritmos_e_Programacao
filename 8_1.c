/*8.1.Para que a divis�o entre 2 n�meros possa ser realizada, o divisor n�o pode ser nulo. Escreva um
algoritmo para ler 2 valores e imprimir o resultado da divis�o do primeiro pelo segundo.
OBS: O algoritmo deve validar a leitura do segundo valor (que n�o deve ser nulo). Enquanto for
fornecido um valor nulo a leitura deve ser repetida. Utilize a estrutura ENQUANTO na constru��o da
repeti��o de valida��o.*/

#include <stdio.h>

float main()
{
    float dividendo, divisor, resultado;
    
    
        printf("Digite o seu Dividendo: ");
        scanf("%f", &dividendo);
        printf("Digite seu Divisor: ");
        scanf("%f", &divisor);
    while (divisor ==0){
   	 	printf("Digite seu Divisor: ");
        scanf("%f", &divisor);
    }
      	resultado = dividendo / divisor;
        printf("Resultado da Divisao: %.2f\n", resultado);
}
