#include<stdio.h>

void main(){

 char nome[100];

 double salario_fixo, montante_de_vendas;

 gets(nome);

 scanf(" %lf",&salario_fixo);
 scanf(" %lf",&montante_de_vendas);

 printf("TOTAL = R$ %.2lf\n", (salario_fixo + (montante_de_vendas * 0.15) ) );
 
}

