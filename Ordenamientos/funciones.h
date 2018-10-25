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
    clock_t start = clock();
    printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);

}

void intercambia( int *ptrElemento1, int *ptrElemento2 ) {
    int almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
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
	for (q=0;q<n;q++)
	{
		printf("%d\t",a[q]);
	}
	clock_t start = clock();
    printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);

}



#endif //ORDENAMIENTOS_FUNCIONES_H
