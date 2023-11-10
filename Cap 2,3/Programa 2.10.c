#include <stdio.h>
#include <math.h>

/* Par, impar o nulo*/

void main(void)
{
int NUM;
printf("\nIngrese el numero: ");
scanf("%d", &NUM);
if(NUM==0 || NUM < 0){
    printf("\nNulo\n\n");
} else{
    if(pow(-1, NUM) > 0 ){
        printf("\nPar\n\n");
    } else{
        printf("\nImpar\n\n");
    }
}

 return 0;
}
