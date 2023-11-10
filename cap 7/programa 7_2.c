# include <stdio.h>
# include <ctype.h>
/* Funciones para el manejo de caracteres de la biblioteca ctype.h. */
void main(void)
{
char p1;
printf("\nIngrese un caracter para analizar si éste es un digito: ");
p1 = getchar();
if (isdigit (p1)) 
/* La función isdigit regresa 1 si p1 es un digito y 0 en caso contrario. */
printf("%c es un digito \n", p1);
else
printf("%c no es un digito \n", p1);
fflush(stdin);
printf("\nIngrese un caracter para examinar si éste es una letra: ");
p1 = getchar();
if (isalpha (p1)) 
/* La función isalpha regresa 1 si p1 es una letra y 0 en caso contrario. */
printf("%c es una letra \n", p1);
else
printf("%c no es una letra \n", p1);
fflush(stdin);
printf("\nIngrese un caracter para examinar si éste es una letra minuscula: ");
p1 = getchar();
if (isalpha (p1))
if (islower (p1)) 
/* La función islower regresa 1 si p1 es una letra minuscula y 0 en caso
➥contrario. 
La función isupper, por otra parte, regresa 1 si p1 es una letra mayuscula
➥y 0 en caso contrario. */
printf("%c es una letra minuscula \n", p1);
else
printf("%c no es una letra minuscula \n", p1);
else
printf("%c no es una letra \n", p1);
fflush(stdin);
printf("\nIngrese una letra para convertirla de mayuscula a minuscula: ");
p1 = getchar();
if (isalpha (p1))
if (isupper(p1))
printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1));
/* La función tolower convierte de mayuscula a minuscula. Si la
➥letra es minuscula no la modifica. La función toupper, por otra parte, 
➥convierte de minuscula a mayuscula. Si la letra es mayuscula no la 
➥modifica. */
else
printf("%c es una letra minuscula \n", p1);
else
printf("%c no es una letra \n", p1);
}
