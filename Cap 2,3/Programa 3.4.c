#include <stdio.h>
#include <math.h>

int main(void) {
    int NUM;
    long CUA, SUC = 0;

    printf("\nIngrese un numero entero [0 para terminar]:\t");
    scanf("%d", &NUM);

    while (NUM != 0) {
        CUA = pow(NUM, 2);
        printf("%d al cuadrado es %ld\n", NUM, CUA);
        SUC += CUA;

        printf("Ingrese un número entero [0 para terminar]:\t");
        scanf("%d", &NUM);
    }

    printf("\nLa suma de los cuadrados es %ld\n\n", SUC);

    return 0;
}
