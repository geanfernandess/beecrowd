#include <stdio.h>

int main()
{
   int x[10], entrada;

   scanf("%d", &entrada);

   printf("N[0] = %d\n",entrada);

   for (int i = 1; i < 10 ; i++){
      x[i] = entrada;
      entrada = entrada * 2;
      printf("N[%d] = %d\n",i,entrada);
   }
}
