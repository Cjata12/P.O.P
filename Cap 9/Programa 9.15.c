#include <stdio.h>
#include <ctype.h>
/* Letras minusculas y mayusculas.
El programa, al recibir como dato un archivo formado por cadenas de caracteres, determina el numero 
de letras minusculas y mayusculas que hay en el archivo. */
void minymay(FILE *); /* Prototipo de función. */
void main(void)
{
FILE *ap;
if ((ap = fopen ("arc.txt", "r")) != NULL)
{
minymay(ap);
fclose(ap);
}
else
printf("No se puede abrir el archivo");
}
void minymay(FILE *ap1)
/* Esta función se utiliza para leer cadenas de caracteres de un archivo y contar el numero de letras 
minusculas y mayusculas que existen en el archivo. */
{
char cad[30];
int i, mi = 0, ma = 0;
while (!feof(ap1))
{
fgets(cad,30,ap1); 
/* Se utiliza la función fgets() para leer cadenas de caracteres del archivo. */
i=0;
while (cad[i] != '\0')
{
if (islower(cad[i]))
mi++;
else
if (isupper(cad[i]))
ma++;
i++;
}
}
printf("\n\nNumero de letras minusculas: %d", mi);
printf("\nNumero de letras mayusculas: %d", ma);
}