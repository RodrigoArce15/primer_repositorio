/*
 ============================================================================
 Name        : clase_2_ejercicio_2_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int i;
	int promedio;
	int acumulador = 0;

	for(i = 0 ; i < 5 ; i++ ){
		printf("Ingrese  un numero");
		scanf("%d", &numero);
		acumulador = numero + acumulador;
	}
	promedio = acumulador / 2;
	printf("El promedio es : %d", promedio);


	return EXIT_SUCCESS;
}
