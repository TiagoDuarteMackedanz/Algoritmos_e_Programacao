/*Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere que os usuário
não informará valores iguais.*/

#include <stdio.h>

int main ()
{
int valor1,valor2,valor3;

printf("Digite 3 Valores para serem colocados em Ordem Crescente.\n");
printf("\nDigite o Primeiro Valor: ");
scanf("%d", &valor1);
printf("\nDigite o Segundo Valor: ");
scanf("%d", &valor2);
printf("\nDigite o Terceiro Valor: ");
scanf("%d", &valor3);

if (valor1<valor2){
if (valor1<valor3){
if (valor2<valor3){
printf("\nA Ordem Crescente e: %d %d %d", valor1, valor2, valor3);
}
else {
printf("\nA Ordem Crescente e: %d %d %d", valor1, valor3, valor2);
}
}
else{
printf("\nA Ordem Crescente e: %d %d %d", valor3, valor1 , valor2);
}
}
else
if(valor2<valor3)
if (valor1<valor3)
printf("\nA Ordem Crescente e: %d %d %d", valor3, valor1, valor3);
else
printf("\nA Ordem Crescente e: %d %d %d", valor2, valor3, valor1);
else
printf("\nA Ordem Crescente e: %d %d %d", valor3, valor2, valor1);

}
