#include<stdio.h>

void PrencheVetorAutomatico(int *vetor, int tamanho)
{
	int i = 0;

	for( i = 0; i < tamanho; i++)
		vetor[i] = (i+1); 
}

void PrencheVetorUsuario(int *vetor, int tamanho)
{
	int i = 0;

	for( i = 0; i < tamanho; i++)
		scanf("%d", &vetor[i]);
}

void PrintarOsQueMorreram(int *Vetor1, int *Vetor2, int tamanho1, int tamanho2)
{
	int i,j;
	int contarprint = 0;
	int contMergulhadores = 0;

	for( i = 0; i < tamanho1; i++)
	{
		for( j = 0; j < tamanho2; j++)
		{

			if(Vetor1[i] == Vetor2[j])
			{
				contMergulhadores ++;
				break;
			}
			else
				if( (j+1) == tamanho2)
				{
					printf("%d",Vetor1[i]);
					contarprint ++;

					/*if( contarprint == (tamanho1 - tamanho2) )
						printf("\n");
					else*/
						printf(" ");
				}
		}

	}//end for( i = 0; i < tamnho1; i++)


	if(contMergulhadores == tamanho1)
		printf("*");

	printf("\n");
}


int main()
{
	int N, R;
	int *mergulharam = NULL;
	int *voltaram = NULL;

	while( scanf("%d", &N) != EOF)
	{
		scanf("%d", &R);

		mergulharam = malloc( sizeof(int) * N);
		voltaram = malloc( sizeof(int) * R);

		PrencheVetorAutomatico( mergulharam, N);
		PrencheVetorUsuario( voltaram, R);
		PrintarOsQueMorreram( mergulharam, voltaram, N, R);
		
	}//end while

}//end main
