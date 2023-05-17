/* 			UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
					ESTRUCTURA DE DATOS
NOMBRE: STEPHANI RIVERA
NRC: 9798

EJERCICIO:
Realice una funcion que sume los primeros n enteros positivos, teniendo en cuenta
que la suma puede expresarse de la siguiente manera
		suma(n)=1,   si n=1
		n+suma(n-1), si n>1
*/

#include <stdio.h>


int sumar(int);

int main(){
	int numeros;
	
	//solo enteros positivos
	do{
		printf("Digite la cantidad de elementos \n ");
		scanf("%i", &numeros);
	}while(numeros <=0);
	
	printf("\nLa suma de los primeros numeros enteros es %i\n", sumar(numeros));

	return 0;
}

//funcion con recursividad directa
int sumar(int n){
	int suma=0;
	if(n==1){// <- caso base
		suma=1;
	}else{
		suma = n+sumar(n-1);
	}
	return suma;
}
