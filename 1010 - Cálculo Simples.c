#include <stdio.h>

 int main(){

 int peca1,numpeca1,peca2,numpeca2;
 float valor1,valor2,valorpeca1,valorpeca2,valortot;

 scanf ("%d%d%f", &peca1, &numpeca1, &valor1);
 scanf ("%d%d%f", &peca2, &numpeca2, &valor2);

 valorpeca1 = valor1*numpeca1;
 valorpeca2 = valor2*numpeca2;
 valortot = valorpeca1+valorpeca2;

 printf ("VALOR A PAGAR: R$ %.2f\n",valortot);

 return 0;

 }

