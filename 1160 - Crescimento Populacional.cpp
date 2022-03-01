#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int T, PA, PB, resultado;
    double G1, G2;
    int i = 0;

    scanf("%d", &T);

    for ( i = 0; i < T; i++)
    {
        scanf("%d%d%lf%lf", &PA, &PB, &G1, &G2);

        while(PA <= PB)
        {
            PA *= (G1 /100) + 1;
            PB *= (G2 /100) + 1;

            resultado++;

            if (resultado > 100)
            {
                break;
            }
        }

       if (resultado <= 100)
        {
            printf("%d anos.\n", resultado);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }
       PA = 0;
       PB = 0;
       resultado = 0;
    }
    return 0;
}
