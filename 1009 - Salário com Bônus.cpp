#include <stdio.h>

int main() 
{
    char primeironome;
    double a,b;

    scanf("%s",&primeironome);
    scanf("%lf %lf",&a,&b);
    printf("TOTAL = R$ %.2f\n",(a+b*0.15));

    return 0;
}
