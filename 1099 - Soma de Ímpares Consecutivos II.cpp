#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, x, y, z, k, i, soma;
    z = 0;
    k = 0;
    soma = 0;

    scanf("%d", &n);

    while (i < n)
    {
        scanf("%d %d", &x, &y);

        if (x == y || y == x + 1 || x == y +1)
        {
            printf("0\n");
        }
        else if ( x < y || x > y)
        {
            if (x > y)
            {
                z = x;
                x = y;
                y = z;
            }

            for (soma = 0; soma < n; soma++)
            {
                while(x < y - 1)
                {
                    x = x + 1;
                    if(x % 2 != 0)
                    {
                        k = k + x;
                    }
                }
            }

            printf("%d\n", k);
            k = 0;
        }
        i++;
    }
    return 0;
}
