#include <stdio.h>

int main()
{
    int i = 0, x, y;

    while(i == 0)
    {
        scanf("%d %d", &x, &y);

        if(x > y)
        {
            printf("Decrescente\n");
        }
        else 
        {
            if(x < y)
            {
                printf("Crescente\n");
            }
        }
        if(x == y)
        {
            i = 1;
        }
    }
}
