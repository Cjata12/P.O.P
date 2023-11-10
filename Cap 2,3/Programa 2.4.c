#include <stdio.h>

/* Hacer un programa que cuando el precio sea mayor a 1500
darle un descuento de 11%
*/

int main(){

float PRE = 0.0;
float PRE_F = 0.0;

printf("\nIntroduzca el precio: ");
scanf("%f", &PRE);


if(PRE < 1500 && PRE > 0){
    PRE_F = PRE * 1.11;

}else{
    PRE_F = 1.08 * PRE;
}
printf("Su nuevo precio es: %7.2f\n\n", PRE_F);
return 0;
}
