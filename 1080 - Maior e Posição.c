#include<stdio.h>

int Maior_Posicao[2];

void printar_vetor(int *vetor,int tamanho){

	int i = 0;

	for(i = 0; i < tamanho; i++)
		printf("%d\n",vetor[i]);

}

void MaiorPosicao(int valor, int posicao){

	
	
	if( posicao == 0)
	{
		Maior_Posicao[0] = valor;
		Maior_Posicao[1] = posicao;
	}

	else
	{
		if( Maior_Posicao[0] < valor)
		{
			Maior_Posicao[0] = valor;
			Maior_Posicao[1] = posicao +1 ;

		}//if(Maior_Posicao[0] < valor)

	}//else

}

void ler (int *vetor){

	int i;

	for( i=0; i<100; i++ )
	{
		scanf("%d",&vetor[i]);

		MaiorPosicao(vetor[i],i);
		//printf("%d\n",vetor[i]);
	}

}


int main(){

	int vetor[100];

	ler(vetor);

	printar_vetor(Maior_Posicao,2);

	return 0;
}
