#include <stdio.h>

int main()
{
    int h_inicio, h_fim, contador = 0;

    scanf("%d %d", &h_inicio, &h_fim);

    do {
        contador++;
        h_inicio++;

        if (h_inicio == 24) 
        {
            h_inicio = 0;
        }
        
    } while(h_inicio != h_fim);

    printf("O JOGO DUROU %d HORA(S)\n", contador);

    return 0;

}
