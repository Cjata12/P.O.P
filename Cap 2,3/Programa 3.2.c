#include <stdio.h>

int main(void) {
    int I, N, NUM, SUM;
    SUM = 0;

    printf("\nIngrese el numero de datos:\t");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) {
        printf("Ingrese el dato numero %d:\t", I);
        scanf("%d", &NUM);

        if (NUM > 0)
            SUM += NUM;
    }

    printf("\nLa suma de los numeros positivos es: %d\n\n", SUM);

    return 0;
}
