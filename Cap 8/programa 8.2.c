#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno

{
    int matricula ;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];

    };
    void lectura(struct alumno *);

    void main(void)

{
    struct alumno a0= {120, "Maria", "contabilidad", 8.9, "newyork"};
    struct alumno *a3, *a4, *a5, a6;

    a3= &a0;
    a4 = &a6;
    printf("\nIngrese la matrícula del alumno 4: ");
    scanf("%d", &(*a4).matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 4: ");
    gets(a4->nombre);
    printf("Ingrese la carrera del alumno 4: ");
    gets((*a4).carrera);
    printf("Ingrese promedio del alumno 4: ");
    scanf("%f", &a4->promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno 4: ");
    gets(a4->direccion);
    a5 =  &a6;
     /* En este caso se pasa el apuntador de tipo estructura alumno
a5 a la función Lectura. */
     /* En este caso se pasa la variable de tipo estructura alumno a6,
➥a la función Lectura. Observa que en este caso debemos utilizar el operador de
➥dirección para preceder a la variable. */
    printf("\nDatos del alumno 3\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);

     printf("\nDatos del alumno 4\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);

     printf("\nDatos del alumno 5\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);

     printf("\nDatos del alumno 6\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);

    }

        void lectura(struct alumno *a)

{
  printf("\nIngrese la matrícula del alumno: ");
scanf("%d", &(*a).matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno: ");
gets(a->nombre);
fflush(stdin);
printf("Ingrese la carrera del alumno: ");
gets((*a).carrera);
printf("Ingrese el promedio del alumno: ");
scanf("%f", &a->promedio);
fflush(stdin);
printf("Ingrese la dirección del alumno: ");
gets(a->direccion);

}
