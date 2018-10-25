#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "funciones.h"

double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

int main()
{
    int *arreglo;
    int i;
    arreglo = (int*)malloc(10000* sizeof(int));
    srand(time(NULL));
    for(i=0;i<10000;i++)
    {
        arreglo[i] = 1+ rand() % ((150000+1)-1);
        printf("%d",arreglo[i]);
    }
    printf("\n");
    char m;
    do {
        menu_i();
        scanf("%c",&m);
        switch (m){
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '0':
                break;
            default:
                break;
        }
    }while(m != '0');
    clock_t start = clock();
    printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);

    return 0;
}
