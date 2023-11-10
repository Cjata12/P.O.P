#include <stdio.h>
#include <stdlib.h>
/* Suma reales.
El programa lee cadenas de caracteres de un archivo, detecta aquellas que
comienzan con números, los suma y calcula el promedio de los mismos. */
void sumypro(FILE *); /* Prototipo de función. */
void main(void)
{
FILE *ap;
if ((ap=fopen("arc2.txt", "r")) != NULL)
{
sumypro(ap); 
/* Se llama a la función sumypro. Se pasa el archivo ap como parámetro. */
fclose(ap);
}
else
printf("No se puede abrir el archivo");
}
void sumypro(FILE *ap1)
/* Esta función lee cadenas de caracteres de un archivo, detecta aquellas
que comienzan con números, y obtiene la suma y el promedio de dichos
números. */
{
char cad[30];
int i = 0;
float sum = 0.0, r;
while (!feof (ap1))
{
fgets(cad,30,ap1); /* Se lee la cadena del archivo. */
r = atof(cad); 
/* Recuerda que la función atof convierte una cadena de caracteres que
contiene números reales a un valor de tipo double. Si la cadena comienza
con otro caracter o no contiene números, regresa 0 o el valor queda
indefinido. */
if (r)
{
i++;
sum += r;
}
}
printf("\nSuma: %.2f", sum);
if (i) /* Si el valor de i es distinto de cero, calcula el promedio. */
printf("\nPromedio: %.2f", sum/i);
}
