#include <stdio.h>
#include <math.h>

int main()
{
    int m, i;
    long long int valora, valorb, valorc, k, n;

    valora=0;
    valorb=1;

    scanf("%d", &m);
    i=1;

    while(i<=m)
    {
        scanf("%lld", &n);
        n= n+1;
        i++;

        for (k=0 ; k<n ; k++)
        {
            if (k<=1) valorc = k;
            else
            {
                valorc = valora + valorb;
                valora = valorb;
                valorb = valorc;
            }
        }

        printf("Fib(%lld) = %lld\n", n-1, valorc);
        valora = 0;
        valorb = 1;
    }
    
    return 0;
}
