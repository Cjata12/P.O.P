#include <stdio.h>

/* Asistentes
El programa al recibir como datos la matricula, carrera, el semestre y el promedio
de un alumno de una universidad privada, determina si este puede ser
asistente de su carrera*/

void main(void){

int MAT, CAR, SEM;
float PRO;

printf("\nIngrese la matricula: ");
scanf("%d", &MAT);

printf("Ingrese la carrera: (1 - Industrial, 2 - Telematica, 3 - Computacion, 4 - Mecanica): ");
scanf("%d", &CAR);

printf("Ingrese su semestre: ");
scanf("%d", &SEM);

printf("Ingrese su promedio: ");
scanf("%f", &PRO);

switch(CAR)
{
    case 1: if(SEM >= 6 && PRO >= 8.5)
        printf("Matricula: %d, Carrera: %d, Promedio: %f\n\n", MAT, CAR, PRO);
        break;
    case 2: if(SEM >= 5 && PRO >= 9.0)
        printf("Matricula: %d, Carrera: %d, Promedio: %f\n\n", MAT, CAR, PRO);
        break;
    case 3: if(SEM >= 6 && PRO >= 8.8)
        printf("Matricula: %d, Carrera: %d, Promedio: %f\n\n", MAT, CAR, PRO);
        break;
    case 4: if(SEM >= 7 && PRO >= 9.0)
        printf("Matricula: %d, Carrera: %d, Promedio: %f\n\n", MAT, CAR, PRO);
        break;
        default: printf("\nError en la carrera, intentar nuevamente\n\n");

}


return 0;
}
