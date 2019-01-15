//URI 1018
#include<stdio.h>

int main(){

	int n, aux_n;
	int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, notas1 = 0;

	scanf("%d", &n);

	aux_n = n;
	
	//faz a divisão do valor nas notas
	while(n != 0)
	{
		
		if( n >= 100)
		{
			n = n - 100;
			notas100++;
			continue;

		}//end if( n > 100)
		
		if( n >= 50)
		{
			n-= 50;
			notas50++;
			continue;

		}//end if( n > 100)

		if( n >= 20)
		{
			n-= 20;
			notas20++;
			continue;

		}//end if( n > 100)

		if( n >= 10)
		{
			n-= 10;
			notas10++;
			continue;

		}//end if( n > 100)

		if( n >= 5)
		{
			n-= 5;
			notas5++;
			continue;

		}//end if( n > 100)

		if( n >= 2)
		{
			n-= 2;
			notas2++;
			continue;

		}//end if( n > 100)

		if( n >= 1)
		{
			n-= 1;
			notas1++;
			continue;

		}//end if( n > 100)

	//n = 0;

	}//end while(n != 0)

	printf("%d\n", aux_n);
	printf("%d nota(s) de R$ 100,00\n", notas100);
	printf("%d nota(s) de R$ 50,00\n", notas50);
	printf("%d nota(s) de R$ 20,00\n", notas20);
	printf("%d nota(s) de R$ 10,00\n", notas10);
	printf("%d nota(s) de R$ 5,00\n", notas5);
	printf("%d nota(s) de R$ 2,00\n", notas2);
	printf("%d nota(s) de R$ 1,00\n", notas1);

	return 0;

}//end main


