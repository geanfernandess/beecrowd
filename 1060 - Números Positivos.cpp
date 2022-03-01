#include <stdio.h>

int main()
{
    int par = 0;
    int i = 0;
    float a;

    while(i < 6)
    {
        scanf("%f", &a);
        if(a > 0)
        {
            i++;
            par = par + 1;
        }
        else i++;
    }
    printf("%d valores positivos\n", par);
    return 0;
}
