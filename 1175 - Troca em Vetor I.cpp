#include <stdio.h>

#define MAX 20

int main()
{
       int n[MAX], i, entrada, aux, a=MAX;

       for (i=0; i<MAX; i++)
       {
              scanf("%d", &entrada);
              n[i] = entrada;
       }
       for (i=0; i<MAX; i++)
       {
              if (i<10)
              {
                     a--;
                     aux = n[i];
                     n[i] = n[a];
                     n[a] = aux;
                     aux = 0;
              }
              else break;
      }

       for (i=0; i<MAX; i++)
       {
              printf("N[%d] = %d\n",i, n[i]);
       }
}
