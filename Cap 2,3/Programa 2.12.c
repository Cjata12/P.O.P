#include <stdio.h>
#include <math.h>

/* Igualdad de expresiones
El programa que al recibir como datos T, P, N comprueba la igualdad de una expresion
determinada */

void main(void)
{
    int T, P, N;
    printf("\nIngrese los valores de T, P y N: ");
    scanf("%d %d %d", &T, &P, &N);
    if(P != 0)
    {
        if (pow(T/P, N) == (pow(T, N) / pow(P, N)))
        {
            printf("\nSe comprueba la igualdad");

        } else{
            printf("No se comprueba la igualdad");
        }

    }else{
        printf("\nP tiene que ser diferente a cero\n");
    }


    return 0;
}
