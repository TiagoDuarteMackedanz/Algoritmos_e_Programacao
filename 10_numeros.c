/*Faça um programa que solicite ao usuário 10 números inteiros e, ao final,
informe a quantidade de números ímpares e pares lidos. Calcule também a soma
dos números pares e a média dos números ímpares.*/

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
