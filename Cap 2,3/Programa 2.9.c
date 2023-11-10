#include <stdio.h>
#include <math.h>

/* Expresion
El programa al recibir como datos tres valores enteros, establece
si los mismos satisfacen una expresion determinada.*/

void main (void)
{
    float RES;
    int R, T, Q;
    printf("\nIngrese los valores R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);
    RES = pow(R, 4)- pow(T, 3) + 4 * pow(Q,2);
    if(RES < 820){
        printf("\nR = %d\tT = %d Q = %d\n\n", R, T, Q);
    }else
    {
        printf("Los numeros insertados no cumplen los requisitos indicados\n\n");
    }




    return 0;
}

