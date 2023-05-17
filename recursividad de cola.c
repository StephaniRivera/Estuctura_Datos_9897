/* 			UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
					ESTRUCTURA DE DATOS
NOMBRE: STEPHANI RIVERA
NRC: 9798

EJERCICIO:
Calcular el numero factorial de un numero entero 
*/
#include <stdio.h>
//prototipo
int factorial_recursivo(int, int); 
int main() {
    int numero;
    printf("Ingrese un numero: \n");
    scanf("%d", &numero);
    printf("El factorial de %d es %d.\n", numero, factorial_recursivo(numero, 1));
    return 0;
}
//funcion con recursividad de cola
int factorial_recursivo(int numero, int acumulador) {
    if (numero  == 0) { //<- caso base
        return acumulador;
    } else {
        return factorial_recursivo(numero-1, acumulador*numero);
    }
}
