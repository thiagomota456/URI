#include<stdio.h>


long long int fatorial(long int N){

	long long int i, result = 1, n = N;

	for(i = 0; i < n ; i++, N--)
	{
		result = result * N;
	}

	return result;

}


int main(){

	long long int num1, num2; 

	while(	(	scanf("%ld%ld", &num1, &num2)	) != ( EOF )	){

		printf("%lld\n", ( fatorial(num1)+fatorial(num2) ) );
	
	}

	return 0;
}





