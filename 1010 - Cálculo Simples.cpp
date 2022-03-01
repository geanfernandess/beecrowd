#include <stdio.h>

int main() 
{
    int a, b, c, d;
    float e, f, valor1, valor2, total;

    scanf("%d %d %f", &a, &b, &e);
    scanf("%d %d %f", &c, &d, &f);

    valor1 = b*e;
    valor2 = d*f;
    total = valor1+valor2;
    
    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}
