#include <stdio.h>
#include <math.h>

void main(void) {
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;

    printf("Ingrese el número de datos que se van a procesar: ");
    scanf("%d", &N);

    if (N > 0) {
        for (I = 1; I <= N; I++) {
            printf("\nIngrese el número %d: ", I);
            scanf("%d", &NUM);

            if (NUM) {
                if (pow(-1, NUM) > 0) {
                    SPA = SPA + NUM;
                } else {
                    SIM = SIM + NUM;
                    CIM++;
                }
            }
        }

        printf("\nLa suma de los números pares es: %d", SPA);

        if (CIM > 0) {
            float promedio = (float) SIM / CIM;
            printf("\nEl promedio de números impares es: %5.2f", promedio);
        } else {
            printf("\nNo se ingresaron números impares.");
        }
    } else {
        printf("\nEl valor de N es incorrecto");
    }
}
