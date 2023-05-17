/* 			UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
					ESTRUCTURA DE DATOS
NOMBRE: STEPHANI RIVERA
NRC: 9798

EJERCICIO:
Imprimir los numeros que estan antes del numero entero positivo ingresado
*/

#include <stdio.h>
// protoripo
void imprimirNum(int);

int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);
    imprimirNum(numero);
    return 0;
}
//funcion con recursividad directa
void imprimirNum(int numero) {
    if (numero == 1) { // <- caso base
        printf("%d\n", numero); 
    } else {
        imprimirNum(numero-1);
        printf("%d\n", numero);
    }
}

