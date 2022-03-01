#include <stdio.h>

#define MAX 12

int main()
{
    int entrada, l, c;
    char T;
    float M[MAX][MAX], Soma=0.0;

    scanf("%d %c", &entrada, &T);

    for (l=0; l<MAX; l++)
    {
        for (c=0; c<MAX; c++)
        {
            scanf("%f", &M[l][c]);
        }
    }

    for (l=0; l<MAX; l++)
    {
        Soma = Soma + M[l][entrada];
    }

    if (T == 'S')
    {
        printf("%.1f\n", Soma);
    } 
    else 
    {
        printf("%.1f\n", Soma/MAX);
    }
}
