#include <stdio.h>
/* Escuela. 
El programa, al recibir como dato un archivo de acceso directo que contiene
➥información de los alumnos de una escuela, genera información estadística
➥importante. */
typedef struct /* Declaración de la estructura matcal. */
{
char materia[20];
int calificacion;
} matcal;
typedef struct /* Declaración de la estructura alumno. */
{
int matricula;
char nombre[20];
matcal cal[5]; 
/* Observa que un campo de esta estructura es a su vez estructura. */
} alumno;
void F1(FILE *);
void F2(FILE *); /* Prototipos de funciones. */
float F3(FILE *);
void main(void)
{
float pro;
FILE *ap;
if ((ap = fopen("esc.dat", "r")) != NULL)
{
F1(ap);
F2(ap);
pro = F3(ap);
printf("\n\nPROMEDIO GENERAL MATERIA 4: %f", pro);
}
else
printf("\nEl archivo no se puede abrir");
fclose(ap);
}
void F1(FILE *ap)
/* La función escribe la matrícula y el promedio general de cada alumno. */
{
alumno alu;
int j;
float sum, pro;
printf("\nMATRÍCULA y PROMEDIOS");
fread (&alu, sizeof(alumno), 1, ap);
while (!feof(ap))
{
printf("\nMatrícula: %d", alu.matricula);
sum = 0.0;
for (j=0; j<5; j++)
sum += alu.cal[j].calificacion;
pro = sum / 5;
printf("\tPromedio: %f", pro);
fread(&alu, sizeof(alumno), 1, ap);
}
}
void F2(FILE *ap)
/* La función escribe la matrícula de los alumnos cuya calificación en la
➥tercera materia es mayor a 9. */
{
alumno alu;
int j;
rewind(ap);
printf("\n\nALUMNOS CON CALIFICACIÓN > 9 EN MATERIA 3");
fread(&alu, sizeof(alumno), 1, ap);
while (!feof(ap))
{
if (alu.cal[2].calificacion > 9)
printf("\nMatrícula del alumno: %d", alu.matricula);
fread(&alu, sizeof(alumno), 1, ap);
}
}
float F3(FILE *ap)
/* Esta función obtiene el promedio general de la materia 4. */
{
alumno alu;
int i = 0;
float sum = 0, pro;
rewind(ap);
fread(&alu, sizeof(alumno), 1, ap);
while (!feof(ap))
{
i++;
sum += alu.cal[3].calificacion;
fread(&alu, sizeof(alumno), 1, ap);
}
pro = (float)sum / i;
return (pro);
}
