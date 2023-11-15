#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Registro
{
    int numerosAleatorios[3];
    int ano, mes, dia, hora, minuto, segundo;
    int cantidadApostada;
    int montoGanado;
};

void imprimirNumerosConTiempo(struct Registro *registros, int numTiradas);
void tirar(struct Registro **registros, int *numTiradas);
void realizarJugada(struct Registro *registro);
void jugar(struct Registro *registro, int tipoJuego);
void imprimirDetallesJugada(struct Registro *registro);
/*se agregan funciones las cuales son parte del apartado de la jugada del programa
como realizar jugada, jugar, y los detalles de la jugada*/

int main()
{
    struct Registro *registros = NULL;
    int numTiradas = 0;

    srand((unsigned int)time(NULL));

    int opcion;

    do
    {
        printf("\n0. Salir \n");
        printf("1. Realizar tirada \n");
        printf("2. Imprimir tiradas\n");
        printf("3. Jugar\n");
        printf("\nElige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 0:
            printf("\nHas elegido salir. Adiós!\n");
            break;
        case 1:
            printf("\nHas elegido realizar una tirada.\n");
            tirar(&registros, &numTiradas);
            break;
        case 2:
            printf("\nHas elegido imprimir tiradas.\n\n");
            imprimirNumerosConTiempo(registros, numTiradas);
            break;
        case 3:
            printf("\nHas elegido jugar.\n");
            realizarJugada(&registros[numTiradas - 1]);

            break;
        default:
            printf("\nOpción no válida. Por favor, elige una opción del 1 al 3.\n");
            break;
        }

    } while (opcion != 0);

    free(registros);

    return 0;
}

void imprimirNumerosConTiempo(struct Registro *registros, int numTiradas)
{
    for (int i = 0; i < numTiradas; i++)
    {
        printf("Tirada %d - N1: %d %d %d\tFecha y hora: %d-%02d-%02d %02d:%02d:%02d\n",
               i + 1, registros[i].numerosAleatorios[0], registros[i].numerosAleatorios[1], registros[i].numerosAleatorios[2],
               registros[i].ano, registros[i].mes, registros[i].dia,
               registros[i].hora, registros[i].minuto, registros[i].segundo);
    }
}

void tirar(struct Registro **registros, int *numTiradas)
{
    time_t tiempoActual;
    time(&tiempoActual);

    struct tm *infoTiempo = localtime(&tiempoActual);

    (*numTiradas)++;

    *registros = realloc(*registros, sizeof(struct Registro) * (*numTiradas));

    for (int i = 0; i < 3; i++)
    {
        (*registros)[*numTiradas - 1].numerosAleatorios[i] = rand() % 101;
    }

    (*registros)[*numTiradas - 1].ano = infoTiempo->tm_year + 1900;
    (*registros)[*numTiradas - 1].mes = infoTiempo->tm_mon + 1;
    (*registros)[*numTiradas - 1].dia = infoTiempo->tm_mday;
    (*registros)[*numTiradas - 1].hora = infoTiempo->tm_hour;
    (*registros)[*numTiradas - 1].minuto = infoTiempo->tm_min;
    (*registros)[*numTiradas - 1].segundo = infoTiempo->tm_sec;

    printf("Tirada realizada y almacenada.\n");
}
void realizarJugada(struct Registro *registro)
/*Esta parte le muestra al usuria el menu de elejir que tipo de juego desea*/
{
    int tipoJuego;
    printf("Elige el tipo de juego:\n");
    printf("1. Pale\n");
    printf("2. Tripleta\n");
    printf("3. Jugada Numero\n");
    printf("Ingrese el numero correspondiente al tipo de juego: ");
    scanf("%d", &tipoJuego);


    printf("Ingrese la cantidad que desea apostar: $");
    scanf("%d", &registro->cantidadApostada);


    jugar(registro, tipoJuego);
}

void jugar(struct Registro *registro, int tipoJuego)
/*esta funcion dirige el flujo del juego en función del tipo de juego seleccionado por el usuario.*/
{
    switch (tipoJuego)
   /* este switch el tipo de juego seleccionado por el usuario pale, tripleta o número*/
    {
    case 1:
        jugarPale(registro);
        break;
    case 2:
        jugarTripleta(registro);
        break;
    case 3:
        jugarNumero(registro);
        break;
    default:
        /*Si el tipoJuego no es el mismo con ninguno de los casos anteriores,
         imprime un mensaje indicando que la opción de juego no esta*/

        printf("Opción de juego no válida.\n");
        break;
    }
}

void jugarPale(struct Registro *registro)
{
    int numerosPale[2];


    numerosPale[0] = rand() % 101;
    numerosPale[1] = rand() % 101;

    printf("Ingrese el primer numero para el Pale: ");
    scanf("%d", &numerosPale[0]);

    printf("Ingrese el segundo numero para el Pale: ");
    scanf("%d", &numerosPale[1]);

    int coincidencias = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (registro->numerosAleatorios[i] == numerosPale[j])
            {
                coincidencias++;
            }
        }
    }


    if (coincidencias >= 2)
    {
        registro->montoGanado = registro->cantidadApostada * 3;
        printf("¡Felicidades! Has ganado $%d\n", registro->montoGanado);
    }
    else
    {
        registro->montoGanado = 0;
        printf("Lo siento, no has ganado esta vez.\n");
    }
}

void jugarTripleta(struct Registro *registro)
{

    for (int i = 0; i < 3; i++)
    {
        registro->numerosAleatorios[i] = rand() % 101;
    }


    if (registro->numerosAleatorios[0] == registro->numerosAleatorios[1] &&
        registro->numerosAleatorios[1] == registro->numerosAleatorios[2])
    {
        registro->montoGanado = registro->cantidadApostada * 5;
        printf("¡Felicidades! Has ganado $%d\n", registro->montoGanado);
    }
    else
    {
        registro->montoGanado = 0;
        printf("Lo siento, no has ganado esta vez.\n");
    }
}

void jugarNumero(struct Registro *registro)
{
    int numeroElegido;


    printf("Ingrese el numero para la Jugada Numero: ");
    scanf("%d", &numeroElegido);


    int coincidencias = 0;
    for (int i = 0; i < 3; i++)
    {
        if (registro->numerosAleatorios[i] == numeroElegido)
        {
            coincidencias++;
        }
    }


    if (coincidencias > 0)
    {
        registro->montoGanado = registro->cantidadApostada * 2;
        printf("¡Felicidades! Has ganado $%d\n", registro->montoGanado);
    }
    else
    {
        registro->montoGanado = 0;
        printf("Lo siento, no has ganado esta vez.\n");
    }
}

