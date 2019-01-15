#include<stdio.h>

void printar_Matriz123(int tamanho){

	int cont1 = 0, cont2 = (tamanho - 1);
	int i,j;

	for(i = 0; i < tamanho; i++)
	{
		for(j = 0; j < tamanho; j++)
		{
			if(cont1 == j && cont1 != cont2){
				printf("1");
				
			}

			else{

				if(cont2 == j){
					printf("2");
					
				}

				else
				{
					printf("3");
				}//fim do else mais interior

			}//fim do else mais exterior

		}//fim do for(j = 0; j < tamanho; j++)

		printf("\n");
		cont2--;
		cont1++;

	}//fim do for(i = 0; i < tamanho; i++)

}//fim da função printar_Matriz123


int main(){

	int num;

	while( scanf("%d",&num) != EOF) 
		printar_Matriz123(num);

	return 0;
}
