/*
 ============================================================================
 Name        : clase_1_ejercicio_d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Aplicando el concepto de Operadores Lógicos con valores booleanos en el condicional:
Solicitar un número al usuario
Informar si el mismo es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;
	setbuf(stdout, NULL);

	printf("Ingrese el número : \n");
	scanf("%d", &numero);
	if(numero % 2 == 0){
		printf("El numero %d es par\n", numero);
	}
	else{
		printf("El numero %d es impar", numero);
	}

	return EXIT_SUCCESS;
}
