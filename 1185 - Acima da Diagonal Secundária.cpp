#include <stdio.h>

#define MAX 12

int main()
{
    int l, c, i=10;
    char T;
    float M[MAX][MAX], Soma=0.0;

    scanf("%c", &T);

    for (l=0; l<MAX; l++)
    {
        for (c=0; c<MAX; c++)
        {
            scanf("%f", &M[l][c]);
        }
    }

    for (c=0; c<=10; c++)
    {
        for (l=0; l<=i; l++)
        {
            Soma = Soma + M[c][l];
        }
        i--;
    }

    if (T == 'S')
    {
        printf("%.1f\n", Soma);
    } 
    else if (T == 'M')
    {
        printf("%.1f\n", Soma/66.0);
    }
}
