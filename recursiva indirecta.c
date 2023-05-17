/* 			UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
					ESTRUCTURA DE DATOS
NOMBRE: STEPHANI RIVERA
NRC: 9798

EJERCICIO:
Determinar si un numero es par o impar
*/

#include <stdio.h>
//prototipo
int numero1(int);
int numero2(int);

int main(){
	int numero;
	
	printf("Ingrese un numero: \n");
	scanf("%i", &numero);
	//condicionamos
	if(numero1(numero)==1){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
	return 0;
}

//funcion con recursividad indirecta
int numero1(int numero){
	if(numero==0){ // <- caso base
		return 1;
	}else{
		return numero2(numero-1);
	}
}

int numero2(int numero){
	if(numero==0){ // <- caso base
		return 0;
	}else{
		return numero1(numero-1);
	}
	
}
