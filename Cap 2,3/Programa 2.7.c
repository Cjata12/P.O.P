#include <stdio.h>

/* ventas descendentes.
El programa, al recibir como datos tres valores que representan las ventas
de los vendedores de una tienda de discos, escribe las ventas en
orden descendente.*/

void main(void)
{
    float P, S, R;
    printf("\nIngrese las ventas de los tres vendores: ");
    scanf("%f %f %f", &P, &S, &R);

    if (P > S)
    {
        if (P > R)
        {
            if (S > R)
            {
                printf("El orden es P, S y R: %8.2f, %8.2f, %8.2f\n\n", P, S, R);
            }else
            {
                printf("El orden es P, R y S: %8.2f, %8.2f, %8.2f\n\n", P, R, S);
            }
        }else
        {
            printf("El orden es R, P y S: %8.2f, %8.2f, %8.2f\n\n");
        }
    }else
    {
        if(S > R)
        {
            if(P > R)
            {
                printf("El orden es S, P, R: %8.2f, %8.2f, %8.2f\n\n", S, P, R);
            }else
            {
                printf("El orden es S, R, P: %8.2f, %8.2f, %8.2f\n\n", S, R, P);
            }
        }else
        {
            printf("El orden es R, S, P: %8.2f, %8.2f, %8.2f\n\n", R, S, P);
        }
    }

return 0;
}

