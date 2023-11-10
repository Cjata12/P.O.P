#include <stdio.h>

void main(void) {
    int I = 2, CAM = 1;
    long SSE = 0;

    while (I <= 2500) {
        SSE = SSE + I;
        printf("\t%d", I);

        if (CAM) {
            I += 5;
            CAM--;
        } else {
            I += 3;
            CAM++;
        }
    }

    printf("\nLa suma de la serie es: %ld", SSE);
}
