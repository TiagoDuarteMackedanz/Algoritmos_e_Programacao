/*8.1.Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo. Escreva um
algoritmo para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo.
OBS: O algoritmo deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for
fornecido um valor nulo a leitura deve ser repetida. Utilize a estrutura ENQUANTO na construção da
repetição de validação.*/

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
