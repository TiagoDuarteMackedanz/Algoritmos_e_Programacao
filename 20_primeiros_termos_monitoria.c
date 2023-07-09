/*Faça um algoritmo que lê um valor x e calcula e mostra os 20 primeiros termos da série*/

#include <stdio.h>
#include <math.h>

float main ()
{

float denominador, divisao, soma, contador;

    soma=1;
    contador=1;

    printf("Digite o numero do Denominador: ");
    scanf("%f", &denominador);

    for (contador=2; contador<=20; contador++){
        divisao = 1/(pow(denominador, contador));
        soma = soma+divisao;
    }

    printf("%f", soma);



}
