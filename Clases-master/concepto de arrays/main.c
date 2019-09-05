#include <stdio.h>
#include <stdlib.h>
#define CANT 5

void showArray(int myArray[], int cantidad);
int obtenerMax(int myArray[], int cantidad);
void incializarArray(int myArray[], int cantidad);
void cargaSecuencialDeAraay(int myArray[], int cantidad,char mensaje[]);
float darPromedio(int myArray[], int cantidad);

int main()
{
    //char mensaje[];
    int numero;
    int listaDeNumeros[CANT];
    int mayor;

    int i;
    /*
    for(i=0;i<10;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &numero);
        listaDeNumeros[i]=numero;
        if(numero>mayor)
        {
            mayor=numero;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n", listaDeEdades[i]);
    }
    printf("\nel numero mayor es %d", mayor);
*/

    incializarArray(listaDeNumeros,CANT);
    cargaSecuencialDeAraay(listaDeNumeros,CANT,"\n");
    showArray(listaDeNumeros,CANT);
    mayor=obtenerMax(listaDeNumeros,CANT);
    darPromedio(listaDeNumeros,CANT);
    printf("\nel maximo es :%d", mayor);

    return 0;
}

void showArray(int myArray[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("%d\n",myArray[i]);
    }
}

int obtenerMax(int myArray[], int cantidad)
{
    int i;
    int maximo;
    for(i=0;i<cantidad;i++)
    {
        if(myArray[i]>maximo || i==0)
        {
            maximo=myArray[i];
        }
    }
    return maximo;
}

    void incializarArray(int myArray[], int cantidad)
    {
        int i;
        for(i=0;i<cantidad;i++)
        {
            myArray[i]=0;
        }
    }

    void cargaSecuencialDeAraay(int myArray[], int cantidad, char mensaje[])
    {
        int i;
        for(i=0;i<cantidad;i++)
        {
            printf(mensaje);
            scanf("%d",&myArray[i]);
        }
    }

    float darPromedio(int myArray[], int cantidad)
    {
        float promedio;
        int i;
        int suma;
        for(i=0;i<cantidad;i++)
        {
            suma= suma+myArray;
        }
        promedio=suma/cantidad;
        printf("el promedio es:%f", promedio);

        return promedio;
    }





    /*int numero;
    int listadoDeNumero[3];
    numero=33;
    listadoDeNumero[0]=66;

    int i;
    for(i=0;i<3;i++)
    {
        listadoDeNumero[i]=0;
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n", listadoDeNumero[i]);
    }
    */
