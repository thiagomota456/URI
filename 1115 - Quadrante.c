#include<stdio.h>

int main(){

	int x = 1 , y = 1;

	while(scanf("%d%d",&x ,&y ) && x && y)
	{
		if( ( x > 0 ) && ( y > 0 ) )
			printf("primeiro\n");

		if( ( x < 0 ) && ( y > 0 ) )
			printf("segundo\n");

		
		if( ( x < 0 ) && ( y < 0 ) )
			printf("terceiro\n");

		if( ( x > 0 ) && ( y < 0 ) )
			printf("quarto\n");

	}//end while(1)
	return 0;
}
