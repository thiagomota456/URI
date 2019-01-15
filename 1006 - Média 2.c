#include<stdio.h>

void main(){

 double A, B , C;
 double MEDIA;

 //Recbe notas
 scanf("%lf",&A);
 scanf("%lf",&B);
 scanf("%lf",&C);

 //Calcula media
 MEDIA = ( (A * 2) + (B * 3) + (C * 5) )/10 ;

 //Imprimi
 printf("MEDIA = %.1lf\n",MEDIA);

}
