/*
 ============================================================================
 Name        : calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getInt(int * pNumeroIngresado,char * mensaje, char * mensajeError, int maximo, int minimo)

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	float resultado;

	getInt(&numeroUno, &mensaje"Ingrese un número entero: \n", "El número es incorrecto \n",10,1);
	printf("%d", numeroUno);


	return 0;
}
// El puntero sirve para trabajar entre funciones, pasa la dirección de la variable  // 0 errores, los números negativos se utilizan para diferentes tipos de errores// el aux es para probar? // "&" es para pasarle una dirección de memoria de la variable // Se le coloca pN para indicar que esa variable es un puntero //int(Lo que va a retornar) //Operador de indirección se le llama al * cuando lo utilizamos dentro de la función sino es un indicador de puntero
int getInt(int * pNumeroIngresado, char * mensaje, char * mensajeError, int maximo, int minimo){
	int auxNumeroIngresado;
	int reintentos;
	reintentos = 2;
	int retorno;
	retorno = -1;
	printf("%s", mensaje);
	scanf("%d", &auxNumeroIngresado);

	printf("Ingrese un número entero: ");
	scanf("%d", &auxNumeroIngresado);
	while(auxNumeroIngresado < minimo || auxNumeroIngresado > maximo){
		printf("%s", mensajeError);
		printf("%s", mensaje);
		scanf("%d", &auxNumeroIngresado);
		reintentos--;
		if(reintentos ==0){
			break; // Rompe el bucle de iteeración más cercano que tenga
		}
	}
	*pNumeroIngresado = auxNumeroIngresado; //cambiar la dirección de memoria
	retorno = 0;
	return retorno;


}
