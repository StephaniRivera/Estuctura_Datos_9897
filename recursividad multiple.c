/* 			UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
					ESTRUCTURA DE DATOS
NOMBRE: STEPHANI RIVERA
NRC: 9798

EJERCICIO:
Calcular la potencia de un numero
*/
#include <stdio.h>
//prototipo
int exponente(int base, int exp);

int main() {
    int base, exp;
    printf("Ingrese el numero base \n");
    scanf("%d", &base);
    printf("Ingrese el exponente: \n");
    scanf("%d", &exp);
    printf("\nEl numero %d elevado a la %d es %d\n", base, exp, exponente(base, exp));
    return 0;
}

//funcion con recursividad multiple 
int exponente(int base, int exp) {
    if (exp == 0) {// <- caso base 1
        return 1;
    } else if (exp == 1) { // <- caso base 2
        return base;
    } else {
        return base * exponente(base, exp-1);
    }
}
