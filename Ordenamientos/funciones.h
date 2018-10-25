//
// Created by MrJua on 25/10/2018.
//

#ifndef ORDENAMIENTOS_FUNCIONES_H
#define ORDENAMIENTOS_FUNCIONES_H

#include <stdio.h>

void menu_i(){
    printf("1 >> Ordenamiento Burbuja.\n"
           "2 >> Ordenamiento por Seleccion.\n"
           "3 >> Ordenamiento por Inserccion.\n"
           "4 >> Ordenamiento QuickSort.\n"
           "5 >> Ordenamiento Shell.\n"
           "0 >> Salir.\n"
           "Ingresa una opcion : ");
}

void ordenaMBurbuja( int * const arreglo, const int tamanio )
{
    void intercambia( int *ptrElemento1, int *ptrElemento2 );
    int pasada;
    int j;
    for ( pasada = 0; pasada < tamanio - 1; pasada++ )
    {
        for ( j = 0; j < tamanio - 1; j++ )
        {
            if ( arreglo[ j ] > arreglo[ j + 1 ] )
            {
                intercambia( &arreglo[ j ], &arreglo[ j + 1 ] );
            }
        }
    }
}

void intercambia( int *ptrElemento1, int *ptrElemento2 ) {
    int almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}



#endif //ORDENAMIENTOS_FUNCIONES_H
