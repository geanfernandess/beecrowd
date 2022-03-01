#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, menor = 0, temp = 0, posicao = 0;
    int i = 0, k = 0;

    scanf("%d", &n);

    int vet[n];
    menor = 999999999;

    for ( k = 0; k < n; k++)
    {
        scanf("%d", &vet[k]);
        temp = vet[k];

        if (temp < menor)
        {
            menor = temp;
            posicao = k;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    return 0;
}
