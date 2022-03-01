#include <stdio.h>

int main()
{
    int a, i = 1;

    while(1)
    {
        scanf("%d", &a);
        if(a != 0)
        {
            while(i <= a)
            {
                printf("%d%c", i, i == a ? '\n' : ' ');
                i++;
            }
            i = 1;
        }
        else break;
    }
}
