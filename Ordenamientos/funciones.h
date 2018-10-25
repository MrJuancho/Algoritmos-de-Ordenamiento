#ifndef ORDENAMIENTOS_FUNCIONES_H
#define ORDENAMIENTOS_FUNCIONES_H

#include <stdio.h>
#include <time.h>
#include <windows.h>

double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

void menu_i(){
    printf("1 >> Ordenamiento Burbuja.\n"
           "2 >> Ordenamiento por Seleccion.\n"
           "3 >> Ordenamiento por Inserccion.\n"
           "4 >> Ordenamiento QuickSort.\n"
           "5 >> Ordenamiento Shell.\n"
           "0 >> Salir.\n"
           "Ingresa una opcion : ");
}

void metBur(int numeros[],int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(numeros[j]>numeros[j+1])
            {
                    int aux = numeros[j];
                    numeros[j] = numeros[j+1];
                    numeros[j+1] = aux;
            }
        }
    }
    printf("Tus numeros ordenados:\n");
    for (c=0;c<n;c++)
	{
		printf("%d\t",numeros[c]);
	}
	clock_t start = clock();
    printf("Tiempo transcurrido: %.16f", ((double)clock() - start) / CLOCKS_PER_SEC);

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
	clock_t start = clock();
    printf("Tiempo transcurrido: %.16f", ((double)clock() - start) / CLOCKS_PER_SEC);

}

#endif //ORDENAMIENTOS_FUNCIONES_H
