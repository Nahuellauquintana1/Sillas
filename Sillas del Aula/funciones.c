#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializarArray(int sillasAula[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        sillasAula[i] = -1;
    }
}

void cargarArray(int sillasAula[], int edad[], int tam)
{
    int vectorAux[] = {55,11,33,22,44};
    int vectorAuxEdades[]={18,19,81,91,98};
    int i;

    for(i = 0; i<tam; i++)
    {
        sillasAula[i] = vectorAux[i];
        edad[i] = vectorAuxEdades[i];
    }

}

int buscarMaximo(int sillasAula[],int tam)
{
    int i;
    float maximo;
    int flagmaximo = 0;
    for(i = 0; i < tam ; i++)
    {

        if(flagmaximo == 0 || sillasAula[i] > maximo)
        {
            maximo = sillasAula[i];
            flagmaximo = 1;
        }

    }
    return maximo;
}

int buscarMinimo(int sillasAula[],int tam)
{
    int i;
    float minimo;
    int flagMinimo = 0;
    for(i = 0; i < tam ; i++)
    {

        if(flagMinimo == 0 || sillasAula[i] < minimo)
        {
            minimo = sillasAula[i];
            flagMinimo = 1;
        }

    }
    return minimo;
}

void mostrar(char mensaje[], int cosa)
{
    printf("%s %d\n", mensaje, cosa);

}

void mostrarArray(int sillasAula[],int edades[], int tam)
{
    int i;
    for(i = 0; i<tam ; i++)
    {
      printf("%d - - - %d\n",sillasAula[i], edades[i]);
    }
}

void ordenarArrayPorSilla(int sillasAula[],int edad[], int tam)
{
    int i;
    int j;
    int aux;
    int auxEdad;
    for(i = 1; i < tam ; i++)
    {
        for(j = 0 ; j < tam-1 ; j++)
        {
            if(sillasAula[j]>sillasAula[j+1])
            {
                aux            = sillasAula[j];
                sillasAula[j]  = sillasAula[j+1];
                sillasAula[j+1]= aux;
                auxEdad        = edad[j];
                edad[j]        = edad[j+1];
                edad[j+1]      = auxEdad;
            }
        }
    }
}

int verificaLibre(int sillasAula[], int tam, int laSilla, int valorInicial)
{
    if(sillasAula[laSilla] == valorInicial)
    {
        return 1;
    }
    return 0;
}

int ocuparSilla(int sillasAula[], int tam, int laSilla,int legajo)
{
    int estaLibre;
    if(laSilla < tam)
    {
        estaLibre = verificaLibre(sillasAula, tam, laSilla, -1);
        if(estaLibre == 1)
        {
            sillasAula[laSilla] = legajo;
            return 1;
        }
            return -1;
    }
}

void ordenarArrayPorEdad(int sillasAula[],int edad[], int tam)
{
    int i;
    int j;
    int aux;
    int auxEdad;
    for(i = 1; i < tam ; i++)
    {
        for(j = 0 ; j < tam-1 ; j++)
        {
            if(edad[j]>edad[j+1])
            {
                aux            = sillasAula[j];
                sillasAula[j]  = sillasAula[j+1];
                sillasAula[j+1]= aux;
                auxEdad        = edad[j];
                edad[j]        = edad[j+1];
                edad[j+1]      = auxEdad;
            }
        }
    }
}

void MostrarViejos(int sillas[], int edad[], int tam)
{
    int i;
    int maxEdad;
    maxEdad = buscarMaximo(edad, tam);

    for(i = 0; i < tam; i++)
    {
        if(maxEdad == edad[i])
        {
            printf("El mas viejo es: %d y esta sentado en: %d", maxEdad,sillas[i]);
        }
    }
}
