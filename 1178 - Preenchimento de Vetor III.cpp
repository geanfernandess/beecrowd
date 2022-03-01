#include <stdio.h>

#define MAX 100

int main()
{
     int i;
     double n[MAX], entrada, aux;

    scanf("%lf", &entrada);
    aux = entrada;

    for (i=0; i<MAX; i++)
    {
        n[i] = aux;
        printf("N[%d] = %.4lf\n",i, n[i]);
        aux = aux/2;
    }
}
