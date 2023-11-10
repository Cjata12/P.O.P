#include <stdio.h>
#include <math.h>

/*El programa que al recibir como dato un valor entero, calcula
el resultado de una funcion*/

void main(void)
{
    float X;
    int Y;
    printf("Ingrese el valor de Y: ");
    scanf("%d", &Y);
    if(Y < 0 || Y > 50)
    {
        X = 0;
    } else
    {
        if (Y <= 10)
        {
            X = 4/Y - Y;
        }else
        {
            if (Y <=25 )
            {
                 X = pow(Y, 3) - 12;
            } else
            {
                X = pow(Y, 2) + pow(Y, 3) - 18;

            }

        } printf("\n\nY = %d\tX = %8.2f", Y, X);

    }



    return 0;
}
