#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "funciones.h"

int main() {
    int *arreglo;
    double tiempos[5];
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
                        {
                            clock_t burbuja = clock();
                            metBur(arreglo, 10000);
                            tiempos[0] = ((double)clock() - burbuja)/CLOCKS_PER_SEC;
                            printf("Tiempo transcurrido: %.5f\n", tiempos[0]);
                            system("pause");
                            free(arreglo);
                            system("cls");
                        }
                        break;
                    case '2':
                        {
                            clock_t seleccion = clock();
                            ordenar_seleccion(arreglo, 10000);
                            tiempos[1] = ((double)clock() - seleccion) / CLOCKS_PER_SEC;
                            printf("Tiempo transcurrido: %.5f\n",tiempos[1]);
                            system("pause");
                            free(arreglo);
                            system("cls");
                        }
                        break;
                    case '3':
                        insercion(arreglo, 10000);
                        getch();
                        free(arreglo);
                        system("cls");
                        break;
                    case '4':
                        break;
                    case '5':
                        shell(arreglo, 10000);
                        getch();
                        free(arreglo);
                        system("cls");
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

