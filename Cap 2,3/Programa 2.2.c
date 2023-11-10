#include <stdio.h>

/* Hacer un programa que cuando el precio sea menor a 1500
incrementar un 11% y mostrar el precio
*/

void main(void){

float PRE = 0.0;
float PRE_F = 0.0;

printf("\nIntroduzca el precio: ");
scanf("%f", &PRE);

if(PRE < 1500 && PRE > 0)
    {
    PRE_F = PRE * 1.18;
    printf("Su nuevo precio es: %7.2f\n\n", PRE_F);
    }
return 0;
}

