#include<stdio.h>

#define pi 3.14159

double circunferencia(double raio){

 return (pi * (raio*raio) );

}

void main(){

 double raio = 0;

 scanf("%lf",&raio);

 printf("A=%.4lf\n",circunferencia(raio) ); 

}
