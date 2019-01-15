#include<stdio.h>
#include<math.h>

#define num 3

int main()
{
    int vetor[num];

    int i;
    int maior, aux;

    //prencher
    for(i = 0; i < num; i++)
        scanf("%d", &vetor[i]);

    //fazer comparações
    for(i = 0; i < num; i++)
    {
        aux = ( ( vetor[i] + vetor[i + 1] + abs(vetor[i] - vetor[i + 1]) ) / 2 );

        if( i  == 0 )
            maior = aux;
        else
            if(maior < aux )
                maior = aux;
    }

    printf("%d eh o maior\n", maior);
    return 0;
}

