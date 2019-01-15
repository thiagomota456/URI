//Uri 1017
#include<stdio.h>

#define KML 12

int main(){

	int horas;
	int velocidade_media;
	double distancia_percorrida;

	scanf("%d", &horas);
	scanf("%d", &velocidade_media);

	distancia_percorrida = velocidade_media * horas;

	printf("%.3lf\n", ( distancia_percorrida/KML ) );

	return 0;
}//end main
