#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x, total=0;
    int par[5], impar[5], p = 0, im = 0;

    for (int i = 0; i < 15; i++)
    {

        scanf("%d", &x);

        if (x%2 == 0)
        {
            par[p] = x;
            p++;
        }

        if (x%2 != 0)
        {
            impar[im] = x;
            im++;
        }

        if (p == 5)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }
            p = 0;
        }

        if (im == 5)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            im = 0;
        }
    }

    for(int i=0; i<im; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(int j=0; j<p; j++)
    {
        printf("par[%d] = %d\n", j, par[j]);
    }
}

