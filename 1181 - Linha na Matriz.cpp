#include <stdio.h>

#define MAX 12

int main()
{
    int L, l, c;
    char T;
    float M[MAX][MAX], Soma=0.0;

    scanf("%d %c", &L, &T);

    for (l=0; l<MAX; l++)
    {
        for (c=0; c<MAX; c++)
        {
            scanf("%f", &M[l][c]);
        }
    }

    for (c=0; c<MAX; c++)
    {
        Soma = Soma + M[L][c];
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
