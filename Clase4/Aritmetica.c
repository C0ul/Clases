#include "Aritmetica.h"

int factorial(int numero)
{
    int resultado;
    if(numero == 0)
    {
        resultado = 1;
    }else
    {
        resultado = numero * factorial(numero-1);
    }
    return resultado;
}




/*int pedirEntero(char msj[], int min, int max)
{
    int unNumero;
    printf("%s", msj);
    scanf("%d", &unNumero);
    while(unNumero<min || unNumero>max)
    {
        printf("ERROR \a %s", msj);
        scanf("%d", &unNumero);
    }
    return unNumero;
}*/
