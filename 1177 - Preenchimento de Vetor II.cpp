#include <stdio.h>

int main()
{
     int x[1000], entrada, saida=0;

    scanf("%d", &entrada);

     for (int i = 0; i < 1000 ; i++)
     {
          if (saida < entrada)
          {
               printf("N[%d] = %d\n",i,saida);
          } 
          else 
          {
               saida = 0;
               printf("N[%d] = %d\n",i,saida);
          }
          saida++;
     }
}
