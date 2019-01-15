#include<stdio.h>

int main(){

	float x,y;

	scanf("%f",&x);
	scanf("%f",&y);


	//Primeiro Quadrante
	if ( (x > 0.0) && (y > 0.0) )
		printf("Q1\n");

	//Segundo Quadrante
	if ( (x < 0.0) && (y > 0.0) )
		printf("Q2\n");

	//Terceiro Quadrante
	if ( (x < 0.0) && (y < 0.0) )
		printf("Q3\n");

	//Quarto Quadrante
	if ( (x > 0.0) && (y < 0.0) )
		printf("Q4\n");
	
	//Origem
	if( (x == 0.0) && (y == 0.0))
		printf("Origem\n");

	//Sobre o eixo X
	if( (x == 0.0) && (y != 0.0) )
		printf("Eixo Y\n");

	//Sobre o eixo Y
	if( (x != 0.0) && (y == 0.0) )
		printf("Eixo X\n");

	return 0;	

}
