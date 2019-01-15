#include<stdio.h>

int main()
{
	int Q, D, P;
	int paginas;
	
	
	while(1)
	{
		scanf("%d",&Q);
		if(Q == 0)
			break;

		scanf("%d",&D);

		scanf("%d",&P);

		paginas = (Q * D * P) / (P - Q);

		if(paginas == 1)
			printf("%d pagina\n", paginas);
		else
			printf("%d paginas\n", paginas);
		
	}

	return 0;
}//end main
