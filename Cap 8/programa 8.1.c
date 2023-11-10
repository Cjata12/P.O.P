#include <stdio.h>
#include <string.h>

struct alumno

{
    int matricula ;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];

    };
    void main(void)
{
    struct alumno a1 = {120, "maria" , "contabilida", 8.9, "queretaro"}, a2, a3;

    char nom[20], car[20], dir[20];
    int mat;
    float pro;

    printf("\ningrese la matricula del alumno 2:");
    scanf("%d", &a2.matricula);
    fflush(stdin);
     printf("\ningrese el nombre del alumno 2:");
    gets(a2.nombre);
     printf("\ningrese la carrera del alumno 2:");
    gets(a2.carrera);
     printf("\ningrese el promedio del alumno 2:");
     scanf("%f", &a2.promedio);
    fflush(stdin);
     printf("\ningrese la direccion del alumno 2:");
    gets(a2.direccion);

    printf("\ningrese la matricula del alumno 3:");
    scanf("%d", &mat);
    a3.matricula= mat;
    fflush(stdin);
    printf("\ningrese la nombre del alumno 3:");
    gets(nom);


    strcpy(a3.nombre, nom);

      printf("\ningrese la carrera del alumno 3:");
    gets(car);
    strcpy(a3.carrera, car);
     printf("\ningrese el promedio del alumno 3:");
     scanf("%f", &pro);
     a3.promedio= pro ;
    fflush(stdin);
     printf("\ningrese la direccion del alumno 3:");
    gets(dir);
    strcpy(a3.direccion, dir);


    printf("\nDatos del alumno 1\n");
    printf ("%d\n" , a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);


      printf ("\nDatos del alumno 2\n");
    printf ("%d\n" , a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);

    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);
    }
