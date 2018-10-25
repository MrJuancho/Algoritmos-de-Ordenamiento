#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

int main()
{
    int *arreglo;
    arreglo = (int*)malloc(10000* sizeof(int));

    clock_t start = clock();
    printf("Hola cara de bola te apesta la cola\n");
    printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);

    return 0;
}
