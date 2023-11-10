#include <stdio.h>
#include <math.h>

void main(void)
{
    int DIS, TIE;
    float BIL;
    printf("\nIngrese la distancia (KM) a donde va y el tiempo de estadia (DIAS): ");
    scanf("%d %d", &DIS, &TIE);
    if((DIS *2 > 500) && TIE > 10)
    {
        BIL = DIS *2 * 0.19 * 0.80;

    } else{
        BIL = DIS*2 * 0.19;

    }
    printf("\nEl costo de su viaje es: %7.2f\n\n", BIL);




    return 0;
}
