#include <stdlib.h>
#include <stdio.h>
#include "Aritmetica.h"

int main()
{
    int resultado;
    resultado=factorial(5);
    printf("el factorial es: %d", resultado);

    return 0;
}






/*int main()
{
    int edad = pedirEntero("ingrese edad: ", 1,200);
    int legajo = pedirEntero("ingrese legajo: ",0,2000);
    int nota = pedirEntero("ingrese nota: ",1,10);
    int documento = pedirEntero("ingrese documento: ",0,100000000);

    printf("\n-%d\n\n-%d\n\n-%d\n\n-%d\n\n", edad, legajo, nota, documento);
    return 0;
}*/
