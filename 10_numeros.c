/*Fa�a um programa que solicite ao usu�rio 10 n�meros inteiros e, ao final,
informe a quantidade de n�meros �mpares e pares lidos. Calcule tamb�m a soma
dos n�meros pares e a m�dia dos n�meros �mpares.*/

#include <stdio.h>

int main ()
{

int numero, contador, cont_par=0, cont_impar=0, somapar=0, somaimpar=0;

contador = 1; 

while ( contador <= 10){ 
printf("Digite um Numero: ");
scanf ("%d", &numero);
if(numero%2==0){
cont_par++;
somapar=(somapar+numero);
}
else{
if(numero%2==1);
cont_impar++;
somaimpar=(somaimpar+numero);
}
contador++;
}
printf("\nTotal de Numeros Pares: %d", cont_par);
printf("\nTotal de Numeros Impares: %d", cont_impar);
printf("\nSoma dos Numeros Pares: %d", somapar);
printf("\nMedia dos Numeros Impares: %d", somaimpar/cont_impar);

}
