#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define S 5


int main()
{
   int sillasAula[S];
   int edadesAula[S];
   int maximo;
   int minimo;

    inicializarArray(sillasAula, S);
    cargarArray(sillasAula, edadesAula, S);
    maximo = buscarMaximo(sillasAula, S);
    mostrar("El maximo es: ", maximo);
    minimo = buscarMinimo(sillasAula, S);
    mostrar("El minimo es: ", minimo);
    ordenarArrayPorSilla(sillasAula,edadesAula, S);
    ordenarArrayPorEdad(sillasAula,edadesAula, S);
    mostrarArray(sillasAula,edadesAula, S);

   return 0;
}
