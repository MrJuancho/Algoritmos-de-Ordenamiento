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

int main() {
    int *arreglo;
    int i;
    char m;

    do {
        arreglo = (int *) malloc(10000 * sizeof(int));
        srand(time(NULL));
        printf("Tu arreglo sin ordenar es el siguiente: \n");
        for (i = 0; i < 10000; i++) {
            arreglo[i] = 1 + rand() % ((1558941 + 1) - 1);
            printf("%d\t", arreglo[i]);
        }
        printf("\n\n");
        menu_i();
                scanf(" %c", &m);
                switch (m) {
                    case '1':
                        metBur(arreglo, 10000);
                        getch();
                        free(arreglo);
                        system("cls");
                        break;
                    case '2':
                        ordenar_seleccion(arreglo, 10000);
                        getch();
                        free(arreglo);
                        system("cls");
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
        }
        while (m != '0');

        return 0;
    }

