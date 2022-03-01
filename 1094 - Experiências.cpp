#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, quantia, total;
    double r, s, c;
    char tipo, x;
    double p, q, v;
    int aux=0;

    total = 0;
    r = 0;
    s = 0;
    c = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %c", &quantia, &tipo);

        if (tipo == 'C')
        {
            c = c + quantia;
        }

        if (tipo == 'R')
        {
            r = r + quantia;
        }

        if (tipo == 'S')
        {
            s = s + quantia;
        }
    }
    
    printf("Total: %.0lf cobaias\n", c+r+s);
    printf("Total de coelhos: %.0lf\n", c);
    printf("Total de ratos: %.0lf\n", r);
    printf("Total de sapos: %.0lf\n", s);
    printf("Percentual de coelhos: %.2lf %\n", c*100/(c+r+s));
    printf("Percentual de ratos: %.2lf %\n", r*100/(c+r+s));
    printf("Percentual de sapos: %.2lf %\n", s*100/(c+r+s));

    return 0;
}
