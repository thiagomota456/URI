#include<bits/stdc++.h>

#define MAX 46

using namespace std;

int fibonacci[MAX];//vetor pra guardar a sequencia de fibonacci

void printarFibonacci(int n){

	for(int i = 0; i < n; i++)
	{
		printf("%d", fibonacci[i]);
		
		if( (i+1) != n)
			printf(" ");
	}

	printf("\n");

}//end printarFibonacci

void geraFibonacci(int n){

	for(int i = 2; i < n ; i++)
	{
		fibonacci[i] = ( fibonacci[i - 1]  +  fibonacci[i - 2] );
	}

}//end geraFibonacci


int main(){

	//incicio todo o vetor com 0
	memset(fibonacci, 0, sizeof(fibonacci) );

	//2 prijmeiroas elementos da sequencia que sempre serão os mesmos
	fibonacci[0] = 0;
	fibonacci[1] = 1;

	int n;//n elementos da sequencia

	scanf("%d", &n);

	//função que gera a sequencia de ffibonacci pra n elementos
	geraFibonacci(n);
	
	//função que printa a sequencia no vetor fibonacci
	printarFibonacci(n);

	return 0;
}
