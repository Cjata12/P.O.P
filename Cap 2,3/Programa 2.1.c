#include <stdio.h>1
#include <stdlib.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
➥universitario, escribe aprobado si su promedio es mayor o igual a 6.*/

void main()
{

float PRO;
printf("\nIntroduzca el promedio del alumno: ");
scanf("%f", &PRO);

    if(PRO >= 6 && PRO < 11)
    {
        printf("\nEl estudiante ha sido aprobado!\n\n");

    }

return 0;
}
