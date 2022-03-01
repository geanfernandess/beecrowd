#include <stdio.h>

int main()
{
    int N, fib1=1, fib2=1, fib, i;

    scanf("%d", &N);

    if(N==1) printf("0");
    if(N==2) printf("0 1");
    if(N>=3) printf("0 1 1");

    if(N>2)
    {
        for(i=3; i<N; i++)
        {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
            printf(" %d", fib);
        }
    }
    printf("\n");
}
