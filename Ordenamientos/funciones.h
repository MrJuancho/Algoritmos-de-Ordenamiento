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
           "0 >> Salir y Comparar.\n"
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

void insercion(int a[],int tam)
{

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
}

void shell(int a[],int n)
{
    int i,j,k,aux;
    k= n/2;
    while(k>0)
    {
        for(i=k;i<n;i++)
        {
            j=i;
            aux = a[i];
            while((j>=k)&&(a[j-k]>aux))
            {
                a[j]=a[j-k];
                j=j-k;
            }
            a[j]=aux;
        }
        k /=2;
    }
    printf("Tu arreglo ordenado es:\n");
    for(int q=0;q<n;q++)
    {
        printf("%d\t",a[q]);
    }
    printf("\n");
}


int particion(int * const arr, int const min, int const max)
{
    int pivot = arr[max];
    int i = (min - 1);

    for (int j = min; j <= max- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            intercambia(&arr[i], &arr[j]);
        }
    }
    intercambia(&arr[i + 1], &arr[max]);
    return (i + 1);
}

void quickSort(int * const arr, int min, int max)
{
    if (min < max)
    {
        int pi = particion(arr, min, max);
        quickSort(arr, min, pi - 1);
        quickSort(arr, pi + 1, max);
    }
}

void ordsel(double * x, double n){

    int minimo=0;
    int i,j;
    double cambio;
    for(i=0 ; i<n-1 ; i++)
    {
        minimo=i;
        for(j=i+1 ; j<n ; j++)
            if (x[minimo] > x[j])
                minimo=j;
        cambio=x[minimo];
        x[minimo]=x[i];
        x[i]=cambio;
    }}

#endif //ORDENAMIENTOS_FUNCIONES_H
