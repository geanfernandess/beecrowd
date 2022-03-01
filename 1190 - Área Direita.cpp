#include <stdio.h>

#define MAX 12

int main()
{
    int l, c, i=5, j=6;
    char T;
    double M[MAX][MAX], Soma=0.0;

    scanf("%c", &T);

    for (l=0; l<MAX; l++)
    {
        for (c=0; c<MAX; c++)
        {
            scanf("%lf", &M[l][c]);
        }
    }

    for (c=7; c<=11; c++)
    {
        for (l=i; l<=j; l++)
        {
            Soma = Soma + M[l][c];
        }
        i--;
        j++;
    }

    if (T == 'S')
    {
        printf("%.1lf\n", Soma);
    } 
    
    else if (T == 'M')
    {
        printf("%.1lf\n", Soma/30.0);
    }
}
