#include <stdio.h>

int main(void) {
    int I, N;
    float LAN, SLA = 0;

    do {
        printf("\nIngrese el número de lanzamientos (entre 1 y 11):\t");
        scanf("%d", &N);
    } while (N < 1 || N > 11);

    for (I = 1; I <= N; I++) {
        printf("\nIngrese el lanzamiento %d: ", I);
        scanf("%f", &LAN);
        SLA += LAN;
    }

    SLA /= N;

    printf("\nEl promedio de lanzamientos es: %.2f", SLA);

    return 0;
}
