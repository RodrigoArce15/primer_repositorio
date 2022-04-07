/*
 ============================================================================
 Name        : ejercicio_2_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1
#define LIMIT 5

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int i;
	int  numeroMayor;
	int numeroMenor;
	int flag = 0;

	for(i = 0 ; i < LIMIT ; i++){
		printf("Ingrese un número");
		scanf("%d", &numero);

		if(flag == FALSE){ //if(i==0 || numero < numeroMenor)
				numeroMayor = numero;
				numeroMenor = numero;
				flag = TRUE;
			}
			else if(numeroMayor > numero){
				numeroMayor = numero;
			}
			else if(numeroMenor < numero){
				numeroMenor = numero;
			}
	}

	printf("El número menor es : %d\n El numero mayor es : %d", numeroMayor, numeroMenor);



	return EXIT_SUCCESS;
}
