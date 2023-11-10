#include <stdio.h>

int main(void) {
    float PAG, SPA = 0;

    printf("\nIngrese el primer pago:\t");
    scanf("%f", &PAG);

    do {
        SPA += PAG;
        printf("Ingrese el siguiente pago (0 para terminar):\t");
        scanf("%f", &PAG);
    } while (PAG != 0);

    printf("\nEl total de pagos del mes es: %.2f\n\n", SPA);

    return 0;
}
