/*
 ============================================================================
 Name        : clase_2_ejercicio_2_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ingresar 10 números enteros, distintos de cero. Mostrar:Cantidad de pares e impares.
 El menor número ingresado.De los pares el mayor número ingresado.Suma de los positivos.Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i;
	int numero;
	int contadorPares = 0;
	int contadorImpares = 0;
	int menorNumero;
	int flagMenorNumero = 0;
	int mayorNumeroPar;
	int flagMayorNumeroPar = 0;
	int acumuladorPositivos = 0;
	int productoNegativos = 1;

	for(i = 0 ; i < 10 ; i++){
		printf("Ingrese un numero entero distinto de 0 :  ");
		scanf("%d", &numero);

		while(numero == 0){
			printf("Ingrese un numero entero distinto de 0 : ");
			scanf("%d", &numero);
		}
		if(numero % 2 == 0){
			contadorPares++;
		}
		else{
			contadorImpares++;
		}
		if(flagMenorNumero == 0 || numero < menorNumero){
			menorNumero = numero;
			flagMenorNumero = 1;
		}
		if(numero % 2 == 0 && (flagMayorNumeroPar == 0 || numero > mayorNumeroPar)){
			mayorNumeroPar = numero;
			flagMayorNumeroPar = 1;
		}
		if(numero > 0){
			acumuladorPositivos = acumuladorPositivos + numero;
		}
		else{
			productoNegativos = productoNegativos * numero;
		}

	}
printf("Cantidad de numero pares : %d\n Cantidad de numeros impares : %d\n", contadorPares, contadorImpares);
	printf("Menor numero ingresado : %d\n Mayor número par ingresado : %d\n", menorNumero, mayorNumeroPar);
	printf("Suma de números positivos %d\n Producto de números negativos %d", acumuladorPositivos, productoNegativos);
	return EXIT_SUCCESS;
}
