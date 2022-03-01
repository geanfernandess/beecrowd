#include <stdio.h>

#define MAX 12

int main()
{
    int l, c, i=1, j=10;
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

    for (l=0; l<=4; l++)
    {
        for (c=i; c<=j; c++)
        {
            Soma = Soma + M[l][c];
        }
        i++;
        j--;
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
