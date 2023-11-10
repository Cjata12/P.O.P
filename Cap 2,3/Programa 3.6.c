#include <stdio.h>

int main(void) {
    int I = 0;
    float SAL, PRO, NOM = 0;

    printf("\nIngrese el salario del profesor [0 para terminar]:\t");
    scanf("%f", &SAL);

    while (SAL != 0) {
        NOM += SAL;
        I++;

        printf("Ingrese el salario del profesor [0 para terminar]:\t");
        scanf("%f", &SAL);
    }

    PRO = NOM / I;

    printf("\nNomina: %.2f \t Promedio de salarios: %.2f\n\n", NOM, PRO);

    return 0;
}

