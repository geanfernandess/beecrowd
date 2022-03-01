#include<stdio.h>
#include<stdlib.h>

int main()
{
    float temp1, temp2, number;
    int i=0, X;

    while(1)
    {
        scanf("%f", &number);

        if(number>=0 && number<=10)
        {
            if(i==1)
            {
                temp2 = number;
                printf("media = %.2f\n", (temp1+temp2)/2);
                i=0;
                scanf("%d", &X);
                printf("novo calculo (1-sim 2-nao)\n");

                while(X<1 || X>2)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &X);
                    if(X==1)
                        break;
                    else if(X==2)
                        exit(0);
                }
                if(X==1)
                        continue;
                else if(X==2)
                    break;
            }
            else
            {
                temp1 = number;
                i++;
            }
        }
        else
            printf("nota invalida\n");
    }
    
    return 0;
}
