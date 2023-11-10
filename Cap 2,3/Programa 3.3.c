#include <stdio.h>

int main(void) {
    float PAG, SPA;
    SPA = 0;

    printf("\nIngrese el primer pago:\t");
    scanf("%f", &PAG);

    while (PAG != 0) {
        SPA += PAG;
        printf("Ingrese el siguiente pago: ");
        scanf("%f", &PAG);
    }

    printf("\nEl total de pagos del mes es: %.2f\n\n", SPA);

    return 0;
}
