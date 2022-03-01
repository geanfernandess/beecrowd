#include<stdio.h>
#include<stdlib.h>

int main()
{
    int positivo_x, positivo_y;
    int tamanho;
    int *vet;

    scanf("%d %d", &positivo_x, &positivo_y);
    tamanho = abs(positivo_x - positivo_y);

    vet = (int *) malloc(sizeof(int)*tamanho);

    if(positivo_x > positivo_y)
    {
        for(int i = 0; i<tamanho; i++)
        {
            positivo_y++;
            if(positivo_y % 5 == 2 || positivo_y % 5 ==  3)
            {
                vet[i]   =   positivo_y;
            }
            else
            {
                vet[i]   =   1;
            }
        }
    }

    if(positivo_y > positivo_x)
    {
        for(int i = 0; i<tamanho; i++)
        {
            positivo_x++;
            if(positivo_x % 5 == 2 || positivo_x % 5 ==  3)
            {
                vet[i]   =   positivo_x;
            }
            else
            {
                vet[i]   =   1;
            }
        }
    }

   for(int i = 0; i<tamanho-1; i++)
   {
        if(vet[i] != 1)
        {
            printf("%d\n", vet[i]);
        }
    }
}
