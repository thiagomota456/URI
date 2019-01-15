#include<bits/stdc++.h>

using namespace std;

int main(){

	int segundos;
	int horas = 0, minutos = 0;

	scanf("%d", &segundos);

	//converção pra horas
	horas = segundos / 3600;
	segundos = segundos % 3600;

	//conversão pra minutos
	minutos = segundos / 60;
	segundos = segundos % 60;

	printf("%d:%d:%d\n", horas, minutos, segundos);
	

	return 0;
}
