#include <stdio.h>
#include <math.h>

void main(void) {
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;

    printf("Ingrese el n�mero de datos que se van a procesar: ");
    scanf("%d", &N);

    if (N > 0) {
        for (I = 1; I <= N; I++) {
            printf("\nIngrese el n�mero %d: ", I);
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

        printf("\nLa suma de los n�meros pares es: %d", SPA);

        if (CIM > 0) {
            float promedio = (float) SIM / CIM;
            printf("\nEl promedio de n�meros impares es: %5.2f", promedio);
        } else {
            printf("\nNo se ingresaron n�meros impares.");
        }
    } else {
        printf("\nEl valor de N es incorrecto");
    }
}
