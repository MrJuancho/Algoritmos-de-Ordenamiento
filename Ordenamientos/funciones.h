#ifndef ORDENAMIENTOS_FUNCIONES_H
#define ORDENAMIENTOS_FUNCIONES_H

#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

void menu_i(){
    printf("1 >> Ordenamiento Burbuja.\n"
           "2 >> Ordenamiento por Seleccion.\n"
           "3 >> Ordenamiento por Inserccion.\n"
           "4 >> Ordenamiento QuickSort.\n"
           "5 >> Ordenamiento Shell.\n"
           "0 >> Salir.\n"
           "Ingresa una opcion : ");
}

void metBur(int * const arreglo,const int tamanio)
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
    int c;
    printf("Tus numeros ordenados:\n");
    for (c=0;c<tamanio;c++)
	{
		printf("%d\t",arreglo[c]);
	}
}

void ordenar_seleccion(int a[],int n)
{
    clock_t start = clock();
	int indiceMenor,i,j;
	int q=0;

	for(i=0;i<n-1;i++)
        {
		indiceMenor=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[indiceMenor])
			indiceMenor=j;
			if(i!=indiceMenor)
			{
				double aux=a[i];
				a[i]=a[indiceMenor];
				a[indiceMenor]=aux;
			}
        }
        printf("Tus numeros ordenados son:\n");
	for (q=0;q<n;q++)
	{
		printf("%d\t",a[q]);
	}
}

void intercambia( int *ptrElemento1, int *ptrElemento2 ) {
    int almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}

<<<<<<< HEAD
void insercion(int a[],int tam)
{
    clock_t start = clock();
    int i,j,k,val=0;
    for(i=1;i<tam;i++)
    {
        val = a[i];
        for(j=i-1;j>=0&&a[j]>val;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=val;
    }
    printf("Tus numeros ordenados son:\n");
    for(k=0;k<tam;k++)
    {
        printf("%d\t",a[k]);
    }printf("\n");
    printf("Tiempo transcurrido: %.8f", ((double)clock() - start) / CLOCKS_PER_SEC);
}

#endif //ORDENAMIENTOS_FUNCIONES_H
=======

#endif //ORDENAMIENTOS_FUNCIONES_H
>>>>>>> a9d5e20a4958eb70f53164b7944e866abcf7dd7e
